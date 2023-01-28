function resister(){

    let title = document.getElementById('1').value;
    let fName = document.getElementById('2').value;
    let lName = document.getElementById('3').value;
    let position = document.getElementById('4').value;
    let company = document.getElementById('5').value;
    let aInformation = document.getElementById('6').value;
    let country = document.getElementById('7').value;
    let code = document.getElementById('8').value;
    let mNumber = document.getElementById('9').value;
    let email = document.getElementById('10').value;

    var x = 0;
    if(title.length == 0){
        document.getElementById('1').placeholder = "!!!title"
        x++;
    }
    if(fName.length == 0){
        document.getElementById('2').placeholder = "!!!First Name";
        x++;
    }
    if(lName.length == 0){
        document.getElementById('3').placeholder = "!!!Last Name";
        x++;
    }
    if(position.length == 0){
        document.getElementById('4').placeholder = "!!!Position";
        x++;
    }
    if(company.length == 0){
        document.getElementById('5').placeholder = "!!!Company";
        x++;
    }
    if(aInformation.length == 0){
        document.getElementById('6').placeholder = "!!!Additional Information";
        x++;
    }
    if(country.length == 0){
        document.getElementById('7').placeholder = "!!!Country Name";
        x++;
    }
    if(code.length == 0){
        document.getElementById('8').placeholder = "!!!Code+";
        x++;
    }
    if(code.length > 0){
        let ln = code.length;
        if((ln < 3 || ln >=9)){
            document.getElementById('8').value = "";
            document.getElementById('8').placeholder = "invalid";
            x++;
        }else{
            let l = code.slice(0,1);
            let m = code.substring(1, ln);
            if(l != "+"){
                document.getElementById('8').value = "";
                document.getElementById('8').placeholder = "invalid";
                x++;
            }else if(isNaN(m)){
                document.getElementById('8').value = "";
                document.getElementById('8').placeholder = "invalid";
                x++;
            }
        }
    }
    if(mNumber.length >= 0){
        if((mNumber.length == 0)){
        document.getElementById('9').placeholder = "!!!Mobile Number";
        x++;
        }else if((isNaN(mNumber))){
            document.getElementById('9').value = "";
            document.getElementById('9').placeholder = "invalid mobile number";
            x++;
        }else{
            let v = Number(mNumber);
            if(!(Number.isInteger(v))){
                document.getElementById('9').value = "";
                document.getElementById('9').placeholder = "invalid mobile number";
                x++; 
            }else if(Number.isInteger(v) && mNumber.length > 10){
                document.getElementById('9').value = "";
                document.getElementById('9').placeholder = "invalid mobile number";
                x++; 
            }
        }
    }
    if(email.length == 0){
        document.getElementById('10').placeholder = "!!!Email";
            x++; 
    }
    if(email.length > 0){
        let v = document.getElementById('10').value;
        let m = v.length;
        if(!(v.endsWith("@gmail.com")) && m <= 10){
            document.getElementById('10').value = "";
            document.getElementById('10').placeholder = "invalid email";
            x++;
        }
    }

    if(x == 0 && document.getElementById('ck').checked){
        document.getElementById("11").innerHTML = "";
        document.getElementById("12").innerHTML = "resistration is completed.<br> Try another resistration";
        document.getElementById('1').value = "";
        document.getElementById('2').value = "";
        document.getElementById('3').value = "";
        document.getElementById('4').value = "";
        document.getElementById('5').value = "";
        document.getElementById('6').value = "";
        document.getElementById('7').value = "";
        document.getElementById('8').value = ""; 
        document.getElementById('9').value = "";
        document.getElementById('10').value = "";
        
    }else if(x == 0 && !(document.getElementById('ck').checked)){
        document.getElementById("12").innerHTML = "";
        document.getElementById("11").innerHTML = "please select checkbox"; 
    }else if(x > 0 && !(document.getElementById('ck').checked)){
        document.getElementById("11").innerHTML = "please select checkbox";     
    }
    else {
        document.getElementById("11").innerHTML = "";
        document.getElementById("12").innerHTML = "";
    }
}