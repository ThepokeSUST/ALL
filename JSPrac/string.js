


// // let str="dipok";
// // let str2="dipok";
// // console.log(str==str2);
// // console.log(str===str2);

// // let str3=new String("dipok");

// // console.log(str==str3);
// // console.log(str===str3);

// // console.log(new Date("1970-01-01"));
// // let s=new Date("1970-01-01");
// // console.log(typeof s);

// // console.log(Number(s));

// // console.log(new Number("2323"));
// // let n=new Number("2u303")
// // console.log(n);

// add();

// function add(){
//     console.log("this is add");
// }

// // add1();

// let add1=function(){console.log("this is add1")};
// let add2=new Function("{console.log(\"this is add2\");return 4}");

// let a=add2(3);
// console.log(a);


// function myfunction(a,b=8){
//    console.log(arguments.length);
//    console.log(a,b);
// }

// myfunction(1,9,4,5,6);

// console.log(myfunction.toString());
// console.log(add1.toString());
// console.log(add2.toString())

// "use strick"

// console.log(this);


function person(name,age){
      
    this.name=name;
    this.age=age;
    this.print=function(){
        console.log(this.name,age);
    }
}

const p1=new person("dipok",20);
p1.print();
const p2=new person("dipu",23);
p2.print();