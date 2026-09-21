
function getNameReson() {
    console.log("APP JS IS WORKING!");

    let name = document.getElementById("inputn").value;
    let reson = document.getElementById("inputr").value;

    // Get queue list
    let list = document.getElementById("queuelist");

    // Create new queue item
    let item = document.createElement("div");

    item.innerHTML = `
        <p>
            <b>${name}</b> - ${reson}
        </p>
    `;

    // Add item to current queue
    list.appendChild(item);

    // Clear inputs
    document.getElementById("inputn").value = "";
    document.getElementById("inputr").value = "";
}

function displayQueue(){
}
