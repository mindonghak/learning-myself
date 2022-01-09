
function makestory(){
    var inputname = prompt('주제 이름을 적어주세요');
    var story = new Story(inputname); //story라는 변수가 함수나가면서 사라짐
    story.storage();
    story.hyperlink();
    
}

function removestory(){
    var removename = prompt('삭제할 이름을 써주세요');
    document.getElementById(removename).remove();

    localStorage.removeItem(removename);
}

function clearstory(){
    localStorage.clear();
}

class Story{
    constructor(name){
        this.name = name;
        var newstory = document.createElement('button');
        newstory.innerHTML = this.name;
        newstory.setAttribute("class","storybutton");
        newstory.setAttribute("id",this.name);
        document.getElementById("section").appendChild(newstory);
        this.node = newstory;
    }
    hyperlink(){
        var url = prompt('url입력');
        var newa = document.createElement('a');
        newa.setAttribute('href',url);
        newa.appendChild(this.node);
        document.getElementById('section').appendChild(newa);
        localStorage[this.name]=url;
    }
    storage() {
        localStorage.setItem(this.name,this.name);
    }


}

for(var i=0; i< localStorage.length; i++){
    var key = localStorage.key(i);
    var value = localStorage.getItem(key);
    var story = new Story(key);
    var newa = document.createElement('a');
    newa.setAttribute('href',value);
    newa.appendChild(story.node);
    document.getElementById('section').appendChild(newa);
}


