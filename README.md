# AlarmaDeSeguridad
This project uses the Curiosity Nano Development board PIC16F15244 to detect people and alarm of possible theft.
## Related Documentation
- [PIC16F15244 Product Page](https://www.microchip.com/wwwproducts/en/PIC16F15244)
- [Datasheet PIC16F15244](http://ww1.microchip.com/downloads/en/DeviceDoc/PIC16F15213-14-23-24-43-44-Data-Sheet-DS40002195B.pdf)
- [PIC16F15244 Curiosity Nano Evaluation Kit Page](https://www.microchip.com/developmenttools/ProductDetails/EV09Z19A)
- [Board documentation](http://ww1.microchip.com/downloads/en/DeviceDoc/PIC16F15244-Curiosity-Nano-Hardware-User-Guide-DS50003045A.pdf)
- [Manual de usuario XC8 compiler](http://ww1.microchip.com/downloads/en/devicedoc/50002053g.pdf)
- [Fundamentals of the C Programming Language](https://microchipdeveloper.com/tls2101:start)
- [PIC16F15244 Code Examples on GitHub](https://github.com/microchip-pic-avr-examples?q=pic16f1524)
- [PIC16F15244 Curiosity Nano Schematics](https://ww1.microchip.com/downloads/en/DeviceDoc/PIC16F15244_Curiosity_Nano_Schematics.pdf)



## Software Used

- [MPLAB® X IDE 5.40 or newer](http://www.microchip.com/mplab/mplab-x-ide)
- [MPLAB® XC8 2.20 or a newer compiler](https://www.microchip.com/development-tools/pic-and-dspic-downloads-archive)
- [ MPLAB® Code Configurator (MCC) 3.95.0 or newer ](https://www.microchip.com/mplab/mplab-code-configurator)
- [ MPLAB® Forum XC8](https://www.microchip.com/forums/f249.aspx)
- [Microchip Packs Repository](https://packs.download.microchip.com/)

## Hardware Used
The Microchip PIC16F15244 Curiosity Nano evalutation kit is a hardware platform to evaluate PIC microcontrollers. The evaluation kit comes with a fully integrated programmer and debugger that provides seamless integration with Microchip MPLAB X. The kit provides access to the features of the PIC16F15244 enabling easy integration of the device in a custom design. The kit features variable voltage, a virtual serial port, and a DGI interface for easy development and debugging.
- PIC16F15244 Curiosity Nano [(EV09Z19A)](https://www.microchip.com/Developmenttools/ProductDetails/EV09Z19A)
- Micro-USB to USB 2.0 cable
- LCD Display 20x4
- Push button
- Potentiometer 10k
- Resistances 4.7kΩ,3-(10kΩ),320Ω.
- Jumpers
- 5v source
- Protoboard

![Curiosity Nano](https://external-content.duckduckgo.com/iu/?u=https://www.microchip.com/images/default-source/design-centers/8-bit-mcus/pic-device-selection/ev09z19a_pic16f15244-curiosity-nano-board-front-transparent.png?sfvrsn=8337e3b9_0&f=1&nofb=1)

![enter image description here](https://external-content.duckduckgo.com/iu/?u=http://www.hobbytronics.co.uk/image/cache/data/dealextreme/lcd-blue-16x2-500x500.jpg&f=1&nofb=1)

![enter image description here](https://external-content.duckduckgo.com/iu/?u=https%3A%2F%2Fcdn11.bigcommerce.com%2Fs-3fd3md1ghs%2Fimages%2Fstencil%2F500x659%2Fproducts%2F24936%2F11047%2FHC-SR501__57152.1575106278.jpg%3Fc%3D2&f=1&nofb=1)

![enter image description here](https://external-content.duckduckgo.com/iu/?u=https://www.vapeitalia.it/media/catalog/product/cache/1/image/363x/5cfc8b4d9849831add20660d2bfd8996/c/a/cavo-micro-usb-15mt-cf737-matsuyama.jpg&f=1&nofb=1)

![enter image description here](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSQHClGVUAKXOtd89kzGMdwYVQi_2_lnk5IHA&usqp=CAU)
## Setup
1. Connect the PIC16f15244 Curiosity Nano board to a PC using the Micro-USB to USB 2.0 cable.
2. If not already on your system, download and install MPLABX IDE version 5.40 (or newer).
3. If not already on your system, download and install the XC8 C-Compiler version 2.31 (or newer).
4. Open the 'Alarma1.x' project.

Schematic
<a href="https://ibb.co/FB7QG66"><img src="https://github.com/DanielCamiloAmaya/AlarmaDeSeguridad/blob/80d2b6656dee6247ce7715e085c0a80ffe2261cc/Data/EsquematicoAlarma.png" alt="Conexion" border="0"></a>

## How to use
The power supply is turned on in that way the lcd is activated in which it asks us for the password, at that moment the password is entered
by means of 3 buttons, there is when the pir sensor can detect movement, if it detects movement the led turns on, if the wrong input is entered twice
password a security lock is made and the only way to deactivate it is to disconnect it from the power source.
