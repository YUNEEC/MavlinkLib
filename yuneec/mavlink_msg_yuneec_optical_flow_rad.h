#pragma once
// MESSAGE YUNEEC_OPTICAL_FLOW_RAD PACKING

#define MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD 4009

MAVPACKED(
typedef struct __mavlink_yuneec_optical_flow_rad_t {
 uint64_t time_usec; /*< [us] Timestamp (microseconds, synced to UNIX time or since system boot)*/
 uint32_t integration_time_us; /*< [us] Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.*/
 float integrated_x; /*< [rad] Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)*/
 float integrated_y; /*< [rad] Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)*/
 float integrated_xgyro; /*< [rad] RH rotation around X axis (rad)*/
 float integrated_ygyro; /*< [rad] RH rotation around Y axis (rad)*/
 float integrated_zgyro; /*< [rad] RH rotation around Z axis (rad)*/
 uint32_t time_delta_distance_us; /*< [us] Time in microseconds since the distance was sampled.*/
 float distance; /*< [m] Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.*/
 uint32_t distance_count; /*<  count of sonar distance capture*/
 int16_t temperature; /*< [cdegC] Temperature * 100 in centi-degrees Celsius*/
 uint8_t sensor_id; /*<  Sensor ID*/
 uint8_t quality; /*<  Optical flow quality / confidence. 0: no valid flow, 255: maximum quality*/
 uint8_t sonar_level; /*<   sonar sensitivity level. 0 means the lowest amplifier regulation level. 255 means the biggest level*/
 uint8_t luminance; /*<  optical flow luminance. 0 means the lowest brightness and 255 means the highest brightness. No specific unit for it.*/
}) mavlink_yuneec_optical_flow_rad_t;

#define MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN 50
#define MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN 50
#define MAVLINK_MSG_ID_4009_LEN 50
#define MAVLINK_MSG_ID_4009_MIN_LEN 50

