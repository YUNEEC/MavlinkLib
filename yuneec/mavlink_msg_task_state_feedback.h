#pragma once
// MESSAGE TASK_STATE_FEEDBACK PACKING

#define MAVLINK_MSG_ID_TASK_STATE_FEEDBACK 4005

MAVPACKED(
typedef struct __mavlink_task_state_feedback_t {
 float param1; /*< Parameter 1, as defined by TASK_CMD enum.*/
 float param2; /*< Parameter 2, as defined by TASK_CMD enum.*/
 float param3; /*< Parameter 3, as defined by TASK_CMD enum.*/
 float param4; /*< Parameter 4, as defined by TASK_CMD enum.*/
 float param5; /*< Parameter 5, as defined by TASK_CMD enum.*/
 float param6; /*< Parameter 6, as defined by TASK_CMD enum.*/
 float param7; /*< Parameter 7, as defined by TASK_CMD enum.*/
 uint8_t task_mode; /*< Flight tasks mode, as defined by TASK_CMD enum*/
 uint8_t task_state; /*< Flight tasks state, as defined by TASK_STATE enum*/
}) mavlink_task_state_feedback_t;

#define MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN 30
#define MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN 30
#define MAVLINK_MSG_ID_4005_LEN 30
#define MAVLINK_MSG_ID_4005_MIN_LEN 30

#define MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC 34
#define MAVLINK_MSG_ID_4005_CRC 34



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TASK_STATE_FEEDBACK { \
    4005, \
    "TASK_STATE_FEEDBACK", \
    9, \
    {  { "task_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_task_state_feedback_t, task_mode) }, \
         { "task_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_task_state_feedback_t, task_state) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_task_state_feedback_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_task_state_feedback_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_task_state_feedback_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_task_state_feedback_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_task_state_feedback_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_task_state_feedback_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_task_state_feedback_t, param7) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TASK_STATE_FEEDBACK { \
    "TASK_STATE_FEEDBACK", \
    9, \
    {  { "task_mode", NULL, MAVLINK_TYPE_UINT8_T, 0, 28, offsetof(mavlink_task_state_feedback_t, task_mode) }, \
         { "task_state", NULL, MAVLINK_TYPE_UINT8_T, 0, 29, offsetof(mavlink_task_state_feedback_t, task_state) }, \
         { "param1", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_task_state_feedback_t, param1) }, \
         { "param2", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_task_state_feedback_t, param2) }, \
         { "param3", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_task_state_feedback_t, param3) }, \
         { "param4", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_task_state_feedback_t, param4) }, \
         { "param5", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_task_state_feedback_t, param5) }, \
         { "param6", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_task_state_feedback_t, param6) }, \
         { "param7", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_task_state_feedback_t, param7) }, \
         } \
}
#endif

