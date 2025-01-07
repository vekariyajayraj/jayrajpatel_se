import React, { useState } from "react";

const DateIntervalCalculator = () => {
  const [fromDate, setFromDate] = useState("");
  const [toDate, setToDate] = useState("");
  const [result, setResult] = useState(null);
  const [data, setData] = useState([]);

  const calculateInterval = () => {
    const from = new Date(fromDate);
    const to = new Date(toDate);

   
    const Time = Math.abs(to - from);
    const Days = Math.ceil(Time / (1000 * 60 * 60 * 24));
    const Weeks = Math.floor(Days / 7);
    const Months = Math.floor(Days / 30.44);
    const Years = Math.floor(Months / 12);

    const result = {
      fromDate,
      toDate,
      years: Years,
      months: Months,
      weeks: Weeks,
      days: Days,
    };

    setData((prevData) => {
      return [...prevData, result];
      setResult(result);
    });

    // ...prevData, result);

  };

  return (
    <div>
      <div >
        <h1>Date Interval</h1>

        <div  >
          <label htmlFor="from-date">From:</label>
          <input id="from-date" type="date" value={fromDate} onChange={(e) => setFromDate(e.target.value)} />
        </div>

        <div  >
          <label  >To:</label>
          <input id="to-date" type="date" value={toDate} onChange={(e) => setToDate(e.target.value)} />
        </div>

        <div>
          <button onClick={calculateInterval}>Submit</button>
        </div>


        <table border={"1"} >
          <thead>
            <tr>
              <th >From Date</th>
              <th >To Date</th>
              <th >Years</th>
              <th >Months</th>
              <th >Weeks</th>
              <th >Days</th>
            </tr>
          </thead>
          <tbody>
            {data.map((item, index) => (
              <tr key={index}>
                <td>{item.fromDate}</td>
                <td>{item.toDate}</td>
                <td>{item.years}</td>
                <td>{item.months}</td>
                <td>{item.weeks}</td>
                <td>{item.days}</td>
              </tr>
            ))}
          </tbody>
        </table>

      </div>
    </div>
  );
};

export default DateIntervalCalculator;
