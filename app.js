function getNameReson(){
    let name=document.getElementById("inputn").value;
    let reson=document.getElementById("inputr").value;

    document.getElementById("inputn").value="";
    document.getElementById("inputr").value="";

}
function displayQueue(){
    fetch("/Queue")
        .then(response=>response.json())
        .then(data=>{
            
            let list=document.getElementById("queueList");
            list.innerHTML="";

            for(i=0;i<data.length;i++){
                let item=document.createElement("div");

                item.innerHTML=
                <p>
                    <b>$(1+i).${data[i].name}</b>
                    - ${data[i].reson}
                </p>
                ;
                list.appendChild(item);
            }
        });
}

displayQueue();

setInterval(displayQueue, 1000);