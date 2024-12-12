# sims/ah64cyclic

![sims/ah64cyclic](imgur.com image replace me!)

This is a work in progress to build the grip to an AH-64 Apache helicopter cyclic on my custom built flight stick for use in DCS digital combat simulator and X-Plane flight simulator.  It appears as a 25 button joystick.  The buttons can be reassigned to standard keybaord key if so desired but using Vial.

* Keyboard Maintainer: [CannonFodderSE](https://github.com/CannonFodderSE)
* Hardware Supported: Seeed Studio XIAO RP2040 
                        *The PCBs, controllers supported*
* Hardware Availability: [https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html](https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html)
                        *Links to where you can find this hardware*

Make example for this keyboard (after setting up your build environment):

    For Standard QMK compile with:
        qmk compile -kb sims/ah64cyclic -km default
    For Vial support compile with:
        make sims/ah64cyclic:vial

Flashing example for this keyboard:

    Put the RP2040 in Bootloader Mode by holding the "B" button.  Connect the Seeed Studio XIAO PR2040 to your computer.  If already connected hold the "B" button and momentarially press the "R" button and release it.  The board will appear a disk drive on your computer.
    Copy the "sims_ah64cyclic_default.uf2" or "sims_ah64cyclic_vial.uf2" file, depending on which you compiled. from the ".build" folder to the RP2040 drive.
    At this point your RP2040 should be ready to go.  The drive will disappear and a new joystick device should appear.  If not, press the "R" button or unplug it and plug it back in.
    
See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

Download the Vial [Keyboard Configuration Program](https://get.vial.today/download/).  

See Vial [Porting Guide](https://get.vial.today/docs/) and [User Manual](https://get.vial.today/manual/).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
