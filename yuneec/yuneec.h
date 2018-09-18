/** @file
 *  @brief MAVLink comm protocol generated from yuneec.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_YUNEEC_H
#define MAVLINK_YUNEEC_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_YUNEEC.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{0, 50, 9, 0, 0, 0}, {1, 124, 31, 0, 0, 0}, {2, 137, 12, 0, 0, 0}, {4, 237, 14, 3, 12, 13}, {5, 217, 28, 1, 0, 0}, {6, 104, 3, 0, 0, 0}, {7, 119, 32, 0, 0, 0}, {11, 89, 6, 1, 4, 0}, {20, 214, 20, 3, 2, 3}, {21, 159, 2, 3, 0, 1}, {22, 220, 25, 0, 0, 0}, {23, 168, 23, 3, 4, 5}, {24, 24, 30, 0, 0, 0}, {25, 23, 101, 0, 0, 0}, {26, 170, 22, 0, 0, 0}, {27, 144, 26, 0, 0, 0}, {28, 67, 16, 0, 0, 0}, {29, 115, 14, 0, 0, 0}, {30, 39, 28, 0, 0, 0}, {31, 246, 32, 0, 0, 0}, {32, 185, 28, 0, 0, 0}, {33, 104, 28, 0, 0, 0}, {34, 237, 22, 0, 0, 0}, {35, 244, 22, 0, 0, 0}, {36, 222, 21, 0, 0, 0}, {37, 212, 6, 3, 4, 5}, {38, 9, 6, 3, 4, 5}, {39, 254, 37, 3, 32, 33}, {40, 230, 4, 3, 2, 3}, {41, 28, 4, 3, 2, 3}, {42, 28, 2, 0, 0, 0}, {43, 132, 2, 3, 0, 1}, {44, 221, 4, 3, 2, 3}, {45, 232, 2, 3, 0, 1}, {46, 11, 2, 0, 0, 0}, {47, 153, 3, 3, 0, 1}, {48, 41, 13, 1, 12, 0}, {49, 39, 12, 0, 0, 0}, {50, 78, 37, 3, 18, 19}, {51, 196, 4, 3, 2, 3}, {54, 15, 27, 3, 24, 25}, {55, 3, 25, 0, 0, 0}, {61, 167, 72, 0, 0, 0}, {62, 183, 26, 0, 0, 0}, {63, 119, 181, 0, 0, 0}, {64, 191, 225, 0, 0, 0}, {65, 118, 42, 0, 0, 0}, {66, 148, 6, 3, 2, 3}, {67, 21, 4, 0, 0, 0}, {69, 243, 11, 0, 0, 0}, {70, 124, 18, 3, 16, 17}, {73, 38, 37, 3, 32, 33}, {74, 20, 20, 0, 0, 0}, {75, 158, 35, 3, 30, 31}, {76, 152, 33, 3, 30, 31}, {77, 143, 3, 3, 8, 9}, {81, 106, 22, 0, 0, 0}, {82, 49, 39, 3, 36, 37}, {83, 22, 37, 0, 0, 0}, {84, 143, 53, 3, 50, 51}, {85, 140, 51, 0, 0, 0}, {86, 5, 53, 3, 50, 51}, {87, 150, 51, 0, 0, 0}, {89, 231, 28, 0, 0, 0}, {90, 183, 56, 0, 0, 0}, {91, 63, 42, 0, 0, 0}, {92, 54, 33, 0, 0, 0}, {93, 47, 81, 0, 0, 0}, {100, 175, 26, 0, 0, 0}, {101, 102, 32, 0, 0, 0}, {102, 158, 32, 0, 0, 0}, {103, 208, 20, 0, 0, 0}, {104, 56, 32, 0, 0, 0}, {105, 93, 62, 0, 0, 0}, {106, 138, 44, 0, 0, 0}, {107, 108, 64, 0, 0, 0}, {108, 32, 84, 0, 0, 0}, {109, 185, 9, 0, 0, 0}, {110, 84, 254, 3, 1, 2}, {111, 34, 16, 0, 0, 0}, {112, 174, 12, 0, 0, 0}, {113, 124, 36, 0, 0, 0}, {114, 237, 44, 0, 0, 0}, {115, 4, 64, 0, 0, 0}, {116, 76, 22, 0, 0, 0}, {117, 128, 6, 3, 4, 5}, {118, 56, 14, 0, 0, 0}, {119, 116, 12, 3, 10, 11}, {120, 134, 97, 0, 0, 0}, {121, 237, 2, 3, 0, 1}, {122, 203, 2, 3, 0, 1}, {123, 250, 113, 3, 0, 1}, {124, 87, 35, 0, 0, 0}, {125, 203, 6, 0, 0, 0}, {126, 220, 79, 0, 0, 0}, {127, 25, 35, 0, 0, 0}, {128, 226, 35, 0, 0, 0}, {129, 46, 22, 0, 0, 0}, {130, 29, 13, 0, 0, 0}, {131, 223, 255, 0, 0, 0}, {132, 85, 14, 0, 0, 0}, {133, 6, 18, 0, 0, 0}, {134, 229, 43, 0, 0, 0}, {135, 203, 8, 0, 0, 0}, {136, 1, 22, 0, 0, 0}, {137, 195, 14, 0, 0, 0}, {138, 109, 36, 0, 0, 0}, {139, 168, 43, 3, 41, 42}, {140, 181, 41, 0, 0, 0}, {141, 47, 32, 0, 0, 0}, {142, 72, 243, 0, 0, 0}, {143, 131, 14, 0, 0, 0}, {144, 127, 93, 0, 0, 0}, {146, 103, 100, 0, 0, 0}, {147, 154, 36, 0, 0, 0}, {148, 178, 60, 0, 0, 0}, {149, 200, 30, 0, 0, 0}, {230, 163, 42, 0, 0, 0}, {231, 105, 40, 0, 0, 0}, {232, 151, 63, 0, 0, 0}, {233, 35, 182, 0, 0, 0}, {234, 150, 40, 0, 0, 0}, {235, 179, 42, 0, 0, 0}, {241, 90, 32, 0, 0, 0}, {242, 104, 52, 0, 0, 0}, {243, 85, 53, 1, 52, 0}, {244, 95, 6, 0, 0, 0}, {245, 130, 2, 0, 0, 0}, {246, 184, 38, 0, 0, 0}, {247, 81, 19, 0, 0, 0}, {248, 8, 254, 3, 3, 4}, {249, 204, 36, 0, 0, 0}, {250, 49, 30, 0, 0, 0}, {251, 170, 18, 0, 0, 0}, {252, 44, 18, 0, 0, 0}, {253, 83, 51, 0, 0, 0}, {254, 46, 9, 0, 0, 0}, {256, 71, 42, 3, 8, 9}, {257, 131, 9, 0, 0, 0}, {258, 187, 32, 3, 0, 1}, {259, 92, 235, 0, 0, 0}, {260, 146, 5, 0, 0, 0}, {261, 179, 27, 0, 0, 0}, {262, 12, 18, 0, 0, 0}, {263, 133, 255, 0, 0, 0}, {264, 49, 28, 0, 0, 0}, {265, 26, 16, 0, 0, 0}, {266, 193, 255, 3, 2, 3}, {267, 35, 255, 3, 2, 3}, {268, 14, 4, 3, 2, 3}, {269, 58, 246, 0, 0, 0}, {270, 232, 247, 3, 14, 15}, {299, 19, 96, 0, 0, 0}, {300, 217, 22, 0, 0, 0}, {310, 28, 17, 0, 0, 0}, {311, 95, 116, 0, 0, 0}, {320, 243, 20, 3, 2, 3}, {321, 88, 2, 3, 0, 1}, {322, 243, 149, 0, 0, 0}, {323, 78, 147, 3, 0, 1}, {324, 132, 146, 0, 0, 0}, {330, 23, 158, 0, 0, 0}, {331, 58, 230, 0, 0, 0}, {332, 91, 229, 0, 0, 0}, {333, 231, 109, 0, 0, 0}, {4000, 99, 33, 0, 0, 0}, {4001, 180, 32, 0, 0, 0}, {4002, 159, 32, 0, 0, 0}, {4003, 218, 3, 3, 0, 1}, {4004, 0, 3, 3, 0, 1}, {4005, 34, 30, 0, 0, 0}, {4006, 26, 16, 0, 0, 0}, {4007, 22, 4, 0, 0, 0}, {4008, 101, 33, 0, 0, 0}, {4009, 189, 50, 0, 0, 0}, {5000, 252, 26, 0, 0, 0}, {5001, 130, 20, 0, 0, 0}, {5002, 224, 50, 0, 0, 0}, {5003, 86, 133, 0, 0, 0}, {5004, 153, 16, 0, 0, 0}, {6000, 18, 5, 3, 0, 1}, {7050, 251, 255, 0, 0, 0}, {7051, 232, 255, 0, 0, 0}, {9002, 160, 101, 0, 0, 0}, {9003, 180, 39, 0, 0, 0}, {9004, 53, 62, 0, 0, 0}, {9006, 204, 26, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_YUNEEC

// ENUM DEFINITIONS


/** @brief Commands to be executed by the YUNEEC MAV. They can be executed on user request, or as part of a mission script. If the action is used in a mission, the parameter mapping to the waypoint/mission message is as follows: Param 1, Param 2, Param 3, Param 4, X: Param 5, Y:Param 6, Z:Param 7. This command list is similar what ARINC 424 is for commercial aircraft: A data format how to interpret waypoint/mission data. */
#ifndef HAVE_ENUM_MAV_CMD
#define HAVE_ENUM_MAV_CMD
typedef enum MAV_CMD
{
   MAV_CMD_NAV_WAYPOINT=16, /* Navigate to waypoint. |Hold time in decimal seconds. (ignored by fixed wing, time to stay at waypoint for rotary wing)| Acceptance radius in meters (if the sphere with this radius is hit, the waypoint counts as reached)| 0 to pass through the WP, if > 0 radius in meters to pass by WP. Positive value for clockwise orbit, negative value for counter-clockwise orbit. Allows trajectory control.| Desired yaw angle at waypoint (rotary wing). NaN for unchanged.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LOITER_UNLIM=17, /* Loiter around this waypoint an unlimited amount of time |Empty| Empty| Radius around waypoint, in meters. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LOITER_TURNS=18, /* Loiter around this waypoint for X turns |Turns| Empty| Radius around waypoint, in meters. If positive loiter clockwise, else counter-clockwise| Forward moving aircraft this sets exit xtrack location: 0 for center of loiter wp, 1 for exit location. Else, this is desired yaw angle| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LOITER_TIME=19, /* Loiter around this waypoint for X seconds |Seconds (decimal)| Empty| Radius around waypoint, in meters. If positive loiter clockwise, else counter-clockwise| Forward moving aircraft this sets exit xtrack location: 0 for center of loiter wp, 1 for exit location. Else, this is desired yaw angle| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_RETURN_TO_LAUNCH=20, /* Return to launch location |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_NAV_LAND=21, /* Land at location |Abort Alt| Precision land mode. (0 = normal landing, 1 = opportunistic precision landing, 2 = required precsion landing)| Empty| Desired yaw angle. NaN for unchanged.| Latitude| Longitude| Altitude (ground level)|  */
   MAV_CMD_NAV_TAKEOFF=22, /* Takeoff from ground / hand |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Empty| Yaw angle (if magnetometer present), ignored without magnetometer. NaN for unchanged.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_LAND_LOCAL=23, /* Land at local position (local frame only) |Landing target number (if available)| Maximum accepted offset from desired landing position [m] - computed magnitude from spherical coordinates: d = sqrt(x^2 + y^2 + z^2), which gives the maximum accepted distance between the desired landing position and the position where the vehicle is about to land| Landing descend rate [ms^-1]| Desired yaw angle [rad]| Y-axis position [m]| X-axis position [m]| Z-axis / ground level position [m]|  */
   MAV_CMD_NAV_TAKEOFF_LOCAL=24, /* Takeoff from local position (local frame only) |Minimum pitch (if airspeed sensor present), desired pitch without sensor [rad]| Empty| Takeoff ascend rate [ms^-1]| Yaw angle [rad] (if magnetometer or another yaw estimation source present), ignored without one of these| Y-axis position [m]| X-axis position [m]| Z-axis position [m]|  */
   MAV_CMD_NAV_FOLLOW=25, /* Vehicle following, i.e. this waypoint represents the position of a moving vehicle |Following logic to use (e.g. loitering or sinusoidal following) - depends on specific autopilot implementation| Ground speed of vehicle to be followed| Radius around waypoint, in meters. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_CONTINUE_AND_CHANGE_ALT=30, /* Continue on the current course and climb/descend to specified altitude.  When the altitude is reached continue to the next command (i.e., don't proceed to the next command until the desired altitude is reached. |Climb or Descend (0 = Neutral, command completes when within 5m of this command's altitude, 1 = Climbing, command completes when at or above this command's altitude, 2 = Descending, command completes when at or below this command's altitude. | Empty| Empty| Empty| Empty| Empty| Desired altitude in meters|  */
   MAV_CMD_NAV_LOITER_TO_ALT=31, /* Begin loiter at the specified Latitude and Longitude.  If Lat=Lon=0, then loiter at the current position.  Don't consider the navigation command complete (don't leave loiter) until the altitude has been reached.  Additionally, if the Heading Required parameter is non-zero the  aircraft will not leave the loiter until heading toward the next waypoint.  |Heading Required (0 = False)| Radius in meters. If positive loiter clockwise, negative counter-clockwise, 0 means no change to standard loiter.| Empty| Forward moving aircraft this sets exit xtrack location: 0 for center of loiter wp, 1 for exit location| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_FOLLOW=32, /* Being following a target |System ID (the system ID of the FOLLOW_TARGET beacon). Send 0 to disable follow-me and return to the default position hold mode| RESERVED| RESERVED| altitude flag: 0: Keep current altitude, 1: keep altitude difference to target, 2: go to a fixed altitude above home| altitude| RESERVED| TTL in seconds in which the MAV should go to the default position hold mode after a message rx timeout|  */
   MAV_CMD_DO_FOLLOW_REPOSITION=33, /* Reposition the MAV after a follow target command has been sent |Camera q1 (where 0 is on the ray from the camera to the tracking device)| Camera q2| Camera q3| Camera q4| altitude offset from target (m)| X offset from target (m)| Y offset from target (m)|  */
   MAV_CMD_DO_ORBIT=34, /* WIP: Start orbiting on the circumference of a circle defined by the parameters. Setting any value NaN results in using defaults. |Radius of the circle in meters. positive: Orbit clockwise. negative: Orbit counter-clockwise. | Velocity tangential in m/s. NaN: Vehicle configuration default.| Yaw behaviour of the vehicle. 0: vehicle front points to the center (default). 1: Hold last heading. 2: Leave yaw uncontrolled.| Reserved (e.g. for dynamic center beacon options)| Center point latitude (if no MAV_FRAME specified) / X coordinate according to MAV_FRAME. NaN: Use current vehicle position or current center if already orbiting.| Center point longitude (if no MAV_FRAME specified) / Y coordinate according to MAV_FRAME. NaN: Use current vehicle position or current center if already orbiting.| Center point altitude (AMSL) (if no MAV_FRAME specified) / Z coordinate according to MAV_FRAME. NaN: Use current vehicle position or current center if already orbiting.|  */
   MAV_CMD_NAV_ROI=80, /* Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode. (see MAV_ROI enum)| Waypoint index/ target ID. (see MAV_ROI enum)| ROI index (allows a vehicle to manage multiple ROI's)| Empty| x the location of the fixed ROI (see MAV_FRAME)| y| z|  */
   MAV_CMD_NAV_PATHPLANNING=81, /* Control autonomous path planning on the MAV. |0: Disable local obstacle avoidance / local path planning (without resetting map), 1: Enable local path planning, 2: Enable and reset local path planning| 0: Disable full path planning (without resetting map), 1: Enable, 2: Enable and reset map/occupancy grid, 3: Enable and reset planned route, but not occupancy grid| Empty| Yaw angle at goal, in compass degrees, [0..360]| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|  */
   MAV_CMD_NAV_SPLINE_WAYPOINT=82, /* Navigate to waypoint using a spline path. |Hold time in decimal seconds. (ignored by fixed wing, time to stay at waypoint for rotary wing)| Empty| Empty| Empty| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|  */
   MAV_CMD_NAV_VTOL_TAKEOFF=84, /* Takeoff from ground using VTOL mode |Empty| Front transition heading, see VTOL_TRANSITION_HEADING enum.| Empty| Yaw angle in degrees. NaN for unchanged.| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_VTOL_LAND=85, /* Land using VTOL mode |Empty| Empty| Approach altitude (with the same reference as the Altitude field). NaN if unspecified.| Yaw angle in degrees. NaN for unchanged.| Latitude| Longitude| Altitude (ground level)|  */
   MAV_CMD_NAV_GUIDED_ENABLE=92, /* hand control over to an external controller |On / Off (> 0.5f on)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_NAV_DELAY=93, /* Delay the next navigation command a number of seconds or until a specified time |Delay in seconds (decimal, -1 to enable time-of-day fields)| hour (24h format, UTC, -1 to ignore)| minute (24h format, UTC, -1 to ignore)| second (24h format, UTC)| Empty| Empty| Empty|  */
   MAV_CMD_NAV_PAYLOAD_PLACE=94, /* Descend and place payload.  Vehicle descends until it detects a hanging payload has reached the ground, the gripper is opened to release the payload |Maximum distance to descend (meters)| Empty| Empty| Empty| Latitude (deg * 1E7)| Longitude (deg * 1E7)| Altitude (meters)|  */
   MAV_CMD_NAV_LAST=95, /* NOP - This command is only used to mark the upper limit of the NAV/ACTION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_DELAY=112, /* Delay mission state machine. |Delay in seconds (decimal)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_CHANGE_ALT=113, /* Ascend/descend at rate.  Delay mission state machine until desired altitude reached. |Descent / Ascend rate (m/s)| Empty| Empty| Empty| Empty| Empty| Finish Altitude|  */
   MAV_CMD_CONDITION_DISTANCE=114, /* Delay mission state machine until within desired distance of next NAV point. |Distance (meters)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_YAW=115, /* Reach a certain target angle. |target angle: [0-360], 0 is north| speed during yaw change:[deg per second]| direction: negative: counter clockwise, positive: clockwise [-1,1]| relative offset or absolute angle: [ 1,0]| Empty| Empty| Empty|  */
   MAV_CMD_CONDITION_LAST=159, /* NOP - This command is only used to mark the upper limit of the CONDITION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_MODE=176, /* Set system mode. |Mode, as defined by ENUM MAV_MODE| Custom mode - this is system specific, please refer to the individual autopilot specifications for details.| Custom sub mode - this is system specific, please refer to the individual autopilot specifications for details.| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_JUMP=177, /* Jump to the desired command in the mission list.  Repeat this action only the specified number of times |Sequence number| Repeat count| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_CHANGE_SPEED=178, /* Change speed and/or throttle set points. |Speed type (0=Airspeed, 1=Ground Speed)| Speed  (m/s, -1 indicates no change)| Throttle  ( Percent, -1 indicates no change)| absolute or relative [0,1]| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_HOME=179, /* Changes the home location either to the current location or a specified location. |Use current (1=use current location, 0=use specified location)| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_SET_PARAMETER=180, /* Set a system parameter.  Caution!  Use of this command requires knowledge of the numeric enumeration value of the parameter. |Parameter number| Parameter value| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_RELAY=181, /* Set a relay to a condition. |Relay number| Setting (1=on, 0=off, others possible depending on system hardware)| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_REPEAT_RELAY=182, /* Cycle a relay on and off for a desired number of cycles with a desired period. |Relay number| Cycle count| Cycle time (seconds, decimal)| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_SERVO=183, /* Set a servo to a desired PWM value. |Servo number| PWM (microseconds, 1000 to 2000 typical)| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_REPEAT_SERVO=184, /* Cycle a between its nominal setting and a desired PWM for a desired number of cycles with a desired period. |Servo number| PWM (microseconds, 1000 to 2000 typical)| Cycle count| Cycle time (seconds)| Empty| Empty| Empty|  */
   MAV_CMD_DO_FLIGHTTERMINATION=185, /* Terminate flight immediately |Flight termination activated if > 0.5| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_CHANGE_ALTITUDE=186, /* Change altitude set point. |Altitude in meters| Mav frame of new altitude (see MAV_FRAME)| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_LAND_START=189, /* Mission command to perform a landing. This is used as a marker in a mission to tell the autopilot where a sequence of mission items that represents a landing starts. It may also be sent via a COMMAND_LONG to trigger a landing, in which case the nearest (geographically) landing sequence in the mission will be used. The Latitude/Longitude is optional, and may be set to 0 if not needed. If specified then it will be used to help find the closest landing sequence. |Empty| Empty| Empty| Empty| Latitude| Longitude| Empty|  */
   MAV_CMD_DO_RALLY_LAND=190, /* Mission command to perform a landing from a rally point. |Break altitude (meters)| Landing speed (m/s)| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_GO_AROUND=191, /* Mission command to safely abort an autonomous landing. |Altitude (meters)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_REPOSITION=192, /* Reposition the vehicle to a specific WGS84 global position. |Ground speed, less than 0 (-1) for default| Bitmask of option flags, see the MAV_DO_REPOSITION_FLAGS enum.| Reserved| Yaw heading, NaN for unchanged. For planes indicates loiter direction (0: clockwise, 1: counter clockwise)| Latitude (deg * 1E7)| Longitude (deg * 1E7)| Altitude (meters)|  */
   MAV_CMD_DO_PAUSE_CONTINUE=193, /* If in a GPS controlled position mode, hold the current position or continue. |0: Pause current mission or reposition command, hold current position. 1: Continue mission. A VTOL capable vehicle should enter hover mode (multicopter and VTOL planes). A plane should loiter with the default loiter radius.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_DO_SET_REVERSE=194, /* Set moving direction to forward or reverse. |Direction (0=Forward, 1=Reverse)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_ROI_LOCATION=195, /* Sets the region of interest (ROI) to a location. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Empty| Empty| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_DO_SET_ROI_WPNEXT_OFFSET=196, /* Sets the region of interest (ROI) to be toward next waypoint, with optional pitch/roll/yaw offset. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Empty| Empty| Empty| Empty| pitch offset from next waypoint| roll offset from next waypoint| yaw offset from next waypoint|  */
   MAV_CMD_DO_SET_ROI_NONE=197, /* Cancels any previous ROI command returning the vehicle/sensors to default flight characteristics. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_CONTROL_VIDEO=200, /* Control onboard camera system. |Camera ID (-1 for all)| Transmission: 0: disabled, 1: enabled compressed, 2: enabled raw| Transmission mode: 0: video stream, >0: single images every n seconds (decimal)| Recording: 0: disabled, 1: enabled compressed, 2: enabled raw| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_ROI=201, /* Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode. (see MAV_ROI enum)| Waypoint index/ target ID. (see MAV_ROI enum)| ROI index (allows a vehicle to manage multiple ROI's)| Empty| MAV_ROI_WPNEXT: pitch offset from next waypoint, MAV_ROI_LOCATION: latitude| MAV_ROI_WPNEXT: roll offset from next waypoint, MAV_ROI_LOCATION: longitude| MAV_ROI_WPNEXT: yaw offset from next waypoint, MAV_ROI_LOCATION: altitude|  */
   MAV_CMD_DO_DIGICAM_CONFIGURE=202, /* THIS INTERFACE IS DEPRECATED since 2018-01. Please use PARAM_EXT_XXX messages and the camera definition format described in https://mavlink.io/en/protocol/camera_def.html. |Modes: P, TV, AV, M, Etc| Shutter speed: Divisor number for one second| Aperture: F stop number| ISO number e.g. 80, 100, 200, Etc| Exposure type enumerator| Command Identity| Main engine cut-off time before camera trigger in seconds/10 (0 means no cut-off)|  */
   MAV_CMD_DO_DIGICAM_CONTROL=203, /* THIS INTERFACE IS DEPRECATED since 2018-01. Please use PARAM_EXT_XXX messages and the camera definition format described in https://mavlink.io/en/protocol/camera_def.html. |Session control e.g. show/hide lens| Zoom's absolute position| Zooming step value to offset zoom from the current position| Focus Locking, Unlocking or Re-locking| Shooting Command| Command Identity| Test shot identifier. If set to 1, image will only be captured, but not counted towards internal frame count.|  */
   MAV_CMD_DO_MOUNT_CONFIGURE=204, /* Mission command to configure a camera or antenna mount |Mount operation mode (see MAV_MOUNT_MODE enum)| stabilize roll? (1 = yes, 0 = no)| stabilize pitch? (1 = yes, 0 = no)| stabilize yaw? (1 = yes, 0 = no)| roll input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)| pitch input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)| yaw input (0 = angle body frame, 1 = angular rate, 2 = angle absolute frame)|  */
   MAV_CMD_DO_MOUNT_CONTROL=205, /* Mission command to control a camera or antenna mount |pitch depending on mount mode (degrees or degrees/second depending on pitch input).| roll depending on mount mode (degrees or degrees/second depending on roll input).| yaw depending on mount mode (degrees or degrees/second depending on yaw input).| alt in meters depending on mount mode.| latitude in degrees * 1E7, set if appropriate mount mode.| longitude in degrees * 1E7, set if appropriate mount mode.| MAV_MOUNT_MODE enum value|  */
   MAV_CMD_DO_SET_CAM_TRIGG_DIST=206, /* Mission command to set camera trigger distance for this flight. The camera is triggered each time this distance is exceeded. This command can also be used to set the shutter integration time for the camera. |Camera trigger distance (meters). 0 to stop triggering.| Camera shutter integration time (milliseconds). -1 or 0 to ignore| Trigger camera once immediately. (0 = no trigger, 1 = trigger)| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_FENCE_ENABLE=207, /* Mission command to enable the geofence |enable? (0=disable, 1=enable, 2=disable_floor_only)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_PARACHUTE=208, /* Mission command to trigger a parachute |action (0=disable, 1=enable, 2=release, for some systems see PARACHUTE_ACTION enum, not in general message set.)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_MOTOR_TEST=209, /* Mission command to perform motor test |motor number (a number from 1 to max number of motors on the vehicle)| throttle type (0=throttle percentage, 1=PWM, 2=pilot throttle channel pass-through. See MOTOR_TEST_THROTTLE_TYPE enum)| throttle| timeout (in seconds)| motor count (number of motors to test to test in sequence, waiting for the timeout above between them; 0=1 motor, 1=1 motor, 2=2 motors...)| motor test order (See MOTOR_TEST_ORDER enum)| Empty|  */
   MAV_CMD_DO_INVERTED_FLIGHT=210, /* Change to/from inverted flight |inverted (0=normal, 1=inverted)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_NAV_SET_YAW_SPEED=213, /* Sets a desired vehicle turn angle and speed change |yaw angle to adjust steering by in centidegress| speed - normalized to 0 .. 1| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_CAM_TRIGG_INTERVAL=214, /* Mission command to set camera trigger interval for this flight. If triggering is enabled, the camera is triggered each time this interval expires. This command can also be used to set the shutter integration time for the camera. |Camera trigger cycle time (milliseconds). -1 or 0 to ignore.| Camera shutter integration time (milliseconds). Should be less than trigger cycle time. -1 or 0 to ignore.| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_MOUNT_CONTROL_QUAT=220, /* Mission command to control a camera or antenna mount, using a quaternion as reference. |q1 - quaternion param #1, w (1 in null-rotation)| q2 - quaternion param #2, x (0 in null-rotation)| q3 - quaternion param #3, y (0 in null-rotation)| q4 - quaternion param #4, z (0 in null-rotation)| Empty| Empty| Empty|  */
   MAV_CMD_DO_GUIDED_MASTER=221, /* set id of master controller |System ID| Component ID| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_GUIDED_LIMITS=222, /* set limits for external control |timeout - maximum time (in seconds) that external controller will be allowed to control vehicle. 0 means no timeout| Absolute altitude (AMSL) min, in meters - if vehicle moves below this alt, the command will be aborted and the mission will continue. 0 means no lower altitude limit| Absolute altitude (AMSL) max, in meters - if vehicle moves above this alt, the command will be aborted and the mission will continue. 0 means no upper altitude limit| Horizontal move limit (AMSL), in meters - if vehicle moves more than this distance from its location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal altitude limit| Empty| Empty| Empty|  */
   MAV_CMD_DO_ENGINE_CONTROL=223, /* Control vehicle engine. This is interpreted by the vehicles engine controller to change the target engine state. It is intended for vehicles with internal combustion engines |0: Stop engine, 1:Start Engine| 0: Warm start, 1:Cold start. Controls use of choke where applicable| Height delay (meters). This is for commanding engine start only after the vehicle has gained the specified height. Used in VTOL vehicles during takeoff to start engine after the aircraft is off the ground. Zero for no delay.| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_SET_MISSION_CURRENT=224, /* Set the mission item with sequence number seq as current item. This means that the MAV will continue to this mission item on the shortest path (not following the mission items in-between). |Mission sequence value to set| Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_DO_LAST=240, /* NOP - This command is only used to mark the upper limit of the DO commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_PREFLIGHT_CALIBRATION=241, /* Trigger calibration. This command will be only accepted if in pre-flight mode. Except for Temperature Calibration, only one sensor should be set in a single message and all others should be zero. |1: gyro calibration, 3: gyro temperature calibration| 1: magnetometer calibration| 1: ground pressure calibration| 1: radio RC calibration, 2: RC trim calibration| 1: accelerometer calibration, 2: board level calibration, 3: accelerometer temperature calibration, 4: simple accelerometer calibration| 1: APM: compass/motor interference calibration (PX4: airspeed calibration, deprecated), 2: airspeed calibration| 1: ESC calibration, 3: barometer temperature calibration|  */
   MAV_CMD_PREFLIGHT_SET_SENSOR_OFFSETS=242, /* Set sensor offsets. This command will be only accepted if in pre-flight mode. |Sensor to adjust the offsets for: 0: gyros, 1: accelerometer, 2: magnetometer, 3: barometer, 4: optical flow, 5: second magnetometer, 6: third magnetometer| X axis offset (or generic dimension 1), in the sensor's raw units| Y axis offset (or generic dimension 2), in the sensor's raw units| Z axis offset (or generic dimension 3), in the sensor's raw units| Generic dimension 4, in the sensor's raw units| Generic dimension 5, in the sensor's raw units| Generic dimension 6, in the sensor's raw units|  */
   MAV_CMD_PREFLIGHT_UAVCAN=243, /* Trigger UAVCAN config. This command will be only accepted if in pre-flight mode. |1: Trigger actuator ID assignment and direction mapping.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_PREFLIGHT_STORAGE=245, /* Request storage of different parameter values and logs. This command will be only accepted if in pre-flight mode. |Parameter storage: 0: READ FROM FLASH/EEPROM, 1: WRITE CURRENT TO FLASH/EEPROM, 2: Reset to defaults| Mission storage: 0: READ FROM FLASH/EEPROM, 1: WRITE CURRENT TO FLASH/EEPROM, 2: Reset to defaults| Onboard logging: 0: Ignore, 1: Start default rate logging, -1: Stop logging, > 1: start logging with rate of param 3 in Hz (e.g. set to 1000 for 1000 Hz logging)| Reserved| Empty| Empty| Empty|  */
   MAV_CMD_PREFLIGHT_REBOOT_SHUTDOWN=246, /* Request the reboot or shutdown of system components. |0: Do nothing for autopilot, 1: Reboot autopilot, 2: Shutdown autopilot, 3: Reboot autopilot and keep it in the bootloader until upgraded.| 0: Do nothing for onboard computer, 1: Reboot onboard computer, 2: Shutdown onboard computer, 3: Reboot onboard computer and keep it in the bootloader until upgraded.| WIP: 0: Do nothing for camera, 1: Reboot onboard camera, 2: Shutdown onboard camera, 3: Reboot onboard camera and keep it in the bootloader until upgraded| WIP: 0: Do nothing for mount (e.g. gimbal), 1: Reboot mount, 2: Shutdown mount, 3: Reboot mount and keep it in the bootloader until upgraded| Reserved, send 0| Reserved, send 0| WIP: ID (e.g. camera ID -1 for all IDs)|  */
   MAV_CMD_OVERRIDE_GOTO=252, /* Hold / continue the current action |MAV_GOTO_DO_HOLD: hold MAV_GOTO_DO_CONTINUE: continue with next item in mission plan| MAV_GOTO_HOLD_AT_CURRENT_POSITION: Hold at current position MAV_GOTO_HOLD_AT_SPECIFIED_POSITION: hold at specified position| MAV_FRAME coordinate frame of hold point| Desired yaw angle in degrees| Latitude / X position| Longitude / Y position| Altitude / Z position|  */
   MAV_CMD_MISSION_START=300, /* start running a mission |first_item: the first mission item to run| last_item:  the last mission item to run (after this item is run, the mission ends)|  */
   MAV_CMD_COMPONENT_ARM_DISARM=400, /* Arms / Disarms a component |1 to arm, 0 to disarm|  */
   MAV_CMD_GET_HOME_POSITION=410, /* Request the home position from the vehicle. |Reserved| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_START_RX_PAIR=500, /* Starts receiver pairing |0:Spektrum| RC type (see RC_TYPE enum)|  */
   MAV_CMD_GET_MESSAGE_INTERVAL=510, /* Request the interval between messages for a particular MAVLink message ID |The MAVLink message ID|  */
   MAV_CMD_SET_MESSAGE_INTERVAL=511, /* Set the interval between messages for a particular MAVLink message ID. This interface replaces REQUEST_DATA_STREAM |The MAVLink message ID| The interval between two messages, in microseconds. Set to -1 to disable and 0 to request default rate.|  */
   MAV_CMD_REQUEST_PROTOCOL_VERSION=519, /* Request MAVLink protocol version compatibility |1: Request supported protocol versions by all nodes on the network| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_AUTOPILOT_CAPABILITIES=520, /* Request autopilot capabilities |1: Request autopilot version| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_CAMERA_INFORMATION=521, /* Request camera information (CAMERA_INFORMATION). |0: No action 1: Request camera capabilities| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_CAMERA_SETTINGS=522, /* Request camera settings (CAMERA_SETTINGS). |0: No Action 1: Request camera settings| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_STORAGE_INFORMATION=525, /* WIP: Request storage information (STORAGE_INFORMATION). Use the command's target_component to target a specific component's storage. |Storage ID (0 for all, 1 for first, 2 for second, etc.)| 0: No Action 1: Request storage information| Reserved (all remaining params)|  */
   MAV_CMD_STORAGE_FORMAT=526, /* WIP: Format a storage medium. Once format is complete, a STORAGE_INFORMATION message is sent. Use the command's target_component to target a specific component's storage. |Storage ID (1 for first, 2 for second, etc.)| 0: No action 1: Format storage| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_CAMERA_CAPTURE_STATUS=527, /* Request camera capture status (CAMERA_CAPTURE_STATUS) |0: No Action 1: Request camera capture status| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_FLIGHT_INFORMATION=528, /* WIP: Request flight information (FLIGHT_INFORMATION) |1: Request flight information| Reserved (all remaining params)|  */
   MAV_CMD_RESET_CAMERA_SETTINGS=529, /* Reset all camera settings to Factory Default |0: No Action 1: Reset all settings| Reserved (all remaining params)|  */
   MAV_CMD_SET_CAMERA_MODE=530, /* Set camera running mode. Use NAN for reserved values. |Reserved (Set to 0)| Camera mode (see CAMERA_MODE enum)| Reserved (all remaining params)|  */
   MAV_CMD_IMAGE_START_CAPTURE=2000, /* Start image capture sequence. Sends CAMERA_IMAGE_CAPTURED after each capture. Use NAN for reserved values. |Reserved (Set to 0)| Duration between two consecutive pictures (in seconds)| Number of images to capture total - 0 for unlimited capture| Capture sequence (ID to prevent double captures when a command is retransmitted, 0: unused, >= 1: used)| Reserved (all remaining params)|  */
   MAV_CMD_IMAGE_STOP_CAPTURE=2001, /* Stop image capture sequence Use NAN for reserved values. |Reserved (Set to 0)| Reserved (all remaining params)|  */
   MAV_CMD_REQUEST_CAMERA_IMAGE_CAPTURE=2002, /* WIP: Re-request a CAMERA_IMAGE_CAPTURE packet. Use NAN for reserved values. |Sequence number for missing CAMERA_IMAGE_CAPTURE packet| Reserved (all remaining params)|  */
   MAV_CMD_DO_TRIGGER_CONTROL=2003, /* Enable or disable on-board camera triggering system. |Trigger enable/disable (0 for disable, 1 for start), -1 to ignore| 1 to reset the trigger sequence, -1 or 0 to ignore| 1 to pause triggering, but without switching the camera off or retracting it. -1 to ignore|  */
   MAV_CMD_VIDEO_START_CAPTURE=2500, /* Starts video capture (recording). Use NAN for reserved values. |Reserved (Set to 0)| Frequency CAMERA_CAPTURE_STATUS messages should be sent while recording (0 for no messages, otherwise frequency in Hz)| Reserved (all remaining params)|  */
   MAV_CMD_VIDEO_STOP_CAPTURE=2501, /* Stop the current video capture (recording). Use NAN for reserved values. |Reserved (Set to 0)| Reserved (all remaining params)|  */
   MAV_CMD_VIDEO_START_STREAMING=2502, /* WIP: Start video streaming |Camera ID (0 for all cameras, 1 for first, 2 for second, etc.)| Reserved|  */
   MAV_CMD_VIDEO_STOP_STREAMING=2503, /* WIP: Stop the current video streaming |Camera ID (0 for all cameras, 1 for first, 2 for second, etc.)| Reserved|  */
   MAV_CMD_REQUEST_VIDEO_STREAM_INFORMATION=2504, /* WIP: Request video stream information (VIDEO_STREAM_INFORMATION) |Camera ID (0 for all cameras, 1 for first, 2 for second, etc.)| 0: No Action 1: Request video stream information| Reserved (all remaining params)|  */
   MAV_CMD_LOGGING_START=2510, /* Request to start streaming logging data over MAVLink (see also LOGGING_DATA message) |Format: 0: ULog| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_LOGGING_STOP=2511, /* Request to stop streaming log data over MAVLink |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_AIRFRAME_CONFIGURATION=2520, /*  |Landing gear ID (default: 0, -1 for all)| Landing gear position (Down: 0, Up: 1, NAN for no change)| Reserved, set to NAN| Reserved, set to NAN| Reserved, set to NAN| Reserved, set to NAN| Reserved, set to NAN|  */
   MAV_CMD_CONTROL_HIGH_LATENCY=2600, /* Request to start/stop transmitting over the high latency telemetry |Control transmission over high latency telemetry (0: stop, 1: start)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_PANORAMA_CREATE=2800, /* Create a panorama at the current position |Viewing angle horizontal of the panorama (in degrees, +- 0.5 the total angle)| Viewing angle vertical of panorama (in degrees)| Speed of the horizontal rotation (in degrees per second)| Speed of the vertical rotation (in degrees per second)|  */
   MAV_CMD_DO_VTOL_TRANSITION=3000, /* Request VTOL transition |The target VTOL state, as defined by ENUM MAV_VTOL_STATE. Only MAV_VTOL_STATE_MC and MAV_VTOL_STATE_FW can be used.|  */
   MAV_CMD_ARM_AUTHORIZATION_REQUEST=3001, /* Request authorization to arm the vehicle to a external entity, the arm authorizer is responsible to request all data that is needs from the vehicle before authorize or deny the request. If approved the progress of command_ack message should be set with period of time that this authorization is valid in seconds or in case it was denied it should be set with one of the reasons in ARM_AUTH_DENIED_REASON.
         |Vehicle system id, this way ground station can request arm authorization on behalf of any vehicle|  */
   MAV_CMD_SET_GUIDED_SUBMODE_STANDARD=4000, /* This command sets the submode to standard guided when vehicle is in guided mode. The vehicle holds position and altitude and the user can input the desired velocites along all three axes.
                   | */
   MAV_CMD_SET_GUIDED_SUBMODE_CIRCLE=4001, /* This command sets submode circle when vehicle is in guided mode. Vehicle flies along a circle facing the center of the circle. The user can input the velocity along the circle and change the radius. If no input is given the vehicle will hold position.
                   |Radius of desired circle in CIRCLE_MODE| User defined| User defined| User defined| Unscaled target latitude of center of circle in CIRCLE_MODE| Unscaled target longitude of center of circle in CIRCLE_MODE|  */
   MAV_CMD_CONDITION_GATE=4501, /* WIP: Delay mission state machine until gate has been reached. |Geometry: 0: orthogonal to path between previous and next waypoint.| Altitude: 0: ignore altitude| Empty| Empty| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_FENCE_RETURN_POINT=5000, /* Fence return point. There can only be one fence return point.
         |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
   MAV_CMD_NAV_FENCE_POLYGON_VERTEX_INCLUSION=5001, /* Fence vertex for an inclusion polygon (the polygon must not be self-intersecting). The vehicle must stay within this area. Minimum of 3 vertices required.
         |Polygon vertex count| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_POLYGON_VERTEX_EXCLUSION=5002, /* Fence vertex for an exclusion polygon (the polygon must not be self-intersecting). The vehicle must stay outside this area. Minimum of 3 vertices required.
         |Polygon vertex count| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_CIRCLE_INCLUSION=5003, /* Circular fence area. The vehicle must stay inside this area.
         |radius in meters| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_FENCE_CIRCLE_EXCLUSION=5004, /* Circular fence area. The vehicle must stay outside this area.
         |radius in meters| Reserved| Reserved| Reserved| Latitude| Longitude| Reserved|  */
   MAV_CMD_NAV_RALLY_POINT=5100, /* Rally point. You can have multiple rally points defined.
         |Reserved| Reserved| Reserved| Reserved| Latitude| Longitude| Altitude|  */
   MAV_CMD_UAVCAN_GET_NODE_INFO=5200, /* Commands the vehicle to respond with a sequence of messages UAVCAN_NODE_INFO, one message per every UAVCAN node that is online. Note that some of the response messages can be lost, which the receiver can detect easily by checking whether every received UAVCAN_NODE_STATUS has a matching message UAVCAN_NODE_INFO received earlier; if not, this command should be sent again in order to request re-transmission of the node information messages. |Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)| Reserved (set to 0)|  */
   MAV_CMD_PAYLOAD_PREPARE_DEPLOY=30001, /* Deploy payload on a Lat / Lon / Alt position. This includes the navigation to reach the required release position and velocity. |Operation mode. 0: prepare single payload deploy (overwriting previous requests), but do not execute it. 1: execute payload deploy immediately (rejecting further deploy commands during execution, but allowing abort). 2: add payload deploy to existing deployment list.| Desired approach vector in degrees compass heading (0..360). A negative value indicates the system can define the approach vector at will.| Desired ground speed at release time. This can be overridden by the airframe in case it needs to meet minimum airspeed. A negative value indicates the system can define the ground speed at will.| Minimum altitude clearance to the release position in meters. A negative value indicates the system can define the clearance at will.| Latitude unscaled for MISSION_ITEM or in 1e7 degrees for MISSION_ITEM_INT| Longitude unscaled for MISSION_ITEM or in 1e7 degrees for MISSION_ITEM_INT| Altitude (AMSL), in meters|  */
   MAV_CMD_PAYLOAD_CONTROL_DEPLOY=30002, /* Control the payload deployment. |Operation mode. 0: Abort deployment, continue normal mission. 1: switch to payload deployment mode. 100: delete first payload deployment request. 101: delete all payload deployment requests.| Reserved| Reserved| Reserved| Reserved| Reserved| Reserved|  */
   MAV_CMD_WAYPOINT_USER_1=31000, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_WAYPOINT_USER_2=31001, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_WAYPOINT_USER_3=31002, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_WAYPOINT_USER_4=31003, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_WAYPOINT_USER_5=31004, /* User defined waypoint item. Ground Station will show the Vehicle as flying through this item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_SPATIAL_USER_1=31005, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_SPATIAL_USER_2=31006, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_SPATIAL_USER_3=31007, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_SPATIAL_USER_4=31008, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_SPATIAL_USER_5=31009, /* User defined spatial item. Ground Station will not show the Vehicle as flying through this item. Example: ROI item. |User defined| User defined| User defined| User defined| Latitude unscaled| Longitude unscaled| Altitude (AMSL), in meters|  */
   MAV_CMD_USER_1=31010, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_2=31011, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_3=31012, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_4=31013, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_USER_5=31014, /* User defined command. Ground Station will not show the Vehicle as flying through this item. Example: MAV_CMD_DO_SET_PARAMETER item. |User defined| User defined| User defined| User defined| User defined| User defined| User defined|  */
   MAV_CMD_TASK_MODE=32768, /* advance function flying mode command |advance function mode(see FLIGHT_TASK enum)| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_SMART_BATTERY=32769, /* Command of host to battery. |Command ID for smart battery, as define by enum COMMAND_LIST| Communication status, 0 indicates not work, 1 indicates work.| Synchronize status, 0 indicates not asynchronous, 1 indicates synchronous.| Flying check, 0 indicates not flying, 1 indicates flying.| Empty| Empty| Empty|  */
   MAV_CMD_OPTICAL_FLOW_UPGRADE=32770, /* Start the optical flow upgrade command. |=0,Stop the optical flow upgrade;=1,Start the optical flow upgrade| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_TEAM_MODE=32771, /* Switch Team Mode ON/OFF; OFF: One remote controls aircraft and gimbal; ON: The master remote controls the aircraft, the slave remote controls the gimbal. |0 = OFF Team Mode; 1 = ON Team Mode.| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_EMERGENCY_BRAKE=32772, /* Emergency brake command. The drone will emergency braking without any acceleration limit. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   VISION_MODULES_VERSION=32773, /* Request vision modules version information. |1: Request optical flow version| 1: Request realsense version| Reserved (all remaining params)|  */
   MAV_CMD_FORCE_IPS_MODE=32774, /* Force ips (indoor position system) mode, using optical flow instead of GPS. |=0: disable; 1: enable.| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_FORCE_MANUAL_MODE=32775, /* Force manual (altitude control) mode, disable position control and the drone is controlled manually. |0: disable; 1: enable.| Empty| Empty| Empty| Empty| Empty| Empty|  */
   MAV_CMD_ENUM_END=32776, /*  | */
} MAV_CMD;
#endif

