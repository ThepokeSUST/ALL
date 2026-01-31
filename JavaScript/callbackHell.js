



function placeorder(cb){
       
    console.log("Please Make payment");

    setTimeout(()=>{
         console.log("payment successfull");
         cb();
    },2000);
} 


function preparingOrder(cb){
    console.log("Preparing your Order");

    setTimeout(()=>{
        console.log("Your Order is ready for dispatch");
        cb();
    },3000);
}

function pickup(cb){
      
    console.log("Assigning ridder");

    setTimeout(()=>{
        console.log("ridder assigned");
        // cb();
    },2000);
}
placeorder(()=>{
    preparingOrder(()=>{
        pickup();
    });
});
// preparingOrder();