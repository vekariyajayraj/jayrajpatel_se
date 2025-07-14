import React, { useState } from 'react';

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

    const updated = [...bookings, newBooking];
    setBookings(updated);
    localStorage.setItem('travelBookings', JSON.stringify(updated));
    alert('Flight booked successfully! Redirecting...');
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

    const updated = [...bookings, newBooking];
    setBookings(updated);
    localStorage.setItem('travelBookings', JSON.stringify(updated));
    alert('Train booked successfully! Redirecting...');
    setTimeout(() => {
      window.location.hash = '#/summary';
    }, 1500);
  };

  return (
    <main className="travel-main">
      <div className="travel-container">
        <h2 className="travel-heading">Travel Booking</h2>
        <div className="travel-tabs">
          <button
            onClick={() => setTravelType('Flight')}
            className={`tab-btn ${travelType === 'Flight' ? 'active' : ''}`}
          >
            Flight
          </button>
          <button
            onClick={() => setTravelType('Train')}
            className={`tab-btn ${travelType === 'Train' ? 'active' : ''}`}
          >
            Train
          </button>
        </div>

        {travelType === 'Flight' ? (
          <form onSubmit={handleFlightSubmit} className="booking-form">
            <h3 className="form-title">Flight Booking Form</h3>
            <div className="form-grid">
              <div className="form-group">
                <label>Full Name</label>
                <input
                  type="text"
                  name="name"
                  value={flightData.name}
                  onChange={handleFlightChange}
                  required
                />
                <label>Email Address</label>
                <input
                  type="email"
                  name="email"
                  value={flightData.email}
                  onChange={handleFlightChange}
                  required
                />
                 <label>Departure City</label>
                <input
                  type="text"
                  name="departure"
                  value={flightData.departure}
                  onChange={handleFlightChange}
                  required
                />
                  <label>Arrival City</label>
                <input
                  type="text"
                  name="arrival"
                  value={flightData.arrival}
                  onChange={handleFlightChange}
                  required
                />
                 <label>Travel Date</label>
                <input
                  type="date"
                  name="date"
                  value={flightData.date}
                  onChange={handleFlightChange}
                  required
                />
                <label>Passengers</label>
                <input
                  type="number"
                  name="passengers"
                  value={flightData.passengers}
                  onChange={handleFlightChange}
                  required
                />
              </div>
            </div>
            <button type="submit" className="submit-btn">Book Flight</button>
          </form>
        ) : (
          <form onSubmit={handleTrainSubmit} className="booking-form">
            <h3 className="form-title">Train Booking Form</h3>
            <div className="form-grid">
              <div className="form-group">
                <label>Full Name</label>
                <input
                  type="text"
                  name="name"
                  value={trainData.name}
                  onChange={handleTrainChange}
                  required
                />
                <label>Email Address</label>
                <input
                  type="email"
                  name="email"
                  value={trainData.email}
                  onChange={handleTrainChange}
                  required
                />
                <label>Departure Station</label>
                <input
                  type="text"
                  name="departure"
                  value={trainData.departure}
                  onChange={handleTrainChange}
                  required
                />
                 <label>Arrival Station</label>
                <input
                  type="text"
                  name="arrival"
                  value={trainData.arrival}
                  onChange={handleTrainChange}
                  required
                />
                <label>Travel Date</label>
                <input
                  type="date"
                  name="date"
                  value={trainData.date}
                  onChange={handleTrainChange}
                  required
                />
                <label>Class</label>
                <select name="class" value={trainData.class} onChange={handleTrainChange} required>
                  <option value="">-- Select Class --</option>
                  <option value="Sleeper">Sleeper</option>
                  <option value="AC 3-Tier">AC 3-Tier</option>
                  <option value="First Class AC">First Class AC</option>
                </select>
                <label>Passengers</label>
                <input
                  type="number"
                  name="passengers"
                  value={trainData.passengers}
                  onChange={handleTrainChange}
                  required
                />
                </div>
            </div>
            <button type="submit" className="submit-btn">Book Train</button>
          </form>
        )}
      </div>
    </main>
  );
};

export default TravelPage;
