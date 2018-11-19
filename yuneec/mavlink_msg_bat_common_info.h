#pragma once
// MESSAGE BAT_COMMON_INFO PACKING

#define MAVLINK_MSG_ID_BAT_COMMON_INFO 9003

MAVPACKED(
typedef struct __mavlink_bat_common_info_t {
 uint32_t alert; /*<  the warning items in discharge mode.*/
 uint16_t remCap; /*< [mAh] the predicted remaining battery capacity in units mAh.*/
 uint16_t remSOC; /*<  the current capacity in percentage of design capacity.*/
 int16_t temperature; /*< [celsius] the temperature of battery in units Centigrade.*/
 uint16_t packVolt; /*< [mV] the pack voltage in units mV.*/
 uint16_t cellnVolt[12]; /*< [mAh] each cell voltage in units mV.*/
 int16_t current; /*< [10mA]  the measured current from coulomb counter in units 10mA.*/
 uint8_t onOff; /*<  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.*/
}) mavlink_bat_common_info_t;

#define MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN 39
#define MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN 39
#define MAVLINK_MSG_ID_9003_LEN 39
#define MAVLINK_MSG_ID_9003_MIN_LEN 39

#define MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC 180
#define MAVLINK_MSG_ID_9003_CRC 180

#define MAVLINK_MSG_BAT_COMMON_INFO_FIELD_CELLNVOLT_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BAT_COMMON_INFO { \
    9003, \
    "BAT_COMMON_INFO", \
    8, \
    {  { "remCap", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bat_common_info_t, remCap) }, \
         { "remSOC", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bat_common_info_t, remSOC) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_bat_common_info_t, temperature) }, \
         { "packVolt", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_bat_common_info_t, packVolt) }, \
         { "cellnVolt", NULL, MAVLINK_TYPE_UINT16_T, 12, 12, offsetof(mavlink_bat_common_info_t, cellnVolt) }, \
         { "current", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_bat_common_info_t, current) }, \
         { "alert", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_bat_common_info_t, alert) }, \
         { "onOff", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_bat_common_info_t, onOff) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BAT_COMMON_INFO { \
    "BAT_COMMON_INFO", \
    8, \
    {  { "remCap", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bat_common_info_t, remCap) }, \
         { "remSOC", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bat_common_info_t, remSOC) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_bat_common_info_t, temperature) }, \
         { "packVolt", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_bat_common_info_t, packVolt) }, \
         { "cellnVolt", NULL, MAVLINK_TYPE_UINT16_T, 12, 12, offsetof(mavlink_bat_common_info_t, cellnVolt) }, \
         { "current", NULL, MAVLINK_TYPE_INT16_T, 0, 36, offsetof(mavlink_bat_common_info_t, current) }, \
         { "alert", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_bat_common_info_t, alert) }, \
         { "onOff", NULL, MAVLINK_TYPE_UINT8_T, 0, 38, offsetof(mavlink_bat_common_info_t, onOff) }, \
         } \
}
#endif

