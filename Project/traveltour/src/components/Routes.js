import React from 'react';
import HomePage from '../Pages/HomePage';
import DestinationsPage from '../Pages/DestinationsPage';
import StayPage from '../Pages/StayPage';
import TravelPage from '../Pages/TravelPage';
import LoginPage from '../Pages/LoginPage';
import SummaryPage from '../Pages/SummaryPage';

const Routes = ({ currentPath }) => {
  switch (currentPath) {
    case '/':
      return <HomePage />;
    case '/destinations':
      return <DestinationsPage />;
    case '/stay':
      return <StayPage />;
    case '/travel':
      return <TravelPage />;
    case '/login':
      return <LoginPage />;
    case '/summary':
      return <SummaryPage />;
    default:
      return <HomePage />;
  }
};

export default Routes;