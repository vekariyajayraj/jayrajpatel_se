import { useState } from 'react'
import reactLogo from './assets/react.svg'
import viteLogo from '/vite.svg'
import './App.css'
import Propscomponent from './Propscomponent'
import Statecomponent from './Statecomponent'
import Inlinecsscomponent from './Inlinecsscomponent'
import Internalcsscomponent from './Internalcsscomponent'

function App() {
  const [count, setCount] = useState(0)
  return (
    <>
    {/* <Propscomponent name="patel" /> */}
    {/* <Statecomponent/> */}
    {/* <Inlinecsscomponent/> */}
    <Internalcsscomponent/>
    </>
  )
}

export default App
