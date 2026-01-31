

let rr=[1,2,3,4,'d'];
console.log(typeof rr);
console.log(rr instanceof Array);
console.log(Array.isArray(rr));
console.log(typeof rr[rr.length-1]);


console.log(new Array(4,5));

let brr=new Array(40);
console.log(brr.toString());
console.log(brr[2]);


console.log();
let arr=[12,23,23,243];
brr=[[223,343,12,12],23,34];
console.log(brr);
let  crr=arr.concat(...brr);
console.log(crr);

console.log(brr.flat())
console.log(brr)
console.log();
console.log(crr);
console.log("_________________________");
console.log(crr);
let drr=crr.flatMap((x)=>[x,x*2]);
console.log(drr);
