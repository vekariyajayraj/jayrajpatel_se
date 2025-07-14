import React, { useState } from 'react';

const LoginPage = () => {
  const [isLogin, setIsLogin] = useState(true);
  const [loginData, setLoginData] = useState({ username: '', password: '' });
  const [signupData, setSignupData] = useState({
    name: '',
    username: '',
    mobile: '',
    email: '',
    password: '',
    confirmPassword: ''
  });

  const handleLoginChange = (e) => {
    setLoginData({ ...loginData, [e.target.name]: e.target.value });
  };

  const handleSignupChange = (e) => {
    setSignupData({ ...signupData, [e.target.name]: e.target.value });
  };

  const handleLoginSubmit = (e) => {
    e.preventDefault();
    const storedUsers = JSON.parse(localStorage.getItem('users') || '[]');
    const user = storedUsers.find(
      u => u.username === loginData.username && u.password === loginData.password
    );
    if (user) {
      localStorage.setItem('user', JSON.stringify(user));
      alert('Login successful!');
      window.location.hash = '#/';
    } else {
      alert('Invalid credentials. Please try again.');
    }
  };

  const handleSignupSubmit = (e) => {
    e.preventDefault();
    if (signupData.password !== signupData.confirmPassword) {
      alert('Passwords do not match!');
      return;
    }

    const storedUsers = JSON.parse(localStorage.getItem('users') || '[]');
    const existingUser = storedUsers.find(
      u => u.username === signupData.username || u.email === signupData.email
    );
    if (existingUser) {
      alert('Username or email already exists!');
      return;
    }

    storedUsers.push(signupData);
    localStorage.setItem('users', JSON.stringify(storedUsers));
    localStorage.setItem('user', JSON.stringify(signupData));
    alert('Registration successful! You are now logged in.');
    window.location.hash = '#/';
  };

  return (
    <main className="login-main">
      <div className="login-box">
        <h2 className="login-heading">
          {isLogin ? 'Login to Your Account' : 'Create a New Account'}
        </h2>

        {isLogin ? (
          <form onSubmit={handleLoginSubmit}>
            <div className="form-group">
              <label>Username</label>
              <input
                type="text"
                name="username"
                value={loginData.username}
                onChange={handleLoginChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Password</label>
              <input
                type="password"
                name="password"
                value={loginData.password}
                onChange={handleLoginChange}
                required
              />
            </div>
            <button type="submit" className="btn-primary">Login</button>
            <p className="form-switch">
              Don't have an account?{' '}
              <button type="button" onClick={() => setIsLogin(false)}>Sign Up</button>
            </p>
          </form>
        ) : (
          <form onSubmit={handleSignupSubmit}>
            <div className="form-group">
              <label>Full Name</label>
              <input
                type="text"
                name="name"
                value={signupData.name}
                onChange={handleSignupChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Username</label>
              <input
                type="text"
                name="username"
                value={signupData.username}
                onChange={handleSignupChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Mobile Number</label>
              <input
                type="tel"
                name="mobile"
                value={signupData.mobile}
                onChange={handleSignupChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Email Address</label>
              <input
                type="email"
                name="email"
                value={signupData.email}
                onChange={handleSignupChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Password</label>
              <input
                type="password"
                name="password"
                value={signupData.password}
                onChange={handleSignupChange}
                required
              />
            </div>
            <div className="form-group">
              <label>Confirm Password</label>
              <input
                type="password"
                name="confirmPassword"
                value={signupData.confirmPassword}
                onChange={handleSignupChange}
                required
              />
            </div>
            <button type="submit" className="btn-primary">Sign Up</button>
            <p className="form-switch">
              Already have an account?{' '}
              <button type="button" onClick={() => setIsLogin(true)}>Login</button>
            </p>
          </form>
        )}
      </div>
    </main>
  );
};

export default LoginPage;
