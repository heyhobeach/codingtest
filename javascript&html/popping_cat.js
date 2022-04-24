function plus(){
  const result=document.getElementById('number');
  var number=result.innerText;

  number=parseInt(number)+1;

  result.innerText=number;
}


function minus(){
  const result=document.getElementById('number');
  var number=result.innerText;

  number=parseInt(number)-1;

  result.innerText=number;
}