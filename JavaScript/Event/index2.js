const cd1=document.getElementById("child1");
const cd2=document.getElementById("child2");
const cd3=document.getElementById("child3");

const prt=document.getElementById("parent");

// let func= function(e){
//      console.log(e.target);
//     e.target.textContent="I am triggerd";
// }

function handleclick(e){
     console.log(e.target);
     e.target.textContent="i am triggerd";
     prt.removeEventListener("click",handleclick);

}

prt.addEventListener("click",handleclick);
// prt.removeEventListener("click",handleclick);
// console.log(typeof prt.textContent);
