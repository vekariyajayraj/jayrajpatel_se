import React, { useState } from 'react';

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

    const updated = [...bookings, newBooking];
    setBookings(updated);
    localStorage.setItem('hotelBookings', JSON.stringify(updated));
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
    <main className="stay-main">
      <div className="stay-container">
        <h2 className="stay-heading">Popular Stays Across India</h2>
        <div className="hotel-grid">
          {hotels.map(hotel => (
            <div key={hotel.id} className="hotel-card">
              <div className="hotel-card-content">
                <h3 className="hotel-name">{hotel.name}</h3>
                <p className="hotel-destination">Destination: {hotel.destination}</p>
                <button onClick={() => handleBookNow(hotel)} className="book-btn">
                  Book Now
                </button>

                {formVisible === hotel.id && (
                  <form onSubmit={handleSubmit} className="booking-form">
                    <input type="hidden" name="name" value={formData.name} />
                    <input type="hidden" name="destination" value={formData.destination} />

                    <div className="form-group">
                      <label>Check-in Date</label>
                      <input type="date" name="checkIn" value={formData.checkIn} onChange={handleChange} required />
                    </div>
                    <div className="form-group">
                      <label>Check-out Date</label>
                      <input type="date" name="checkOut" value={formData.checkOut} onChange={handleChange} required />
                    </div>
                    <div className="form-group">
                      <label>Number of Guests</label>
                      <input type="number" name="guests" min="1" value={formData.guests} onChange={handleChange} required />
                    </div>
                    <button type="submit" className="confirm-btn">
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

export default StayPage;
