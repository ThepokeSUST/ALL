

console.log(" start")

async function greeting(){
    return "hellow";
}
let hello=greeting();
console.log(hello);

hello.then((data)=>{
     console.log(data);
});

async function greeting2() {
     
     return new Promise((rs,rj)=>{
          let rn=Math.floor((Math.random()*10));
          

          if(rn==2){
            rj("error in greeting-2"+` ${rn}`);
          }
          else
            rs("hellow2__->"+` ${rn}`);
        rs("hellow2_||_->"+` ${rn}`);
     }); 
}

let helloo2=greeting2();


helloo2.then(data=>{
    console.log(data,"''''''''''''");
}).catch((er)=>{
    console.log(er,"KKKKKKKKKKKKKKKKKK");
});
console.log(" end");
