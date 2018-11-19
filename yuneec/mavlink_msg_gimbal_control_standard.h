#pragma once
// MESSAGE GIMBAL_CONTROL_STANDARD PACKING

#define MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD 5001

MAVPACKED(
typedef struct __mavlink_gimbal_control_standard_t {
 float yaw_channel; /*<  yaw channel value,if yaw mode is angle ,this value is angle.if yaw mode is velocity,this value is velocity..*/
 float pitch_channel; /*<   pitch channel value,if pitch mode is angle ,this value is angle.if pitch mode is velocity,this value is velocity..*/
 float roll_channel; /*<  roll channel value,if roll mode is angle ,this value is angle.if roll mode is velocity,this value is velocity..*/
 float drones_yawvelocity_desire; /*<  drone's yaw desired anguler velocity.*/
 uint8_t priority; /*<  the priority of this control packet.range is 1~253,1 is the highest and 253 is lowest;self-control is 1,the packet send by GIMBAL_CONTROL is 10,and the packet send by GIMBAL_DEBUGDATA is 20,the others number belong to user. */
 uint8_t yaw_mode; /*<  yaw mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.*/
 uint8_t pitch_mode; /*<  pitch mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.*/
 uint8_t roll_mode; /*<  roll mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.*/
}) mavlink_gimbal_control_standard_t;

#define MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN 20
#define MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN 20
#define MAVLINK_MSG_ID_5001_LEN 20
#define MAVLINK_MSG_ID_5001_MIN_LEN 20

