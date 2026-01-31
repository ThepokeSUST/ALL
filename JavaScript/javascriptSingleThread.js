



// console.log("first");
// console.log("second");

// setInterval(()=>{
//    console.log("hellow");
// },10);

// console.log("third");

// for(let i=0;i<=10000;i++){
//     console.log("kkkkkkkkkkkkkkk",i);
// }



console.log("one");
console.log("two");

setTimeout(()=>{
    console.log("______________________");
},2000);


setTimeout(()=>{
    console.log(".....................");
},2000);


console.log("three");

for(let i=0;i<10;i++){
    console.log("kkk",i);
}


fetch("https://api.github.com/users").then((e)=>{
      console.log("this is github");
      console.log(typeof e);
      console.log(e);
});