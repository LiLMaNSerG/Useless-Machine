# My Useless Machine
A mysterious contraption with a single purpose.

![what-is-my-purpose](https://user-images.githubusercontent.com/15962563/190886483-8a41b292-ac67-48ad-af85-31dabe97b5ba.png)

## About the Project
I tend to have a box of spare parts hoping one day I'd find a use for them. In this case, I had an Arduino and a motivation to build a simple machine that does one thing *perfectly*. When the unsuspecting operator activates the ominous switch, the (not-so) Useless Machine returns itself to its original state. 

I've been wanting to incorporate an Ardunio into one of my hobby projects for quite some time. I thought this would be a great opportunity to apply it to a nice novelty for my coffee table.

[**VIDEO IN ACTION!**](https://youtube.com/shorts/QYdTbU0E2AE?feature=share)

![Useless Machine_main](https://user-images.githubusercontent.com/15962563/190889309-f7decbee-1d27-4654-83c6-d600c9b558a1.jpg)

## Getting Started
### Supplies
- Ardunio Uno
- [Wooden Box](https://www.michaels.com/wooden-box-by-artminds/10357776.html)
- Standard Servo Motor : I am using a [Futaba S3003](https://www.amazon.com/Futaba-FUTM0031-S3003-Standard-Servo/dp/B0015H2V72/). You will want to make sure the servo has enough torque to fully return the switch.
- [Servo Bracket](https://www.amazon.com/gp/product/B07PQ12TXS/) : Perfect for mounting to the underside of the door.
- 2 x 4-AA Battery Packs: I am using one for powering the Arduino and another for powering the servo. 
- 10K Ohm Resistor
- SPST (Single Pole, Single Throw) Switch

### Setup
#### Project Schematic ####
![Useless Machine Schematic](https://user-images.githubusercontent.com/15962563/190888256-2d461236-8c5b-40c9-81d2-9f7f4ce36a88.png)

![Useless Machine_insideBox](https://user-images.githubusercontent.com/15962563/190889304-1dc83427-7704-4b44-96e2-efa837210e5a.jpg)

#### Features ####
This build utilizes a pull-down resistor circuit to provide the Arduino cleaner recognition on the input (Pin 2) when the switch is activated. In addition, I am using a digital debounce within the code to address mechanical noise within the switch contacts.

## Next Steps ##
- [ ] Add additional reactions for the servo arm when the switch is activated. 
- [ ] Mount an additional servo motor to control the door. This will also expand the options for how the servo arm mechanism can "behave/react".
- [ ] Install a lightweight speaker for adding sound to the reactions.

## Acknowledgements ###
*A special thanks to my source of inspiration. You inspire my curiousity.*

![Percy Useless Box](https://user-images.githubusercontent.com/15962563/190889735-faf2587e-542d-499a-a450-f3c3591e5a18.png)
