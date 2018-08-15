#pragma once
// MESSAGE NO_FLY_ZONE_UNLOCKING PACKING

#define MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING 4008

MAVPACKED(
typedef struct __mavlink_no_fly_zone_unlocking_t {
 char no_fly_zone_key[33]; /*<  Unlock key for no-fly zone.*/
}) mavlink_no_fly_zone_unlocking_t;

#define MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN 33
#define MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN 33
#define MAVLINK_MSG_ID_4008_LEN 33
#define MAVLINK_MSG_ID_4008_MIN_LEN 33

#define MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC 101
#define MAVLINK_MSG_ID_4008_CRC 101

#define MAVLINK_MSG_NO_FLY_ZONE_UNLOCKING_FIELD_NO_FLY_ZONE_KEY_LEN 33

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_NO_FLY_ZONE_UNLOCKING { \
    4008, \
    "NO_FLY_ZONE_UNLOCKING", \
    1, \
    {  { "no_fly_zone_key", NULL, MAVLINK_TYPE_CHAR, 33, 0, offsetof(mavlink_no_fly_zone_unlocking_t, no_fly_zone_key) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_NO_FLY_ZONE_UNLOCKING { \
    "NO_FLY_ZONE_UNLOCKING", \
    1, \
    {  { "no_fly_zone_key", NULL, MAVLINK_TYPE_CHAR, 33, 0, offsetof(mavlink_no_fly_zone_unlocking_t, no_fly_zone_key) }, \
         } \
}
#endif

/**
 * @brief Pack a no_fly_zone_unlocking message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param no_fly_zone_key  Unlock key for no-fly zone.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_no_fly_zone_unlocking_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const char *no_fly_zone_key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN];

    _mav_put_char_array(buf, 0, no_fly_zone_key, 33);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN);
#else
    mavlink_no_fly_zone_unlocking_t packet;

    mav_array_memcpy(packet.no_fly_zone_key, no_fly_zone_key, sizeof(char)*33);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
}

/**
 * @brief Pack a no_fly_zone_unlocking message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param no_fly_zone_key  Unlock key for no-fly zone.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_no_fly_zone_unlocking_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const char *no_fly_zone_key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN];

    _mav_put_char_array(buf, 0, no_fly_zone_key, 33);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN);
#else
    mavlink_no_fly_zone_unlocking_t packet;

    mav_array_memcpy(packet.no_fly_zone_key, no_fly_zone_key, sizeof(char)*33);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
}

/**
 * @brief Encode a no_fly_zone_unlocking struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param no_fly_zone_unlocking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_no_fly_zone_unlocking_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_no_fly_zone_unlocking_t* no_fly_zone_unlocking)
{
    return mavlink_msg_no_fly_zone_unlocking_pack(system_id, component_id, msg, no_fly_zone_unlocking->no_fly_zone_key);
}

/**
 * @brief Encode a no_fly_zone_unlocking struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param no_fly_zone_unlocking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_no_fly_zone_unlocking_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_no_fly_zone_unlocking_t* no_fly_zone_unlocking)
{
    return mavlink_msg_no_fly_zone_unlocking_pack_chan(system_id, component_id, chan, msg, no_fly_zone_unlocking->no_fly_zone_key);
}

/**
 * @brief Send a no_fly_zone_unlocking message
 * @param chan MAVLink channel to send the message
 *
 * @param no_fly_zone_key  Unlock key for no-fly zone.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_no_fly_zone_unlocking_send(mavlink_channel_t chan, const char *no_fly_zone_key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN];

    _mav_put_char_array(buf, 0, no_fly_zone_key, 33);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING, buf, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
#else
    mavlink_no_fly_zone_unlocking_t packet;

    mav_array_memcpy(packet.no_fly_zone_key, no_fly_zone_key, sizeof(char)*33);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING, (const char *)&packet, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
#endif
}

/**
 * @brief Send a no_fly_zone_unlocking message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_no_fly_zone_unlocking_send_struct(mavlink_channel_t chan, const mavlink_no_fly_zone_unlocking_t* no_fly_zone_unlocking)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_no_fly_zone_unlocking_send(chan, no_fly_zone_unlocking->no_fly_zone_key);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING, (const char *)no_fly_zone_unlocking, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
#endif
}

#if MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_no_fly_zone_unlocking_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const char *no_fly_zone_key)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_char_array(buf, 0, no_fly_zone_key, 33);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING, buf, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
#else
    mavlink_no_fly_zone_unlocking_t *packet = (mavlink_no_fly_zone_unlocking_t *)msgbuf;

    mav_array_memcpy(packet->no_fly_zone_key, no_fly_zone_key, sizeof(char)*33);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING, (const char *)packet, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_MIN_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_CRC);
#endif
}
#endif

#endif

// MESSAGE NO_FLY_ZONE_UNLOCKING UNPACKING


/**
 * @brief Get field no_fly_zone_key from no_fly_zone_unlocking message
 *
 * @return  Unlock key for no-fly zone.
 */
static inline uint16_t mavlink_msg_no_fly_zone_unlocking_get_no_fly_zone_key(const mavlink_message_t* msg, char *no_fly_zone_key)
{
    return _MAV_RETURN_char_array(msg, no_fly_zone_key, 33,  0);
}

/**
 * @brief Decode a no_fly_zone_unlocking message into a struct
 *
 * @param msg The message to decode
 * @param no_fly_zone_unlocking C-struct to decode the message contents into
 */
static inline void mavlink_msg_no_fly_zone_unlocking_decode(const mavlink_message_t* msg, mavlink_no_fly_zone_unlocking_t* no_fly_zone_unlocking)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_no_fly_zone_unlocking_get_no_fly_zone_key(msg, no_fly_zone_unlocking->no_fly_zone_key);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN? msg->len : MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN;
        memset(no_fly_zone_unlocking, 0, MAVLINK_MSG_ID_NO_FLY_ZONE_UNLOCKING_LEN);
    memcpy(no_fly_zone_unlocking, _MAV_PAYLOAD(msg), len);
#endif
}
