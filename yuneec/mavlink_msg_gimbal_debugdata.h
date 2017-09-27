#pragma once
// MESSAGE GIMBAL_DEBUGDATA PACKING

#define MAVLINK_MSG_ID_GIMBAL_DEBUGDATA 5002

MAVPACKED(
typedef struct __mavlink_gimbal_debugdata_t {
 uint8_t msg_type; /*< gimbal debudata type.*/
 int8_t debug_data[49]; /*< gimbal debudata.*/
}) mavlink_gimbal_debugdata_t;

#define MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN 50
#define MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN 50
#define MAVLINK_MSG_ID_5002_LEN 50
#define MAVLINK_MSG_ID_5002_MIN_LEN 50

#define MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC 224
#define MAVLINK_MSG_ID_5002_CRC 224

#define MAVLINK_MSG_GIMBAL_DEBUGDATA_FIELD_DEBUG_DATA_LEN 49

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GIMBAL_DEBUGDATA { \
    5002, \
    "GIMBAL_DEBUGDATA", \
    2, \
    {  { "msg_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gimbal_debugdata_t, msg_type) }, \
         { "debug_data", NULL, MAVLINK_TYPE_INT8_T, 49, 1, offsetof(mavlink_gimbal_debugdata_t, debug_data) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GIMBAL_DEBUGDATA { \
    "GIMBAL_DEBUGDATA", \
    2, \
    {  { "msg_type", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_gimbal_debugdata_t, msg_type) }, \
         { "debug_data", NULL, MAVLINK_TYPE_INT8_T, 49, 1, offsetof(mavlink_gimbal_debugdata_t, debug_data) }, \
         } \
}
#endif

/**
 * @brief Pack a gimbal_debugdata message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param msg_type gimbal debudata type.
 * @param debug_data gimbal debudata.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_debugdata_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t msg_type, const int8_t *debug_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN];
    _mav_put_uint8_t(buf, 0, msg_type);
    _mav_put_int8_t_array(buf, 1, debug_data, 49);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN);
#else
    mavlink_gimbal_debugdata_t packet;
    packet.msg_type = msg_type;
    mav_array_memcpy(packet.debug_data, debug_data, sizeof(int8_t)*49);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_DEBUGDATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
}

/**
 * @brief Pack a gimbal_debugdata message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param msg_type gimbal debudata type.
 * @param debug_data gimbal debudata.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_debugdata_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t msg_type,const int8_t *debug_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN];
    _mav_put_uint8_t(buf, 0, msg_type);
    _mav_put_int8_t_array(buf, 1, debug_data, 49);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN);
#else
    mavlink_gimbal_debugdata_t packet;
    packet.msg_type = msg_type;
    mav_array_memcpy(packet.debug_data, debug_data, sizeof(int8_t)*49);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_DEBUGDATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
}

/**
 * @brief Encode a gimbal_debugdata struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_debugdata C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_debugdata_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_debugdata_t* gimbal_debugdata)
{
    return mavlink_msg_gimbal_debugdata_pack(system_id, component_id, msg, gimbal_debugdata->msg_type, gimbal_debugdata->debug_data);
}

/**
 * @brief Encode a gimbal_debugdata struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_debugdata C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_debugdata_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_debugdata_t* gimbal_debugdata)
{
    return mavlink_msg_gimbal_debugdata_pack_chan(system_id, component_id, chan, msg, gimbal_debugdata->msg_type, gimbal_debugdata->debug_data);
}

/**
 * @brief Send a gimbal_debugdata message
 * @param chan MAVLink channel to send the message
 *
 * @param msg_type gimbal debudata type.
 * @param debug_data gimbal debudata.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_debugdata_send(mavlink_channel_t chan, uint8_t msg_type, const int8_t *debug_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN];
    _mav_put_uint8_t(buf, 0, msg_type);
    _mav_put_int8_t_array(buf, 1, debug_data, 49);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA, buf, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
#else
    mavlink_gimbal_debugdata_t packet;
    packet.msg_type = msg_type;
    mav_array_memcpy(packet.debug_data, debug_data, sizeof(int8_t)*49);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
#endif
}

/**
 * @brief Send a gimbal_debugdata message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gimbal_debugdata_send_struct(mavlink_channel_t chan, const mavlink_gimbal_debugdata_t* gimbal_debugdata)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_debugdata_send(chan, gimbal_debugdata->msg_type, gimbal_debugdata->debug_data);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA, (const char *)gimbal_debugdata, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_debugdata_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t msg_type, const int8_t *debug_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, msg_type);
    _mav_put_int8_t_array(buf, 1, debug_data, 49);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA, buf, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
#else
    mavlink_gimbal_debugdata_t *packet = (mavlink_gimbal_debugdata_t *)msgbuf;
    packet->msg_type = msg_type;
    mav_array_memcpy(packet->debug_data, debug_data, sizeof(int8_t)*49);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_CRC);
#endif
}
#endif

#endif

// MESSAGE GIMBAL_DEBUGDATA UNPACKING


/**
 * @brief Get field msg_type from gimbal_debugdata message
 *
 * @return gimbal debudata type.
 */
static inline uint8_t mavlink_msg_gimbal_debugdata_get_msg_type(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field debug_data from gimbal_debugdata message
 *
 * @return gimbal debudata.
 */
static inline uint16_t mavlink_msg_gimbal_debugdata_get_debug_data(const mavlink_message_t* msg, int8_t *debug_data)
{
    return _MAV_RETURN_int8_t_array(msg, debug_data, 49,  1);
}

/**
 * @brief Decode a gimbal_debugdata message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_debugdata C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_debugdata_decode(const mavlink_message_t* msg, mavlink_gimbal_debugdata_t* gimbal_debugdata)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    gimbal_debugdata->msg_type = mavlink_msg_gimbal_debugdata_get_msg_type(msg);
    mavlink_msg_gimbal_debugdata_get_debug_data(msg, gimbal_debugdata->debug_data);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN? msg->len : MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN;
        memset(gimbal_debugdata, 0, MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_LEN);
    memcpy(gimbal_debugdata, _MAV_PAYLOAD(msg), len);
#endif
}
