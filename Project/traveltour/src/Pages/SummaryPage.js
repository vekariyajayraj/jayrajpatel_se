import React from 'react';

const SummaryPage = () => {
  const hotelBookings = JSON.parse(localStorage.getItem('hotelBookings') || '[]');
  const travelBookings = JSON.parse(localStorage.getItem('travelBookings') || '[]');

  return (
    <main className="summary-main">
      <div className="summary-container">
        <h2 className="summary-heading">Your Booking Summary</h2>

        <div className="summary-section">
          <h3 className="section-subtitle">Hotel Bookings</h3>
          {hotelBookings.length > 0 ? (
            <div className="card-list">
              {hotelBookings.map(booking => (
                <div key={booking.id} className="summary-card">
                  <p><strong>Hotel:</strong> {booking.hotelName}</p>
                  <p><strong>Destination:</strong> {booking.destination}</p>
                  <p><strong>Check-in:</strong> {booking.checkIn}</p>
                  <p><strong>Check-out:</strong> {booking.checkOut}</p>
                  <p><strong>Guests:</strong> {booking.guests}</p>
                </div>
              ))}
            </div>
          ) : (
            <p className="empty-text">No hotel bookings found.</p>
          )}
        </div>

        <div className="summary-section">
          <h3 className="section-subtitle">Travel Bookings</h3>
          {travelBookings.length > 0 ? (
            <div className="card-list">
              {travelBookings.map(booking => (
                <div key={booking.id} className="summary-card">
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
            <p className="empty-text">No travel bookings found.</p>
          )}
        </div>
      </div>
    </main>
  );
};

export default SummaryPage;