#define MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC 189
#define MAVLINK_MSG_ID_4009_CRC 189



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_YUNEEC_OPTICAL_FLOW_RAD { \
    4009, \
    "YUNEEC_OPTICAL_FLOW_RAD", \
    15, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_yuneec_optical_flow_rad_t, time_usec) }, \
         { "sensor_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_yuneec_optical_flow_rad_t, sensor_id) }, \
         { "integration_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_yuneec_optical_flow_rad_t, integration_time_us) }, \
         { "integrated_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_x) }, \
         { "integrated_y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_y) }, \
         { "integrated_xgyro", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_xgyro) }, \
         { "integrated_ygyro", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_ygyro) }, \
         { "integrated_zgyro", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_zgyro) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_yuneec_optical_flow_rad_t, temperature) }, \
         { "quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 47, offsetof(mavlink_yuneec_optical_flow_rad_t, quality) }, \
         { "time_delta_distance_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_yuneec_optical_flow_rad_t, time_delta_distance_us) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_yuneec_optical_flow_rad_t, distance) }, \
         { "sonar_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_yuneec_optical_flow_rad_t, sonar_level) }, \
         { "luminance", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_yuneec_optical_flow_rad_t, luminance) }, \
         { "distance_count", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_yuneec_optical_flow_rad_t, distance_count) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_YUNEEC_OPTICAL_FLOW_RAD { \
    "YUNEEC_OPTICAL_FLOW_RAD", \
    15, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_yuneec_optical_flow_rad_t, time_usec) }, \
         { "sensor_id", NULL, MAVLINK_TYPE_UINT8_T, 0, 46, offsetof(mavlink_yuneec_optical_flow_rad_t, sensor_id) }, \
         { "integration_time_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_yuneec_optical_flow_rad_t, integration_time_us) }, \
         { "integrated_x", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_x) }, \
         { "integrated_y", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_y) }, \
         { "integrated_xgyro", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_xgyro) }, \
         { "integrated_ygyro", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_ygyro) }, \
         { "integrated_zgyro", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_yuneec_optical_flow_rad_t, integrated_zgyro) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 44, offsetof(mavlink_yuneec_optical_flow_rad_t, temperature) }, \
         { "quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 47, offsetof(mavlink_yuneec_optical_flow_rad_t, quality) }, \
         { "time_delta_distance_us", NULL, MAVLINK_TYPE_UINT32_T, 0, 32, offsetof(mavlink_yuneec_optical_flow_rad_t, time_delta_distance_us) }, \
         { "distance", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_yuneec_optical_flow_rad_t, distance) }, \
         { "sonar_level", NULL, MAVLINK_TYPE_UINT8_T, 0, 48, offsetof(mavlink_yuneec_optical_flow_rad_t, sonar_level) }, \
         { "luminance", NULL, MAVLINK_TYPE_UINT8_T, 0, 49, offsetof(mavlink_yuneec_optical_flow_rad_t, luminance) }, \
         { "distance_count", NULL, MAVLINK_TYPE_UINT32_T, 0, 40, offsetof(mavlink_yuneec_optical_flow_rad_t, distance_count) }, \
         } \
}
#endif

/**
 * @brief Pack a yuneec_optical_flow_rad message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec [us] Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param sensor_id  Sensor ID
 * @param integration_time_us [us] Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.
 * @param integrated_x [rad] Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)
 * @param integrated_y [rad] Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)
 * @param integrated_xgyro [rad] RH rotation around X axis (rad)
 * @param integrated_ygyro [rad] RH rotation around Y axis (rad)
 * @param integrated_zgyro [rad] RH rotation around Z axis (rad)
 * @param temperature [cdegC] Temperature * 100 in centi-degrees Celsius
 * @param quality  Optical flow quality / confidence. 0: no valid flow, 255: maximum quality
 * @param time_delta_distance_us [us] Time in microseconds since the distance was sampled.
 * @param distance [m] Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.
 * @param sonar_level   sonar sensitivity level. 0 means the lowest amplifier regulation level. 255 means the biggest level
 * @param luminance  optical flow luminance. 0 means the lowest brightness and 255 means the highest brightness. No specific unit for it.
 * @param distance_count  count of sonar distance capture
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yuneec_optical_flow_rad_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance, uint8_t sonar_level, uint8_t luminance, uint32_t distance_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, integration_time_us);
    _mav_put_float(buf, 12, integrated_x);
    _mav_put_float(buf, 16, integrated_y);
    _mav_put_float(buf, 20, integrated_xgyro);
    _mav_put_float(buf, 24, integrated_ygyro);
    _mav_put_float(buf, 28, integrated_zgyro);
    _mav_put_uint32_t(buf, 32, time_delta_distance_us);
    _mav_put_float(buf, 36, distance);
    _mav_put_uint32_t(buf, 40, distance_count);
    _mav_put_int16_t(buf, 44, temperature);
    _mav_put_uint8_t(buf, 46, sensor_id);
    _mav_put_uint8_t(buf, 47, quality);
    _mav_put_uint8_t(buf, 48, sonar_level);
    _mav_put_uint8_t(buf, 49, luminance);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN);
#else
    mavlink_yuneec_optical_flow_rad_t packet;
    packet.time_usec = time_usec;
    packet.integration_time_us = integration_time_us;
    packet.integrated_x = integrated_x;
    packet.integrated_y = integrated_y;
    packet.integrated_xgyro = integrated_xgyro;
    packet.integrated_ygyro = integrated_ygyro;
    packet.integrated_zgyro = integrated_zgyro;
    packet.time_delta_distance_us = time_delta_distance_us;
    packet.distance = distance;
    packet.distance_count = distance_count;
    packet.temperature = temperature;
    packet.sensor_id = sensor_id;
    packet.quality = quality;
    packet.sonar_level = sonar_level;
    packet.luminance = luminance;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
}

/**
 * @brief Pack a yuneec_optical_flow_rad message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec [us] Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param sensor_id  Sensor ID
 * @param integration_time_us [us] Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.
 * @param integrated_x [rad] Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)
 * @param integrated_y [rad] Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)
 * @param integrated_xgyro [rad] RH rotation around X axis (rad)
 * @param integrated_ygyro [rad] RH rotation around Y axis (rad)
 * @param integrated_zgyro [rad] RH rotation around Z axis (rad)
 * @param temperature [cdegC] Temperature * 100 in centi-degrees Celsius
 * @param quality  Optical flow quality / confidence. 0: no valid flow, 255: maximum quality
 * @param time_delta_distance_us [us] Time in microseconds since the distance was sampled.
 * @param distance [m] Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.
 * @param sonar_level   sonar sensitivity level. 0 means the lowest amplifier regulation level. 255 means the biggest level
 * @param luminance  optical flow luminance. 0 means the lowest brightness and 255 means the highest brightness. No specific unit for it.
 * @param distance_count  count of sonar distance capture
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_yuneec_optical_flow_rad_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t sensor_id,uint32_t integration_time_us,float integrated_x,float integrated_y,float integrated_xgyro,float integrated_ygyro,float integrated_zgyro,int16_t temperature,uint8_t quality,uint32_t time_delta_distance_us,float distance,uint8_t sonar_level,uint8_t luminance,uint32_t distance_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, integration_time_us);
    _mav_put_float(buf, 12, integrated_x);
    _mav_put_float(buf, 16, integrated_y);
    _mav_put_float(buf, 20, integrated_xgyro);
    _mav_put_float(buf, 24, integrated_ygyro);
    _mav_put_float(buf, 28, integrated_zgyro);
    _mav_put_uint32_t(buf, 32, time_delta_distance_us);
    _mav_put_float(buf, 36, distance);
    _mav_put_uint32_t(buf, 40, distance_count);
    _mav_put_int16_t(buf, 44, temperature);
    _mav_put_uint8_t(buf, 46, sensor_id);
    _mav_put_uint8_t(buf, 47, quality);
    _mav_put_uint8_t(buf, 48, sonar_level);
    _mav_put_uint8_t(buf, 49, luminance);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN);
#else
    mavlink_yuneec_optical_flow_rad_t packet;
    packet.time_usec = time_usec;
    packet.integration_time_us = integration_time_us;
    packet.integrated_x = integrated_x;
    packet.integrated_y = integrated_y;
    packet.integrated_xgyro = integrated_xgyro;
    packet.integrated_ygyro = integrated_ygyro;
    packet.integrated_zgyro = integrated_zgyro;
    packet.time_delta_distance_us = time_delta_distance_us;
    packet.distance = distance;
    packet.distance_count = distance_count;
    packet.temperature = temperature;
    packet.sensor_id = sensor_id;
    packet.quality = quality;
    packet.sonar_level = sonar_level;
    packet.luminance = luminance;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
}

/**
 * @brief Encode a yuneec_optical_flow_rad struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param yuneec_optical_flow_rad C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yuneec_optical_flow_rad_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_yuneec_optical_flow_rad_t* yuneec_optical_flow_rad)
{
    return mavlink_msg_yuneec_optical_flow_rad_pack(system_id, component_id, msg, yuneec_optical_flow_rad->time_usec, yuneec_optical_flow_rad->sensor_id, yuneec_optical_flow_rad->integration_time_us, yuneec_optical_flow_rad->integrated_x, yuneec_optical_flow_rad->integrated_y, yuneec_optical_flow_rad->integrated_xgyro, yuneec_optical_flow_rad->integrated_ygyro, yuneec_optical_flow_rad->integrated_zgyro, yuneec_optical_flow_rad->temperature, yuneec_optical_flow_rad->quality, yuneec_optical_flow_rad->time_delta_distance_us, yuneec_optical_flow_rad->distance, yuneec_optical_flow_rad->sonar_level, yuneec_optical_flow_rad->luminance, yuneec_optical_flow_rad->distance_count);
}

/**
 * @brief Encode a yuneec_optical_flow_rad struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param yuneec_optical_flow_rad C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_yuneec_optical_flow_rad_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_yuneec_optical_flow_rad_t* yuneec_optical_flow_rad)
{
    return mavlink_msg_yuneec_optical_flow_rad_pack_chan(system_id, component_id, chan, msg, yuneec_optical_flow_rad->time_usec, yuneec_optical_flow_rad->sensor_id, yuneec_optical_flow_rad->integration_time_us, yuneec_optical_flow_rad->integrated_x, yuneec_optical_flow_rad->integrated_y, yuneec_optical_flow_rad->integrated_xgyro, yuneec_optical_flow_rad->integrated_ygyro, yuneec_optical_flow_rad->integrated_zgyro, yuneec_optical_flow_rad->temperature, yuneec_optical_flow_rad->quality, yuneec_optical_flow_rad->time_delta_distance_us, yuneec_optical_flow_rad->distance, yuneec_optical_flow_rad->sonar_level, yuneec_optical_flow_rad->luminance, yuneec_optical_flow_rad->distance_count);
}

/**
 * @brief Send a yuneec_optical_flow_rad message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec [us] Timestamp (microseconds, synced to UNIX time or since system boot)
 * @param sensor_id  Sensor ID
 * @param integration_time_us [us] Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.
 * @param integrated_x [rad] Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)
 * @param integrated_y [rad] Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)
 * @param integrated_xgyro [rad] RH rotation around X axis (rad)
 * @param integrated_ygyro [rad] RH rotation around Y axis (rad)
 * @param integrated_zgyro [rad] RH rotation around Z axis (rad)
 * @param temperature [cdegC] Temperature * 100 in centi-degrees Celsius
 * @param quality  Optical flow quality / confidence. 0: no valid flow, 255: maximum quality
 * @param time_delta_distance_us [us] Time in microseconds since the distance was sampled.
 * @param distance [m] Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.
 * @param sonar_level   sonar sensitivity level. 0 means the lowest amplifier regulation level. 255 means the biggest level
 * @param luminance  optical flow luminance. 0 means the lowest brightness and 255 means the highest brightness. No specific unit for it.
 * @param distance_count  count of sonar distance capture
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_yuneec_optical_flow_rad_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance, uint8_t sonar_level, uint8_t luminance, uint32_t distance_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, integration_time_us);
    _mav_put_float(buf, 12, integrated_x);
    _mav_put_float(buf, 16, integrated_y);
    _mav_put_float(buf, 20, integrated_xgyro);
    _mav_put_float(buf, 24, integrated_ygyro);
    _mav_put_float(buf, 28, integrated_zgyro);
    _mav_put_uint32_t(buf, 32, time_delta_distance_us);
    _mav_put_float(buf, 36, distance);
    _mav_put_uint32_t(buf, 40, distance_count);
    _mav_put_int16_t(buf, 44, temperature);
    _mav_put_uint8_t(buf, 46, sensor_id);
    _mav_put_uint8_t(buf, 47, quality);
    _mav_put_uint8_t(buf, 48, sonar_level);
    _mav_put_uint8_t(buf, 49, luminance);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD, buf, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
#else
    mavlink_yuneec_optical_flow_rad_t packet;
    packet.time_usec = time_usec;
    packet.integration_time_us = integration_time_us;
    packet.integrated_x = integrated_x;
    packet.integrated_y = integrated_y;
    packet.integrated_xgyro = integrated_xgyro;
    packet.integrated_ygyro = integrated_ygyro;
    packet.integrated_zgyro = integrated_zgyro;
    packet.time_delta_distance_us = time_delta_distance_us;
    packet.distance = distance;
    packet.distance_count = distance_count;
    packet.temperature = temperature;
    packet.sensor_id = sensor_id;
    packet.quality = quality;
    packet.sonar_level = sonar_level;
    packet.luminance = luminance;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD, (const char *)&packet, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
#endif
}

/**
 * @brief Send a yuneec_optical_flow_rad message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_yuneec_optical_flow_rad_send_struct(mavlink_channel_t chan, const mavlink_yuneec_optical_flow_rad_t* yuneec_optical_flow_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_yuneec_optical_flow_rad_send(chan, yuneec_optical_flow_rad->time_usec, yuneec_optical_flow_rad->sensor_id, yuneec_optical_flow_rad->integration_time_us, yuneec_optical_flow_rad->integrated_x, yuneec_optical_flow_rad->integrated_y, yuneec_optical_flow_rad->integrated_xgyro, yuneec_optical_flow_rad->integrated_ygyro, yuneec_optical_flow_rad->integrated_zgyro, yuneec_optical_flow_rad->temperature, yuneec_optical_flow_rad->quality, yuneec_optical_flow_rad->time_delta_distance_us, yuneec_optical_flow_rad->distance, yuneec_optical_flow_rad->sonar_level, yuneec_optical_flow_rad->luminance, yuneec_optical_flow_rad->distance_count);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD, (const char *)yuneec_optical_flow_rad, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
#endif
}

#if MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_yuneec_optical_flow_rad_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t sensor_id, uint32_t integration_time_us, float integrated_x, float integrated_y, float integrated_xgyro, float integrated_ygyro, float integrated_zgyro, int16_t temperature, uint8_t quality, uint32_t time_delta_distance_us, float distance, uint8_t sonar_level, uint8_t luminance, uint32_t distance_count)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_uint32_t(buf, 8, integration_time_us);
    _mav_put_float(buf, 12, integrated_x);
    _mav_put_float(buf, 16, integrated_y);
    _mav_put_float(buf, 20, integrated_xgyro);
    _mav_put_float(buf, 24, integrated_ygyro);
    _mav_put_float(buf, 28, integrated_zgyro);
    _mav_put_uint32_t(buf, 32, time_delta_distance_us);
    _mav_put_float(buf, 36, distance);
    _mav_put_uint32_t(buf, 40, distance_count);
    _mav_put_int16_t(buf, 44, temperature);
    _mav_put_uint8_t(buf, 46, sensor_id);
    _mav_put_uint8_t(buf, 47, quality);
    _mav_put_uint8_t(buf, 48, sonar_level);
    _mav_put_uint8_t(buf, 49, luminance);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD, buf, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
#else
    mavlink_yuneec_optical_flow_rad_t *packet = (mavlink_yuneec_optical_flow_rad_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->integration_time_us = integration_time_us;
    packet->integrated_x = integrated_x;
    packet->integrated_y = integrated_y;
    packet->integrated_xgyro = integrated_xgyro;
    packet->integrated_ygyro = integrated_ygyro;
    packet->integrated_zgyro = integrated_zgyro;
    packet->time_delta_distance_us = time_delta_distance_us;
    packet->distance = distance;
    packet->distance_count = distance_count;
    packet->temperature = temperature;
    packet->sensor_id = sensor_id;
    packet->quality = quality;
    packet->sonar_level = sonar_level;
    packet->luminance = luminance;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD, (const char *)packet, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_MIN_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_CRC);
#endif
}
#endif

#endif

// MESSAGE YUNEEC_OPTICAL_FLOW_RAD UNPACKING


/**
 * @brief Get field time_usec from yuneec_optical_flow_rad message
 *
 * @return [us] Timestamp (microseconds, synced to UNIX time or since system boot)
 */
static inline uint64_t mavlink_msg_yuneec_optical_flow_rad_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field sensor_id from yuneec_optical_flow_rad message
 *
 * @return  Sensor ID
 */
static inline uint8_t mavlink_msg_yuneec_optical_flow_rad_get_sensor_id(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  46);
}

