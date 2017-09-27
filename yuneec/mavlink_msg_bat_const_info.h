#pragma once
// MESSAGE BAT_CONST_INFO PACKING

#define MAVLINK_MSG_ID_BAT_CONST_INFO 9004

MAVPACKED(
typedef struct __mavlink_bat_const_info_t {
 uint32_t firmwareVersion; /*< firmwareVersion. version 101 means 1.01*/
 uint32_t bootloaderVersion; /*< bootloaderVersion.version 101 means 1.01*/
 uint32_t hardwareVersion; /*< hardwareVersion.version 101 means 1.01*/
 uint32_t firmwareSize; /*< firmwareSize.the value of application in bytes*/
 uint16_t designCap; /*< The battery design capacity in units mAh*/
 uint8_t MCUType[11]; /*< MCU type.*/
 uint8_t companyOfBat[32]; /*< Name of our company*/
 uint8_t nCell; /*< The Cells of battery*/
}) mavlink_bat_const_info_t;

#define MAVLINK_MSG_ID_BAT_CONST_INFO_LEN 62
#define MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN 62
#define MAVLINK_MSG_ID_9004_LEN 62
#define MAVLINK_MSG_ID_9004_MIN_LEN 62

#define MAVLINK_MSG_ID_BAT_CONST_INFO_CRC 53
#define MAVLINK_MSG_ID_9004_CRC 53

#define MAVLINK_MSG_BAT_CONST_INFO_FIELD_MCUTYPE_LEN 11
#define MAVLINK_MSG_BAT_CONST_INFO_FIELD_COMPANYOFBAT_LEN 32

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BAT_CONST_INFO { \
    9004, \
    "BAT_CONST_INFO", \
    8, \
    {  { "firmwareVersion", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_bat_const_info_t, firmwareVersion) }, \
         { "bootloaderVersion", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_bat_const_info_t, bootloaderVersion) }, \
         { "hardwareVersion", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_bat_const_info_t, hardwareVersion) }, \
         { "firmwareSize", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_bat_const_info_t, firmwareSize) }, \
         { "MCUType", NULL, MAVLINK_TYPE_UINT8_T, 11, 18, offsetof(mavlink_bat_const_info_t, MCUType) }, \
         { "companyOfBat", NULL, MAVLINK_TYPE_UINT8_T, 32, 29, offsetof(mavlink_bat_const_info_t, companyOfBat) }, \
         { "nCell", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_bat_const_info_t, nCell) }, \
         { "designCap", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_bat_const_info_t, designCap) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BAT_CONST_INFO { \
    "BAT_CONST_INFO", \
    8, \
    {  { "firmwareVersion", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_bat_const_info_t, firmwareVersion) }, \
         { "bootloaderVersion", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_bat_const_info_t, bootloaderVersion) }, \
         { "hardwareVersion", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_bat_const_info_t, hardwareVersion) }, \
         { "firmwareSize", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_bat_const_info_t, firmwareSize) }, \
         { "MCUType", NULL, MAVLINK_TYPE_UINT8_T, 11, 18, offsetof(mavlink_bat_const_info_t, MCUType) }, \
         { "companyOfBat", NULL, MAVLINK_TYPE_UINT8_T, 32, 29, offsetof(mavlink_bat_const_info_t, companyOfBat) }, \
         { "nCell", NULL, MAVLINK_TYPE_UINT8_T, 0, 61, offsetof(mavlink_bat_const_info_t, nCell) }, \
         { "designCap", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_bat_const_info_t, designCap) }, \
         } \
}
#endif

