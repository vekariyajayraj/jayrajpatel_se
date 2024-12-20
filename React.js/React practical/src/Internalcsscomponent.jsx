import React from 'react'

const Internalcsscomponent = () => {
    const Internal = {
        heading: {
            color:"black" ,
            backgroundColor:"white",
            padding:"20px"
        },
        Container: {
            padding : "40px",
            backgroundColor : "black" , 
        },
        body :{
            padding: "20px",
            backgroundColor:"white",
            color:"black",
        },
        
    }
  return (
    < >
    <div style={Internal.Container}>
      <h1 style={Internal.heading}>patel</h1>
      <h2 style={Internal.body}>jayraj</h2>
    </div>
    </>
  )
}

export default Internalcsscomponent
