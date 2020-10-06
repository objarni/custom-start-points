'use strict';

function createSensor() {
    return {
      offset: 16,
      samplePressure: function() {
        // placeholder implementation that simulate a real sensor in a real tire
        var pressureTelemetryValue = Math.floor(6 * Math.random() * Math.random());
        return pressureTelemetryValue;
      },
      popNextPressurePsiValue: function () {
        var pressureTelemetryValue = this.samplePressure();

        return this.offset + pressureTelemetryValue;
      },
    };
}

module.exports = {createSensor};