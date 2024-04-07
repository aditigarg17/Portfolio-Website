document.getElementById("read-more-btn").addEventListener("click", function() {
    var moreText = document.querySelector('.more-text');
    if (moreText.style.display === 'none') {
        moreText.style.display = 'inline'; // Show the hidden content
        this.textContent = 'Read Less';
    } else {
        moreText.style.display = 'none'; // Hide the content
        this.textContent = 'Read More';
    }
});