/**
 * @brief Pack a task_state_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param task_mode Flight tasks mode, as defined by TASK_CMD enum
 * @param task_state Flight tasks state, as defined by TASK_STATE enum
 * @param param1 Parameter 1, as defined by TASK_CMD enum.
 * @param param2 Parameter 2, as defined by TASK_CMD enum.
 * @param param3 Parameter 3, as defined by TASK_CMD enum.
 * @param param4 Parameter 4, as defined by TASK_CMD enum.
 * @param param5 Parameter 5, as defined by TASK_CMD enum.
 * @param param6 Parameter 6, as defined by TASK_CMD enum.
 * @param param7 Parameter 7, as defined by TASK_CMD enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_state_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t task_mode, uint8_t task_state, float param1, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint8_t(buf, 28, task_mode);
    _mav_put_uint8_t(buf, 29, task_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN);
#else
    mavlink_task_state_feedback_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.task_mode = task_mode;
    packet.task_state = task_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_STATE_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
}

/**
 * @brief Pack a task_state_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param task_mode Flight tasks mode, as defined by TASK_CMD enum
 * @param task_state Flight tasks state, as defined by TASK_STATE enum
 * @param param1 Parameter 1, as defined by TASK_CMD enum.
 * @param param2 Parameter 2, as defined by TASK_CMD enum.
 * @param param3 Parameter 3, as defined by TASK_CMD enum.
 * @param param4 Parameter 4, as defined by TASK_CMD enum.
 * @param param5 Parameter 5, as defined by TASK_CMD enum.
 * @param param6 Parameter 6, as defined by TASK_CMD enum.
 * @param param7 Parameter 7, as defined by TASK_CMD enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_state_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t task_mode,uint8_t task_state,float param1,float param2,float param3,float param4,float param5,float param6,float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint8_t(buf, 28, task_mode);
    _mav_put_uint8_t(buf, 29, task_state);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN);
#else
    mavlink_task_state_feedback_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.task_mode = task_mode;
    packet.task_state = task_state;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_STATE_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
}

/**
 * @brief Encode a task_state_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param task_state_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_state_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_task_state_feedback_t* task_state_feedback)
{
    return mavlink_msg_task_state_feedback_pack(system_id, component_id, msg, task_state_feedback->task_mode, task_state_feedback->task_state, task_state_feedback->param1, task_state_feedback->param2, task_state_feedback->param3, task_state_feedback->param4, task_state_feedback->param5, task_state_feedback->param6, task_state_feedback->param7);
}

/**
 * @brief Encode a task_state_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param task_state_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_state_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_task_state_feedback_t* task_state_feedback)
{
    return mavlink_msg_task_state_feedback_pack_chan(system_id, component_id, chan, msg, task_state_feedback->task_mode, task_state_feedback->task_state, task_state_feedback->param1, task_state_feedback->param2, task_state_feedback->param3, task_state_feedback->param4, task_state_feedback->param5, task_state_feedback->param6, task_state_feedback->param7);
}

/**
 * @brief Send a task_state_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param task_mode Flight tasks mode, as defined by TASK_CMD enum
 * @param task_state Flight tasks state, as defined by TASK_STATE enum
 * @param param1 Parameter 1, as defined by TASK_CMD enum.
 * @param param2 Parameter 2, as defined by TASK_CMD enum.
 * @param param3 Parameter 3, as defined by TASK_CMD enum.
 * @param param4 Parameter 4, as defined by TASK_CMD enum.
 * @param param5 Parameter 5, as defined by TASK_CMD enum.
 * @param param6 Parameter 6, as defined by TASK_CMD enum.
 * @param param7 Parameter 7, as defined by TASK_CMD enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_task_state_feedback_send(mavlink_channel_t chan, uint8_t task_mode, uint8_t task_state, float param1, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN];
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint8_t(buf, 28, task_mode);
    _mav_put_uint8_t(buf, 29, task_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK, buf, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
#else
    mavlink_task_state_feedback_t packet;
    packet.param1 = param1;
    packet.param2 = param2;
    packet.param3 = param3;
    packet.param4 = param4;
    packet.param5 = param5;
    packet.param6 = param6;
    packet.param7 = param7;
    packet.task_mode = task_mode;
    packet.task_state = task_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a task_state_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_task_state_feedback_send_struct(mavlink_channel_t chan, const mavlink_task_state_feedback_t* task_state_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_task_state_feedback_send(chan, task_state_feedback->task_mode, task_state_feedback->task_state, task_state_feedback->param1, task_state_feedback->param2, task_state_feedback->param3, task_state_feedback->param4, task_state_feedback->param5, task_state_feedback->param6, task_state_feedback->param7);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK, (const char *)task_state_feedback, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_task_state_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t task_mode, uint8_t task_state, float param1, float param2, float param3, float param4, float param5, float param6, float param7)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, param1);
    _mav_put_float(buf, 4, param2);
    _mav_put_float(buf, 8, param3);
    _mav_put_float(buf, 12, param4);
    _mav_put_float(buf, 16, param5);
    _mav_put_float(buf, 20, param6);
    _mav_put_float(buf, 24, param7);
    _mav_put_uint8_t(buf, 28, task_mode);
    _mav_put_uint8_t(buf, 29, task_state);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK, buf, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
#else
    mavlink_task_state_feedback_t *packet = (mavlink_task_state_feedback_t *)msgbuf;
    packet->param1 = param1;
    packet->param2 = param2;
    packet->param3 = param3;
    packet->param4 = param4;
    packet->param5 = param5;
    packet->param6 = param6;
    packet->param7 = param7;
    packet->task_mode = task_mode;
    packet->task_state = task_state;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE TASK_STATE_FEEDBACK UNPACKING


/**
 * @brief Get field task_mode from task_state_feedback message
 *
 * @return Flight tasks mode, as defined by TASK_CMD enum
 */
static inline uint8_t mavlink_msg_task_state_feedback_get_task_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  28);
}

/**
 * @brief Get field task_state from task_state_feedback message
 *
 * @return Flight tasks state, as defined by TASK_STATE enum
 */
static inline uint8_t mavlink_msg_task_state_feedback_get_task_state(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  29);
}

/**
 * @brief Get field param1 from task_state_feedback message
 *
 * @return Parameter 1, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field param2 from task_state_feedback message
 *
 * @return Parameter 2, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field param3 from task_state_feedback message
 *
 * @return Parameter 3, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field param4 from task_state_feedback message
 *
 * @return Parameter 4, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field param5 from task_state_feedback message
 *
 * @return Parameter 5, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field param6 from task_state_feedback message
 *
 * @return Parameter 6, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field param7 from task_state_feedback message
 *
 * @return Parameter 7, as defined by TASK_CMD enum.
 */
static inline float mavlink_msg_task_state_feedback_get_param7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a task_state_feedback message into a struct
 *
 * @param msg The message to decode
 * @param task_state_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_task_state_feedback_decode(const mavlink_message_t* msg, mavlink_task_state_feedback_t* task_state_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    task_state_feedback->param1 = mavlink_msg_task_state_feedback_get_param1(msg);
    task_state_feedback->param2 = mavlink_msg_task_state_feedback_get_param2(msg);
    task_state_feedback->param3 = mavlink_msg_task_state_feedback_get_param3(msg);
    task_state_feedback->param4 = mavlink_msg_task_state_feedback_get_param4(msg);
    task_state_feedback->param5 = mavlink_msg_task_state_feedback_get_param5(msg);
    task_state_feedback->param6 = mavlink_msg_task_state_feedback_get_param6(msg);
    task_state_feedback->param7 = mavlink_msg_task_state_feedback_get_param7(msg);
    task_state_feedback->task_mode = mavlink_msg_task_state_feedback_get_task_mode(msg);
    task_state_feedback->task_state = mavlink_msg_task_state_feedback_get_task_state(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN;
        memset(task_state_feedback, 0, MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_LEN);
    memcpy(task_state_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
