const form = document.querySelector("form");
const result = document.getElementById("res");

form.addEventListener("submit", (e) => {
  e.preventDefault(); // stop reload

  const boy = document.getElementById("boyname");
  const girl = document.getElementById("girlname");

  const bname = boy.value.trim();
  const gname = girl.value.trim();

  // 🔴 Validation
  if (bname === "" || gname === "") {
    showResult("Please enter both names ❌", "error");
    return;
  }

  const res = Math.pow(bname.length + gname.length, 3) % 101;

  showResult(`❤️ Love Result: ${res}%`, "success");
});

// 🎯 reusable function
function showResult(message, type) {
  result.textContent = message;
  result.className = ""; // reset

  if (type === "error") {
    result.classList.add("error");
  } else {
    result.classList.add("success");
  }

  result.classList.add("show");
}