/** @brief  The advanced function mode. */
#ifndef HAVE_ENUM_FLIGHT_TASK
#define HAVE_ENUM_FLIGHT_TASK
typedef enum FLIGHT_TASK
{
   FLIGHT_TASK_ORBIT=1, /* Flying around the user. |=1, Pause the current task; =2 Continue/start the current task| Around the radius, the unit is meters, range (5-50m)| Flight velocity, unit is m/s,range (1-10).| Surround direction, =0 clockwise rotation,=1 Anticlockwise rotation.| =1 gimbal visual adjust.| Empty|  */
   FLIGHT_TASK_POI=2, /* Specify points of interest and fly around points of interest. |=1, Pause the current task; =2 Continue/start the current task.| Around the radius, the unit is meters, range (5-50m)| Flight velocity, unit is m/s,range (1-10)| Surround direction, =0 clockwise rotation, =1 Anticlockwise rotation.| Empty| Empty|  */
   FLIGHT_TASK_JOUR=3, /* Journey mode,from a point according to the set distance, velocity, flight video. |=1, Pause the current task; =2 Continue/start the current task| One way flight distance, unit is meters, range (5-50m).| One way flight velocity, unit is m/s, range (1-10).| Empty| Empty| Empty|  */
   FLIGHT_TASK_GPS_FOLLOW=4, /* Move through the gps follow the target. |=1, Pause the current task; =2 Continue/start the current task.| sub_mode, =0 follow me; =1 watch and follow me| Empty| Empty|  =1, gimbal visuial adjust| Empty|  */
   FLIGHT_TASK_CCC=5, /* Spline Curves. Full name:Curve Cable Cam. |=1, Pause the current task; =2 Continue/start the current task.| sub_mode, see enum (CURVE_CABLE_CAM).| Empty| Empty| Empty| Empty|  */
   FLIGHT_TASK_AUTO_RECORD=6, /* auto record mode. |=1, Pause the current task; =2 Continue/Start the current task| sub_mode, see enum(AUTO_RECORD)| Empty| Empty| Empty| Empty|  */
   FLIGHT_TASK_SPEECH_RECOGNITION=7, /* speech recognition mode. |=1 Pause the current task; =2 Continue/Start the current task.| sub_mode, see enum(SPEECH_RECOGNITION)| Empty| Empty| Empty| Empty|  */
   FLIGHT_TASK_FACE_RECOGNITION=8, /* face recognition mode. |=1 Pause the current task; =2 Continue/Start the current task.| face numbers. 0 : No face recognized.| Empty| Empty| Empty| Empty|  */
   FLIGHT_TASK_VISUAL_TRACKING=9, /* visual tracking. |=1,Pause the current task; =2 Continue/start the current task| Sub-mode under the visual tracking,see enum (VISUAL_TRACKING_MODE).| Empty| Empty| Empty| Empty|  */
   FLIGHT_TASK_ENUM_END=10, /*  | */
} FLIGHT_TASK;
#endif

