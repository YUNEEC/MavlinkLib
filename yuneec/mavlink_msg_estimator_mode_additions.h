#pragma once
// MESSAGE ESTIMATOR_MODE_ADDITIONS PACKING

#define MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS 4007

MAVPACKED(
typedef struct __mavlink_estimator_mode_additions_t {
 uint32_t estimator_mode; /*<  Estimator mode flags according to the ESTIMATOR_MODE_FLAGS enum.*/
}) mavlink_estimator_mode_additions_t;

#define MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN 4
#define MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN 4
#define MAVLINK_MSG_ID_4007_LEN 4
#define MAVLINK_MSG_ID_4007_MIN_LEN 4

#define MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC 22
#define MAVLINK_MSG_ID_4007_CRC 22



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_ESTIMATOR_MODE_ADDITIONS { \
    4007, \
    "ESTIMATOR_MODE_ADDITIONS", \
    1, \
    {  { "estimator_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_estimator_mode_additions_t, estimator_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_ESTIMATOR_MODE_ADDITIONS { \
    "ESTIMATOR_MODE_ADDITIONS", \
    1, \
    {  { "estimator_mode", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_estimator_mode_additions_t, estimator_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a estimator_mode_additions message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param estimator_mode  Estimator mode flags according to the ESTIMATOR_MODE_FLAGS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_estimator_mode_additions_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t estimator_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN];
    _mav_put_uint32_t(buf, 0, estimator_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN);
#else
    mavlink_estimator_mode_additions_t packet;
    packet.estimator_mode = estimator_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
}

/**
 * @brief Pack a estimator_mode_additions message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param estimator_mode  Estimator mode flags according to the ESTIMATOR_MODE_FLAGS enum.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_estimator_mode_additions_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t estimator_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN];
    _mav_put_uint32_t(buf, 0, estimator_mode);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN);
#else
    mavlink_estimator_mode_additions_t packet;
    packet.estimator_mode = estimator_mode;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
}

/**
 * @brief Encode a estimator_mode_additions struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param estimator_mode_additions C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_estimator_mode_additions_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_estimator_mode_additions_t* estimator_mode_additions)
{
    return mavlink_msg_estimator_mode_additions_pack(system_id, component_id, msg, estimator_mode_additions->estimator_mode);
}

/**
 * @brief Encode a estimator_mode_additions struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param estimator_mode_additions C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_estimator_mode_additions_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_estimator_mode_additions_t* estimator_mode_additions)
{
    return mavlink_msg_estimator_mode_additions_pack_chan(system_id, component_id, chan, msg, estimator_mode_additions->estimator_mode);
}

/**
 * @brief Send a estimator_mode_additions message
 * @param chan MAVLink channel to send the message
 *
 * @param estimator_mode  Estimator mode flags according to the ESTIMATOR_MODE_FLAGS enum.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_estimator_mode_additions_send(mavlink_channel_t chan, uint32_t estimator_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN];
    _mav_put_uint32_t(buf, 0, estimator_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS, buf, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
#else
    mavlink_estimator_mode_additions_t packet;
    packet.estimator_mode = estimator_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS, (const char *)&packet, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
#endif
}

/**
 * @brief Send a estimator_mode_additions message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_estimator_mode_additions_send_struct(mavlink_channel_t chan, const mavlink_estimator_mode_additions_t* estimator_mode_additions)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_estimator_mode_additions_send(chan, estimator_mode_additions->estimator_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS, (const char *)estimator_mode_additions, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
#endif
}

#if MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_estimator_mode_additions_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t estimator_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, estimator_mode);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS, buf, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
#else
    mavlink_estimator_mode_additions_t *packet = (mavlink_estimator_mode_additions_t *)msgbuf;
    packet->estimator_mode = estimator_mode;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS, (const char *)packet, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_MIN_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_CRC);
#endif
}
#endif

#endif

// MESSAGE ESTIMATOR_MODE_ADDITIONS UNPACKING


/**
 * @brief Get field estimator_mode from estimator_mode_additions message
 *
 * @return  Estimator mode flags according to the ESTIMATOR_MODE_FLAGS enum.
 */
static inline uint32_t mavlink_msg_estimator_mode_additions_get_estimator_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Decode a estimator_mode_additions message into a struct
 *
 * @param msg The message to decode
 * @param estimator_mode_additions C-struct to decode the message contents into
 */
static inline void mavlink_msg_estimator_mode_additions_decode(const mavlink_message_t* msg, mavlink_estimator_mode_additions_t* estimator_mode_additions)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    estimator_mode_additions->estimator_mode = mavlink_msg_estimator_mode_additions_get_estimator_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN? msg->len : MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN;
        memset(estimator_mode_additions, 0, MAVLINK_MSG_ID_ESTIMATOR_MODE_ADDITIONS_LEN);
    memcpy(estimator_mode_additions, _MAV_PAYLOAD(msg), len);
#endif
}
