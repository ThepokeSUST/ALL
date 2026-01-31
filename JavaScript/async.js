



 async function github(){
      
      try{
        const p1= await fetch("https://api.github.com/users");
      const p2=await p1.json();
      console.log(p2);
      }
      catch(error){
        console.log("Error");
      }

    //  const p1= await fetch("https://api.github.com/users");
    //   const p2=await p1.json();
    //   console.log(p2);

      console.log("end'''''''''''''''''''''");   

 }


 github();

//  const p1=  await  fetch("https://api.github.com/users");

//  console.log("helllo");
//  console.log(p1)