/** @brief Sub-mode under the visual tracking. */
#ifndef HAVE_ENUM_VISUAL_TRACKING_MODE
#define HAVE_ENUM_VISUAL_TRACKING_MODE
typedef enum VISUAL_TRACKING_MODE
{
   FIXED_VISUAL_TRACKING=0, /* fixed visual tracking, only rotating UAV yaw and gimbal pitch without following. | */
   NORMAL_VISUAL_TRACKING=1, /* normal visual tracking, both move UAV yaw and rotate gimbal pitch to follow. | */
   PARALLEL_VISUAL_TRACKING=2, /* Keep a certain relative position to follow. | */
   VISUAL_TRACKING_MODE_ENUM_END=3, /*  | */
} VISUAL_TRACKING_MODE;
#endif

/** @brief Sub-mode under the visual Curve Cable Cam. */
#ifndef HAVE_ENUM_CURVE_CABLE_CAM
#define HAVE_ENUM_CURVE_CABLE_CAM
typedef enum CURVE_CABLE_CAM
{
   MAP_DRAWING_POINT=0, /* Map drawing independent point pattern. | */
   MANUAL_MAN_POINT=1, /* Manual manufacturing of waypoints. | */
   MAP_DRAWING_PATTERB=2, /* Map drawing pattern. | */
   CURVE_CABLE_CAM_ENUM_END=3, /*  | */
} CURVE_CABLE_CAM;
#endif

