
class ski{
    constructor(skiinfo){
        this.id = skiinfo.id;
        this.name = skiinfo.name;
        this.url = skiinfo.url;
        this.busfree = skiinfo.busfree;
        this.busurl = skiinfo.busurl;
        this.slopemap = skiinfo.slopemap;
        this.button = document.getElementById(this.id);
    }

    static BusFree(){
        busfreeski = skiarr.filter(item => item.busfree);
    }
    static SkiHide(){
        skiarr.forEach(item => item.button.style.visibility = 'hidden');
    }
    static SkiShow(){
        skiarr.forEach(item => item.button.style.visibility = 'visible');
    }
    static BusFreeShow(){
        this.SkiHide();
        busfreeski.forEach(item => item.button.style.visibility = 'visible');
    }
    Setski(){
        var tempurl = this.url;
        document.getElementById('skititle').innerHTML = this.name + "<br>"+"main";
        document.getElementById('skititle').addEventListener("click",(function(){location.href=tempurl}));
        var tempbusurl = this.busurl;
        document.getElementById('skibus').innerHTML = this.name + "<br>" + "셔틀버스 예약";
        document.getElementById('skibus').addEventListener("click",(function(){location.href=tempbusurl}));
        var tempslopemap = this.slopemap;
        document.getElementById('slopemap').innerHTML = this.name + "<br>" + "슬로프맵";
        document.getElementById('slopemap').addEventListener("click",(function(){location.href=tempslopemap}));
    }
}


var skiarr = new Array();

var busfreeski = new Array();


var phoenix = new Object();
phoenix.id = 'phoenix';
phoenix.name = '휘닉스파크';
phoenix.url = 'https://phoenixhnr.co.kr/page/main/pyeongchang?q%5BhmpgDivCd%5D=PP&page=1&size=4';
phoenix.busfree = false;
phoenix.busurl = 'http://skibus.purplebus.co.kr/Pp/';
phoenix.slopemap = 'https://phoenixhnr.co.kr/static/pyeongchang/snowpark/slope-lift';
var Phoenix = new ski(phoenix);

skiarr.push(Phoenix);

var vivaldi = new Object();
vivaldi.id = 'vivaldi';
vivaldi.name = '비발디파크';
vivaldi.url = 'https://www.sonohotelsresorts.com/vp';
vivaldi.busfree = true;
vivaldi.busurl = 'https://www.sonohotelsresorts.com/daemyung.vp.utill.09_03_02_01.ds/dmparse.dm';
vivaldi.slopemap = 'https://www.sonohotelsresorts.com/img/vp/images/map/vivaldipark_tour_map.jpg';
var Vivaldi = new ski(vivaldi);

skiarr.push(Vivaldi);

var high1 = new Object();
high1.id = 'high1';
high1.name = '하이원';
high1.url = 'https://www.high1.com/ski/index.do';
high1.busfree = true;
high1.busurl = 'https://www.high1.com/www/contents.do?key=2194';
high1.slopemap = 'https://www.high1.com/ski/slopeView.do?key=748&mode=p';
var High1 = new ski(high1);

skiarr.push(High1);

var alpensia = new Object();
alpensia.id = 'alpensia';
alpensia.name = '알펜시아';
alpensia.url = 'https://www.alpensia.com/ski/main.do';
alpensia.busfree = false;
alpensia.busurl = 'https://www.alpensia.com/guide/directions-public.do';
alpensia.slopemap = 'https://www.alpensia.com/ski/introduction-slope.do';
var Alpensia = new ski(alpensia);

skiarr.push(Alpensia);

var yongpyong = new Object();
yongpyong.id = 'yongpyong';
yongpyong.name = '용평스키장';
yongpyong.url = 'https://www.yongpyong.co.kr/kor/skiNboard/introduce.do';
yongpyong.busfree = false;
yongpyong.busurl = 'http://skibus.purplebus.co.kr/Yp/';
yongpyong.slopemap = 'https://www.yongpyong.co.kr/kor/skiNboard/slope/slopeMap.do';
var Yongpyong = new ski(yongpyong);

skiarr.push(Yongpyong);


ski.BusFree();
console.log(skiarr);