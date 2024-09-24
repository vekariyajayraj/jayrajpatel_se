            
let ul='<a href="#"><button class="navbtn">Home</button></a>';
let al=''
const show=()=>{
    let navdata=JSON.parse(localStorage.getItem('catdata'));
    navdata.map((i)=>{
        ul+=`<a href="#"><button class="navbtn">${i.catname}</button></a>`
    })
    document.getElementById("navdiv").innerHTML=ul
    let prodetail=JSON.parse(localStorage.getItem('productdetails'))
    prodetail.map((j)=>{
        al+=`<div class="prodetail">
        <p>${j.productname}</p><br>
        <p>${j.price}</p>
      </div>`
    })
    document.getElementById('productdata').innerHTML=al
}
show()


let tr= '<option>--Select Category--</option>';
let proname=document.getElementById("proname");
let price=document.getElementById("price");
let selcat=document.getElementById("selectcat");
let file=document.getElementById("filesec")
let pr ='';
const saveimg=()=>{
    var reader=new FileReader();
    reader.onload=function () {
        var output=document.getElementById("proimg");
        output.src=reader.result;
        localStorage.setItem("proimg",reader.result)

    };
    reader.readAsDataURL(event.target.files[0]);
}
const getcat=()=>{
    let catdata=JSON.parse(localStorage.getItem("catdata"));
    
    
    catdata.map((i)=>{
        tr += `<option value=${i.no}>${i.catname}</option>`;
    })

    document.getElementById("selectcat").innerHTML = tr;
    
}
getcat()
let obj=[]
const addproduct=()=>{
    
    let prodata=JSON.parse(localStorage.getItem("productdetails"))
    let count=(prodata!=null)?prodata.length+1:1;
    let catdata=JSON.parse(localStorage.getItem("catdata"))
    let img=localStorage.getItem("proimg");
    let catid=document.getElementById("catid")
    if (catid.value!='') {
        let updata=data.map((i)=>{
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
    localStorage.setItem("productdetails",JSON.stringify(obj));
    proname.value=''
    price.value=''
    console.log(obj);
    
    
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
        pr += `
        <tr>
            <td>${i.id}</td>
            <td>${i.productname}</td>
            <td>${i.img}</td>

            <td>${i.catname}</td>
            <td>${i.price}</td>
            <td><button style="background-color:pink;" onclick="edi(${i.id})">Edit</button>
            <button style="background-color:skyblue" onclick="del(${i.id})">Delete</button></td>
        </tr>
    `
 
    
    })
    
   document.getElementById("prdata").innerHTML = pr
            
            
    }
    
 dis();
 const edi=(id)=>{
    let prodata=JSON.parse(localStorage.getItem("productdetails"))
    let edidata =prodata.find((i)=>{
          
        return i.id==id
     })    
     
     
     proname.value= edidata.productname;
     price.value=edidata.price

    
     selcat.value=id;   
 }
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
    
    
    
    



