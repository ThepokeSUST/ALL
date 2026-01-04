



const cd=document.getElementById("child");
console.log(cd);
const gd=document.getElementById("grand");
const pd=document.getElementById("parent");

gd.addEventListener("click",(e)=>{
        gd.style.backgroundColor="black";
        console.log("this is grand")
        console.log(e.target);
},true);

cd.addEventListener("click",(e)=>{
      
     cd.style.backgroundColor="white";
     console.log("this is child");
     console.log(e.target);
})