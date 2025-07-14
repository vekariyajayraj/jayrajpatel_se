
import React, { useState, useEffect } from 'react';

// App Component
const App = () => {
  return (
    <Router>
      <Navbar />
      <Routes />
    </Router>
  );
};

// Router Component
const Router = ({ children }) => {
  const [currentPath, setCurrentPath] = useState(window.location.hash.slice(1) || '/');

  useEffect(() => {
    const handleHashChange = () => {
      setCurrentPath(window.location.hash.slice(1));
    };
    window.addEventListener('hashchange', handleHashChange);
    return () => window.removeEventListener('hashchange', handleHashChange);
  }, []);

  return (
    <div className="min-h-screen flex flex-col">
      {React.Children.map(children, child =>
        React.cloneElement(child, { currentPath, setCurrentPath })
      )}
    </div>
  );
};

// Routes Component
const Routes = ({ currentPath }) => {
  switch (currentPath) {
    case '/':
      return <HomePage />;
    case '/destinations':
      return <DestinationsPage />;
    case '/stay':
      return <StayPage />;
    case '/travel':
      return <TravelPage />;
    case '/login':
      return <LoginPage />;
    case '/summary':
      return <SummaryPage />;
    default:
      return <HomePage />;
  }
};

// Navbar Component
const Navbar = ({ currentPath, setCurrentPath }) => {
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  useEffect(() => {
    const user = localStorage.getItem('user');
    if (user) setIsLoggedIn(true);
  }, []);

  const handleLogout = () => {
    localStorage.removeItem('user');
    setIsLoggedIn(false);
    setCurrentPath('/');
  };

  return (
    <nav className="bg-white shadow-md fixed w-full z-10 top-0">
      <div className="container mx-auto px-4 py-3 flex justify-between items-center">
        <div className="text-xl font-bold text-indigo-600">Tours & Travels</div>
        <ul className="flex space-x-6">
          <li><a href="#/" className="hover:text-indigo-600">Home</a></li>
          <li><a href="#/destinations" className="hover:text-indigo-600">Destinations</a></li>
          <li><a href="#/stay" className="hover:text-indigo-600">Stay</a></li>
          <li><a href="#/travel" className="hover:text-indigo-600">Vehicle Travel</a></li>
          {isLoggedIn ? (
            <li><button onClick={handleLogout} className="text-red-500 hover:underline">Logout</button></li>
          ) : (
            <li><a href="#/login" className="hover:text-indigo-600">Login</a></li>
          )}
        </ul>
      </div>
    </nav>
  );
};

// HomePage Component
const HomePage = () => {
  const popularPlaces = [
    { id: 1, name: "Goa Beaches", image: "https://placehold.co/400x250?text=Goa+Beaches", description: "Relax on the beautiful beaches of Goa." },
    { id: 2, name: "Manali Snow", image: "https://placehold.co/400x250?text=Manali+Snow", description: "Experience snowfall in Manali." },
    { id: 3, name: "Kerala Backwaters", image: "https://placehold.co/400x250?text=Kerala+Backwaters", description: "Enjoy serene backwater cruises." },
    { id: 4, name: "Jaipur Forts", image: "https://placehold.co/400x250?text=Jaipur+Forts", description: "Explore majestic forts in Jaipur." },
  ];

  return (
    <main className="pt-16">
      <section className="relative h-96 bg-cover bg-center" style={{ backgroundImage: `url('https://placehold.co/1200x400?text=Beautiful+Travels')` }}>
        <div className="absolute inset-0 bg-black bg-opacity-50 flex items-center justify-center">
          <h1 className="text-white text-4xl font-bold text-center">Discover the World with Us</h1>
        </div>
      </section>

      <section className="py-12 bg-gray-100">
        <div className="container mx-auto px-4">
          <h2 className="text-3xl font-bold mb-8 text-center">Guidelines for a Perfect Trip</h2>
          <div className="grid grid-cols-1 md:grid-cols-3 gap-6">
            <div className="bg-white p-6 rounded shadow text-center">
              <h3 className="text-xl font-semibold mb-2">Plan Ahead</h3>
              <p>Book your trip early to get the best deals and availability.</p>
            </div>
            <div className="bg-white p-6 rounded shadow text-center">
              <h3 className="text-xl font-semibold mb-2">Pack Smart</h3>
              <p>Carry only essentials and check weather before packing clothes.</p>
            </div>
            <div className="bg-white p-6 rounded shadow text-center">
              <h3 className="text-xl font-semibold mb-2">Stay Safe</h3>
              <p>Follow local guidelines and keep emergency numbers handy.</p>
            </div>
          </div>
        </div>
      </section>

      <section className="py-12">
        <div className="container mx-auto px-4">
          <h2 className="text-3xl font-bold mb-8 text-center">Popular Destinations</h2>
          <div className="grid grid-cols-1 sm:grid-cols-2 lg:grid-cols-4 gap-6">
            {popularPlaces.map(place => (
              <PlaceCard key={place.id} place={place} />
            ))}
          </div>
        </div>
      </section>
    </main>
  );
};

