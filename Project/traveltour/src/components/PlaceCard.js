import React, { useState } from 'react';

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
    <div className="place-card">
      <img src={place.image} alt={place.name} />
      <div className="place-card-content">
        <h3 className="place-card-title">{place.name}</h3>
        <p className="place-card-description">{place.description}</p>
        <button onClick={handleBooking} className="place-card-button">
          Book Now
        </button>
      </div>
    </div>
  );
};

export default PlaceCard;
