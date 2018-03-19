![Scripter](https://github.com/MTrage/Scripter/blob/master/icon.png)
# Scripter

If you have many SH scripts and you have them in different folders or subfolders, you will love Scripter. Scripter sorts alphabetically and by hierarchy (also subfolders). Scripter sorts alphabetically and by hierarchy (also subfolders).

Created 2.8.2016 by Marc-André Tragé

Originally, I developed Scripter for myself. I needed a GUI with which I can easily start a variety of SH scripts quickly and easily. Scripter is constructed in such a way that, for example, Different Starticons can move to the Taskbar to work with different SH environments. If you start Scripter twice, it will automatically log and empty all Scripter TMP data. Thus one can switch Scripter on and off over the self start icon.

## Here are some examples for using Scripter:
![Values](https://github.com/MTrage/Scripter/blob/master/images/scripter.svg)
### Scripter [A] [B] [C]

+ [A]
Scripter 0 means that the system theme is started.
Scripter 1 means that a dark theme is used by QdarkStyleSheet, this can be downloaded here https://github.com/ColinDuquesnoy/QDarkStyleSheet

+ [B]
At this point, the path to Scripter must be specified.

+ [C]
Here you enter the SH path to his scripts.

### Scripter & superuser do
- Scripts which should be started normally must have the suffix "***.sh**".
- Scripts that require support from sudo must have the suffix "***.shs**".

### Normal theme with 3 different SH paths
    - Scripter 0 ~/Scripter-Home-Path/ ~/SH-Path-1/
    - Scripter 0 ~/Scripter-Home-Path/ ~/SH-Path-2/
    - Scripter 0 ~/Scripter-Home-Path/ ~/SH-Path-3/

### Dark theme with 3 different SH paths
    - Scripter 1 ~/Scripter-Home-Path/ ~/SH-Path-1/
    - Scripter 1 ~/Scripter-Home-Path/ ~/SH-Path-2/
    - Scripter 1 ~/Scripter-Home-Path/ ~/SH-Path-3/

![Theme](https://github.com/MTrage/Scripter/blob/master/images/theme.png)

## The following programs are used by Scripter to create enjoyment.°)
- [x] sh
- [x] rm
- [x] find
- [x] sort
- [x] echo
- [x] killall
- [x] pidof
- [x] wc
- [x] gksu
## For the creation of Scripters (++ the required packages).

    qmake && make

# Before starting Scripter, please note that all 3 parameters have been specified, see examples above.
