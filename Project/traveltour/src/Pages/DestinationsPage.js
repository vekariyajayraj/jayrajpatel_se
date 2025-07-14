import React, { useState, useEffect } from 'react';
import PackageCard from '../components/PackageCard';

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
    <main className="destinations-main">
      <div className="destinations-container">
        <h2 className="section-heading">Select Your Destination</h2>

        <div className="form-wrapper">
          <label htmlFor="state-select" className="form-label">Choose a State:</label>
          <select
            id="state-select"
            value={selectedState}
            onChange={(e) => setSelectedState(e.target.value)}
            className="form-select"
          >
            <option value="">-- Select a State --</option>
            {states.map(state => (
              <option key={state} value={state}>{state}</option>
            ))}
          </select>
        </div>

        {selectedState && (
          <>
            <h3 className="sub-heading">Popular Packages in {selectedState}</h3>
            <div className="packages-grid">
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

export default DestinationsPage;
