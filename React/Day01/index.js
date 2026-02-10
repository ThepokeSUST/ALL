

// const fs = require('fs')

// fs.writeFile("fist.txt","Dipok",(e)=>{
     
//      if(e)
//         console.log(e);
//     else 
//         console.log("done");
// })



// import React from "react";
// import ReactDOM from 'react-dom/client';

import React from "react";
import ReactDOM from "react-dom/client";

// const React = require('react');
// const ReactDOM= require("react-dom/client");

const first=document.body;

console.log(first);


const ele1=React.createElement("h1",{id:"h1"},"DIpok");
const ele2=React.createElement("h1",{id:"h1"},"DIpU");



// const container= React.createElement("div",{id:"container"},ele1,ele2);
const container= React.createElement(React.Fragment,null,ele1,ele2);



const froot=ReactDOM.createRoot(document.getElementById('root'));

// froot.render(ele1);
// froot.render(ele2);
froot.render(container);
