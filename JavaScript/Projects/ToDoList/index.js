let h1=document.getElementById("h1");



let form=document.getElementById("form");

form.addEventListener("submit",(e)=>{
    // let task=document.getElementById
    // ("task");
    e.preventDefault();
    let task=document.querySelector("input");
    let taskstr=task.value.trim();
    let alltask=document.getElementById("alltask");
   

    if(taskstr=="")
        return;
     let parent=document.createElement("div");
    let tsk=document.createElement("span");
    tsk.textContent=taskstr;
  console.log("..........")
    let deletebutton=document.createElement("button");
    deletebutton.textContent="Delete";
    let done=document.createElement("button");
    done.textContent="Done";
    done.style.marginLeft="10px"
    done.style.marginRight="10px"


    parent.append(tsk,done,deletebutton);
    
    alltask.append(parent);

    console.log(taskstr);

    alltask.style.marginTop="50px"
    
    done.addEventListener("click",(e)=>{
        tsk.style.textDecoration="line-through";
    })
    deletebutton.addEventListener('click',(e)=>{
        parent.remove();
    })
    form.reset();
    console.log("kkkkkkkkkkk");
});