/**
 * @brief Get field integration_time_us from yuneec_optical_flow_rad message
 *
 * @return [us] Integration time in microseconds. Divide integrated_x and integrated_y by the integration time to obtain average flow. The integration time also indicates the.
 */
static inline uint32_t mavlink_msg_yuneec_optical_flow_rad_get_integration_time_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field integrated_x from yuneec_optical_flow_rad message
 *
 * @return [rad] Flow in radians around X axis (Sensor RH rotation about the X axis induces a positive flow. Sensor linear motion along the positive Y axis induces a negative flow.)
 */
static inline float mavlink_msg_yuneec_optical_flow_rad_get_integrated_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field integrated_y from yuneec_optical_flow_rad message
 *
 * @return [rad] Flow in radians around Y axis (Sensor RH rotation about the Y axis induces a positive flow. Sensor linear motion along the positive X axis induces a positive flow.)
 */
static inline float mavlink_msg_yuneec_optical_flow_rad_get_integrated_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field integrated_xgyro from yuneec_optical_flow_rad message
 *
 * @return [rad] RH rotation around X axis (rad)
 */
static inline float mavlink_msg_yuneec_optical_flow_rad_get_integrated_xgyro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field integrated_ygyro from yuneec_optical_flow_rad message
 *
 * @return [rad] RH rotation around Y axis (rad)
 */