/**
 * @brief Pack a bat_common_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param remCap [mAh] the predicted remaining battery capacity in units mAh.
 * @param remSOC  the current capacity in percentage of design capacity.
 * @param temperature [celsius] the temperature of battery in units Centigrade.
 * @param packVolt [mV] the pack voltage in units mV.
 * @param cellnVolt [mAh] each cell voltage in units mV.
 * @param current [10mA]  the measured current from coulomb counter in units 10mA.
 * @param alert  the warning items in discharge mode.
 * @param onOff  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_common_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t remCap, uint16_t remSOC, int16_t temperature, uint16_t packVolt, const uint16_t *cellnVolt, int16_t current, uint32_t alert, uint8_t onOff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN];
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, remCap);
    _mav_put_uint16_t(buf, 6, remSOC);
    _mav_put_int16_t(buf, 8, temperature);
    _mav_put_uint16_t(buf, 10, packVolt);
    _mav_put_int16_t(buf, 36, current);
    _mav_put_uint8_t(buf, 38, onOff);
    _mav_put_uint16_t_array(buf, 12, cellnVolt, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN);
#else
    mavlink_bat_common_info_t packet;
    packet.alert = alert;
    packet.remCap = remCap;
    packet.remSOC = remSOC;
    packet.temperature = temperature;
    packet.packVolt = packVolt;
    packet.current = current;
    packet.onOff = onOff;
    mav_array_memcpy(packet.cellnVolt, cellnVolt, sizeof(uint16_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_COMMON_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
}

/**
 * @brief Pack a bat_common_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param remCap [mAh] the predicted remaining battery capacity in units mAh.
 * @param remSOC  the current capacity in percentage of design capacity.
 * @param temperature [celsius] the temperature of battery in units Centigrade.
 * @param packVolt [mV] the pack voltage in units mV.
 * @param cellnVolt [mAh] each cell voltage in units mV.
 * @param current [10mA]  the measured current from coulomb counter in units 10mA.
 * @param alert  the warning items in discharge mode.
 * @param onOff  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_common_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t remCap,uint16_t remSOC,int16_t temperature,uint16_t packVolt,const uint16_t *cellnVolt,int16_t current,uint32_t alert,uint8_t onOff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN];
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, remCap);
    _mav_put_uint16_t(buf, 6, remSOC);
    _mav_put_int16_t(buf, 8, temperature);
    _mav_put_uint16_t(buf, 10, packVolt);
    _mav_put_int16_t(buf, 36, current);
    _mav_put_uint8_t(buf, 38, onOff);
    _mav_put_uint16_t_array(buf, 12, cellnVolt, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN);
#else
    mavlink_bat_common_info_t packet;
    packet.alert = alert;
    packet.remCap = remCap;
    packet.remSOC = remSOC;
    packet.temperature = temperature;
    packet.packVolt = packVolt;
    packet.current = current;
    packet.onOff = onOff;
    mav_array_memcpy(packet.cellnVolt, cellnVolt, sizeof(uint16_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_COMMON_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
}

/**
 * @brief Encode a bat_common_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bat_common_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_common_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bat_common_info_t* bat_common_info)
{
    return mavlink_msg_bat_common_info_pack(system_id, component_id, msg, bat_common_info->remCap, bat_common_info->remSOC, bat_common_info->temperature, bat_common_info->packVolt, bat_common_info->cellnVolt, bat_common_info->current, bat_common_info->alert, bat_common_info->onOff);
}

/**
 * @brief Encode a bat_common_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bat_common_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_common_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bat_common_info_t* bat_common_info)
{
    return mavlink_msg_bat_common_info_pack_chan(system_id, component_id, chan, msg, bat_common_info->remCap, bat_common_info->remSOC, bat_common_info->temperature, bat_common_info->packVolt, bat_common_info->cellnVolt, bat_common_info->current, bat_common_info->alert, bat_common_info->onOff);
}

/**
 * @brief Send a bat_common_info message
 * @param chan MAVLink channel to send the message
 *
 * @param remCap [mAh] the predicted remaining battery capacity in units mAh.
 * @param remSOC  the current capacity in percentage of design capacity.
 * @param temperature [celsius] the temperature of battery in units Centigrade.
 * @param packVolt [mV] the pack voltage in units mV.
 * @param cellnVolt [mAh] each cell voltage in units mV.
 * @param current [10mA]  the measured current from coulomb counter in units 10mA.
 * @param alert  the warning items in discharge mode.
 * @param onOff  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bat_common_info_send(mavlink_channel_t chan, uint16_t remCap, uint16_t remSOC, int16_t temperature, uint16_t packVolt, const uint16_t *cellnVolt, int16_t current, uint32_t alert, uint8_t onOff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN];
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, remCap);
    _mav_put_uint16_t(buf, 6, remSOC);
    _mav_put_int16_t(buf, 8, temperature);
    _mav_put_uint16_t(buf, 10, packVolt);
    _mav_put_int16_t(buf, 36, current);
    _mav_put_uint8_t(buf, 38, onOff);
    _mav_put_uint16_t_array(buf, 12, cellnVolt, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_COMMON_INFO, buf, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
#else
    mavlink_bat_common_info_t packet;
    packet.alert = alert;
    packet.remCap = remCap;
    packet.remSOC = remSOC;
    packet.temperature = temperature;
    packet.packVolt = packVolt;
    packet.current = current;
    packet.onOff = onOff;
    mav_array_memcpy(packet.cellnVolt, cellnVolt, sizeof(uint16_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_COMMON_INFO, (const char *)&packet, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
#endif
}

/**
 * @brief Send a bat_common_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bat_common_info_send_struct(mavlink_channel_t chan, const mavlink_bat_common_info_t* bat_common_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bat_common_info_send(chan, bat_common_info->remCap, bat_common_info->remSOC, bat_common_info->temperature, bat_common_info->packVolt, bat_common_info->cellnVolt, bat_common_info->current, bat_common_info->alert, bat_common_info->onOff);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_COMMON_INFO, (const char *)bat_common_info, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bat_common_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t remCap, uint16_t remSOC, int16_t temperature, uint16_t packVolt, const uint16_t *cellnVolt, int16_t current, uint32_t alert, uint8_t onOff)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, remCap);
    _mav_put_uint16_t(buf, 6, remSOC);
    _mav_put_int16_t(buf, 8, temperature);
    _mav_put_uint16_t(buf, 10, packVolt);
    _mav_put_int16_t(buf, 36, current);
    _mav_put_uint8_t(buf, 38, onOff);
    _mav_put_uint16_t_array(buf, 12, cellnVolt, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_COMMON_INFO, buf, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
#else
    mavlink_bat_common_info_t *packet = (mavlink_bat_common_info_t *)msgbuf;
    packet->alert = alert;
    packet->remCap = remCap;
    packet->remSOC = remSOC;
    packet->temperature = temperature;
    packet->packVolt = packVolt;
    packet->current = current;
    packet->onOff = onOff;
    mav_array_memcpy(packet->cellnVolt, cellnVolt, sizeof(uint16_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_COMMON_INFO, (const char *)packet, MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN, MAVLINK_MSG_ID_BAT_COMMON_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE BAT_COMMON_INFO UNPACKING


/**
 * @brief Get field remCap from bat_common_info message
 *
 * @return [mAh] the predicted remaining battery capacity in units mAh.
 */
