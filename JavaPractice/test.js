

// console.log(x)


// {
//     console.log(x);
//     var x=9;
// }

// console.log(x);


// function add(){
//      var y=8;

// }
// // console.log(y);

// function add2(){
    
    
// }


// {  
//     // console.log(a);
//     let a=89
//     console.log(a);
// }
// // console.log(a)



// let date=new Date();
// console.log("...................")
// console.log(date.toString());
// console.log(date.toISOString())
// console.log(date.toUTCString());
// console.log("...................")

// console.log(date);
// console.log(date.getTime());
// console.log(date.getFullYear())
// console.log(date.getDay())
// console.log(date.getTimezoneOffset());

// let date2=new Date("2026-01-01");
// console.log(date2)
// console.log(new Date('01-01-2026'));

// let d=Date();
// console.log(d);


// console.log(new Date("0"));

// console.log(new Date("2015-03-25T12:00:00-06:00"));
// console.log(new Date("2015-03-25T12:00:00+06:00"));


// let dd=d.getTimezoneOffset();

// console.log(dd);



// let text = "";
// const today = new Date();
// const someday = new Date();


// console.log(today);
// console.log(someday);
// someday.setFullYear(2100, 0, 14);




// if (someday > today) {
//   text = "Today is before January 14, 2100.";
// } else {
//   text = "Today is after January 14, 2100.";
// }

// console.log("end");

let text = ""; 
const today = new Date();
const someday = new Date(2100, 0, 14);

if (someday > today) {
  text = "Today is before January 14, 2100.";
} else {
  text = "Today is after January 14, 2100.";
}

console.log(text);
