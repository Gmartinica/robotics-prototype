// Keep the state of changable text of a button when called on upon page load
function keepText (button) {
  if (window.localStorage.getItem(button) == 'text-swap') {
    toggleText(button)
  }
}

// Toggle text of a button
function toggleText (button) {
  if (button.text() == button.data('text-swap')) {
    button.text(button.data('text-original'))
    window.localStorage.setItem(button, 'text-original')
  } else {
    button.data('text-original', button.text())
    button.text(button.data('text-swap'))
    window.localStorage.setItem(button, 'text-swap')
  }
}

// Convert the index value of current angle to usable value
function camFeedRotationAngle (rotation) {
  rotation = rotation % 4
  if (rotation < 0) {
    rotation += 4
  }
  $('.camera-panel').attr("rotation", rotation);

  angle = rotation*90
  return angle
}

// Rotate element to given angle
function rotateElement (element, angle) {
  element.css({
    transform: 'rotate(' + angle + 'deg)',
    '-ms-transform': 'rotate(' + angle + 'deg)',
    '-moz-transform': 'rotate(' + angle + 'deg)',
    '-webkit-transform': 'rotate(' + angle + 'deg)',
    '-o-transform': 'rotate(' + angle + 'deg)'
  })
}

// Generates unique names for html elements with a common class
function addIdentifiers(cssClass) {
  $(cssClass).each((i, e) => {
    let removedPrefix = cssClass.substr(1); 
    $(e).addClass(removedPrefix + "-" + i);
  });
}
