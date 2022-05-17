# Webbrowser C++
A webbrowser program made in C++. Created by Kttra. This program has a very specific use case, so I do not expect
much people to have a need for it. This program uses the old webbrowser which utilizes internet explorer, so it is really outdated.

**Main Takeaway**
--------------
I have decided to publish this program on github just in the event
it helps someone else in creating their own webbrowser application
or help understand how the header files should be formatted.

This program also shows examples of using background workers to cancel
tasks or run them simutaneously. In addition, system commands are used
to open other web browsers like brave/edge/or chrome. Ways to convert
the Standard String to a System::String to use in this winform are present.

<p align="center">
<img src="https://user-images.githubusercontent.com/100814612/168711108-53be1610-70ee-4458-93bf-226b3534413f.png" width = "700", height = "449"><img>
</p>

**What the Program Does**
-------------------
To load different various web pages for different browser types. The main website
we will use is in the link global variable in MyForm.cpp. In the code, there are
vectors that contain strings/words to append to our global link. Each button
in the main form corresponds to different vectors.

After clicking a button, the program will run background workers that That will
load the websites on chrome and edge/webbrowser simultaneously with random times
in between.