/** @brief Several sub modes under auto record */
#ifndef HAVE_ENUM_AUTO_RECORD
#define HAVE_ENUM_AUTO_RECORD
typedef enum AUTO_RECORD
{
   STRAIGHT_TOP=1, /* Go straight to the top. | */
   RORATE_STRETCH=2, /* Rotate with vertical stretching. | */
   DELAY_PHO_SUR=3, /* Delay photography plus surround. | */
   DELAY_PHO_STR=4, /* Delay photography plus straight line flight. | */
   HOR_PAN_PHOTO=5, /* Horizontal panorama take photo. | */
   COM_PAN_PHOTO=6, /* Comprehensive panorama take photo. | */
   AUTO_RECORD_ENUM_END=7, /*  | */
} AUTO_RECORD;
#endif

/** @brief Several sub modes under speech recognition mode. */
#ifndef HAVE_ENUM_SPEECH_RECOGNITION
#define HAVE_ENUM_SPEECH_RECOGNITION
typedef enum SPEECH_RECOGNITION
{
   GO_FORWARD=1, /* The voice said go forward, the aircraft moved forward 0.5m, velocity is 1m/s. | */
   GO_BACKWARD=2, /* The voice said go backward, the aircraft moved backward 0.5m, velocity is 1m/s. | */
   GO_LEFT=3, /* The voice said go left, the aircraft moved left 0.5m, velocity is 1m/s. | */
   GO_RIGHT=4, /* The voice said turn right, the aircraft moved right 0.5m, velocity is 1m/s. | */
   GO_UP=5, /* The voice said go up, the aircraft moved up 0.5m, velocity is 1m/s. | */
   GO_DOWN=6, /* The voice said go down, the aircraft moved down 0.5m, velocity is 1m/s. | */
   TURN_RIGHT=7, /* The voice said turn right, the aircraft turn right rotate 45 degree, max velocity 120 degree/s. | */
   TURN_LEFT=8, /* The voice said turn left, the aircraft turn left rotate 45 degree, max velocity 120 degree/s. | */
   EMERGENCY_STOP=9, /* The aircraft emergency brake, and keep hovering. | */
   SPEECH_RECOGNITION_ENUM_END=10, /*  | */
} SPEECH_RECOGNITION;
#endif