// PlaceCard Component
const PlaceCard = ({ place }) => {
  const [isLoggedIn] = useState(!!localStorage.getItem('user'));

  const handleBooking = () => {
    if (!isLoggedIn) {
      window.location.hash = '#/login';
    } else {
      alert(`Booking ${place.name}...`);
    }
  };

  return (
    <div className="bg-white rounded shadow overflow-hidden transform transition duration-300 hover:scale-105">
      <img src={place.image} alt={place.name} className="w-full h-40 object-cover" />
      <div className="p-4">
        <h3 className="text-xl font-semibold mb-2">{place.name}</h3>
        <p className="text-gray-600 mb-4">{place.description}</p>
        <button onClick={handleBooking} className="w-full bg-indigo-600 text-white py-2 rounded hover:bg-indigo-700 transition">
          Book Now
        </button>
      </div>
    </div>
  );
};

// DestinationsPage Component
const DestinationsPage = () => {
  const [selectedState, setSelectedState] = useState('');
  const [packages, setPackages] = useState([]);
  const states = ['Rajasthan', 'Himachal Pradesh', 'Kerala', 'Maharashtra'];

  const fetchPackages = (state) => {
    const mockPackages = {
      'Rajasthan': [
        { id: 1, name: 'Jaipur Heritage Tour', days: '5 Days' },
        { id: 2, name: 'Jaisalmer Desert Safari', days: '3 Days' },
      ],
      'Himachal Pradesh': [
        { id: 3, name: 'Shimla Retreat', days: '4 Days' },
        { id: 4, name: 'Manali Adventure', days: '6 Days' },
      ],
      'Kerala': [
        { id: 5, name: 'Kerala Backwaters Experience', days: '5 Days' },
        { id: 6, name: 'Munnar Tea Plantation Tour', days: '4 Days' },
      ],
      'Maharashtra': [
        { id: 7, name: 'Mahabaleshwar Weekend Getaway', days: '3 Days' },
        { id: 8, name: 'Lonavala Hill Station', days: '2 Days' },
      ]
    };
    setPackages(mockPackages[state] || []);
  };

  useEffect(() => {
    if (selectedState) fetchPackages(selectedState);
  }, [selectedState]);

  return (
    <main className="pt-16 py-12">
      <div className="container mx-auto px-4">
        <h2 className="text-3xl font-bold mb-6 text-center">Select Your Destination</h2>
        <div className="max-w-md mx-auto mb-8">
          <label htmlFor="state-select" className="block text-lg font-medium mb-2">Choose a State:</label>
          <select
            id="state-select"
            value={selectedState}
            onChange={(e) => setSelectedState(e.target.value)}
            className="w-full border border-gray-300 rounded px-4 py-2"
          >
            <option value="">-- Select a State --</option>
            {states.map(state => (
              <option key={state} value={state}>{state}</option>
            ))}
          </select>
        </div>

        {selectedState && (
          <>
            <h3 className="text-2xl font-bold mb-6 text-center">Popular Packages in {selectedState}</h3>
            <div className="grid grid-cols-1 md:grid-cols-2 gap-6">
              {packages.map(pkg => (
                <PackageCard key={pkg.id} pkg={pkg} state={selectedState} />
              ))}
            </div>
          </>
        )}
      </div>
    </main>
  );
};

