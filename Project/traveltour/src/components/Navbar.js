import React, { useState, useEffect } from 'react';

const Navbar = ({ currentPath }) => {
  const [isLoggedIn, setIsLoggedIn] = useState(false);

  useEffect(() => {
    const user = localStorage.getItem('user');
    if (user) setIsLoggedIn(true);
  }, []);

  const handleLogout = () => {
    localStorage.removeItem('user');
    setIsLoggedIn(false);
    window.location.hash = '#/';
  };

  return (
    <nav className="navbar">
      <div className="navbar-container">
        <div className="navbar-title">Tours & Travels</div>
        <ul className="navbar-links">
          <li><a href="#/">Home</a></li>
          <li><a href="#/destinations">Destinations</a></li>
          <li><a href="#/stay">Stay</a></li>
          <li><a href="#/travel">Vehicle Travel</a></li>
          {isLoggedIn ? (
            <li><button onClick={handleLogout} className="logout-btn">Logout</button></li>
          ) : (
            <li><a href="#/login">Login</a></li>
          )}
        </ul>
      </div>
    </nav>
  );
};

export default Navbar;
