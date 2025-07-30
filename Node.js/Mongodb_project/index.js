var express = require('express')
var app = express()
var catroutes = require('./routes/catroutes')

app.set('view engine','ejs')
app.use(express.static('public'))
app.get('/',(req,res)=>{
    res.render('Home')
})
// app.get('/Category',(req,res)=>{
//     res.render('Category')
// })
app.use(express.urlencoded({extended:false}))
app.use('/Category',catroutes)
app.listen(8000,()=>{
    console.log('Server is running on port 8000')
})