// PackageCard Component
const PackageCard = ({ pkg, state }) => {
  const [showDetails, setShowDetails] = useState(false);

  const toggleDetails = () => {
    setShowDetails(!showDetails);
  };

  const itinerary = {
    'Jaipur Heritage Tour': [
      'Day 1: Arrival in Jaipur',
      'Day 2: Amber Fort & City Palace',
      'Day 3: Hawa Mahal & Jantar Mantar',
      'Day 4: Shopping in Bapu Bazaar',
      'Day 5: Departure'
    ],
    'Jaisalmer Desert Safari': [
      'Day 1: Arrival in Jaisalmer',
      'Day 2: Fort & Haveli Tour',
      'Day 3: Camel Safari & Desert Camp',
      'Day 4: Departure'
    ],
    'Shimla Retreat': [
      'Day 1: Arrival in Shimla',
      'Day 2: Mall Road & Ridge',
      'Day 3: Kufri Fun & Fairs',
      'Day 4: Departure'
    ],
    'Manali Adventure': [
      'Day 1: Arrival in Manali',
      'Day 2: Solang Valley Adventure',
      'Day 3: Rohtang Pass',
      'Day 4: Hadimba Temple',
      'Day 5: Vashisht Hot Water Springs',
      'Day 6: Departure'
    ],
    'Kerala Backwaters Experience': [
      'Day 1: Arrival in Kerala',
      'Day 2: Alleppey Backwaters Cruise',
      'Day 3: Kumarakom Bird Sanctuary',
      'Day 4: Kochi Sightseeing',
      'Day 5: Departure'
    ],
    'Munnar Tea Plantation Tour': [
      'Day 1: Arrival in Munnar',
      'Day 2: Tea Museum & Plantations',
      'Day 3: Eravikulam National Park',
      'Day 4: Departure'
    ],
    'Mahabaleshwar Weekend Getaway': [
      'Day 1: Arrival in Mahabaleshwar',
      'Day 2: Viewpoints & Strawberry Farms',
      'Day 3: Departure'
    ],
    'Lonavala Hill Station': [
      'Day 1: Arrival in Lonavala',
      'Day 2: Bhushi Dam & Karla Caves',
      'Day 3: Departure'
    ]
  };

  return (
    <div className="bg-white rounded shadow overflow-hidden">
      <div className="p-4">
        <h3 className="text-xl font-semibold mb-2">{pkg.name}</h3>
        <p className="text-gray-600 mb-4">Duration: {pkg.days}</p>
        <button
          onClick={toggleDetails}
          className="text-indigo-600 hover:underline"
        >
          {showDetails ? 'Hide Itinerary' : 'View Itinerary'}
        </button>
        {showDetails && (
          <ul className="mt-4 list-disc pl-5 space-y-1">
            {itinerary[pkg.name].map((item, index) => (
              <li key={index}>{item}</li>
            ))}
          </ul>
        )}
      </div>
    </div>
  );
};

