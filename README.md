# zoomctrl
Mini shortcut keyboard for controlling Zoom calls

Project to build Arduino controller that looks to a PC like
a keyboard, so that we can send keyboard sequences/shortcuts to applications.  In this case, we're sending Zoom control codes.

The Arduino needs to be like a Leonardo with the Atmega32u4 processor. I used a clone called the Arduino pro micro, but I think this is a Chinese clone of the Sparkfun Pro Micro (e.g.https://shop.pimoroni.com/products/pro-micro-5v-16mhz?variant=7487693313).  In any case, any 32u4 based board should be suitable.


Youtube video: https://youtu.be/qR4f6KmZdcM


For applications other than Zoom, insert your keycodes into the b1.isPressed() section (b2.isPressed etc), e.g. for Microsoft Teams mute is CTRL+SHIFT+M, or video on/off with CTRL+SHIFT+O, which could be rendered as:

Keyboard.press(KEY_LEFT_CTRL)
Keyboard.press('M')

(Note that the 'M' is upper case, so this implicitly does a shift)