/**
 * @brief Pack a bat_const_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param firmwareVersion firmwareVersion. version 101 means 1.01
 * @param bootloaderVersion bootloaderVersion.version 101 means 1.01
 * @param hardwareVersion hardwareVersion.version 101 means 1.01
 * @param firmwareSize firmwareSize.the value of application in bytes
 * @param MCUType MCU type.
 * @param companyOfBat Name of our company
 * @param nCell The Cells of battery
 * @param designCap The battery design capacity in units mAh
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_const_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t firmwareVersion, uint32_t bootloaderVersion, uint32_t hardwareVersion, uint32_t firmwareSize, const uint8_t *MCUType, const uint8_t *companyOfBat, uint8_t nCell, uint16_t designCap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_CONST_INFO_LEN];
    _mav_put_uint32_t(buf, 0, firmwareVersion);
    _mav_put_uint32_t(buf, 4, bootloaderVersion);
    _mav_put_uint32_t(buf, 8, hardwareVersion);
    _mav_put_uint32_t(buf, 12, firmwareSize);
    _mav_put_uint16_t(buf, 16, designCap);
    _mav_put_uint8_t(buf, 61, nCell);
    _mav_put_uint8_t_array(buf, 18, MCUType, 11);
    _mav_put_uint8_t_array(buf, 29, companyOfBat, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN);
#else
    mavlink_bat_const_info_t packet;
    packet.firmwareVersion = firmwareVersion;
    packet.bootloaderVersion = bootloaderVersion;
    packet.hardwareVersion = hardwareVersion;
    packet.firmwareSize = firmwareSize;
    packet.designCap = designCap;
    packet.nCell = nCell;
    mav_array_memcpy(packet.MCUType, MCUType, sizeof(uint8_t)*11);
    mav_array_memcpy(packet.companyOfBat, companyOfBat, sizeof(uint8_t)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_CONST_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
}

/**
 * @brief Pack a bat_const_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param firmwareVersion firmwareVersion. version 101 means 1.01
 * @param bootloaderVersion bootloaderVersion.version 101 means 1.01
 * @param hardwareVersion hardwareVersion.version 101 means 1.01
 * @param firmwareSize firmwareSize.the value of application in bytes
 * @param MCUType MCU type.
 * @param companyOfBat Name of our company
 * @param nCell The Cells of battery
 * @param designCap The battery design capacity in units mAh
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_const_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t firmwareVersion,uint32_t bootloaderVersion,uint32_t hardwareVersion,uint32_t firmwareSize,const uint8_t *MCUType,const uint8_t *companyOfBat,uint8_t nCell,uint16_t designCap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_CONST_INFO_LEN];
    _mav_put_uint32_t(buf, 0, firmwareVersion);
    _mav_put_uint32_t(buf, 4, bootloaderVersion);
    _mav_put_uint32_t(buf, 8, hardwareVersion);
    _mav_put_uint32_t(buf, 12, firmwareSize);
    _mav_put_uint16_t(buf, 16, designCap);
    _mav_put_uint8_t(buf, 61, nCell);
    _mav_put_uint8_t_array(buf, 18, MCUType, 11);
    _mav_put_uint8_t_array(buf, 29, companyOfBat, 32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN);
#else
    mavlink_bat_const_info_t packet;
    packet.firmwareVersion = firmwareVersion;
    packet.bootloaderVersion = bootloaderVersion;
    packet.hardwareVersion = hardwareVersion;
    packet.firmwareSize = firmwareSize;
    packet.designCap = designCap;
    packet.nCell = nCell;
    mav_array_memcpy(packet.MCUType, MCUType, sizeof(uint8_t)*11);
    mav_array_memcpy(packet.companyOfBat, companyOfBat, sizeof(uint8_t)*32);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_CONST_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
}

/**
 * @brief Encode a bat_const_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bat_const_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_const_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bat_const_info_t* bat_const_info)
{
    return mavlink_msg_bat_const_info_pack(system_id, component_id, msg, bat_const_info->firmwareVersion, bat_const_info->bootloaderVersion, bat_const_info->hardwareVersion, bat_const_info->firmwareSize, bat_const_info->MCUType, bat_const_info->companyOfBat, bat_const_info->nCell, bat_const_info->designCap);
}

/**
 * @brief Encode a bat_const_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bat_const_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_const_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bat_const_info_t* bat_const_info)
{
    return mavlink_msg_bat_const_info_pack_chan(system_id, component_id, chan, msg, bat_const_info->firmwareVersion, bat_const_info->bootloaderVersion, bat_const_info->hardwareVersion, bat_const_info->firmwareSize, bat_const_info->MCUType, bat_const_info->companyOfBat, bat_const_info->nCell, bat_const_info->designCap);
}

/**
 * @brief Send a bat_const_info message
 * @param chan MAVLink channel to send the message
 *
 * @param firmwareVersion firmwareVersion. version 101 means 1.01
 * @param bootloaderVersion bootloaderVersion.version 101 means 1.01
 * @param hardwareVersion hardwareVersion.version 101 means 1.01
 * @param firmwareSize firmwareSize.the value of application in bytes
 * @param MCUType MCU type.
 * @param companyOfBat Name of our company
 * @param nCell The Cells of battery
 * @param designCap The battery design capacity in units mAh
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bat_const_info_send(mavlink_channel_t chan, uint32_t firmwareVersion, uint32_t bootloaderVersion, uint32_t hardwareVersion, uint32_t firmwareSize, const uint8_t *MCUType, const uint8_t *companyOfBat, uint8_t nCell, uint16_t designCap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_CONST_INFO_LEN];
    _mav_put_uint32_t(buf, 0, firmwareVersion);
    _mav_put_uint32_t(buf, 4, bootloaderVersion);
    _mav_put_uint32_t(buf, 8, hardwareVersion);
    _mav_put_uint32_t(buf, 12, firmwareSize);
    _mav_put_uint16_t(buf, 16, designCap);
    _mav_put_uint8_t(buf, 61, nCell);
    _mav_put_uint8_t_array(buf, 18, MCUType, 11);
    _mav_put_uint8_t_array(buf, 29, companyOfBat, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_CONST_INFO, buf, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
#else
    mavlink_bat_const_info_t packet;
    packet.firmwareVersion = firmwareVersion;
    packet.bootloaderVersion = bootloaderVersion;
    packet.hardwareVersion = hardwareVersion;
    packet.firmwareSize = firmwareSize;
    packet.designCap = designCap;
    packet.nCell = nCell;
    mav_array_memcpy(packet.MCUType, MCUType, sizeof(uint8_t)*11);
    mav_array_memcpy(packet.companyOfBat, companyOfBat, sizeof(uint8_t)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_CONST_INFO, (const char *)&packet, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
#endif
}

/**
 * @brief Send a bat_const_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bat_const_info_send_struct(mavlink_channel_t chan, const mavlink_bat_const_info_t* bat_const_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bat_const_info_send(chan, bat_const_info->firmwareVersion, bat_const_info->bootloaderVersion, bat_const_info->hardwareVersion, bat_const_info->firmwareSize, bat_const_info->MCUType, bat_const_info->companyOfBat, bat_const_info->nCell, bat_const_info->designCap);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_CONST_INFO, (const char *)bat_const_info, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_BAT_CONST_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bat_const_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t firmwareVersion, uint32_t bootloaderVersion, uint32_t hardwareVersion, uint32_t firmwareSize, const uint8_t *MCUType, const uint8_t *companyOfBat, uint8_t nCell, uint16_t designCap)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, firmwareVersion);
    _mav_put_uint32_t(buf, 4, bootloaderVersion);
    _mav_put_uint32_t(buf, 8, hardwareVersion);
    _mav_put_uint32_t(buf, 12, firmwareSize);
    _mav_put_uint16_t(buf, 16, designCap);
    _mav_put_uint8_t(buf, 61, nCell);
    _mav_put_uint8_t_array(buf, 18, MCUType, 11);
    _mav_put_uint8_t_array(buf, 29, companyOfBat, 32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_CONST_INFO, buf, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
#else
    mavlink_bat_const_info_t *packet = (mavlink_bat_const_info_t *)msgbuf;
    packet->firmwareVersion = firmwareVersion;
    packet->bootloaderVersion = bootloaderVersion;
    packet->hardwareVersion = hardwareVersion;
    packet->firmwareSize = firmwareSize;
    packet->designCap = designCap;
    packet->nCell = nCell;
    mav_array_memcpy(packet->MCUType, MCUType, sizeof(uint8_t)*11);
    mav_array_memcpy(packet->companyOfBat, companyOfBat, sizeof(uint8_t)*32);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_CONST_INFO, (const char *)packet, MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN, MAVLINK_MSG_ID_BAT_CONST_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE BAT_CONST_INFO UNPACKING


/**
 * @brief Get field firmwareVersion from bat_const_info message
 *
 * @return firmwareVersion. version 101 means 1.01
 */