static inline float mavlink_msg_yuneec_optical_flow_rad_get_integrated_ygyro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field integrated_zgyro from yuneec_optical_flow_rad message
 *
 * @return [rad] RH rotation around Z axis (rad)
 */
static inline float mavlink_msg_yuneec_optical_flow_rad_get_integrated_zgyro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field temperature from yuneec_optical_flow_rad message
 *
 * @return [cdegC] Temperature * 100 in centi-degrees Celsius
 */
static inline int16_t mavlink_msg_yuneec_optical_flow_rad_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  44);
}

/**
 * @brief Get field quality from yuneec_optical_flow_rad message
 *
 * @return  Optical flow quality / confidence. 0: no valid flow, 255: maximum quality
 */
static inline uint8_t mavlink_msg_yuneec_optical_flow_rad_get_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  47);
}

/**
 * @brief Get field time_delta_distance_us from yuneec_optical_flow_rad message
 *
 * @return [us] Time in microseconds since the distance was sampled.
 */
static inline uint32_t mavlink_msg_yuneec_optical_flow_rad_get_time_delta_distance_us(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  32);
}

/**
 * @brief Get field distance from yuneec_optical_flow_rad message
 *
 * @return [m] Distance to the center of the flow field in meters. Positive value (including zero): distance known. Negative value: Unknown distance.
 */
