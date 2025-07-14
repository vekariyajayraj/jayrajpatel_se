import React from 'react';

const Footer = () => {
  return (
    <footer className="footer">
      <div className="footer-container">
        <p>&copy; {new Date().getFullYear()} Tours & Travels. All rights reserved.</p>
        <p className="footer-links">
          <a href="#">Privacy Policy</a>
          <a href="#">Terms of Service</a>
          <a href="#">Contact Us</a>
        </p>
      </div>
    </footer>
  );
};

export default Footer;
