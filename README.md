# The Power of Touch
<img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/17.jpg" width="45%">  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/18.jpg" width="45%">

Team members: An Dong, Runyi Liao, Yu Wang

My focus: My tasks mainly involve physics control, implementing physical interaction, Arduino programming, signal communication and control between Arduino and Unityand and code debugging. Additionally, I have also contributed to sound production, interactive installation production, video productionand and so on.

#### Unitypackage URL: 
https://drive.google.com/drive/folders/1XRD3Vt1JyDY3e-9jBiqWo80XngU6C-_H?usp=sharing

#### Project video: 
https://youtu.be/vOj424dtv98



## Project brief
Touch is a universal body language. People can convey rich emotions such as comfort and love through touch. However, the emotion is abstract. We hope to present the power of touch to the audience through the multi-sensory experience system of vision, hearing and touch, and transform abstract emotions into tangible experiences.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/15.jpg" width="80%">
</div>

## Process
At the beginning of the project, my team members and I discussed how to show the tactile experience between people to the audience in a more intuitive way. We believe that controlling the game through the player's physical communication can enhance the audience's sense of engagement. Therefore, we decided to show the whole game to the audience in the form of a vinyl record. By recording the physical interaction between the players, the musical performance and interesting special effects make the entire interaction more memorable.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/16.jpg" width="80%">
</div>

Then we began to divide up the project work. An Dong and Runyi Liao were responsible for building the model space of the game, while I focused on researching and practicing the aspects of the physical implementation.  

In order to achieve touch sensing between people, I first explored the ADCTouch library. According to the documentation, the library utilizes the internal wiring of the AVR microcontroller to measure capacitance. It allows users to create capacitive sensors without the need for external hardware, which meets our needs for physical input signals. We want to send signals to Unity without using any sensors, just by monitoring the voltage changes when human bodies touch each other.

When a person touches the wire, the value of the serial port monitor changes significantly. However, when I tried to get someone to touch someone who holding a wire, I didn't get the readings I expected. In this case, the value of the serial port monitor does not change significantly.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/1.jpg" width="30%">  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/2.jpg" width="30%">
</div>

After looking through a lot of sources and examples, we found another method that may help us achieve the desired results: Create a makey makey-like device with an Arduino Leonardo.

Makey Makey works by connecting a high resistance resistor to its master. When the conductive object is connected to the resistor in series, the voltage partial voltage of the external circuit will be reduced. Once a voltage change is detected, the master sends a signal. Using Makey Makey simply connects multiple wires to the master and other pins separately. When one person holds the wire connected to the master and another person holds the other pins to form a loop, the transmission of the signal will be triggered.

I made a homemade Makey Makey board using Arduino Leonardo, bread board and some resistors following the instructions in the tutorial. I then simulated Makey's functionality by sending signals to Unity to control effects and music playback.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/1.jpg" width="30%">  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/19.jpg" width="30%">
</div>

This homemade makey makey can detect voltage changes, but its effect is still not as good as we expect, it is not sensitive enough. To achieve a better experience, we decided to use the makeymakey board for interaction.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/8.jpg" width="60%">
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/5.jpg" width="60%">
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/6.jpg" width="60%">
</div>

In addition, we made a record player controlled by Arduino and a motor. We use unity to send a signal to Arduino, and when the game starts the vinyl starts spinning.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/20.jpg" width="100%">
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/7.jpg" width="45%"> <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/9.jpg" width="45%">
</div>

## User experience

We invited some students to experience it and got good feedback.

<div align=center>
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/10.jpg" width="40%"> <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/11.jpg" width="40%">
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/13.jpg" width="40%"> <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/12.jpg" width="40%">
  <img src="https://github.com/Yvonne202202/Creative-Making/blob/main/images/14.jpg" width="80%">

</div>