#define MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC 130
#define MAVLINK_MSG_ID_5001_CRC 130



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL_STANDARD { \
    5001, \
    "GIMBAL_CONTROL_STANDARD", \
    8, \
    {  { "priority", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_gimbal_control_standard_t, priority) }, \
         { "yaw_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_gimbal_control_standard_t, yaw_mode) }, \
         { "pitch_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_gimbal_control_standard_t, pitch_mode) }, \
         { "roll_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_gimbal_control_standard_t, roll_mode) }, \
         { "yaw_channel", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_gimbal_control_standard_t, yaw_channel) }, \
         { "pitch_channel", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_gimbal_control_standard_t, pitch_channel) }, \
         { "roll_channel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gimbal_control_standard_t, roll_channel) }, \
         { "drones_yawvelocity_desire", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gimbal_control_standard_t, drones_yawvelocity_desire) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL_STANDARD { \
    "GIMBAL_CONTROL_STANDARD", \
    8, \
    {  { "priority", NULL, MAVLINK_TYPE_UINT8_T, 0, 16, offsetof(mavlink_gimbal_control_standard_t, priority) }, \
         { "yaw_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 17, offsetof(mavlink_gimbal_control_standard_t, yaw_mode) }, \
         { "pitch_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 18, offsetof(mavlink_gimbal_control_standard_t, pitch_mode) }, \
         { "roll_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 19, offsetof(mavlink_gimbal_control_standard_t, roll_mode) }, \
         { "yaw_channel", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_gimbal_control_standard_t, yaw_channel) }, \
         { "pitch_channel", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_gimbal_control_standard_t, pitch_channel) }, \
         { "roll_channel", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_gimbal_control_standard_t, roll_channel) }, \
         { "drones_yawvelocity_desire", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_gimbal_control_standard_t, drones_yawvelocity_desire) }, \
         } \
}
#endif

/**
 * @brief Pack a gimbal_control_standard message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param priority  the priority of this control packet.range is 1~253,1 is the highest and 253 is lowest;self-control is 1,the packet send by GIMBAL_CONTROL is 10,and the packet send by GIMBAL_DEBUGDATA is 20,the others number belong to user. 
 * @param yaw_mode  yaw mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param pitch_mode  pitch mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param roll_mode  roll mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param yaw_channel  yaw channel value,if yaw mode is angle ,this value is angle.if yaw mode is velocity,this value is velocity..
 * @param pitch_channel   pitch channel value,if pitch mode is angle ,this value is angle.if pitch mode is velocity,this value is velocity..
 * @param roll_channel  roll channel value,if roll mode is angle ,this value is angle.if roll mode is velocity,this value is velocity..
 * @param drones_yawvelocity_desire  drone's yaw desired anguler velocity.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_control_standard_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t priority, uint8_t yaw_mode, uint8_t pitch_mode, uint8_t roll_mode, float yaw_channel, float pitch_channel, float roll_channel, float drones_yawvelocity_desire)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN];
    _mav_put_float(buf, 0, yaw_channel);
    _mav_put_float(buf, 4, pitch_channel);
    _mav_put_float(buf, 8, roll_channel);
    _mav_put_float(buf, 12, drones_yawvelocity_desire);
    _mav_put_uint8_t(buf, 16, priority);
    _mav_put_uint8_t(buf, 17, yaw_mode);
    _mav_put_uint8_t(buf, 18, pitch_mode);
    _mav_put_uint8_t(buf, 19, roll_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN);
#else
    mavlink_gimbal_control_standard_t packet;
    packet.yaw_channel = yaw_channel;
    packet.pitch_channel = pitch_channel;
    packet.roll_channel = roll_channel;
    packet.drones_yawvelocity_desire = drones_yawvelocity_desire;
    packet.priority = priority;
    packet.yaw_mode = yaw_mode;
    packet.pitch_mode = pitch_mode;
    packet.roll_mode = roll_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
}

/**
 * @brief Pack a gimbal_control_standard message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param priority  the priority of this control packet.range is 1~253,1 is the highest and 253 is lowest;self-control is 1,the packet send by GIMBAL_CONTROL is 10,and the packet send by GIMBAL_DEBUGDATA is 20,the others number belong to user. 
 * @param yaw_mode  yaw mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param pitch_mode  pitch mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param roll_mode  roll mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param yaw_channel  yaw channel value,if yaw mode is angle ,this value is angle.if yaw mode is velocity,this value is velocity..
 * @param pitch_channel   pitch channel value,if pitch mode is angle ,this value is angle.if pitch mode is velocity,this value is velocity..
 * @param roll_channel  roll channel value,if roll mode is angle ,this value is angle.if roll mode is velocity,this value is velocity..
 * @param drones_yawvelocity_desire  drone's yaw desired anguler velocity.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_control_standard_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t priority,uint8_t yaw_mode,uint8_t pitch_mode,uint8_t roll_mode,float yaw_channel,float pitch_channel,float roll_channel,float drones_yawvelocity_desire)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN];
    _mav_put_float(buf, 0, yaw_channel);
    _mav_put_float(buf, 4, pitch_channel);
    _mav_put_float(buf, 8, roll_channel);
    _mav_put_float(buf, 12, drones_yawvelocity_desire);
    _mav_put_uint8_t(buf, 16, priority);
    _mav_put_uint8_t(buf, 17, yaw_mode);
    _mav_put_uint8_t(buf, 18, pitch_mode);
    _mav_put_uint8_t(buf, 19, roll_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN);
#else
    mavlink_gimbal_control_standard_t packet;
    packet.yaw_channel = yaw_channel;
    packet.pitch_channel = pitch_channel;
    packet.roll_channel = roll_channel;
    packet.drones_yawvelocity_desire = drones_yawvelocity_desire;
    packet.priority = priority;
    packet.yaw_mode = yaw_mode;
    packet.pitch_mode = pitch_mode;
    packet.roll_mode = roll_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
}

/**
 * @brief Encode a gimbal_control_standard struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_control_standard C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_control_standard_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_control_standard_t* gimbal_control_standard)
{
    return mavlink_msg_gimbal_control_standard_pack(system_id, component_id, msg, gimbal_control_standard->priority, gimbal_control_standard->yaw_mode, gimbal_control_standard->pitch_mode, gimbal_control_standard->roll_mode, gimbal_control_standard->yaw_channel, gimbal_control_standard->pitch_channel, gimbal_control_standard->roll_channel, gimbal_control_standard->drones_yawvelocity_desire);
}

/**
 * @brief Encode a gimbal_control_standard struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_control_standard C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_control_standard_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_control_standard_t* gimbal_control_standard)
{
    return mavlink_msg_gimbal_control_standard_pack_chan(system_id, component_id, chan, msg, gimbal_control_standard->priority, gimbal_control_standard->yaw_mode, gimbal_control_standard->pitch_mode, gimbal_control_standard->roll_mode, gimbal_control_standard->yaw_channel, gimbal_control_standard->pitch_channel, gimbal_control_standard->roll_channel, gimbal_control_standard->drones_yawvelocity_desire);
}

/**
 * @brief Send a gimbal_control_standard message
 * @param chan MAVLink channel to send the message
 *
 * @param priority  the priority of this control packet.range is 1~253,1 is the highest and 253 is lowest;self-control is 1,the packet send by GIMBAL_CONTROL is 10,and the packet send by GIMBAL_DEBUGDATA is 20,the others number belong to user. 
 * @param yaw_mode  yaw mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param pitch_mode  pitch mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param roll_mode  roll mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 * @param yaw_channel  yaw channel value,if yaw mode is angle ,this value is angle.if yaw mode is velocity,this value is velocity..
 * @param pitch_channel   pitch channel value,if pitch mode is angle ,this value is angle.if pitch mode is velocity,this value is velocity..
 * @param roll_channel  roll channel value,if roll mode is angle ,this value is angle.if roll mode is velocity,this value is velocity..
 * @param drones_yawvelocity_desire  drone's yaw desired anguler velocity.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_control_standard_send(mavlink_channel_t chan, uint8_t priority, uint8_t yaw_mode, uint8_t pitch_mode, uint8_t roll_mode, float yaw_channel, float pitch_channel, float roll_channel, float drones_yawvelocity_desire)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN];
    _mav_put_float(buf, 0, yaw_channel);
    _mav_put_float(buf, 4, pitch_channel);
    _mav_put_float(buf, 8, roll_channel);
    _mav_put_float(buf, 12, drones_yawvelocity_desire);
    _mav_put_uint8_t(buf, 16, priority);
    _mav_put_uint8_t(buf, 17, yaw_mode);
    _mav_put_uint8_t(buf, 18, pitch_mode);
    _mav_put_uint8_t(buf, 19, roll_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD, buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
#else
    mavlink_gimbal_control_standard_t packet;
    packet.yaw_channel = yaw_channel;
    packet.pitch_channel = pitch_channel;
    packet.roll_channel = roll_channel;
    packet.drones_yawvelocity_desire = drones_yawvelocity_desire;
    packet.priority = priority;
    packet.yaw_mode = yaw_mode;
    packet.pitch_mode = pitch_mode;
    packet.roll_mode = roll_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
#endif
}

/**
 * @brief Send a gimbal_control_standard message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gimbal_control_standard_send_struct(mavlink_channel_t chan, const mavlink_gimbal_control_standard_t* gimbal_control_standard)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_control_standard_send(chan, gimbal_control_standard->priority, gimbal_control_standard->yaw_mode, gimbal_control_standard->pitch_mode, gimbal_control_standard->roll_mode, gimbal_control_standard->yaw_channel, gimbal_control_standard->pitch_channel, gimbal_control_standard->roll_channel, gimbal_control_standard->drones_yawvelocity_desire);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD, (const char *)gimbal_control_standard, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_control_standard_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t priority, uint8_t yaw_mode, uint8_t pitch_mode, uint8_t roll_mode, float yaw_channel, float pitch_channel, float roll_channel, float drones_yawvelocity_desire)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, yaw_channel);
    _mav_put_float(buf, 4, pitch_channel);
    _mav_put_float(buf, 8, roll_channel);
    _mav_put_float(buf, 12, drones_yawvelocity_desire);
    _mav_put_uint8_t(buf, 16, priority);
    _mav_put_uint8_t(buf, 17, yaw_mode);
    _mav_put_uint8_t(buf, 18, pitch_mode);
    _mav_put_uint8_t(buf, 19, roll_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD, buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
#else
    mavlink_gimbal_control_standard_t *packet = (mavlink_gimbal_control_standard_t *)msgbuf;
    packet->yaw_channel = yaw_channel;
    packet->pitch_channel = pitch_channel;
    packet->roll_channel = roll_channel;
    packet->drones_yawvelocity_desire = drones_yawvelocity_desire;
    packet->priority = priority;
    packet->yaw_mode = yaw_mode;
    packet->pitch_mode = pitch_mode;
    packet->roll_mode = roll_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_CRC);
#endif
}
#endif

#endif

// MESSAGE GIMBAL_CONTROL_STANDARD UNPACKING


/**
 * @brief Get field priority from gimbal_control_standard message
 *
 * @return  the priority of this control packet.range is 1~253,1 is the highest and 253 is lowest;self-control is 1,the packet send by GIMBAL_CONTROL is 10,and the packet send by GIMBAL_DEBUGDATA is 20,the others number belong to user. 
 */
static inline uint8_t mavlink_msg_gimbal_control_standard_get_priority(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  16);
}

/**
 * @brief Get field yaw_mode from gimbal_control_standard message
 *
 * @return  yaw mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 */
static inline uint8_t mavlink_msg_gimbal_control_standard_get_yaw_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  17);
}

