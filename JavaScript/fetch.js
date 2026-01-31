

// let photos=document.getElementById('photos');


let arr= fetch("https://api.github.com/users").then((response)=>{
    return response.json();
}).then((data)=>{
   console.log("................")
//    console.log(data);
  
const photos =document.getElementById("photos");
// const body=document.getElementsByTagName("body");
// body[0].style.backgroundColor="black";

// document.body.style.backgroundColor="black";

const body= document.getElementsByTagName("body");
body[0].style.backgroundColor="black";
   for(const x of data){
     

    const created=document.createElement('img');
    created.src=x.avatar_url;
    created.style.height="50px";

    created.style.width="50px";

    photos.append(created);
   }
   

});

// console.log(arr);