static inline uint16_t mavlink_msg_bat_common_info_get_remCap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field remSOC from bat_common_info message
 *
 * @return  the current capacity in percentage of design capacity.
 */
static inline uint16_t mavlink_msg_bat_common_info_get_remSOC(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field temperature from bat_common_info message
 *
 * @return [celsius] the temperature of battery in units Centigrade.
 */
static inline int16_t mavlink_msg_bat_common_info_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field packVolt from bat_common_info message
 *
 * @return [mV] the pack voltage in units mV.
 */
static inline uint16_t mavlink_msg_bat_common_info_get_packVolt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field cellnVolt from bat_common_info message
 *
 * @return [mAh] each cell voltage in units mV.
 */
static inline uint16_t mavlink_msg_bat_common_info_get_cellnVolt(const mavlink_message_t* msg, uint16_t *cellnVolt)
{
    return _MAV_RETURN_uint16_t_array(msg, cellnVolt, 12,  12);
}

/**
 * @brief Get field current from bat_common_info message
 *
 * @return [10mA]  the measured current from coulomb counter in units 10mA.
 */
static inline int16_t mavlink_msg_bat_common_info_get_current(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  36);
}

/**
 * @brief Get field alert from bat_common_info message
 *
 * @return  the warning items in discharge mode.
 */
static inline uint32_t mavlink_msg_bat_common_info_get_alert(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field onOff from bat_common_info message
 *
 * @return  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 */
static inline uint8_t mavlink_msg_bat_common_info_get_onOff(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  38);
}

/**
 * @brief Decode a bat_common_info message into a struct
 *
 * @param msg The message to decode
 * @param bat_common_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_bat_common_info_decode(const mavlink_message_t* msg, mavlink_bat_common_info_t* bat_common_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bat_common_info->alert = mavlink_msg_bat_common_info_get_alert(msg);
    bat_common_info->remCap = mavlink_msg_bat_common_info_get_remCap(msg);
    bat_common_info->remSOC = mavlink_msg_bat_common_info_get_remSOC(msg);
    bat_common_info->temperature = mavlink_msg_bat_common_info_get_temperature(msg);
    bat_common_info->packVolt = mavlink_msg_bat_common_info_get_packVolt(msg);
    mavlink_msg_bat_common_info_get_cellnVolt(msg, bat_common_info->cellnVolt);
    bat_common_info->current = mavlink_msg_bat_common_info_get_current(msg);
    bat_common_info->onOff = mavlink_msg_bat_common_info_get_onOff(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN? msg->len : MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN;
        memset(bat_common_info, 0, MAVLINK_MSG_ID_BAT_COMMON_INFO_LEN);
    memcpy(bat_common_info, _MAV_PAYLOAD(msg), len);
#endif
}
