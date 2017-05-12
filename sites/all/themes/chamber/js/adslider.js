/**
 * Created by jcerda on 5/12/17.
 */
var upClass = 'toggle-up';
var downClass = 'toggle-down';

function toggle() {
    var square = document.querySelector('.square');

    if (~square.className.indexOf(upClass)) {
        square.className = square.className.replace(upClass, upClass);
    } else {
        square.className = square.className.replace(downClass, downClass);
    }

}
