console.log("hello script");

const newElement=document.createElement("h4");

newElement.textContent="iamh2";
newElement.style.backgroundColor="red";
console.log(newElement);
document.getElementsByTagName("h1")[0].id="first";

let hone=document.getElementById("h1");

console.log(hone);
hone=document.getElementById("first");
console.log(hone);

hone.after(newElement);
console.log(typeof newElement);
console.log(".........");
console.log(typeof hone);


hone.style.fontSize="50px"
hone.style.backgroundColor="black";
hone.style.color='white';

console.log(".........");


let ho=document.getElementById("first");
console.log("___________");
let ll=document.getElementsByTagName("h1");
console.log("/////////////");
console.log(ll.length)
console.log(ll[0].getAttribute("id"));
console.log(ll[0]);

console.log(ho);
console.dir(ho);

let newEle2=document.createElement("div");
newEle2.style.backgroundColor="orange";
newEle2.style.color="black";
newEle2.textContent="Dipok";

ho.after(newEle2);

newEle2.className="div1";
console.log(newEle2);
newEle2.className+=" div2";
console.log(newEle2);
newEle2.classList.add("div3");
console.log(newEle2);
newEle2.style.display="inline";


console.log(typeof newEle2.getAttribute("class"));


newEle2.setAttribute(1,"dipok");
console.log(newEle2.getAttribute(1));

newEle2.style.borderRadius="25%"




let list=document.getElementById("ul");
console.log(list);

let newli=document.createElement("li");
newli.textContent="licu";
list.append(newli);

console.log(document.getElementsByTagName("ul"));
console.log(list);
console.dir(list);


// list.prepend((document.createElement("li").textContent="kola"));



let i1=document.createElement("li");
i1.textContent="kola";
list.append(i1);


let lis=document.getElementsByTagName("li");
console.log(lis)

for(let ele of lis){
    ele.style.color="orange";
}

let angur=document.createElement("li");
angur.textContent="angur";
angur.style.color="red";
angur.style.backgroundColor="orange";

lis=document.getElementById("ul");
console.log(lis);
lis.append(angur);



function handling(){
    let hone=document.getElementById("first");
    hone.textContent="Good night";
    hone.style.backgroundColor="#98F5F9";
    hone.style.color="black";

}
hone=document.getElementById("first");

hone.onclick=function handle(){
     hone.textContent="Good night";
    hone.style.backgroundColor="#98F5F9";
    hone.style.color="red";
}


hone.onclick=function handle(){
     hone.textContent="Good night";
    hone.style.backgroundColor="#98F5F9";
    hone.style.color="green";
}



hone.addEventListener("click",()=>{
    let ele=document.getElementById("first");
    ele.style.backgroundColor="#325D5F"
})

hone.addEventListener("mouseenter",()=>{
    let ele=document.getElementById("first");
    ele.style.backgroundColor="#00ff62ff";
    hone.textContent="hello cutei";

})

