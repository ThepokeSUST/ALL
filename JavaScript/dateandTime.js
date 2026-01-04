


// let date=new Date();
// console.log(date);
// console.log(date.toString())




// let now=Date.now();

// console.log(now);


// console.log(new Date(0));




// var date=new Date();

// console.log(date);
// date=Date();




// console.log();


// let user={
//     name: "dipok"
// }

// let u=user;
// console.log(u);

// //let u2=new user();   //new used only with constructor function or class

// function user2(name){
//      this.name=name;
//        console.log(this.name,name);
// }

// user2("ok dipu");
// user3=new user2(56);
// console.log(user3);


let func1=function(a=0,b){
    console.log("______",a,b);
}

console.log(`funtion........ ${func1(44,9)}`);
console.log(`funtion........ ${func1(undefined,9)}`);
console.log(`funtion........ ${func1(null,9)}`);  
console.log(`funtion........ ${func1("",9)}`);

function func2(a,b){

    console.log("func2..........   ",a,b);
     
}




console.log();
console.log("i ",func2(null,null));
console.log("ii ",func2(undefined,""));

let f=func2;
f(8,7);



console.log("___________")

let f1=function(){
      console.log("f1");
}

function f2(){
    this.oo=90;
    let u={
        name:"ok",
    }
    console.log("f2",this.oo,oo);
    let da=67;
}


f1();
f2();
console.log("...");

f22=new f2();
console.log("...");

console.log(typeof f22);
console.log(typeof f2);
console.log("...");
f11=new f1;
console.log("...");

console.log(f22);




