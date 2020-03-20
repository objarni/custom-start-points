The Alarm class is designed to monitor tire pressure and set an alarm 
if the pressure falls outside of the expected range. 

The Sensor class provided for the exercise fakes the behaviour of a 
real tire sensor, providing random but realistic values.

Write a unit test for the Alarm class. Initially, do not change
the code for Alarm or Sensor. When you have an initial test in 
place, review your test code together with the session facilitator.
They will ask you to identify which SOLID design principle(s) the code 
disobeys, and why that makes it harder to test.

Then you may refactor the code to make it testable. Take care when 
refactoring not to alter the functionality, or change interfaces which 
other client code may rely on. Add more tests to cover the functionality 
of the Alarm class. 
