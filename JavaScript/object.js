


let arr=[12,23,34,"dipok"];
console.log(arr);


arr.name="dipu";
console.log(arr);
console.log(arr[1]);
console.log(arr["name"]);
console.log(arr.name)

console.log(Object.keys(arr));
console.log(Object.entries(arr));


for (const key in arr) {
   console.log(key);
    
    
}

for(let values of arr){
    console.log(values);
}


const user={
    name: "dipok",
    age: 23,
    dept:"cse",
}


console.log(user);

for(let key in user){
    console.log(key,user[key]);
}

// for(let {keys,values} of Object.entries(user)){
      
//     console.log(keys,values);
// }


let {dept:d,name:n,age}=user;
console.log(n,age,d);



// console.log();
// console.log(arr);
// let [a,f,s]=arr;
// console.log(a,f,s);


console.log()
let a=90;
for(let [a,b] of Object.entries(user)){
     console.log(a,b);
}

console.log(a);




const user2={
     name:"dipok",

     innerUser:{

        innerName:"dipu"

     },

     greeting: function(){
            console.log("Hello from",this.name);

     }

}

user2.greeting();
console.log(user2.innerUser.innerName);


console.log();
for(let key in user2){
    console.log(key,user2[key]);
}





