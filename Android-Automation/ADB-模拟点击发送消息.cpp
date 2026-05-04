#include <iostream>
#include <windows.h>

int main() {
   // system("adb shell input keyevent 26");
   // Sleep(2000);
    //system("adb shell input swipe 680 2000 680 800 500");
    //am sstart 高级打开应用方式 但易错：system("adb shell am start -n com.tencent.mm/.ui.LauncherUI -c android.intent.category.LAUNCHER");
    //system("adb shell monkey -p com.tencent.mm -c android.intent.category.LAUNCHER 1");//傻瓜式打开应用方式，但稳定,我个人更推荐这个方法
    //Sleep(2000);
    //system("adb shell input tap 800 2700");
    //Sleep(2000);
    //system("adb shell input tap 600 570");
    system("adb shell input tap 882 2520");
    system("adb shell input tap 951 2121");
    system("adb shell input tap 748 2314");
    system("adb shell input tap 118 2298");
    system("adb shell input tap 1057 2114");
    system("adb shell input tap 123 1917");
    system("adb shell input tap 1162 2658");
    system("adb shell input tap 1124 1752");

   while (true) 
     {
       // system("adb shell input tap 500 500");
        //Sleep(1000);
        system("adb shell input tap 882 2520");
        system("adb shell input tap 951 2121");
        system("adb shell input tap 748 2314");
        system("adb shell input tap 118 2298");
        system("adb shell input tap 1057 2114");
        system("adb shell input tap 123 1917");
        system("adb shell input tap 1162 2658");
        system("adb shell input tap 1124 1752");
       Sleep(1);
      }
   return 0
