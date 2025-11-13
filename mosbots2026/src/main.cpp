/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       chrissyafk                                                */
/*    Created:      11/12/2025, 4:13:43 PM                                    */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
vex::motor leftMotor1 = vex::motor(vex::PORT1, vex::ratio18_1, false);
vex::motor leftMotor2 = vex::motor(vex::PORT2, vex::ratio18_1, false);
vex::motor leftMotor3 = vex::motor(vex::PORT3, vex::ratio18_1, false);
vex::motor rightMotor1 = vex::motor(vex::PORT10, vex::ratio18_1, true);
vex::motor rightMotor2 = vex::motor(vex::PORT11, vex::ratio18_1, true);
vex::motor rightMotor3 = vex::motor(vex::PORT12, vex::ratio18_1, true);
vex::motor intakeMotor = vex::motor(vex::PORT4, vex::ratio6_1, false);
vex::motor intakeMotor2 = vex::motor(vex::PORT5, vex::ratio6_1, false);
vex::controller Controller = vex::controller(vex::primary);

// Pneumatics definitions
vex::pneumatics piston = vex::pneumatics(Brain.ThreeWirePort.A);
vex::pneumatics piston2 = vex::pneumatics(Brain.ThreeWirePort.B);
vex::pneumatics clampPiston = vex::pneumatics(Brain.ThreeWirePort.C);
vex::pneumatics wingPiston = vex::pneumatics(Brain.ThreeWirePort.D);

int main() {

    Brain.Screen.printAt( 10, 50, "im gabriel" );
   
    while(1) {
        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
