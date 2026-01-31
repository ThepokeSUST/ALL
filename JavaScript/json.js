


let ob1={
      
    name: "dipok",
    age:22,
    arr:[1,2,3,4,5],
    un:undefined,
    country: "bangladesh",
    func1:function(){
        console.log("hello guys");
    }
}

console.log(ob1);

 let json=JSON.stringify(ob1);

 console.log(typeof json);
 console.log(json);





 let ob2={
    name:"okki",
    obb:{
        ok:"yug",
        a:undefined,
    },

    iu:undefined
 }



 let str=`{
    "name": "dipok",
    "un":"undefined"
   
 }
 `
console.log(JSON.parse(str));
 console.log(JSON.stringify(ob2));


 console.log(typeof JSON.parse(str).un);