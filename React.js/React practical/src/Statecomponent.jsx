import React, { useState } from 'react'

const Statecomponent = () => {
   const [name, setName] = useState('vekariya'); // usestate only 

   // aa usestate button thi name change karva mate chhe niche nu 
 const changeName = () => {
    setName('patel');
 }
    
  return (
    <> 
    <h1>jayraj {name}</h1>
    <button onClick={changeName}>change name </button>
    </>
  )
}

export default Statecomponent



 
