


let arr=[1,2,3,4,5,6,7,8,9];
let arr2=arr.map(a=>a*a)
console.log(arr);
console.log(arr2);

let mp= new Map();
mp.set(9,"dipok");
console.log(mp);

mp=new Map([[2,4],["dipok",0]]);
console.log(mp);


let st=new Set;
st.add(9);
console.log(st);


st.add(...arr);
console.log(st);
st=new Set(arr);
console.log(st);
st.add(1);
console.log(st) 


st.clear();
st= new Set([...arr,5]);
console.log(st);