/** @brief task result type */
#ifndef HAVE_ENUM_MAV_TASK_TYPE
#define HAVE_ENUM_MAV_TASK_TYPE
typedef enum MAV_TASK_TYPE
{
   MAV_TASK_FULL_ITEM=0, /* Request a full waypoint list. | */
   MAV_TASK_RESUME_ITEM=1, /* After downloading the waypoint is lost, request the route to resume. | */
   MAV_TASK_TYPE_ENUM_END=2, /*  | */
} MAV_TASK_TYPE;
#endif

/** @brief task result command */
#ifndef HAVE_ENUM_MAV_TASK_RESULT
#define HAVE_ENUM_MAV_TASK_RESULT
typedef enum MAV_TASK_RESULT
{
   MAV_TASK_ACCEPTED=0, /* task accepted OK. | */
   MAV_TASK_ERROR=1, /* generic error/not accepting task mission commands at all right now. | */
   MAV_TASK_UNSUPPORTED_FRAM=2, /* coordinate frame is not supported. | */
   MAV_TASK_UNSUPPORTED=3, /* command is not supported. | */
   MAV_TASK_RESULT_ENUM_END=4, /*  | */
} MAV_TASK_RESULT;
#endif

/** @brief The waypoint camera performs the action. */
#ifndef HAVE_ENUM_TASK_ACTION
#define HAVE_ENUM_TASK_ACTION
typedef enum TASK_ACTION
{
   START_TAKE_PHOTO=0, /* start take photos. | */
   START_VIDEO=1, /* start video. | */
   STOP_VIDEO=2, /* stop video. | */
   TASK_ACTION_ENUM_END=3, /*  | */
} TASK_ACTION;
#endif

/** @brief Flight tasks state. */
#ifndef HAVE_ENUM_TASK_STATE
#define HAVE_ENUM_TASK_STATE
typedef enum TASK_STATE
{
   TASK_WAITING=1, /* The flight task mode is currently waiting | */
   TASK_RUNNING=2, /* sThe flight task mode is currently running. | */
   TASK_FINISH=3, /* The flight task mode is currently finished. | */
   TASK_STATE_ENUM_END=4, /*  | */
} TASK_STATE;
#endif

/** @brief Flight tasks mode and state data display. */
#ifndef HAVE_ENUM_TASK_CMD
#define HAVE_ENUM_TASK_CMD
typedef enum TASK_CMD
{
   TASK_ORBIT_MODE=1, /* Flying around the user(orbit me mode). |The distance from the vehicle to the point of interest, unit is m| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_POI_MODE=2, /* Specify points of interest and fly around points of interest(poi mode). |The distance from the vehicle to the point of interest, unit is m| Latitude, waypooint of interest coordinates| Longitude, waypooint of interest coordinates| Empty| Empty| Empty| Empty|  */
   TASK_JOUR_MODE=3, /* Journey mode, from a point according to the set distance, velocity, flight video. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_GPS_FOLLOW_MODE=4, /* Gps follow me mode, move through the gps follow the target. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_CCC_MODE=5, /* CCC mode, spline Curves. Full name: Curve Cable Cam. |Waypoint execute direction, =0 Positive movement, =1 Reverse movement.| The current number of waypoints.| The distance from the current waypoint to the next waypoint.| Empty| Empty| Empty| Empty|  */
   TASK_AUTO_RECORD_MODE=6, /* Auto record mode. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_SPEECH_RECOGNITION_MODE=7, /* speech recognition mode. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_FACE_RECOGNITION_MODE=8, /* face recognition mode. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_VISUAL_TRACKING_MODE=9, /* visual tracking mode. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|  */
   TASK_CMD_ENUM_END=10, /*  | */
} TASK_CMD;
#endif

