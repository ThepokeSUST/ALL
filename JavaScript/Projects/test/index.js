


let form=document.getElementById("form");

form.addEventListener("submit",(e)=>{
          e.preventDefault();
       let frm= new FormData(form);
       console.log(typeof  frm);

       for(let ele of frm.entries()){
        console.log("................")
        console.log(ele);
        console.log(typeof ele)
        console.log("................")




       }





       console.log("______________________");
       console.log(typeof form.q1);
       console.log(form.q1.value);

       console.log(typeof form.q0);
       console.log(form.q0);





       let arr=[5,7,9];

       console.log("arrrays",typeof arr);

});