#ifndef ROBOTMAP_H
#define ROBOTMAP_H

//Drive motor port IDs.
constexpr int DRIVE_LEFT = 0;
constexpr int DRIVE_RIGHT = 1;

//Joystick IDs
constexpr int JOY_DRIVER = 0;

//Driver Butotn IDs
constexpr int DRIVER_BTN_A = 1;
constexpr int DRIVER_BTN_X = 2;
constexpr int DRIVER_BTN_B = 3;

//Driver joystick axis IDs
constexpr int DRIVER_LEFT_X = 0;
constexpr int DRIVER_LEFT_Y = 1;
constexpr int DRIVER_RIGHT_X = 4;
constexpr int DRIVER_RIGHT_Y = 5;

//Pneumatic port IDs
constexpr int SOLENOID_DOOR = 0;
constexpr int SOLENOID_HINGE_FORWARD = 1;
constexpr int SOLENOID_HINGE_REVERSE = 2;

//Climber port IDs
constexpr int CLIMBER_MOTOR = 2;

constexpr double DEADZONE = 0.05;

#endif  // ROBOTMAP_H