/** @brief Remote controller Instruction Set */
#ifndef HAVE_ENUM_MAV_RC_COMMAND
#define HAVE_ENUM_MAV_RC_COMMAND
typedef enum MAV_RC_COMMAND
{
   MAV_RC_CMD_GET_BATTERY=1, /* Get Remote Controller Battery | */
   MAV_RC_CMD_GET_GPS=2, /* Get Remote Controller GPS | */
   MAV_RC_CMD_GET_GPS_TIME=3, /* Get Remote Controller GPS Time | */
   MAV_RC_CMD_GET_HW_INPUT_VAL=4, /* Get Remote Controller Hardware value | */
   MAV_RC_CMD_GET_CH_MAP=5, /* Get Remote Controller Joystick mode | */
   MAV_RC_CMD_SET_CH_MAP=6, /* Set Remote Controller Joystick Mode | */
   MAV_RC_CMD_GET_CH_CURVE=7, /* Get Remote Controller Channel Curve | */
   MAV_RC_CMD_SET_CH_CURVE=8, /* Set Remote Controller Channel Curve | */
   MAV_RC_CMD_GET_CHS_VAL=9, /* Get Remote Controller Channel Value | */
   MAV_RC_CMD_SET_CH_SETTING=10, /* Set Remote Controller Channel Value | */
   MAV_RC_CMD_SCAN_AUTOPILOT=11, /* Scan Aircraft | */
   MAV_RC_CMD_BIND_AUTOPILOT=12, /* Bind Aircraft | */
   MAV_RC_CMD_UNBIND_AUTOPILOT=13, /* Unbind Aircraft | */
   MAV_RC_CMD_GET_BIND_INFO=14, /* Get Aircraft Info(Binded) | */
   MAV_RC_CMD_EXIT_BIND=15, /* Exit Bind | */
   MAV_RC_CMD_SCAN_CAMERA=16, /* Scan Camera | */
   MAV_RC_CMD_BIND_CAMERA=17, /* Bind Camera | */
   MAV_RC_CMD_UNBIND_CAMERA=18, /* Unbind Camera | */
   MAV_RC_CMD_GET_CAMERA_INFO=19, /* Get Camera Info(Binded) | */
   MAV_RC_CMD_GET_SDCARD_INFO=20, /* Get Remote Controller SDcard Info | */
   MAV_RC_CMD_GET_CONTROL_TYPE=21, /* Get Remote Controller Type | */
   MAV_RC_CMD_GET_VERSION=22, /* Get Remote Controller Version | */
   MAV_RC_CMD_START_UPDATE=23, /* Start Update | */
   MAV_RC_CMD_TRANSFILEDATA=24, /* Segment Transmit Data | */
   MAV_RC_CMD_CANCEL_UPDATE=25, /* Cancel Update | */
   MAV_RC_CMD_SEND_MD5=26, /* Send MD5 | */
   MAV_RC_CMD_GET_UPGRADE_STATUS=27, /* Get Update Status | */
   MAV_RC_CMD_GET_CH_SETTING=28, /* Gets Channel Configuration | */
   MAV_RC_CMD_SEND_PAYLOAD=29, /* Pass payload to aircraft by 2.4G | */
   MAV_RC_CMD_CALIBRATE=30, /* Start/Stop Calibrate | */
   MAV_RC_CMD_SET_GPS=31, /* Set Remote Controller GPS | */
   MAV_RC_CMD_GET_STATE=32, /* Get Remote Controller Status(Bind/Calibrate) | */
   MAV_RC_CMD_WRITE_SN=96, /* Write SN | */
   MAV_RC_CMD_READ_SN=97, /* Read SN | */
   MAV_RC_CMD_GET_RF_VERSION=98, /* Get RF Version | */
   MAV_RC_CMD_GPIO_SET=99, /* Set LED,Buzzer,Motor GPIO | */
   MAV_RC_CMD_SET_OSD=100, /* Set OSD Enable/Disable | */
   MAV_RC_MSG_TELEMETRY_DATA=128, /* Telemetry Data | */
   MAV_RC_MSG_REPORT_EVENT=129, /* Report | */
   MAV_RC_MSG_BYPASS_EX_PACKET=130, /* Transfer Extra or Feedback of Aircraft Package | */
   MAV_RC_COMMAND_ENUM_END=131, /*  | */
} MAV_RC_COMMAND;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_RC_ERROR_CODE
#define HAVE_ENUM_MAV_RC_ERROR_CODE
typedef enum MAV_RC_ERROR_CODE
{
   MAV_RC_ERR_SUCCESS=0, /* Success | */
   MAV_RC_ERR_UNSUPPORT=1, /* Unsupport | */
   MAV_RC_ERR_INVAL_PARAM=2, /* Invalid param | */
   MAV_RC_ERR_INVAL_SETTING=3, /* Invalid Setting | */
   MAV_RC_ERR_BUSY=4, /* System Busy | */
   MAV_RC_ERR_NOT_MATCH=5, /* Version Not Match | */
   MAV_RC_ERR_GPS_NOT_FIXED=6, /* GPS Not Fixed | */
   MAV_RC_ERR_UNKNOW=254, /* Unknown Error | */
   MAV_RC_ERROR_CODE_ENUM_END=255, /*  | */
} MAV_RC_ERROR_CODE;
#endif

/** @brief  */
#ifndef HAVE_ENUM_MAV_COMPONENT
#define HAVE_ENUM_MAV_COMPONENT
typedef enum MAV_COMPONENT
{
   MAV_COMP_ID_ALL=0, /*  | */
   MAV_COMP_ID_AUTOPILOT1=1, /*  | */
   MAV_COMP_ID_REMOTE_MASTER=90, /*  | */
   MAV_COMP_ID_REMOTE_SLAVE=91, /*  | */
   MAV_COMP_ID_SMART_BATTERY=92, /*  | */
   MAV_COMP_ID_SMART_BATTERY2=93, /*  | */
   MAV_COMP_ID_SMART_BATTERY3=94, /*  | */
   MAV_COMP_ID_SMART_BATTERY4=95, /*  | */
   MAV_COMP_ID_SMART_BATTERY5=96, /*  | */
   MAV_COMP_ID_SMART_BATTERY6=97, /*  | */
   MAV_COMP_ID_SMART_BATTERY7=98, /*  | */
   MAV_COMP_ID_SMART_BATTERY8=99, /*  | */
   MAV_COMP_ID_CAMERA=100, /*  | */
   MAV_COMP_ID_CAMERA2=101, /*  | */
   MAV_COMP_ID_CAMERA3=102, /*  | */
   MAV_COMP_ID_CAMERA4=103, /*  | */
   MAV_COMP_ID_CAMERA5=104, /*  | */
   MAV_COMP_ID_CAMERA6=105, /*  | */
   MAV_COMP_ID_SERVO1=140, /*  | */
   MAV_COMP_ID_SERVO2=141, /*  | */
   MAV_COMP_ID_SERVO3=142, /*  | */
   MAV_COMP_ID_SERVO4=143, /*  | */
   MAV_COMP_ID_SERVO5=144, /*  | */
   MAV_COMP_ID_SERVO6=145, /*  | */
   MAV_COMP_ID_SERVO7=146, /*  | */
   MAV_COMP_ID_SERVO8=147, /*  | */
   MAV_COMP_ID_SERVO9=148, /*  | */
   MAV_COMP_ID_SERVO10=149, /*  | */
   MAV_COMP_ID_SERVO11=150, /*  | */
   MAV_COMP_ID_SERVO12=151, /*  | */
   MAV_COMP_ID_SERVO13=152, /*  | */
   MAV_COMP_ID_SERVO14=153, /*  | */
   MAV_COMP_ID_GIMBAL=154, /*  | */
   MAV_COMP_ID_LOG=155, /*  | */
   MAV_COMP_ID_ADSB=156, /*  | */
   MAV_COMP_ID_OSD=157, /* On Screen Display (OSD) devices for video links | */
   MAV_COMP_ID_PERIPHERAL=158, /* Generic autopilot peripheral component ID. Meant for devices that do not implement the parameter sub-protocol | */
   MAV_COMP_ID_QX1_GIMBAL=159, /*  | */
   MAV_COMP_ID_FLARM=160, /*  | */
   MAV_COMP_ID_MAPPER=180, /*  | */
   MAV_COMP_ID_MISSIONPLANNER=190, /*  | */
   MAV_COMP_ID_PATHPLANNER=195, /*  | */
   MAV_COMP_ID_IMU=200, /*  | */
   MAV_COMP_ID_IMU_2=201, /*  | */
   MAV_COMP_ID_IMU_3=202, /*  | */
   MAV_COMP_ID_GPS=220, /*  | */
   MAV_COMP_ID_GPS2=221, /*  | */
   MAV_COMP_ID_UDP_BRIDGE=240, /*  | */
   MAV_COMP_ID_UART_BRIDGE=241, /*  | */
   MAV_COMP_ID_SYSTEM_CONTROL=250, /*  | */
   MAV_COMPONENT_ENUM_END=251, /*  | */
} MAV_COMPONENT;
#endif

/** @brief  */
#ifndef HAVE_ENUM_BAT_COMMAND_LIST
#define HAVE_ENUM_BAT_COMMAND_LIST
typedef enum BAT_COMMAND_LIST
{
   BAT_COMMAND_LIST_SYNCHRONIZE=161, /* 0xA1 Host synchronize to battery.. | */
   BAT_COMMAND_LIST_TURNOFF=162, /* 0xA2 Host turns off battery. | */
   BAT_COMMAND_LIST_DEEPSLEEP=163, /* 0xA3 Host takes battery into deep sleep, only chargeing can wake battery up. | */
   BAT_COMMAND_LIST_GENERALINFO=164, /* 0xA4 Host gets general Information of battery. | */
   BAT_COMMAND_LIST_COMMONINFO=165, /* 0xA5 Host gets common information of battery. | */
   BAT_COMMAND_LIST_CONSTINFO=166, /* 0xA6 Host gets sonstant information of battery. | */
   BAT_COMMAND_LIST_BOOTRESET=167, /* 0xA7 Host gets sonstant information of battery. | */
   BAT_COMMAND_LIST_ENUM_END=168, /*  | */
} BAT_COMMAND_LIST;
#endif

/** @brief Flags in EKF_STATUS message */
#ifndef HAVE_ENUM_ESTIMATOR_MODE_FLAGS
#define HAVE_ENUM_ESTIMATOR_MODE_FLAGS
typedef enum ESTIMATOR_MODE_FLAGS
{
   ESTIMATOR_TILT_ALIGNMENT=1, /* True if the filter tilt alignment is complete | */
   ESTIMATOR_YAW_ALIGNMENT=2, /* True if the filter yaw alignment is complete | */
   ESTIMATOR_GPS=4, /* True if GPS measurements are being fused | */
   ESTIMATOR_OPTICAL_FLOW=8, /* True if optical flow measurements are being fused | */
   ESTIMATOR_MAGNETIC_YAW=16, /* True if a simple magnetic yaw heading is being fused | */
   ESTIMATOR_MAGNETOMETER=32, /* True if 3-axis magnetometer measurement are being fused | */
   ESTIMATOR_SYNTHETIC_MAGNETIC=64, /* True if synthetic magnetic declination measurements are being fused | */
   ESTIMATOR_VEHICLE_AIRBORNE=128, /* True when the vehicle is airborne | */
   ESTIMATOR_WIND_VELOCITY=256, /* True when wind velocity is being estimated | */
   ESTIMATOR_BARO_ALT=512, /* True when baro height is being fused as a primary height reference | */
   ESTIMATOR_RANGE_DISTANCE=1024, /* True when range finder height is being fused as a primary height reference | */
   ESTIMATOR_GPS_ALT=2048, /* True when GPS height is being fused as a primary height reference | */
   ESTIMATOR_LOCAL_POSITION_VISION=8192, /* True when local position data from extern_al vision is being fused | */
   ESTIMATOR_YAW_VISION=16384, /* True when yaw data from external vision measurements is being fused | */
   ESTIMATOR_ALT_VISION=32768, /* True when height data from external vision measurements is being fused | */
   ESTIMATOR_SYNTHETIC_SIDESLIP=65536, /* True when synthetic sideslip measurements are being fused | */
   ESTIMATOR_UPDATED_MAGNETOMETER=131072, /* True when only the magnetic field states are updated by the magnetometer | */
   ESTIMATOR_MODE_FLAGS_ENUM_END=131073, /*  | */
} ESTIMATOR_MODE_FLAGS;
#endif

// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_visual_tracking.h"
#include "./mavlink_msg_task_up_mis.h"
#include "./mavlink_msg_task_down_mis.h"
#include "./mavlink_msg_task_request_list.h"
#include "./mavlink_msg_task_ack.h"
#include "./mavlink_msg_task_state_feedback.h"
#include "./mavlink_msg_vision_modules_versions.h"
#include "./mavlink_msg_estimator_mode_additions.h"
#include "./mavlink_msg_no_fly_zone_unlocking.h"
#include "./mavlink_msg_yuneec_optical_flow_rad.h"
#include "./mavlink_msg_gimbal_control.h"
#include "./mavlink_msg_gimbal_control_standard.h"
#include "./mavlink_msg_gimbal_debugdata.h"
#include "./mavlink_msg_bootload_data.h"
#include "./mavlink_msg_gimbal_additional_attitude.h"
#include "./mavlink_msg_update_status_feedback.h"
#include "./mavlink_msg_mav_rc_cmd.h"
#include "./mavlink_msg_mav_rc_cmd_ack.h"
#include "./mavlink_msg_bat_general_info.h"
#include "./mavlink_msg_bat_common_info.h"
#include "./mavlink_msg_bat_const_info.h"
#include "./mavlink_msg_bat_production_info.h"

// base include
#include "../common/common.h"

#undef MAVLINK_THIS_XML_IDX
#define MAVLINK_THIS_XML_IDX 0