// StayPage Component
const StayPage = () => {
  const [bookings, setBookings] = useState([]);
  const [formVisible, setFormVisible] = useState(null);
  const [formData, setFormData] = useState({
    name: '',
    email: '',
    destination: '',
    checkIn: '',
    checkOut: '',
    guests: ''
  });

  const hotels = [
    { id: 1, name: 'Taj Lake Palace - Udaipur', destination: 'Rajasthan' },
    { id: 2, name: 'The Oberoi Cecil - Shimla', destination: 'Himachal Pradesh' },
    { id: 3, name: 'Marari Beach Resort - Kerala', destination: 'Kerala' },
    { id: 4, name: 'Forest Essentials Spa - Mahabaleshwar', destination: 'Maharashtra' }
  ];

  const handleChange = (e) => {
    setFormData({ ...formData, [e.target.name]: e.target.value });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    if (!localStorage.getItem('user')) {
      alert('Please login first to book.');
      window.location.hash = '#/login';
      return;
    }

    const newBooking = {
      id: Date.now(),
      hotelName: formData.name,
      destination: formData.destination,
      checkIn: formData.checkIn,
      checkOut: formData.checkOut,
      guests: formData.guests
    };

    setBookings([...bookings, newBooking]);
    localStorage.setItem('hotelBookings', JSON.stringify([...bookings, newBooking]));
    setFormVisible(null);
    alert('Hotel booked successfully!');
  };

  const handleBookNow = (hotel) => {
    if (!localStorage.getItem('user')) {
      alert('Please login first to book.');
      window.location.hash = '#/login';
      return;
    }

    setFormData({
      name: hotel.name,
      destination: hotel.destination,
      checkIn: '',
      checkOut: '',
      guests: ''
    });
    setFormVisible(hotel.id);
  };

  return (
    <main className="pt-16 py-12">
      <div className="container mx-auto px-4">
        <h2 className="text-3xl font-bold mb-8 text-center">Popular Stays Across India</h2>
        <div className="grid grid-cols-1 md:grid-cols-2 gap-6">
          {hotels.map(hotel => (
            <div key={hotel.id} className="bg-white rounded shadow overflow-hidden">
              <div className="p-4">
                <h3 className="text-xl font-semibold mb-2">{hotel.name}</h3>
                <p className="text-gray-600 mb-4">Destination: {hotel.destination}</p>
                <button
                  onClick={() => handleBookNow(hotel)}
                  className="bg-indigo-600 text-white py-2 px-4 rounded hover:bg-indigo-700 transition"
                >
                  Book Now
                </button>

                {formVisible === hotel.id && (
                  <form onSubmit={handleSubmit} className="mt-4 space-y-4">
                    <input type="hidden" name="name" value={formData.name} />
                    <input type="hidden" name="destination" value={formData.destination} />

                    <div>
                      <label className="block text-sm font-medium mb-1">Check-in Date</label>
                      <input
                        type="date"
                        name="checkIn"
                        value={formData.checkIn}
                        onChange={handleChange}
                        required
                        className="w-full border border-gray-300 rounded px-3 py-2"
                      />
                    </div>
                    <div>
                      <label className="block text-sm font-medium mb-1">Check-out Date</label>
                      <input
                        type="date"
                        name="checkOut"
                        value={formData.checkOut}
                        onChange={handleChange}
                        required
                        className="w-full border border-gray-300 rounded px-3 py-2"
                      />
                    </div>
                    <div>
                      <label className="block text-sm font-medium mb-1">Number of Guests</label>
                      <input
                        type="number"
                        name="guests"
                        min="1"
                        value={formData.guests}
                        onChange={handleChange}
                        required
                        className="w-full border border-gray-300 rounded px-3 py-2"
                      />
                    </div>
                    <button
                      type="submit"
                      className="bg-green-600 text-white py-2 px-4 rounded hover:bg-green-700 transition"
                    >
                      Confirm Booking
                    </button>
                  </form>
                )}
              </div>
            </div>
          ))}
        </div>
      </div>
    </main>
  );
};

