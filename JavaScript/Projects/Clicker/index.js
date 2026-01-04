


const body=document.body;

let colors=["red","green","blue","orange",'yellow'];
let colorslen=colors.length;
body.style.backgroundColor="black";
console.log("'''''''");
body.addEventListener("click",(e)=>{
   console.log(e.clientX,e.clientY);
   // body.style.backgroundColor="red";
   let div1=document.createElement("div");

   // body.appendChild(div1);
   div1.classList.add("circle");
   
   let idx=Math.floor(Math.random()*colorslen);
   div1.style.backgroundColor=colors[idx];

   div1.style.top=`${e.clientY-25}px`;
   div1.style.left=`${e.clientX-25}px`;

   div1.textContent="Hi";

   body.append(div1);
   
setTimeout(()=>{
   div1.remove();
},4000);
   

   


});