#if MAVLINK_THIS_XML_IDX == MAVLINK_PRIMARY_XML_IDX
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_HEARTBEAT, MAVLINK_MESSAGE_INFO_SYS_STATUS, MAVLINK_MESSAGE_INFO_SYSTEM_TIME, MAVLINK_MESSAGE_INFO_PING, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL, MAVLINK_MESSAGE_INFO_CHANGE_OPERATOR_CONTROL_ACK, MAVLINK_MESSAGE_INFO_AUTH_KEY, MAVLINK_MESSAGE_INFO_SET_MODE, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_VALUE, MAVLINK_MESSAGE_INFO_PARAM_SET, MAVLINK_MESSAGE_INFO_GPS_RAW_INT, MAVLINK_MESSAGE_INFO_GPS_STATUS, MAVLINK_MESSAGE_INFO_SCALED_IMU, MAVLINK_MESSAGE_INFO_RAW_IMU, MAVLINK_MESSAGE_INFO_RAW_PRESSURE, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE, MAVLINK_MESSAGE_INFO_ATTITUDE, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT, MAVLINK_MESSAGE_INFO_RC_CHANNELS_SCALED, MAVLINK_MESSAGE_INFO_RC_CHANNELS_RAW, MAVLINK_MESSAGE_INFO_SERVO_OUTPUT_RAW, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_WRITE_PARTIAL_LIST, MAVLINK_MESSAGE_INFO_MISSION_ITEM, MAVLINK_MESSAGE_INFO_MISSION_REQUEST, MAVLINK_MESSAGE_INFO_MISSION_SET_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_CURRENT, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_LIST, MAVLINK_MESSAGE_INFO_MISSION_COUNT, MAVLINK_MESSAGE_INFO_MISSION_CLEAR_ALL, MAVLINK_MESSAGE_INFO_MISSION_ITEM_REACHED, MAVLINK_MESSAGE_INFO_MISSION_ACK, MAVLINK_MESSAGE_INFO_SET_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_GPS_GLOBAL_ORIGIN, MAVLINK_MESSAGE_INFO_PARAM_MAP_RC, MAVLINK_MESSAGE_INFO_MISSION_REQUEST_INT, MAVLINK_MESSAGE_INFO_SAFETY_SET_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_SAFETY_ALLOWED_AREA, MAVLINK_MESSAGE_INFO_ATTITUDE_QUATERNION_COV, MAVLINK_MESSAGE_INFO_NAV_CONTROLLER_OUTPUT, MAVLINK_MESSAGE_INFO_GLOBAL_POSITION_INT_COV, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_COV, MAVLINK_MESSAGE_INFO_RC_CHANNELS, MAVLINK_MESSAGE_INFO_REQUEST_DATA_STREAM, MAVLINK_MESSAGE_INFO_DATA_STREAM, MAVLINK_MESSAGE_INFO_MANUAL_CONTROL, MAVLINK_MESSAGE_INFO_RC_CHANNELS_OVERRIDE, MAVLINK_MESSAGE_INFO_MISSION_ITEM_INT, MAVLINK_MESSAGE_INFO_VFR_HUD, MAVLINK_MESSAGE_INFO_COMMAND_INT, MAVLINK_MESSAGE_INFO_COMMAND_LONG, MAVLINK_MESSAGE_INFO_COMMAND_ACK, MAVLINK_MESSAGE_INFO_MANUAL_SETPOINT, MAVLINK_MESSAGE_INFO_SET_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_ATTITUDE_TARGET, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_POSITION_TARGET_LOCAL_NED, MAVLINK_MESSAGE_INFO_SET_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_POSITION_TARGET_GLOBAL_INT, MAVLINK_MESSAGE_INFO_LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET, MAVLINK_MESSAGE_INFO_HIL_STATE, MAVLINK_MESSAGE_INFO_HIL_CONTROLS, MAVLINK_MESSAGE_INFO_HIL_RC_INPUTS_RAW, MAVLINK_MESSAGE_INFO_HIL_ACTUATOR_CONTROLS, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_GLOBAL_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_VISION_SPEED_ESTIMATE, MAVLINK_MESSAGE_INFO_VICON_POSITION_ESTIMATE, MAVLINK_MESSAGE_INFO_HIGHRES_IMU, MAVLINK_MESSAGE_INFO_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_HIL_SENSOR, MAVLINK_MESSAGE_INFO_SIM_STATE, MAVLINK_MESSAGE_INFO_RADIO_STATUS, MAVLINK_MESSAGE_INFO_FILE_TRANSFER_PROTOCOL, MAVLINK_MESSAGE_INFO_TIMESYNC, MAVLINK_MESSAGE_INFO_CAMERA_TRIGGER, MAVLINK_MESSAGE_INFO_HIL_GPS, MAVLINK_MESSAGE_INFO_HIL_OPTICAL_FLOW, MAVLINK_MESSAGE_INFO_HIL_STATE_QUATERNION, MAVLINK_MESSAGE_INFO_SCALED_IMU2, MAVLINK_MESSAGE_INFO_LOG_REQUEST_LIST, MAVLINK_MESSAGE_INFO_LOG_ENTRY, MAVLINK_MESSAGE_INFO_LOG_REQUEST_DATA, MAVLINK_MESSAGE_INFO_LOG_DATA, MAVLINK_MESSAGE_INFO_LOG_ERASE, MAVLINK_MESSAGE_INFO_LOG_REQUEST_END, MAVLINK_MESSAGE_INFO_GPS_INJECT_DATA, MAVLINK_MESSAGE_INFO_GPS2_RAW, MAVLINK_MESSAGE_INFO_POWER_STATUS, MAVLINK_MESSAGE_INFO_SERIAL_CONTROL, MAVLINK_MESSAGE_INFO_GPS_RTK, MAVLINK_MESSAGE_INFO_GPS2_RTK, MAVLINK_MESSAGE_INFO_SCALED_IMU3, MAVLINK_MESSAGE_INFO_DATA_TRANSMISSION_HANDSHAKE, MAVLINK_MESSAGE_INFO_ENCAPSULATED_DATA, MAVLINK_MESSAGE_INFO_DISTANCE_SENSOR, MAVLINK_MESSAGE_INFO_TERRAIN_REQUEST, MAVLINK_MESSAGE_INFO_TERRAIN_DATA, MAVLINK_MESSAGE_INFO_TERRAIN_CHECK, MAVLINK_MESSAGE_INFO_TERRAIN_REPORT, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE2, MAVLINK_MESSAGE_INFO_ATT_POS_MOCAP, MAVLINK_MESSAGE_INFO_SET_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ACTUATOR_CONTROL_TARGET, MAVLINK_MESSAGE_INFO_ALTITUDE, MAVLINK_MESSAGE_INFO_RESOURCE_REQUEST, MAVLINK_MESSAGE_INFO_SCALED_PRESSURE3, MAVLINK_MESSAGE_INFO_FOLLOW_TARGET, MAVLINK_MESSAGE_INFO_CONTROL_SYSTEM_STATE, MAVLINK_MESSAGE_INFO_BATTERY_STATUS, MAVLINK_MESSAGE_INFO_AUTOPILOT_VERSION, MAVLINK_MESSAGE_INFO_LANDING_TARGET, MAVLINK_MESSAGE_INFO_ESTIMATOR_STATUS, MAVLINK_MESSAGE_INFO_WIND_COV, MAVLINK_MESSAGE_INFO_GPS_INPUT, MAVLINK_MESSAGE_INFO_GPS_RTCM_DATA, MAVLINK_MESSAGE_INFO_HIGH_LATENCY, MAVLINK_MESSAGE_INFO_HIGH_LATENCY2, MAVLINK_MESSAGE_INFO_VIBRATION, MAVLINK_MESSAGE_INFO_HOME_POSITION, MAVLINK_MESSAGE_INFO_SET_HOME_POSITION, MAVLINK_MESSAGE_INFO_MESSAGE_INTERVAL, MAVLINK_MESSAGE_INFO_EXTENDED_SYS_STATE, MAVLINK_MESSAGE_INFO_ADSB_VEHICLE, MAVLINK_MESSAGE_INFO_COLLISION, MAVLINK_MESSAGE_INFO_V2_EXTENSION, MAVLINK_MESSAGE_INFO_MEMORY_VECT, MAVLINK_MESSAGE_INFO_DEBUG_VECT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_FLOAT, MAVLINK_MESSAGE_INFO_NAMED_VALUE_INT, MAVLINK_MESSAGE_INFO_STATUSTEXT, MAVLINK_MESSAGE_INFO_DEBUG, MAVLINK_MESSAGE_INFO_SETUP_SIGNING, MAVLINK_MESSAGE_INFO_BUTTON_CHANGE, MAVLINK_MESSAGE_INFO_PLAY_TUNE, MAVLINK_MESSAGE_INFO_CAMERA_INFORMATION, MAVLINK_MESSAGE_INFO_CAMERA_SETTINGS, MAVLINK_MESSAGE_INFO_STORAGE_INFORMATION, MAVLINK_MESSAGE_INFO_CAMERA_CAPTURE_STATUS, MAVLINK_MESSAGE_INFO_CAMERA_IMAGE_CAPTURED, MAVLINK_MESSAGE_INFO_FLIGHT_INFORMATION, MAVLINK_MESSAGE_INFO_MOUNT_ORIENTATION, MAVLINK_MESSAGE_INFO_LOGGING_DATA, MAVLINK_MESSAGE_INFO_LOGGING_DATA_ACKED, MAVLINK_MESSAGE_INFO_LOGGING_ACK, MAVLINK_MESSAGE_INFO_VIDEO_STREAM_INFORMATION, MAVLINK_MESSAGE_INFO_SET_VIDEO_STREAM_SETTINGS, MAVLINK_MESSAGE_INFO_WIFI_CONFIG_AP, MAVLINK_MESSAGE_INFO_PROTOCOL_VERSION, MAVLINK_MESSAGE_INFO_UAVCAN_NODE_STATUS, MAVLINK_MESSAGE_INFO_UAVCAN_NODE_INFO, MAVLINK_MESSAGE_INFO_PARAM_EXT_REQUEST_READ, MAVLINK_MESSAGE_INFO_PARAM_EXT_REQUEST_LIST, MAVLINK_MESSAGE_INFO_PARAM_EXT_VALUE, MAVLINK_MESSAGE_INFO_PARAM_EXT_SET, MAVLINK_MESSAGE_INFO_PARAM_EXT_ACK, MAVLINK_MESSAGE_INFO_OBSTACLE_DISTANCE, MAVLINK_MESSAGE_INFO_ODOMETRY, MAVLINK_MESSAGE_INFO_TRAJECTORY_REPRESENTATION_WAYPOINTS, MAVLINK_MESSAGE_INFO_TRAJECTORY_REPRESENTATION_BEZIER, MAVLINK_MESSAGE_INFO_VISUAL_TRACKING, MAVLINK_MESSAGE_INFO_TASK_UP_MIS, MAVLINK_MESSAGE_INFO_TASK_DOWN_MIS, MAVLINK_MESSAGE_INFO_TASK_REQUEST_LIST, MAVLINK_MESSAGE_INFO_TASK_ACK, MAVLINK_MESSAGE_INFO_TASK_STATE_FEEDBACK, MAVLINK_MESSAGE_INFO_VISION_MODULES_VERSIONS, MAVLINK_MESSAGE_INFO_ESTIMATOR_MODE_ADDITIONS, MAVLINK_MESSAGE_INFO_NO_FLY_ZONE_UNLOCKING, MAVLINK_MESSAGE_INFO_YUNEEC_OPTICAL_FLOW_RAD, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL, MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL_STANDARD, MAVLINK_MESSAGE_INFO_GIMBAL_DEBUGDATA, MAVLINK_MESSAGE_INFO_BOOTLOAD_DATA, MAVLINK_MESSAGE_INFO_GIMBAL_ADDITIONAL_ATTITUDE, MAVLINK_MESSAGE_INFO_UPDATE_STATUS_FEEDBACK, MAVLINK_MESSAGE_INFO_MAV_RC_CMD, MAVLINK_MESSAGE_INFO_MAV_RC_CMD_ACK, MAVLINK_MESSAGE_INFO_BAT_GENERAL_INFO, MAVLINK_MESSAGE_INFO_BAT_COMMON_INFO, MAVLINK_MESSAGE_INFO_BAT_CONST_INFO, MAVLINK_MESSAGE_INFO_BAT_PRODUCTION_INFO}
# define MAVLINK_MESSAGE_NAMES {{ "ACTUATOR_CONTROL_TARGET", 140 }, { "ADSB_VEHICLE", 246 }, { "ALTITUDE", 141 }, { "ATTITUDE", 30 }, { "ATTITUDE_QUATERNION", 31 }, { "ATTITUDE_QUATERNION_COV", 61 }, { "ATTITUDE_TARGET", 83 }, { "ATT_POS_MOCAP", 138 }, { "AUTH_KEY", 7 }, { "AUTOPILOT_VERSION", 148 }, { "BATTERY_STATUS", 147 }, { "BAT_COMMON_INFO", 9003 }, { "BAT_CONST_INFO", 9004 }, { "BAT_GENERAL_INFO", 9002 }, { "BAT_PRODUCTION_INFO", 9006 }, { "BOOTLOAD_DATA", 5003 }, { "BUTTON_CHANGE", 257 }, { "CAMERA_CAPTURE_STATUS", 262 }, { "CAMERA_IMAGE_CAPTURED", 263 }, { "CAMERA_INFORMATION", 259 }, { "CAMERA_SETTINGS", 260 }, { "CAMERA_TRIGGER", 112 }, { "CHANGE_OPERATOR_CONTROL", 5 }, { "CHANGE_OPERATOR_CONTROL_ACK", 6 }, { "COLLISION", 247 }, { "COMMAND_ACK", 77 }, { "COMMAND_INT", 75 }, { "COMMAND_LONG", 76 }, { "CONTROL_SYSTEM_STATE", 146 }, { "DATA_STREAM", 67 }, { "DATA_TRANSMISSION_HANDSHAKE", 130 }, { "DEBUG", 254 }, { "DEBUG_VECT", 250 }, { "DISTANCE_SENSOR", 132 }, { "ENCAPSULATED_DATA", 131 }, { "ESTIMATOR_MODE_ADDITIONS", 4007 }, { "ESTIMATOR_STATUS", 230 }, { "EXTENDED_SYS_STATE", 245 }, { "FILE_TRANSFER_PROTOCOL", 110 }, { "FLIGHT_INFORMATION", 264 }, { "FOLLOW_TARGET", 144 }, { "GIMBAL_ADDITIONAL_ATTITUDE", 5004 }, { "GIMBAL_CONTROL", 5000 }, { "GIMBAL_CONTROL_STANDARD", 5001 }, { "GIMBAL_DEBUGDATA", 5002 }, { "GLOBAL_POSITION_INT", 33 }, { "GLOBAL_POSITION_INT_COV", 63 }, { "GLOBAL_VISION_POSITION_ESTIMATE", 101 }, { "GPS2_RAW", 124 }, { "GPS2_RTK", 128 }, { "GPS_GLOBAL_ORIGIN", 49 }, { "GPS_INJECT_DATA", 123 }, { "GPS_INPUT", 232 }, { "GPS_RAW_INT", 24 }, { "GPS_RTCM_DATA", 233 }, { "GPS_RTK", 127 }, { "GPS_STATUS", 25 }, { "HEARTBEAT", 0 }, { "HIGHRES_IMU", 105 }, { "HIGH_LATENCY", 234 }, { "HIGH_LATENCY2", 235 }, { "HIL_ACTUATOR_CONTROLS", 93 }, { "HIL_CONTROLS", 91 }, { "HIL_GPS", 113 }, { "HIL_OPTICAL_FLOW", 114 }, { "HIL_RC_INPUTS_RAW", 92 }, { "HIL_SENSOR", 107 }, { "HIL_STATE", 90 }, { "HIL_STATE_QUATERNION", 115 }, { "HOME_POSITION", 242 }, { "LANDING_TARGET", 149 }, { "LOCAL_POSITION_NED", 32 }, { "LOCAL_POSITION_NED_COV", 64 }, { "LOCAL_POSITION_NED_SYSTEM_GLOBAL_OFFSET", 89 }, { "LOGGING_ACK", 268 }, { "LOGGING_DATA", 266 }, { "LOGGING_DATA_ACKED", 267 }, { "LOG_DATA", 120 }, { "LOG_ENTRY", 118 }, { "LOG_ERASE", 121 }, { "LOG_REQUEST_DATA", 119 }, { "LOG_REQUEST_END", 122 }, { "LOG_REQUEST_LIST", 117 }, { "MANUAL_CONTROL", 69 }, { "MANUAL_SETPOINT", 81 }, { "MAV_RC_CMD", 7050 }, { "MAV_RC_CMD_ACK", 7051 }, { "MEMORY_VECT", 249 }, { "MESSAGE_INTERVAL", 244 }, { "MISSION_ACK", 47 }, { "MISSION_CLEAR_ALL", 45 }, { "MISSION_COUNT", 44 }, { "MISSION_CURRENT", 42 }, { "MISSION_ITEM", 39 }, { "MISSION_ITEM_INT", 73 }, { "MISSION_ITEM_REACHED", 46 }, { "MISSION_REQUEST", 40 }, { "MISSION_REQUEST_INT", 51 }, { "MISSION_REQUEST_LIST", 43 }, { "MISSION_REQUEST_PARTIAL_LIST", 37 }, { "MISSION_SET_CURRENT", 41 }, { "MISSION_WRITE_PARTIAL_LIST", 38 }, { "MOUNT_ORIENTATION", 265 }, { "NAMED_VALUE_FLOAT", 251 }, { "NAMED_VALUE_INT", 252 }, { "NAV_CONTROLLER_OUTPUT", 62 }, { "NO_FLY_ZONE_UNLOCKING", 4008 }, { "OBSTACLE_DISTANCE", 330 }, { "ODOMETRY", 331 }, { "OPTICAL_FLOW", 100 }, { "OPTICAL_FLOW_RAD", 106 }, { "PARAM_EXT_ACK", 324 }, { "PARAM_EXT_REQUEST_LIST", 321 }, { "PARAM_EXT_REQUEST_READ", 320 }, { "PARAM_EXT_SET", 323 }, { "PARAM_EXT_VALUE", 322 }, { "PARAM_MAP_RC", 50 }, { "PARAM_REQUEST_LIST", 21 }, { "PARAM_REQUEST_READ", 20 }, { "PARAM_SET", 23 }, { "PARAM_VALUE", 22 }, { "PING", 4 }, { "PLAY_TUNE", 258 }, { "POSITION_TARGET_GLOBAL_INT", 87 }, { "POSITION_TARGET_LOCAL_NED", 85 }, { "POWER_STATUS", 125 }, { "PROTOCOL_VERSION", 300 }, { "RADIO_STATUS", 109 }, { "RAW_IMU", 27 }, { "RAW_PRESSURE", 28 }, { "RC_CHANNELS", 65 }, { "RC_CHANNELS_OVERRIDE", 70 }, { "RC_CHANNELS_RAW", 35 }, { "RC_CHANNELS_SCALED", 34 }, { "REQUEST_DATA_STREAM", 66 }, { "RESOURCE_REQUEST", 142 }, { "SAFETY_ALLOWED_AREA", 55 }, { "SAFETY_SET_ALLOWED_AREA", 54 }, { "SCALED_IMU", 26 }, { "SCALED_IMU2", 116 }, { "SCALED_IMU3", 129 }, { "SCALED_PRESSURE", 29 }, { "SCALED_PRESSURE2", 137 }, { "SCALED_PRESSURE3", 143 }, { "SERIAL_CONTROL", 126 }, { "SERVO_OUTPUT_RAW", 36 }, { "SETUP_SIGNING", 256 }, { "SET_ACTUATOR_CONTROL_TARGET", 139 }, { "SET_ATTITUDE_TARGET", 82 }, { "SET_GPS_GLOBAL_ORIGIN", 48 }, { "SET_HOME_POSITION", 243 }, { "SET_MODE", 11 }, { "SET_POSITION_TARGET_GLOBAL_INT", 86 }, { "SET_POSITION_TARGET_LOCAL_NED", 84 }, { "SET_VIDEO_STREAM_SETTINGS", 270 }, { "SIM_STATE", 108 }, { "STATUSTEXT", 253 }, { "STORAGE_INFORMATION", 261 }, { "SYSTEM_TIME", 2 }, { "SYS_STATUS", 1 }, { "TASK_ACK", 4004 }, { "TASK_DOWN_MIS", 4002 }, { "TASK_REQUEST_LIST", 4003 }, { "TASK_STATE_FEEDBACK", 4005 }, { "TASK_UP_MIS", 4001 }, { "TERRAIN_CHECK", 135 }, { "TERRAIN_DATA", 134 }, { "TERRAIN_REPORT", 136 }, { "TERRAIN_REQUEST", 133 }, { "TIMESYNC", 111 }, { "TRAJECTORY_REPRESENTATION_BEZIER", 333 }, { "TRAJECTORY_REPRESENTATION_WAYPOINTS", 332 }, { "UAVCAN_NODE_INFO", 311 }, { "UAVCAN_NODE_STATUS", 310 }, { "UPDATE_STATUS_FEEDBACK", 6000 }, { "V2_EXTENSION", 248 }, { "VFR_HUD", 74 }, { "VIBRATION", 241 }, { "VICON_POSITION_ESTIMATE", 104 }, { "VIDEO_STREAM_INFORMATION", 269 }, { "VISION_MODULES_VERSIONS", 4006 }, { "VISION_POSITION_ESTIMATE", 102 }, { "VISION_SPEED_ESTIMATE", 103 }, { "VISUAL_TRACKING", 4000 }, { "WIFI_CONFIG_AP", 299 }, { "WIND_COV", 231 }, { "YUNEEC_OPTICAL_FLOW_RAD", 4009 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_YUNEEC_H
