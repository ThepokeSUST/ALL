



let pro=new Promise((resolve,reject)=>{
       resolve("okay");
       reject("not okay");
       console.log("last of the promise");
})



pro.then((result)=>{
     console.log(result);
}).catch((result)=>{
    console.log(result);
})



console.log(19+"dipok");