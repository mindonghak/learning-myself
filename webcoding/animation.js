var red = 130;
var green = 255;
const change = 10;
document.getElementById('leftcalbut').addEventListener('click',function(){
    red += change;
    //green -= change;
    document.getElementById('calendar').style.backgroundColor = 'rgb(' + red + ', '+ green + ', 100)';
})

document.getElementById('rightcalbut').addEventListener('click',function(){
    red -= change;
    //green += change;
    document.getElementById('calendar').style.backgroundColor = 'rgb(' + red + ', '+ green + ', 100)';
})