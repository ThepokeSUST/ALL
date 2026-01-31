
let a=null;
let b=10;

console.log(a??=b);

a=undefined;
b=null;
b=undefined;
console.log(a??=b);

let str1=new String("sust");
let str="sust";

console.log(str==str1);
console.log(str===str1);
console.log(typeof str , typeof str1);


console.log("dipok".length);
