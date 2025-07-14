import React, { useState, useEffect } from 'react';
import Routes from './Routes';
import Navbar from './Navbar';
import Footer from './Footer';

const Router = () => {
  const [currentPath, setCurrentPath] = useState(window.location.hash.slice(1) || '/');

  useEffect(() => {
    const handleHashChange = () => {
      setCurrentPath(window.location.hash.slice(1));
    };
    window.addEventListener('hashchange', handleHashChange);
    return () => window.removeEventListener('hashchange', handleHashChange);
  }, []);

  return (
    <div className="min-h-screen flex flex-col">
      <Navbar currentPath={currentPath} />
      <main className="flex-grow">
        <Routes currentPath={currentPath} />
      </main>
      <Footer />
    </div>
  );
};

export default Router;