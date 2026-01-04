
console.log("..........");
document.getElementsByTagName("form")[0].id="form";
const form=document.querySelector("form");
console.log(form);
console.log(form.id);

form.addEventListener("submit",(e)=>{
   console.log(e.target);
  // e.stopPropagation();
  
  const boy=document.getElementById("boyname");
  const girl=document.getElementById("girlname");

  const bname=boy.value;
  const gname=girl.value;
  console.log("_______________");
  console.log(form.boy,form.girl);

  console.log("_______________")

  const l1=bname.length;
  const l2=gname.length;

  const res=Math.pow(l1+l2,3)%101;

  const result=document.getElementById("res");
  result.textContent=`Result:${bname}:3 ${gname}  ${res}%`;
  e.preventDefault();
  form.reset();

})