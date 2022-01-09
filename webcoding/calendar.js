
function makecalendar(today){
    var year = today.getFullYear();
    var month = today.getMonth();
    var last = new Date(year, month+1, 0);
    var lastdate = last.getDate();
    var first = new Date(year, month, 1);
    var firstday = first.getDay();
    var firstdate = first.getDate();
    var myfirstday = (firstday+6)%7; //월요일이 0 , 일요일이 6 이 되게함
    var start = new Date(year, month, 1-myfirstday);
    var startdate = start.getDate();
    var countingdate = startdate;
    var arr = Array();
    for(var i=0;i<42;i++){
        if(i==0){
            for(var j=0;j<myfirstday;j++){
                arr.push(countingdate);
                countingdate++;
                i++;
            }  
            countingdate =  1;
        }
        if(i-myfirstday==lastdate){
            countingdate = 1;
        }
        arr.push(countingdate);
        countingdate++;
    }
    $(function(){
        $(".date td").each(function(i){
            $(this).text(arr[i]);
        });
        $("#year").text(year);
        $("#month").text(month+1);
    }); 
}

var today = new Date();
makecalendar(today);
$(function(){
    $("#leftcalbut").click(function(){
        var thisyear = today.getFullYear();
        var lastmonth = today.getMonth()-1;
        var lastmonthdate = new Date(thisyear, lastmonth,1);
        makecalendar(lastmonthdate);
        today = lastmonthdate;
    });
})

$(function(){
    $("#rightcalbut").click(function(){
        var thisyear = today.getFullYear();
        var lastmonth = today.getMonth()+1;
        var lastmonthdate = new Date(thisyear, lastmonth,1);
        makecalendar(lastmonthdate);
        today = lastmonthdate;
    });
})