/**
 * @brief Get field pitch_mode from gimbal_control_standard message
 *
 * @return  pitch mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 */
static inline uint8_t mavlink_msg_gimbal_control_standard_get_pitch_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  18);
}

/**
 * @brief Get field roll_mode from gimbal_control_standard message
 *
 * @return  roll mode value,1 is follow_head,2 is follow_angle,3 is follow_velocity;4 is global_angle,5 is global_velocity.
 */
static inline uint8_t mavlink_msg_gimbal_control_standard_get_roll_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  19);
}

/**
 * @brief Get field yaw_channel from gimbal_control_standard message
 *
 * @return  yaw channel value,if yaw mode is angle ,this value is angle.if yaw mode is velocity,this value is velocity..
 */
static inline float mavlink_msg_gimbal_control_standard_get_yaw_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field pitch_channel from gimbal_control_standard message
 *
 * @return   pitch channel value,if pitch mode is angle ,this value is angle.if pitch mode is velocity,this value is velocity..
 */
static inline float mavlink_msg_gimbal_control_standard_get_pitch_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field roll_channel from gimbal_control_standard message
 *
 * @return  roll channel value,if roll mode is angle ,this value is angle.if roll mode is velocity,this value is velocity..
 */
static inline float mavlink_msg_gimbal_control_standard_get_roll_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field drones_yawvelocity_desire from gimbal_control_standard message
 *
 * @return  drone's yaw desired anguler velocity.
 */
