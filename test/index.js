function validate() {
    var check = document.getElementById("Name").value.length;
    if (check > 0 && check < 10 && check != isNaN) {
        document.getElementById("check").innerHTML = "Sucess";
    } else {
        alert("No!");
    }
}