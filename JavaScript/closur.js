



// // if(true){
// //     let c=90;
// //     console.log(c);
// //     var d=89;

// // }

// // // console.log(c);
// // console.log(d);



// // function f(){
      
// //       let count=0;

// //       function f1(){
// //         // console.log("hellow");
// //         count++;
// //         return count;
// //       }
// //       return f1;

// // }



// // f2=f();
// // console.log(f2());
// // console.log(f2());




// let user={
       
//        name:"dipok",
//        getname: function(){
//            console.log("_________");
//            console.log(this);
//            console.log("_________");

//            return this.name;
//        }
// }



// console.log(user);
// console.log("............");
// console.log(user.getname());
// console.log("............");



// function greeting(){
     
//     // this.l=90;
//     let l=99;
//     console.log("Namashte All..");
//     // return greeting;
//     console.log("######");
//     // console.log(this.l,l);
//     console.log(this);
//     console.log("######");



//     function innerGreeting(){
//         console.log("inner Namashte");
//         console.log(l++);

//     }
//     this.fff=innerGreeting;
//     // innerGreeting();
// }

// let f=greeting;
// console.log(typeof f,typeof greeting);

// console.log("**********");
// let ff=new greeting();
// console.log(typeof ff);
// console.log(ff);

// console.log(ff.fff());
// console.log(ff.fff());
// console.log(ff.fff());
// console.log(ff.fff());
// console.log(typeof ff);






const user={
      
        balance:600,

        deposite: function(tk){
             
            if((typeof tk)=="number" && tk>0){
                this.balance+=tk;

            }
            console.log("total:",this.balance);
        },

        withdraw: function(tk){
             if(typeof tk=="number" && tk>0 && this.balance>=tk){
                  this.balance-=tk;
                  console.log("withdraw successfull");
             }
             console.log("total:",this.balance);
        }

}

user.deposite(80);
user.withdraw(700);
// let user2=new user;
// console.log(typeof user,typeof user2)

let f=function(){
      
      this.balance=90;
      this.deposite=function(tk){
           
            if((typeof tk)=="number" && tk>0){
                this.balance+=tk;

            }
            console.log("total:",this.balance);
            
      }

      this.withdraw=function(tk){
             if(typeof tk=="number" && tk>0 && this.balance>=tk){
                  this.balance-=tk;
                  console.log("withdraw successfull");
             }
             console.log("total:",this.balance);
        }

        console.log("funtionnnnnn");

}

console.log(".........");
let u1=new f;
console.log(typeof u1);
console.log(u1);
console.log();

function uuser(){

     this.balance=90;
      this.deposite=function(tk){
           
            if((typeof tk)=="number" && tk>0){
                this.balance+=tk;

            }
            console.log("total:",this.balance);
            
      }

      this.withdraw=function(tk){
             if(typeof tk=="number" && tk>0 && this.balance>=tk){
                  this.balance-=tk;
                  console.log("withdraw successfull");
             }
             console.log("total:",this.balance);
        }

        console.log("funtiouuuuuuuuuuu");

}

let u2=new uuser;
console.log(typeof u2);
console.log(u2);


let fu=function(){

}

function fuc(){
    console.log("ok");
}
console.log(fu);
console.log(fuc);


let u3={
        name: "dipok",
        f: function(){
         console.log("ojj");
       }

}

console.log(u3);

let u31=Object.create(u3);
console.log(typeof u31,typeof u3);
u3.name="dipopppp";
console.log(u31,u3);
u31.age=999;
console.log(u31,u3);