static inline float mavlink_msg_gimbal_control_standard_get_drones_yawvelocity_desire(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Decode a gimbal_control_standard message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_control_standard C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_control_standard_decode(const mavlink_message_t* msg, mavlink_gimbal_control_standard_t* gimbal_control_standard)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gimbal_control_standard->yaw_channel = mavlink_msg_gimbal_control_standard_get_yaw_channel(msg);
    gimbal_control_standard->pitch_channel = mavlink_msg_gimbal_control_standard_get_pitch_channel(msg);
    gimbal_control_standard->roll_channel = mavlink_msg_gimbal_control_standard_get_roll_channel(msg);
    gimbal_control_standard->drones_yawvelocity_desire = mavlink_msg_gimbal_control_standard_get_drones_yawvelocity_desire(msg);
    gimbal_control_standard->priority = mavlink_msg_gimbal_control_standard_get_priority(msg);
    gimbal_control_standard->yaw_mode = mavlink_msg_gimbal_control_standard_get_yaw_mode(msg);
    gimbal_control_standard->pitch_mode = mavlink_msg_gimbal_control_standard_get_pitch_mode(msg);
    gimbal_control_standard->roll_mode = mavlink_msg_gimbal_control_standard_get_roll_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN? msg->len : MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN;
        memset(gimbal_control_standard, 0, MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_LEN);
    memcpy(gimbal_control_standard, _MAV_PAYLOAD(msg), len);
#endif
}
