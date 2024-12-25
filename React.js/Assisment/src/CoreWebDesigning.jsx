import React from 'react';
import './CoreWebDesigning.css'; // Use relative path and ensure the CSS file is in the correct location.

const CoreWebDesigning = () => {
  return (
    <>
      <div className="container">
        {/* Contact Form */}
        <h2>Contact Us</h2>
        <form id="contactForm">
          <div className="form-group">
            <label htmlFor="name">Name:</label>
            <input
              type="text"
              id="name"
              name="name"
              placeholder="Enter your name"
              required
            />
          </div>
          <div className="form-group">
            <label htmlFor="mobile">Mobile:</label>
            <input
              type="text"
              id="mobile"
              name="mobile"
              placeholder="Enter your mobile number"
              required
            />
          </div>
          <div className="form-group">
            <label htmlFor="message">Message:</label>
            <textarea
              id="message"
              name="message"
              placeholder="Enter your message"
              rows="4"
              required
            ></textarea>
          </div>
          <button type="submit">Submit</button>
        </form>

        {/* Google Map */}
        <h2>Our Location</h2>
        <div className="map-container">
          <iframe
            src="https://www.google.com/maps/embed?pb=!1m18!1m12!1m3!1d3153.1374900344216!2d144.95605431531657!3d-37.81720997975145!2m3!1f0!2f0!3f0!3m2!1i1024!2i768!4f13.1!3m3!1m2!1s0x6ad642af0f11fd81%3A0xf577d78c3f8d1c2d!2sFederation%20Square!5e0!3m2!1sen!2sau!4v1686173954743!5m2!1sen!2sau"
            width="100%"
            height="300"
            style={{ border: 0 }}
            allowFullScreen
            loading="lazy"
            referrerPolicy="no-referrer-when-downgrade"
          ></iframe>
        </div>
      </div>
    </>
  );
};

export default CoreWebDesigning;
