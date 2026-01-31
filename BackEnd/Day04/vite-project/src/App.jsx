


function App(){
       let count=0;

       function increaseNumber(){
        count++;
        document.querySelector('p').textContent=`Counter: ${count}`
       }

       return (
        <>
          <p>
            Counter: {count}
          </p> 
          <button onClick={increaseNumber}>Increment</button>
        </>
       )
}  


export default App;