// TravelPage Component
const TravelPage = () => {
  const [travelType, setTravelType] = useState('Flight');
  const [bookings, setBookings] = useState([]);
  const [flightData, setFlightData] = useState({
    name: '',
    email: '',
    departure: '',
    arrival: '',
    date: '',
    passengers: ''
  });
  const [trainData, setTrainData] = useState({
    name: '',
    email: '',
    departure: '',
    arrival: '',
    date: '',
    class: '',
    passengers: ''
  });

  const handleFlightChange = (e) => {
    setFlightData({ ...flightData, [e.target.name]: e.target.value });
  };

  const handleTrainChange = (e) => {
    setTrainData({ ...trainData, [e.target.name]: e.target.value });
  };

  const handleFlightSubmit = (e) => {
    e.preventDefault();
    if (!localStorage.getItem('user')) {
      alert('Please login first to book.');
      window.location.hash = '#/login';
      return;
    }

    const newBooking = {
      id: Date.now(),
      type: 'Flight',
      ...flightData
    };

    setBookings([...bookings, newBooking]);
    localStorage.setItem('travelBookings', JSON.stringify([...bookings, newBooking]));
    alert('Flight booked successfully! Redirecting to summary page...');
    setTimeout(() => {
      window.location.hash = '#/summary';
    }, 1500);
  };

  const handleTrainSubmit = (e) => {
    e.preventDefault();
    if (!localStorage.getItem('user')) {
      alert('Please login first to book.');
      window.location.hash = '#/login';
      return;
    }

    const newBooking = {
      id: Date.now(),
      type: 'Train',
      ...trainData
    };

    setBookings([...bookings, newBooking]);
    localStorage.setItem('travelBookings', JSON.stringify([...bookings, newBooking]));
    alert('Train booked successfully! Redirecting to summary page...');
    setTimeout(() => {
      window.location.hash = '#/summary';
    }, 1500);
  };

  return (
    <main className="pt-16 py-12">
      <div className="container mx-auto px-4">
        <h2 className="text-3xl font-bold mb-8 text-center">Travel Booking</h2>
        <div className="mb-6 flex justify-center">
          <button
            onClick={() => setTravelType('Flight')}
            className={`px-6 py-2 mr-2 rounded ${travelType === 'Flight' ? 'bg-indigo-600 text-white' : 'bg-gray-200'}`}
          >
            Flight
          </button>
          <button
            onClick={() => setTravelType('Train')}
            className={`px-6 py-2 rounded ${travelType === 'Train' ? 'bg-indigo-600 text-white' : 'bg-gray-200'}`}
          >
            Train
          </button>
        </div>

        {travelType === 'Flight' ? (
          <form onSubmit={handleFlightSubmit} className="max-w-2xl mx-auto bg-white p-6 rounded shadow">
            <h3 className="text-2xl font-semibold mb-4">Flight Booking Form</h3>
            <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
              <div>
                <label className="block text-sm font-medium mb-1">Full Name</label>
                <input
                  type="text"
                  name="name"
                  value={flightData.name}
                  onChange={handleFlightChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Email Address</label>
                <input
                  type="email"
                  name="email"
                  value={flightData.email}
                  onChange={handleFlightChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Departure City</label>
                <input
                  type="text"
                  name="departure"
                  value={flightData.departure}
                  onChange={handleFlightChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Arrival City</label>
                <input
                  type="text"
                  name="arrival"
                  value={flightData.arrival}
                  onChange={handleFlightChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Travel Date</label>
                <input
                  type="date"
                  name="date"
                  value={flightData.date}
                  onChange={handleFlightChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Number of Passengers</label>
                <input
                  type="number"
                  name="passengers"
                  min="1"
                  value={flightData.passengers}
                  onChange={handleFlightChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
            </div>
            <button
              type="submit"
              className="mt-6 bg-indigo-600 text-white py-2 px-6 rounded hover:bg-indigo-700 transition"
            >
              Book Flight
            </button>
          </form>
        ) : (
          <form onSubmit={handleTrainSubmit} className="max-w-2xl mx-auto bg-white p-6 rounded shadow">
            <h3 className="text-2xl font-semibold mb-4">Train Booking Form</h3>
            <div className="grid grid-cols-1 md:grid-cols-2 gap-4">
              <div>
                <label className="block text-sm font-medium mb-1">Full Name</label>
                <input
                  type="text"
                  name="name"
                  value={trainData.name}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Email Address</label>
                <input
                  type="email"
                  name="email"
                  value={trainData.email}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Departure Station</label>
                <input
                  type="text"
                  name="departure"
                  value={trainData.departure}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Arrival Station</label>
                <input
                  type="text"
                  name="arrival"
                  value={trainData.arrival}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Travel Date</label>
                <input
                  type="date"
                  name="date"
                  value={trainData.date}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Class Type</label>
                <select
                  name="class"
                  value={trainData.class}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                >
                  <option value="">-- Select Class --</option>
                  <option value="Sleeper">Sleeper</option>
                  <option value="AC 3-Tier">AC 3-Tier</option>
                  <option value="First Class AC">First Class AC</option>
                </select>
              </div>
              <div>
                <label className="block text-sm font-medium mb-1">Number of Passengers</label>
                <input
                  type="number"
                  name="passengers"
                  min="1"
                  value={trainData.passengers}
                  onChange={handleTrainChange}
                  required
                  className="w-full border border-gray-300 rounded px-3 py-2"
                />
              </div>
            </div>
            <button
              type="submit"
              className="mt-6 bg-indigo-600 text-white py-2 px-6 rounded hover:bg-indigo-700 transition"
            >
              Book Train
            </button>
          </form>
        )}
      </div>
    </main>
  );
};

// LoginPage Component
const LoginPage = () => {
  const [isLogin, setIsLogin] = useState(true);
  const [loginData, setLoginData] = useState({ username: '', password: '' });
  const [signupData, setSignupData] = useState({
    name: '',
    username: '',
    mobile: '',
    email: '',
    password: '',
    confirmPassword: ''
  });

  const handleLoginChange = (e) => {
    setLoginData({ ...loginData, [e.target.name]: e.target.value });
  };

  const handleSignupChange = (e) => {
    setSignupData({ ...signupData, [e.target.name]: e.target.value });
  };

  const handleLoginSubmit = (e) => {
    e.preventDefault();
    // Simulate login verification
    const storedUsers = JSON.parse(localStorage.getItem('users') || '[]');
    const user = storedUsers.find(
      u => u.username === loginData.username && u.password === loginData.password
    );

    if (user) {
      localStorage.setItem('user', JSON.stringify(user));
      alert('Login successful!');
      window.location.hash = '#/';
    } else {
      alert('Invalid credentials. Please try again.');
    }
  };

  const handleSignupSubmit = (e) => {
    e.preventDefault();
    if (signupData.password !== signupData.confirmPassword) {
      alert('Passwords do not match!');
      return;
    }

    const storedUsers = JSON.parse(localStorage.getItem('users') || '[]');
    const existingUser = storedUsers.find(u => u.username === signupData.username || u.email === signupData.email);
    if (existingUser) {
      alert('Username or email already exists!');
      return;
    }

    storedUsers.push(signupData);
    localStorage.setItem('users', JSON.stringify(storedUsers));
    localStorage.setItem('user', JSON.stringify(signupData));
    alert('Registration successful! You are now logged in.');
    window.location.hash = '#/';
  };

  return (
    <main className="pt-16 py-12 flex items-center justify-center min-h-[calc(100vh-4rem)]">
      <div className="bg-white rounded shadow p-6 max-w-md w-full mx-auto">
        <h2 className="text-2xl font-bold mb-6 text-center">
          {isLogin ? 'Login to Your Account' : 'Create a New Account'}
        </h2>
        {isLogin ? (
          <form onSubmit={handleLoginSubmit}>
            <div className="mb-4">
              <label className="block text-sm font-medium mb-1">Username</label>
              <input
                type="text"
                name="username"
                value={loginData.username}
                onChange={handleLoginChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <div className="mb-6">
              <label className="block text-sm font-medium mb-1">Password</label>
              <input
                type="password"
                name="password"
                value={loginData.password}
                onChange={handleLoginChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <button
              type="submit"
              className="w-full bg-indigo-600 text-white py-2 rounded hover:bg-indigo-700 transition"
            >
              Login
            </button>
            <p className="mt-4 text-center">
              Don't have an account?{' '}
              <button onClick={() => setIsLogin(false)} className="text-indigo-600 hover:underline">
                Sign Up
              </button>
            </p>
          </form>
        ) : (
          <form onSubmit={handleSignupSubmit}>
            <div className="mb-4">
              <label className="block text-sm font-medium mb-1">Full Name</label>
              <input
                type="text"
                name="name"
                value={signupData.name}
                onChange={handleSignupChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <div className="mb-4">
              <label className="block text-sm font-medium mb-1">Username</label>
              <input
                type="text"
                name="username"
                value={signupData.username}
                onChange={handleSignupChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <div className="mb-4">
              <label className="block text-sm font-medium mb-1">Mobile Number</label>
              <input
                type="tel"
                name="mobile"
                value={signupData.mobile}
                onChange={handleSignupChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <div className="mb-4">
              <label className="block text-sm font-medium mb-1">Email Address</label>
              <input
                type="email"
                name="email"
                value={signupData.email}
                onChange={handleSignupChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <div className="mb-4">
              <label className="block text-sm font-medium mb-1">Password</label>
              <input
                type="password"
                name="password"
                value={signupData.password}
                onChange={handleSignupChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <div className="mb-6">
              <label className="block text-sm font-medium mb-1">Confirm Password</label>
              <input
                type="password"
                name="confirmPassword"
                value={signupData.confirmPassword}
                onChange={handleSignupChange}
                required
                className="w-full border border-gray-300 rounded px-3 py-2"
              />
            </div>
            <button
              type="submit"
              className="w-full bg-indigo-600 text-white py-2 rounded hover:bg-indigo-700 transition"
            >
              Sign Up
            </button>
            <p className="mt-4 text-center">
              Already have an account?{' '}
              <button onClick={() => setIsLogin(true)} className="text-indigo-600 hover:underline">
                Login
              </button>
            </p>
          </form>
        )}
      </div>
    </main>
  );
};

// SummaryPage Component
const SummaryPage = () => {
  const hotelBookings = JSON.parse(localStorage.getItem('hotelBookings') || '[]');
  const travelBookings = JSON.parse(localStorage.getItem('travelBookings') || '[]');

  return (
    <main className="pt-16 py-12">
      <div className="container mx-auto px-4">
        <h2 className="text-3xl font-bold mb-8 text-center">Your Booking Summary</h2>

        <div className="mb-12">
          <h3 className="text-2xl font-semibold mb-4">Hotel Bookings</h3>
          {hotelBookings.length > 0 ? (
            <div className="space-y-4">
              {hotelBookings.map(booking => (
                <div key={booking.id} className="bg-white p-4 rounded shadow">
                  <p><strong>Hotel:</strong> {booking.hotelName}</p>
                  <p><strong>Destination:</strong> {booking.destination}</p>
                  <p><strong>Check-in:</strong> {booking.checkIn}</p>
                  <p><strong>Check-out:</strong> {booking.checkOut}</p>
                  <p><strong>Guests:</strong> {booking.guests}</p>
                </div>
              ))}
            </div>
          ) : (
            <p className="text-gray-600">No hotel bookings found.</p>
          )}
        </div>

        <div>
          <h3 className="text-2xl font-semibold mb-4">Travel Bookings</h3>
          {travelBookings.length > 0 ? (
            <div className="space-y-4">
              {travelBookings.map(booking => (
                <div key={booking.id} className="bg-white p-4 rounded shadow">
                  <p><strong>Type:</strong> {booking.type}</p>
                  <p><strong>Name:</strong> {booking.name}</p>
                  <p><strong>Email:</strong> {booking.email}</p>
                  <p><strong>From:</strong> {booking.departure}</p>
                  <p><strong>To:</strong> {booking.arrival}</p>
                  <p><strong>Date:</strong> {booking.date}</p>
                  <p><strong>Passengers:</strong> {booking.passengers}</p>
                  {booking.type === 'Train' && <p><strong>Class:</strong> {booking.class}</p>}
                </div>
              ))}
            </div>
          ) : (
            <p className="text-gray-600">No travel bookings found.</p>
          )}
        </div>
      </div>
    </main>
  );
};

export default App;
