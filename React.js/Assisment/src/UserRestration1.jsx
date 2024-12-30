import React, { useState } from 'react';

const UserRegistration1 = () => {
    const [formData, setFormData] = useState({
        email: '',
        password: '',
        retypePassword: '',
        firstName: '',
        lastName: '',
        phoneNumber: '',
        address: '',
        town: '',
        region: '',
        postcode: '',
        country: '',
    });

    const [errors, setErrors] = useState({});

    const validate = () => {
        const newErrors = {};

        if (!formData.email || !/\S+@\S+\.\S+/.test(formData.email)) {
            newErrors.email = 'Please enter your  email.';
        }
        if (!formData.password || formData.password.length < 6) {
            newErrors.password = 'Password must be at least 6 characters long.';
        }
        if (formData.password !== formData.retypePassword) {
            newErrors.retypePassword = 'Passwords do not match.';
        }
        if (!formData.firstName) {
            newErrors.firstName = ' Enter your First name.';
        }
        if (!formData.lastName) {
            newErrors.lastName = 'Enter your Last name.';
        }
        if (!formData.phoneNumber || !/^[0-9]{10}$/.test(formData.phoneNumber)) {
            newErrors.phoneNumber = 'Phone number must be 10 digits.';
        }
        if (!formData.address) {
            newErrors.address = 'Enter your Address.';
        }
        if (!formData.town) {
            newErrors.town = 'Enter your Town.';
        }
        if (!formData.region) {
            newErrors.region = ' Enter your Region.';
        }
        if (!formData.postcode || !/^[0-9]{5}$/.test(formData.postcode)) {
            newErrors.postcode = 'Postcode must be 5 digits.';
        }
        if (!formData.country) {
            newErrors.country = 'Enter your Country.';
        }

        setErrors(newErrors);
        return Object.keys(newErrors).length === 0;
    };

    const handleSubmit = (event) => {
        event.preventDefault();

        if (validate()) {
            alert('Form submitted successfully:', formData);
            setFormData({
                email: '',
                password: '',
                retypePassword: '',
                firstName: '',
                lastName: '',
                phoneNumber: '',
                address: '',
                town: '',
                region: '',
                postcode: '',
                country: '',
            });
            setErrors({});
        } else {
            alert('Form validation failed.');
        }
    };

    const handleChange = (event) => {
        const { name, value } = event.target;
        setFormData({
            ...formData,
            [name]: value,
        });
    };

    return (
        <>
            <div style={{ maxWidth: '600px', margin: '0 auto', padding: '20px' }}>
                <h2>User Registration</h2>
                <form onSubmit={handleSubmit}>
                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="email">Email *</label>
                        <input type="email" name="email" value={formData.email} onChange={handleChange} />                       {errors.email && <p style={{ color: 'red' }}>{errors.email}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="password">Password *</label>
                        <input type="password" name="password" value={formData.password} onChange={handleChange} />
                        {errors.password && <p style={{ color: 'red' }}>{errors.password}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="retypePassword">Retype Password *</label>
                        <input type="password" name="retypePassword" value={formData.retypePassword} onChange={handleChange} />
                        {errors.retypePassword && <p style={{ color: 'red' }}>{errors.retypePassword}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="firstName">First Name *</label>
                        <input type="text" name="firstName" value={formData.firstName} onChange={handleChange} />
                        {errors.firstName && <p style={{ color: 'red' }}>{errors.firstName}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="lastName">Last Name *</label>
                        <input type="text" name="lastName" value={formData.lastName} onChange={handleChange} />
                        {errors.lastName && <p style={{ color: 'red' }}>{errors.lastName}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="phoneNumber">Phone Number *</label>
                        <input type="number" name="phoneNumber" value={formData.phoneNumber} onChange={handleChange} />
                        {errors.phoneNumber && <p style={{ color: 'red' }}>{errors.phoneNumber}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="address">Address *</label>
                        <input type="text" name="address" value={formData.address} onChange={handleChange} />
                        {errors.address && <p style={{ color: 'red' }}>{errors.address}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="town">Town *</label>
                        <input type="text" name="town" value={formData.town} onChange={handleChange} />
                        {errors.town && <p style={{ color: 'red' }}>{errors.town}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="region">Region *</label>
                        <input type="text" name="region" value={formData.region} onChange={handleChange} />
                        {errors.region && <p style={{ color: 'red' }}>{errors.region}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="postcode">Postcode/Zip *</label>
                        <input type="text" name="postcode" value={formData.postcode} onChange={handleChange} />
                        {errors.postcode && <p style={{ color: 'red' }}>{errors.postcode}</p>}
                    </div>

                    <div style={{ display: 'flex', flexDirection: 'column', marginBottom: '10px' }}>
                        <label htmlFor="country">Country *</label>
                        <input type="text" name="country" value={formData.country} onChange={handleChange} />
                        {errors.country && <p style={{ color: 'red' }}>{errors.country}</p>}
                    </div>

                    <div style={{ marginTop: '20px' }}>
                        <button type="submit">Submit</button>
                    </div>
                </form>
            </div>
        </>
    );
};

export default UserRegistration1;
