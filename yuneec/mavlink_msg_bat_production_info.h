#pragma once
// MESSAGE BAT_PRODUCTION_INFO PACKING

#define MAVLINK_MSG_ID_BAT_PRODUCTION_INFO 9006

MAVPACKED(
typedef struct __mavlink_bat_production_info_t {
 uint8_t productionTime[10]; /*<  Production time*/
 uint8_t keyOfBat[16]; /*<  Key for checking whether the battery is legal.*/
}) mavlink_bat_production_info_t;

#define MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN 26
#define MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN 26
#define MAVLINK_MSG_ID_9006_LEN 26
#define MAVLINK_MSG_ID_9006_MIN_LEN 26

#define MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC 204
#define MAVLINK_MSG_ID_9006_CRC 204

#define MAVLINK_MSG_BAT_PRODUCTION_INFO_FIELD_PRODUCTIONTIME_LEN 10
#define MAVLINK_MSG_BAT_PRODUCTION_INFO_FIELD_KEYOFBAT_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BAT_PRODUCTION_INFO { \
    9006, \
    "BAT_PRODUCTION_INFO", \
    2, \
    {  { "productionTime", NULL, MAVLINK_TYPE_UINT8_T, 10, 0, offsetof(mavlink_bat_production_info_t, productionTime) }, \
         { "keyOfBat", NULL, MAVLINK_TYPE_UINT8_T, 16, 10, offsetof(mavlink_bat_production_info_t, keyOfBat) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BAT_PRODUCTION_INFO { \
    "BAT_PRODUCTION_INFO", \
    2, \
    {  { "productionTime", NULL, MAVLINK_TYPE_UINT8_T, 10, 0, offsetof(mavlink_bat_production_info_t, productionTime) }, \
         { "keyOfBat", NULL, MAVLINK_TYPE_UINT8_T, 16, 10, offsetof(mavlink_bat_production_info_t, keyOfBat) }, \
         } \
}
#endif

/**
 * @brief Pack a bat_production_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param productionTime  Production time
 * @param keyOfBat  Key for checking whether the battery is legal.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_production_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const uint8_t *productionTime, const uint8_t *keyOfBat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN];

    _mav_put_uint8_t_array(buf, 0, productionTime, 10);
    _mav_put_uint8_t_array(buf, 10, keyOfBat, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN);
#else
    mavlink_bat_production_info_t packet;

    mav_array_memcpy(packet.productionTime, productionTime, sizeof(uint8_t)*10);
    mav_array_memcpy(packet.keyOfBat, keyOfBat, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_PRODUCTION_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
}

/**
 * @brief Pack a bat_production_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param productionTime  Production time
 * @param keyOfBat  Key for checking whether the battery is legal.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_production_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const uint8_t *productionTime,const uint8_t *keyOfBat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN];

    _mav_put_uint8_t_array(buf, 0, productionTime, 10);
    _mav_put_uint8_t_array(buf, 10, keyOfBat, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN);
#else
    mavlink_bat_production_info_t packet;

    mav_array_memcpy(packet.productionTime, productionTime, sizeof(uint8_t)*10);
    mav_array_memcpy(packet.keyOfBat, keyOfBat, sizeof(uint8_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_PRODUCTION_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
}

/**
 * @brief Encode a bat_production_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bat_production_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_production_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bat_production_info_t* bat_production_info)
{
    return mavlink_msg_bat_production_info_pack(system_id, component_id, msg, bat_production_info->productionTime, bat_production_info->keyOfBat);
}

/**
 * @brief Encode a bat_production_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bat_production_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_production_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bat_production_info_t* bat_production_info)
{
    return mavlink_msg_bat_production_info_pack_chan(system_id, component_id, chan, msg, bat_production_info->productionTime, bat_production_info->keyOfBat);
}

/**
 * @brief Send a bat_production_info message
 * @param chan MAVLink channel to send the message
 *
 * @param productionTime  Production time
 * @param keyOfBat  Key for checking whether the battery is legal.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bat_production_info_send(mavlink_channel_t chan, const uint8_t *productionTime, const uint8_t *keyOfBat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN];

    _mav_put_uint8_t_array(buf, 0, productionTime, 10);
    _mav_put_uint8_t_array(buf, 10, keyOfBat, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO, buf, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
#else
    mavlink_bat_production_info_t packet;

    mav_array_memcpy(packet.productionTime, productionTime, sizeof(uint8_t)*10);
    mav_array_memcpy(packet.keyOfBat, keyOfBat, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO, (const char *)&packet, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
#endif
}

/**
 * @brief Send a bat_production_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bat_production_info_send_struct(mavlink_channel_t chan, const mavlink_bat_production_info_t* bat_production_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bat_production_info_send(chan, bat_production_info->productionTime, bat_production_info->keyOfBat);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO, (const char *)bat_production_info, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bat_production_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const uint8_t *productionTime, const uint8_t *keyOfBat)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;

    _mav_put_uint8_t_array(buf, 0, productionTime, 10);
    _mav_put_uint8_t_array(buf, 10, keyOfBat, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO, buf, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
#else
    mavlink_bat_production_info_t *packet = (mavlink_bat_production_info_t *)msgbuf;

    mav_array_memcpy(packet->productionTime, productionTime, sizeof(uint8_t)*10);
    mav_array_memcpy(packet->keyOfBat, keyOfBat, sizeof(uint8_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO, (const char *)packet, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE BAT_PRODUCTION_INFO UNPACKING


/**
 * @brief Get field productionTime from bat_production_info message
 *
 * @return  Production time
 */
static inline uint16_t mavlink_msg_bat_production_info_get_productionTime(const mavlink_message_t* msg, uint8_t *productionTime)
{
    return _MAV_RETURN_uint8_t_array(msg, productionTime, 10,  0);
}

/**
 * @brief Get field keyOfBat from bat_production_info message
 *
 * @return  Key for checking whether the battery is legal.
 */
static inline uint16_t mavlink_msg_bat_production_info_get_keyOfBat(const mavlink_message_t* msg, uint8_t *keyOfBat)
{
    return _MAV_RETURN_uint8_t_array(msg, keyOfBat, 16,  10);
}

/**
 * @brief Decode a bat_production_info message into a struct
 *
 * @param msg The message to decode
 * @param bat_production_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_bat_production_info_decode(const mavlink_message_t* msg, mavlink_bat_production_info_t* bat_production_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bat_production_info_get_productionTime(msg, bat_production_info->productionTime);
    mavlink_msg_bat_production_info_get_keyOfBat(msg, bat_production_info->keyOfBat);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN? msg->len : MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN;
        memset(bat_production_info, 0, MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_LEN);
    memcpy(bat_production_info, _MAV_PAYLOAD(msg), len);
#endif
}
