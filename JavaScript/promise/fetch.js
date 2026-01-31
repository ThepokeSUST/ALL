

console.log("started");



const p1=fetch("https://api.github.com/users");
  

let flag=false;
p1.then((res)=>{
      flag=true;
    return res;
})

// for(let i=9;i<1000;i++)
//     console.log(i);
const p2=p1.then((res)=>{
      return res.json();
});
setTimeout(()=>{
    if(flag){
    console.log("............");
    console.log(p1);
    console.log("............");
    console.log(p2);
    console.log(p1)

}
},2000);




console.log("ended");