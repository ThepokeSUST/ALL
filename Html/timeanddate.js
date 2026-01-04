const time= Date();
console.log(time);
const milisec= new Date();
console.log(milisec);

let ms=Date();
console.log(ms);

console.log(Date.now());


ms=Date.now();
console.log(typeof ms, ms);

console.log(new Date(0));
let ftime=new Date(0);


console.log(ftime.toLocaleString());
console.log(ftime.toLocaleTimeString());
let destination=new Date(2028,2,12);
console.log(destination);
console.log(destination.toLocaleDateString());
console.log(destination.toDateString());
console.log(destination.toTimeString());
console.log(destination.toLocaleDateString());
console.log(destination.toDateString());
console.log(new Date(2028,2,12));

console.log(destination.getTime());

let tt= Date.now();
console.log(tt);
console.log(new Date(0));
console.log(Date.now(0));
let ttt=Date.now(0);
console.log(ttt);
console.log(new Date(2028,2,12).getTime());
console.log(new Date(2028,2,12));


