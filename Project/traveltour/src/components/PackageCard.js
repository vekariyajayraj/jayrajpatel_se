import React, { useState } from 'react';

const PackageCard = ({ pkg, state }) => {
  const [showDetails, setShowDetails] = useState(false);

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
    // Add more itineraries here if needed
  };

  const toggleDetails = () => {
    setShowDetails(!showDetails);
  };

  return (
    <div className="package-card">
      <div className="package-card-content">
        <h3 className="package-card-title">{pkg.name}</h3>
        <p className="package-card-duration">Duration: {pkg.days}</p>
        <button onClick={toggleDetails} className="package-card-toggle">
          {showDetails ? 'Hide Itinerary' : 'View Itinerary'}
        </button>
        {showDetails && (
          <ul className="package-card-itinerary">
            {itinerary[pkg.name]?.map((item, index) => (
              <li key={index}>{item}</li>
            ))}
          </ul>
        )}
      </div>
    </div>
  );
};

export default PackageCard;
