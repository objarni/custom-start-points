'use strict';

const {createSensor} = require('./sensor');


function createAlarm() {
    return {
      lowPressureThreshold: 17,
      highPressureThreshold: 21,
      sensor: createSensor(),
      isOn: false,
    };
}

function check(alarm) {
  var psiPressureValue = alarm.sensor.popNextPressurePsiValue();

  if (psiPressureValue < alarm.lowPressureThreshold || alarm.highPressureThreshold < psiPressureValue)
  {
    alarm.isOn = true;
  }
  return alarm;
}
     

module.exports = {createAlarm, check};
