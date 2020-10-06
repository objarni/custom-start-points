'use strict';

const {createSensor} = require('./sensor');

function createAlarm() {
   const lowPressureThreshold = 17;
   const highPressureThreshold = 21;
   const sensor = createSensor();
   let isOn = false;
  
    return {
      check: () => {
         var psiPressureValue = sensor.popNextPressurePsiValue();
         if (psiPressureValue < lowPressureThreshold || highPressureThreshold < psiPressureValue)
         {
           isOn = true;
         }
         
      },
      isOn: () => isOn
    };
}  

module.exports = {createAlarm, check};
