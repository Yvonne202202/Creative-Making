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


## User experience
