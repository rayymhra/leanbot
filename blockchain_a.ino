/*
  Basic Leanbot Motion

  Wait for TB1A+TB1B touch signal, then go straight for 100 mm, then stop.

  More Leanbot examples at  https://git.pythaverse.space/leanbot/Examples
*/

#include <Leanbot.h> // use Leanbot library

void setup()
{
    Leanbot.begin(); // initialize Leanbot
}

void loop()
{
     if(LbTouch.read(TB1A) == HIGH && LbTouch.read(TB2B) == HIGH)
    {

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(115);

        LbMotion.runLRrpm(38, -37); // kanan
        LbMotion.waitRotationDeg(75);
        LbMotion.stopAndWait();

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(770);

        LbMotion.stopAndWait();
        LbGripper.moveToLR(90, 90, 2000); // ambil

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(315);

        LbMotion.runLRrpm(25, 0); // kanan
        LbMotion.waitRotationDeg(50);

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(30);

        LbMotion.runLRrpm(20, 0); // kanan
        LbMotion.waitRotationDeg(16);

        LbMotion.stopAndWait();
        LbGripper.moveToLR(0, 0, 2000); // LEPAS DATA 1

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(60);

        LbMotion.runLRrpm(-30, 30); // kiri
        LbMotion.waitRotationDeg(30);

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(250);

        LbMotion.runLRrpm(30, -30); // kanan
        LbMotion.waitRotationDeg(30);

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(120);

        LbMotion.stopAndWait();
        LbGripper.moveToLR(90, 90, 2000); // AMBIL DATA 2

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(200);

        LbMotion.runLRrpm(30, -30); // kanan
        LbMotion.waitRotationDeg(30);

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(396);

        LbMotion.runLRrpm(-30, 30); // kiri
        LbMotion.waitRotationDeg(37);

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(20);

        LbMotion.stopAndWait();

        LbMotion.runLRrpm(-30, 30); // kiri
        LbMotion.waitRotationDeg(1);

        LbMotion.stopAndWait();

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(7);

        LbMotion.stopAndWait();
        LbGripper.moveToLR(0, 0, 2000); // LEPAS DATA 2

        LbMotion.runLRrpm(30, -30); // kanan
        LbMotion.waitRotationDeg(1);

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(30);

        LbMotion.stopAndWait();

        LbMotion.runLRrpm(-30, 30); // kiri
        LbMotion.waitRotationDeg(37);

        LbMotion.runLR(2000, 2000); // maju
        LbMotion.waitDistanceMm(280);

        LbMotion.runLRrpm(30, -30); // kanan
        LbMotion.waitRotationDeg(35);

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(450);

        LbMotion.runLRrpm(-30, 30); // kiri
        LbMotion.waitRotationDeg(37);

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(270);

        LbMotion.runLRrpm(-30, 30); // kiri
        LbMotion.waitRotationDeg(38);

        LbMotion.runLR(-10000, -10000); // mundur
        LbMotion.waitDistanceMm(150);
    }
    else
    {
        LbMotion.isStop();
    }
}
