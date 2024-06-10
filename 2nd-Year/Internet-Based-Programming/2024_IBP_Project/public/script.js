const hamBtn = document.querySelector("#nav-btn-id");
const navBar = document.querySelector("#nav-bar");
hamBtn.addEventListener("click", () => {
  window.scrollTo(0, 0);
  navBar.classList.toggle("opened");
  document.body.classList.toggle("disable-scroll");
});