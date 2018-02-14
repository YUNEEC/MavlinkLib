#pragma once
// MESSAGE GIMBAL_ADDITIONAL_ATTITUDE PACKING

#define MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE 5004

MAVPACKED(
typedef struct __mavlink_gimbal_additional_attitude_t {
 uint32_t time_boot_ms; /*< timesmap*/
 float roll_relative; /*< Roll angle relative to vehicle in degrees.*/
 float pitch_relative; /*< Pitch angle relative to vehicle in degrees.*/
 float yaw_global; /*< Global yaw angle estimate in degrees.*/
}) mavlink_gimbal_additional_attitude_t;

#define MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN 16
#define MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN 16
#define MAVLINK_MSG_ID_5004_LEN 16
#define MAVLINK_MSG_ID_5004_MIN_LEN 16

#define MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC 153
#define MAVLINK_MSG_ID_5004_CRC 153



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GIMBAL_ADDITIONAL_ATTITUDE { \
    5004, \
    "GIMBAL_ADDITIONAL_ATTITUDE", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gimbal_additional_attitude_t, time_boot_ms) }, \
         { "roll_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_gimbal_additional_attitude_t, roll_relative) }, \
         { "pitch_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gimbal_additional_attitude_t, pitch_relative) }, \
         { "yaw_global", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gimbal_additional_attitude_t, yaw_global) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GIMBAL_ADDITIONAL_ATTITUDE { \
    "GIMBAL_ADDITIONAL_ATTITUDE", \
    4, \
    {  { "time_boot_ms", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_gimbal_additional_attitude_t, time_boot_ms) }, \
         { "roll_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_gimbal_additional_attitude_t, roll_relative) }, \
         { "pitch_relative", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gimbal_additional_attitude_t, pitch_relative) }, \
         { "yaw_global", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gimbal_additional_attitude_t, yaw_global) }, \
         } \
}
#endif

/**
 * @brief Pack a gimbal_additional_attitude message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_boot_ms timesmap
 * @param roll_relative Roll angle relative to vehicle in degrees.
 * @param pitch_relative Pitch angle relative to vehicle in degrees.
 * @param yaw_global Global yaw angle estimate in degrees.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_additional_attitude_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t time_boot_ms, float roll_relative, float pitch_relative, float yaw_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll_relative);
    _mav_put_float(buf, 8, pitch_relative);
    _mav_put_float(buf, 12, yaw_global);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN);
#else
    mavlink_gimbal_additional_attitude_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll_relative = roll_relative;
    packet.pitch_relative = pitch_relative;
    packet.yaw_global = yaw_global;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
}

/**
 * @brief Pack a gimbal_additional_attitude message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_boot_ms timesmap
 * @param roll_relative Roll angle relative to vehicle in degrees.
 * @param pitch_relative Pitch angle relative to vehicle in degrees.
 * @param yaw_global Global yaw angle estimate in degrees.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_additional_attitude_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t time_boot_ms,float roll_relative,float pitch_relative,float yaw_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll_relative);
    _mav_put_float(buf, 8, pitch_relative);
    _mav_put_float(buf, 12, yaw_global);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN);
#else
    mavlink_gimbal_additional_attitude_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll_relative = roll_relative;
    packet.pitch_relative = pitch_relative;
    packet.yaw_global = yaw_global;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
}

/**
 * @brief Encode a gimbal_additional_attitude struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_additional_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_additional_attitude_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_additional_attitude_t* gimbal_additional_attitude)
{
    return mavlink_msg_gimbal_additional_attitude_pack(system_id, component_id, msg, gimbal_additional_attitude->time_boot_ms, gimbal_additional_attitude->roll_relative, gimbal_additional_attitude->pitch_relative, gimbal_additional_attitude->yaw_global);
}

/**
 * @brief Encode a gimbal_additional_attitude struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_additional_attitude C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_additional_attitude_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_additional_attitude_t* gimbal_additional_attitude)
{
    return mavlink_msg_gimbal_additional_attitude_pack_chan(system_id, component_id, chan, msg, gimbal_additional_attitude->time_boot_ms, gimbal_additional_attitude->roll_relative, gimbal_additional_attitude->pitch_relative, gimbal_additional_attitude->yaw_global);
}

/**
 * @brief Send a gimbal_additional_attitude message
 * @param chan MAVLink channel to send the message
 *
 * @param time_boot_ms timesmap
 * @param roll_relative Roll angle relative to vehicle in degrees.
 * @param pitch_relative Pitch angle relative to vehicle in degrees.
 * @param yaw_global Global yaw angle estimate in degrees.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_additional_attitude_send(mavlink_channel_t chan, uint32_t time_boot_ms, float roll_relative, float pitch_relative, float yaw_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN];
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll_relative);
    _mav_put_float(buf, 8, pitch_relative);
    _mav_put_float(buf, 12, yaw_global);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE, buf, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
#else
    mavlink_gimbal_additional_attitude_t packet;
    packet.time_boot_ms = time_boot_ms;
    packet.roll_relative = roll_relative;
    packet.pitch_relative = pitch_relative;
    packet.yaw_global = yaw_global;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
#endif
}

/**
 * @brief Send a gimbal_additional_attitude message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gimbal_additional_attitude_send_struct(mavlink_channel_t chan, const mavlink_gimbal_additional_attitude_t* gimbal_additional_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_additional_attitude_send(chan, gimbal_additional_attitude->time_boot_ms, gimbal_additional_attitude->roll_relative, gimbal_additional_attitude->pitch_relative, gimbal_additional_attitude->yaw_global);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE, (const char *)gimbal_additional_attitude, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_additional_attitude_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t time_boot_ms, float roll_relative, float pitch_relative, float yaw_global)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, time_boot_ms);
    _mav_put_float(buf, 4, roll_relative);
    _mav_put_float(buf, 8, pitch_relative);
    _mav_put_float(buf, 12, yaw_global);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE, buf, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
#else
    mavlink_gimbal_additional_attitude_t *packet = (mavlink_gimbal_additional_attitude_t *)msgbuf;
    packet->time_boot_ms = time_boot_ms;
    packet->roll_relative = roll_relative;
    packet->pitch_relative = pitch_relative;
    packet->yaw_global = yaw_global;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_CRC);
#endif
}
#endif

#endif

// MESSAGE GIMBAL_ADDITIONAL_ATTITUDE UNPACKING


/**
 * @brief Get field time_boot_ms from gimbal_additional_attitude message
 *
 * @return timesmap
 */
static inline uint32_t mavlink_msg_gimbal_additional_attitude_get_time_boot_ms(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field roll_relative from gimbal_additional_attitude message
 *
 * @return Roll angle relative to vehicle in degrees.
 */
static inline float mavlink_msg_gimbal_additional_attitude_get_roll_relative(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field pitch_relative from gimbal_additional_attitude message
 *
 * @return Pitch angle relative to vehicle in degrees.
 */
static inline float mavlink_msg_gimbal_additional_attitude_get_pitch_relative(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field yaw_global from gimbal_additional_attitude message
 *
 * @return Global yaw angle estimate in degrees.
 */
static inline float mavlink_msg_gimbal_additional_attitude_get_yaw_global(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a gimbal_additional_attitude message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_additional_attitude C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_additional_attitude_decode(const mavlink_message_t* msg, mavlink_gimbal_additional_attitude_t* gimbal_additional_attitude)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gimbal_additional_attitude->time_boot_ms = mavlink_msg_gimbal_additional_attitude_get_time_boot_ms(msg);
    gimbal_additional_attitude->roll_relative = mavlink_msg_gimbal_additional_attitude_get_roll_relative(msg);
    gimbal_additional_attitude->pitch_relative = mavlink_msg_gimbal_additional_attitude_get_pitch_relative(msg);
    gimbal_additional_attitude->yaw_global = mavlink_msg_gimbal_additional_attitude_get_yaw_global(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN? msg->len : MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN;
        memset(gimbal_additional_attitude, 0, MAVLINK_MSG_ID_GIMBAL_ADDITIONAL_ATTITUDE_LEN);
    memcpy(gimbal_additional_attitude, _MAV_PAYLOAD(msg), len);
#endif
}
