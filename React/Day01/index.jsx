



console.log("start");


document.body.style.backgroundColor="green";
document.body.style.color="white";


//  background-color: black;
document.body.style.cssText=`
    background-color:orange;
`;




const ele1=React.createElement('h1',null,"this is my first h1");

const divroot=ReactDOM.createRoot(document.getElementById("first"));

divroot.render(ele1);





function App(){

    return (
        <>
          
          <h2 style={{backgroundColor:"green"}}>
            this is our React Component
          </h2>
        
        </>
    )
}



function app(){
  return (
    <h1>FAHHHHHHHHHHHH</h1>
  )
}

const ele2=<App></App>

divroot.render(ele2);



// const ele3=app();

const ele3=<App></App>

console.log(typeof ele3)

divroot.render(ele3);

console.log("end");