static inline uint32_t mavlink_msg_bat_const_info_get_firmwareVersion(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field bootloaderVersion from bat_const_info message
 *
 * @return bootloaderVersion.version 101 means 1.01
 */
static inline uint32_t mavlink_msg_bat_const_info_get_bootloaderVersion(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field hardwareVersion from bat_const_info message
 *
 * @return hardwareVersion.version 101 means 1.01
 */
static inline uint32_t mavlink_msg_bat_const_info_get_hardwareVersion(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field firmwareSize from bat_const_info message
 *
 * @return firmwareSize.the value of application in bytes
 */
static inline uint32_t mavlink_msg_bat_const_info_get_firmwareSize(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Get field MCUType from bat_const_info message
 *
 * @return MCU type.
 */
static inline uint16_t mavlink_msg_bat_const_info_get_MCUType(const mavlink_message_t* msg, uint8_t *MCUType)
{
    return _MAV_RETURN_uint8_t_array(msg, MCUType, 11,  18);
}

/**
 * @brief Get field companyOfBat from bat_const_info message
 *
 * @return Name of our company
 */
static inline uint16_t mavlink_msg_bat_const_info_get_companyOfBat(const mavlink_message_t* msg, uint8_t *companyOfBat)
{
    return _MAV_RETURN_uint8_t_array(msg, companyOfBat, 32,  29);
}

/**
 * @brief Get field nCell from bat_const_info message
 *
 * @return The Cells of battery
 */
static inline uint8_t mavlink_msg_bat_const_info_get_nCell(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  61);
}

/**
 * @brief Get field designCap from bat_const_info message
 *
 * @return The battery design capacity in units mAh
 */
static inline uint16_t mavlink_msg_bat_const_info_get_designCap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Decode a bat_const_info message into a struct
 *
 * @param msg The message to decode
 * @param bat_const_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_bat_const_info_decode(const mavlink_message_t* msg, mavlink_bat_const_info_t* bat_const_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bat_const_info->firmwareVersion = mavlink_msg_bat_const_info_get_firmwareVersion(msg);
    bat_const_info->bootloaderVersion = mavlink_msg_bat_const_info_get_bootloaderVersion(msg);
    bat_const_info->hardwareVersion = mavlink_msg_bat_const_info_get_hardwareVersion(msg);
    bat_const_info->firmwareSize = mavlink_msg_bat_const_info_get_firmwareSize(msg);
    bat_const_info->designCap = mavlink_msg_bat_const_info_get_designCap(msg);
    mavlink_msg_bat_const_info_get_MCUType(msg, bat_const_info->MCUType);
    mavlink_msg_bat_const_info_get_companyOfBat(msg, bat_const_info->companyOfBat);
    bat_const_info->nCell = mavlink_msg_bat_const_info_get_nCell(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BAT_CONST_INFO_LEN? msg->len : MAVLINK_MSG_ID_BAT_CONST_INFO_LEN;
        memset(bat_const_info, 0, MAVLINK_MSG_ID_BAT_CONST_INFO_LEN);
    memcpy(bat_const_info, _MAV_PAYLOAD(msg), len);
#endif
}
