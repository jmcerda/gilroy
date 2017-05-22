/**
 * Created by jcerda on 5/12/17.
 */
var upClass = 'toggle-up';
var downClass = 'toggle-down';

setInterval(function(){
    function toggle() {
        var square = document.querySelector('.square');

        if (~square.className.indexOf(downClass)) {
            square.className = square.className.replace(downClass, upClass);
        } else {
            square.className = square.className.replace(upClass, downClass);
        }
    }
}, 5000);
