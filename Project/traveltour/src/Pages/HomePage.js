import React from 'react';
import PlaceCard from '../components/PlaceCard';

const HomePage = () => {
  const popularPlaces = [
    { id: 1, name: "Goa Beaches", image: "https://placehold.co/400x250?text=Goa+Beaches", description: "Relax on the beautiful beaches of Goa." },
    { id: 2, name: "Manali Snow", image: "https://placehold.co/400x250?text=Manali+Snow", description: "Experience snowfall in Manali." },
    { id: 3, name: "Kerala Backwaters", image: "https://placehold.co/400x250?text=Kerala+Backwaters", description: "Enjoy serene backwater cruises." },
    { id: 4, name: "Jaipur Forts", image: "https://placehold.co/400x250?text=Jaipur+Forts", description: "Explore majestic forts in Jaipur." },
  ];

  return (
    <>
      <section className="hero-image">
        <div className="hero-overlay">
          <h1 className="hero-title">Discover the World with Us</h1>
        </div>
      </section>

      <section className="trip-guidelines">
        <div className="container">
          <h2 className="section-title">Guidelines for a Perfect Trip</h2>
          <div className="guidelines-grid">
            <div className="guideline-card">
              <h3>Plan Ahead</h3>
              <p>Book your trip early to get the best deals and availability.</p>
            </div>
            <div className="guideline-card">
              <h3>Pack Smart</h3>
              <p>Carry only essentials and check weather before packing clothes.</p>
            </div>
            <div className="guideline-card">
              <h3>Stay Safe</h3>
              <p>Follow local guidelines and keep emergency numbers handy.</p>
            </div>
          </div>
        </div>
      </section>

      <section className="popular-places">
        <div className="container">
          <h2 className="section-title">Popular Destinations</h2>
          <div className="places-grid">
            {popularPlaces.map(place => (
              <PlaceCard key={place.id} place={place} />
            ))}
          </div>
        </div>
      </section>
    </>
  );
};

export default HomePage;
