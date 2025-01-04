import React, { useEffect, useState } from 'react'

const Customhooks = () => {
    const [data, setData] = useState([]);
    useEffect(() => {
        fetch('https://fakestoreapi.com/products')
            .then(res => res.json())
            .then(json => setData(json))

    },[]);
    return (
        <>
            <table border={"1"}>
                <thead>
                    <tr>
                        <td>id</td>
                        <td>Tittle</td>
                        <td>product</td>
                        <td>category</td>
                        <td>price</td>
                        <td>image</td>
                    </tr>
                </thead>
                <tbody>
            {data.map((i)=>{
                return(
                    <tr>
                        <td >{i.id}</td>
                        <td >{i.Tittle}</td>
                        <td >{i.product}</td>
                        <td >{i.category}</td>
                        <td >{i.price}</td>
                        <td >{i.image}</td>
                    </tr>
                    )
            })}

                </tbody>
            </table>
        </>
    )
}

export default Customhooks
