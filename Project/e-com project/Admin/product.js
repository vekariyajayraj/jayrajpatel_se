let obj=[]
let tr= '<option>--Select Category--</option>';
let br='';
let proname=document.getElementById('proname')
let price=document.getElementById('price')
let selcat=document.getElementById("selectcat");


const getcat=()=>{
    
let catdata=JSON.parse(localStorage.getItem("catdata"));
    
    catdata.map((i)=>{
        tr += `<option value=${i.no}>${i.catname}</option>`;
    })

    document.getElementById("selectcat").innerHTML = tr;
    
}
getcat()
const addproduct=()=>{
let prodata=JSON.parse(localStorage.getItem('productdetails'))
    let img=localStorage.getItem('proimg')
    let count=prodata!=null?prodata.length+1:1;
    let catid=document.getElementById("catid")
    if (catid.value!='') {
        let updata=prodata.map((i)=>{
            if (i.id==catid.value) {
                i.productname=proname.value;
                i.price=price.value;
               
            }
            return i;
        })
        obj=updata;
    } else {
        obj.push({
            id:count,
            productname:proname.value,
            image:img,
            price:price.value,
            catid:selcat.value
        })
    
    }
    
    localStorage.setItem('productdetails',JSON.stringify(obj))
    proname.value='';
    price.value=''
    dis()
}

const dis=()=>{
    let prodata=JSON.parse(localStorage.getItem("productdetails"));
    let catdata=JSON.parse(localStorage.getItem("catdata"));  
     prodata.map((i)=>{
        catdata.map((j)=>{
            if(j.no == i.catid){
                i.catname = j.catname;
            }
        })
        br += `
        <tr>
            <td>${i.id}</td>
            <td>${i.productname}</td>
            <td><img src="${i.image}" height="50px" width="50px"></td>
            <td>${i.catname}</td>
            <td>${i.price}</td>
            <td><button  onclick="edi(${i.id})" >Edit</button>
            <button onclick="del(${i.id})">Delete</button></td>
        </tr>
    `
 
    
    })
    
   document.getElementById("prdata").innerHTML = br
}
dis()

 const del=(id)=>{
    let data= JSON.parse(localStorage.getItem("productdetails"));
    
    
    let deldata=data.filter((i)=>{
        return i.id!=id;
    })
    let j=1;
    let arr=deldata.map((i)=>{
        i.id=j++;
        return i;
    })
    localStorage.setItem("productdetails", JSON.stringify(arr))
    dis()
}
const edi=(id)=>{
    let prodata=JSON.parse(localStorage.getItem("productdetails"))
    let edidata =prodata.find((i)=>{
          
        return i.id==id
     })    
     
     
     proname.value= edidata.productname;
     price.value=edidata.price

    
     selcat.value=id;   
 }

 const saveimg=(event)=>{
    var reader=new FileReader();
    reader.onload=function () {
        var output=document.getElementById("proimg");
        output.src=reader.result;
        localStorage.setItem("proimg",reader.result)

    };
    reader.readAsDataURL(event.target.files[0]);
}