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

//motor groups for concise code, refer to https://api.vex.com/v5/home/cpp/MotorGroup.html
vex::motor_group leftMotors = vex::motor_group(leftMotor1, leftMotor2, leftMotor3);
vex::motor_group rightMotors = vex::motor_group(rightMotor1, rightMotor2, rightMotor3);
vex::motor_group allFloorMotors = vex::motor_group(leftMotor1, leftMotor2, leftMotor3, rightMotor1, rightMotor2, rightMotor3);

// Pneumatics definitions
vex::pneumatics piston = vex::pneumatics(Brain.ThreeWirePort.A);
vex::pneumatics piston2 = vex::pneumatics(Brain.ThreeWirePort.B);
vex::pneumatics clampPiston = vex::pneumatics(Brain.ThreeWirePort.C);
vex::pneumatics wingPiston = vex::pneumatics(Brain.ThreeWirePort.D);

int axis1;
int axis2;
int axis3;
int axis4;

int main() {

    Brain.Screen.printAt( 10, 50, "im gabriel" );
   


    while(1) {
        axis1 = Controller.Axis1.position();
        axis2 = Controller.Axis2.position();
        axis3 = Controller.Axis3.position();
        axis4 = Controller.Axis4.position();
        
        leftMotors.setVelocity(axis3+axis4, rpm);
        rightMotors.setVelocity(axis3+axis4, rpm);
        
        allFloorMotors.spin(forward);

        

        
        // Allow other tasks to run
        this_thread::sleep_for(10);
    }
}
