# Wav Seq
Wavetable based sequencer

Create Generative Wavetable Sequences and send voltages to Arduino for Motor Control

Instructions for Use

Install the PhD-Motor-new-id.ino firmware to your Arduino
This receives data from the PWMreceive.maxpat which is in turn sent data by the WavSeq.maxpat

Ensure you have all patches in the same folder.

Connect a motor driver board to the Arduino PWM outputs. Connect the output of motor driver boards to motors. You will need one motor driver per motor. The software is designed for 8 motors.

Link to Motor Driver board : 
https://uk.rs-online.com/web/p/power-motor-robotics-development-tools/1245480?cm_mmc=UK-PLA-DS3A-_-google-_-CSS_UK_EN_PMAX_DLG-_--_-1245480&matchtype=&&gclsrc=aw.ds&gad_source=1&gad_campaignid=23801851129&gbraid=0AAAAADkeWNMGSaUJurYL2A8_yzw5aBIoL&gclid=CjwKCAjwn67VBhBnEiwAXUIN1bYw3rPz1rBHN_yhX3Y-MvPMxpEHPeF3SkLk2oMxSOTkCnd-1ERUzRoCYdUQAvD_BwE

Link to motors used:
https://uk.rs-online.com/web/p/dc-motors/2389721?cjevent=CjwKCAjwn67VBhBnEiwAXUIN1UIT16i871yQ1RjurJ7CeO-R9IKy5ZNx8gajlCZ28MuDGsp6gJobhBoCPP4QAvD_BwE&utm_source=google&utm_medium=adkhor_css&gad_source=1&gad_campaignid=23560464687&gbraid=0AAAABC4skx9eHIR0SeZ1dkl7qP-F9AQ-b&gclid=CjwKCAjwn67VBhBnEiwAXUIN1UIT16i871yQ1RjurJ7CeO-R9IKy5ZNx8gajlCZ28MuDGsp6gJobhBoCPP4QAvD_BwE

Test Arduino serial connection and firmware is working by manually moving the numbers in one of the eight number windows in PWMreceive.maxpat

If this is working start Wav Seq. Ensure Audio is on and your have an audio interface or speakers turned up. Assign a MIDI output it you have a connected MIDI instrument. 
Turn on all "Crosses" Wav Seq should start making sound. Move the XY controller and try different waveforms to generate different sequence patterns and timbres together! 

Try sequencing your motors, servos or robotics with Wavseq! 