static inline float mavlink_msg_yuneec_optical_flow_rad_get_distance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field sonar_level from yuneec_optical_flow_rad message
 *
 * @return   sonar sensitivity level. 0 means the lowest amplifier regulation level. 255 means the biggest level
 */
static inline uint8_t mavlink_msg_yuneec_optical_flow_rad_get_sonar_level(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  48);
}

/**
 * @brief Get field luminance from yuneec_optical_flow_rad message
 *
 * @return  optical flow luminance. 0 means the lowest brightness and 255 means the highest brightness. No specific unit for it.
 */
static inline uint8_t mavlink_msg_yuneec_optical_flow_rad_get_luminance(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  49);
}

/**
 * @brief Get field distance_count from yuneec_optical_flow_rad message
 *
 * @return  count of sonar distance capture
 */
static inline uint32_t mavlink_msg_yuneec_optical_flow_rad_get_distance_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  40);
}

/**
 * @brief Decode a yuneec_optical_flow_rad message into a struct
 *
 * @param msg The message to decode
 * @param yuneec_optical_flow_rad C-struct to decode the message contents into
 */
static inline void mavlink_msg_yuneec_optical_flow_rad_decode(const mavlink_message_t* msg, mavlink_yuneec_optical_flow_rad_t* yuneec_optical_flow_rad)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    yuneec_optical_flow_rad->time_usec = mavlink_msg_yuneec_optical_flow_rad_get_time_usec(msg);
    yuneec_optical_flow_rad->integration_time_us = mavlink_msg_yuneec_optical_flow_rad_get_integration_time_us(msg);
    yuneec_optical_flow_rad->integrated_x = mavlink_msg_yuneec_optical_flow_rad_get_integrated_x(msg);
    yuneec_optical_flow_rad->integrated_y = mavlink_msg_yuneec_optical_flow_rad_get_integrated_y(msg);
    yuneec_optical_flow_rad->integrated_xgyro = mavlink_msg_yuneec_optical_flow_rad_get_integrated_xgyro(msg);
    yuneec_optical_flow_rad->integrated_ygyro = mavlink_msg_yuneec_optical_flow_rad_get_integrated_ygyro(msg);
    yuneec_optical_flow_rad->integrated_zgyro = mavlink_msg_yuneec_optical_flow_rad_get_integrated_zgyro(msg);
    yuneec_optical_flow_rad->time_delta_distance_us = mavlink_msg_yuneec_optical_flow_rad_get_time_delta_distance_us(msg);
    yuneec_optical_flow_rad->distance = mavlink_msg_yuneec_optical_flow_rad_get_distance(msg);
    yuneec_optical_flow_rad->distance_count = mavlink_msg_yuneec_optical_flow_rad_get_distance_count(msg);
    yuneec_optical_flow_rad->temperature = mavlink_msg_yuneec_optical_flow_rad_get_temperature(msg);
    yuneec_optical_flow_rad->sensor_id = mavlink_msg_yuneec_optical_flow_rad_get_sensor_id(msg);
    yuneec_optical_flow_rad->quality = mavlink_msg_yuneec_optical_flow_rad_get_quality(msg);
    yuneec_optical_flow_rad->sonar_level = mavlink_msg_yuneec_optical_flow_rad_get_sonar_level(msg);
    yuneec_optical_flow_rad->luminance = mavlink_msg_yuneec_optical_flow_rad_get_luminance(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN? msg->len : MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN;
        memset(yuneec_optical_flow_rad, 0, MAVLINK_MSG_ID_YUNEEC_OPTICAL_FLOW_RAD_LEN);
    memcpy(yuneec_optical_flow_rad, _MAV_PAYLOAD(msg), len);
#endif
}
