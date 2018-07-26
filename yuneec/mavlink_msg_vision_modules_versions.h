#pragma once
// MESSAGE VISION_MODULES_VERSIONS PACKING

#define MAVLINK_MSG_ID_VISION_MODULES_VERSIONS 4006

MAVPACKED(
typedef struct __mavlink_vision_modules_versions_t {
 uint32_t optical_software_version; /*<  Optical flow software version*/
 uint32_t optical_hardware_version; /*<  Optical flow hardware version*/
 uint32_t realsense_software_version; /*<  Realsense software version*/
 uint32_t realsense_hardware_version; /*<  Realsense hardware version*/
}) mavlink_vision_modules_versions_t;

#define MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN 16
#define MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN 16
#define MAVLINK_MSG_ID_4006_LEN 16
#define MAVLINK_MSG_ID_4006_MIN_LEN 16

#define MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC 26
#define MAVLINK_MSG_ID_4006_CRC 26



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VISION_MODULES_VERSIONS { \
    4006, \
    "VISION_MODULES_VERSIONS", \
    4, \
    {  { "optical_software_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_vision_modules_versions_t, optical_software_version) }, \
         { "optical_hardware_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_vision_modules_versions_t, optical_hardware_version) }, \
         { "realsense_software_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_vision_modules_versions_t, realsense_software_version) }, \
         { "realsense_hardware_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_vision_modules_versions_t, realsense_hardware_version) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VISION_MODULES_VERSIONS { \
    "VISION_MODULES_VERSIONS", \
    4, \
    {  { "optical_software_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_vision_modules_versions_t, optical_software_version) }, \
         { "optical_hardware_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 4, offsetof(mavlink_vision_modules_versions_t, optical_hardware_version) }, \
         { "realsense_software_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 8, offsetof(mavlink_vision_modules_versions_t, realsense_software_version) }, \
         { "realsense_hardware_version", NULL, MAVLINK_TYPE_UINT32_T, 0, 12, offsetof(mavlink_vision_modules_versions_t, realsense_hardware_version) }, \
         } \
}
#endif

/**
 * @brief Pack a vision_modules_versions message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param optical_software_version  Optical flow software version
 * @param optical_hardware_version  Optical flow hardware version
 * @param realsense_software_version  Realsense software version
 * @param realsense_hardware_version  Realsense hardware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vision_modules_versions_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint32_t optical_software_version, uint32_t optical_hardware_version, uint32_t realsense_software_version, uint32_t realsense_hardware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN];
    _mav_put_uint32_t(buf, 0, optical_software_version);
    _mav_put_uint32_t(buf, 4, optical_hardware_version);
    _mav_put_uint32_t(buf, 8, realsense_software_version);
    _mav_put_uint32_t(buf, 12, realsense_hardware_version);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN);
#else
    mavlink_vision_modules_versions_t packet;
    packet.optical_software_version = optical_software_version;
    packet.optical_hardware_version = optical_hardware_version;
    packet.realsense_software_version = realsense_software_version;
    packet.realsense_hardware_version = realsense_hardware_version;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISION_MODULES_VERSIONS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
}

/**
 * @brief Pack a vision_modules_versions message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param optical_software_version  Optical flow software version
 * @param optical_hardware_version  Optical flow hardware version
 * @param realsense_software_version  Realsense software version
 * @param realsense_hardware_version  Realsense hardware version
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_vision_modules_versions_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint32_t optical_software_version,uint32_t optical_hardware_version,uint32_t realsense_software_version,uint32_t realsense_hardware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN];
    _mav_put_uint32_t(buf, 0, optical_software_version);
    _mav_put_uint32_t(buf, 4, optical_hardware_version);
    _mav_put_uint32_t(buf, 8, realsense_software_version);
    _mav_put_uint32_t(buf, 12, realsense_hardware_version);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN);
#else
    mavlink_vision_modules_versions_t packet;
    packet.optical_software_version = optical_software_version;
    packet.optical_hardware_version = optical_hardware_version;
    packet.realsense_software_version = realsense_software_version;
    packet.realsense_hardware_version = realsense_hardware_version;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISION_MODULES_VERSIONS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
}

/**
 * @brief Encode a vision_modules_versions struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param vision_modules_versions C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vision_modules_versions_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_vision_modules_versions_t* vision_modules_versions)
{
    return mavlink_msg_vision_modules_versions_pack(system_id, component_id, msg, vision_modules_versions->optical_software_version, vision_modules_versions->optical_hardware_version, vision_modules_versions->realsense_software_version, vision_modules_versions->realsense_hardware_version);
}

/**
 * @brief Encode a vision_modules_versions struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param vision_modules_versions C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_vision_modules_versions_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_vision_modules_versions_t* vision_modules_versions)
{
    return mavlink_msg_vision_modules_versions_pack_chan(system_id, component_id, chan, msg, vision_modules_versions->optical_software_version, vision_modules_versions->optical_hardware_version, vision_modules_versions->realsense_software_version, vision_modules_versions->realsense_hardware_version);
}

/**
 * @brief Send a vision_modules_versions message
 * @param chan MAVLink channel to send the message
 *
 * @param optical_software_version  Optical flow software version
 * @param optical_hardware_version  Optical flow hardware version
 * @param realsense_software_version  Realsense software version
 * @param realsense_hardware_version  Realsense hardware version
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_vision_modules_versions_send(mavlink_channel_t chan, uint32_t optical_software_version, uint32_t optical_hardware_version, uint32_t realsense_software_version, uint32_t realsense_hardware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN];
    _mav_put_uint32_t(buf, 0, optical_software_version);
    _mav_put_uint32_t(buf, 4, optical_hardware_version);
    _mav_put_uint32_t(buf, 8, realsense_software_version);
    _mav_put_uint32_t(buf, 12, realsense_hardware_version);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS, buf, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
#else
    mavlink_vision_modules_versions_t packet;
    packet.optical_software_version = optical_software_version;
    packet.optical_hardware_version = optical_hardware_version;
    packet.realsense_software_version = realsense_software_version;
    packet.realsense_hardware_version = realsense_hardware_version;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS, (const char *)&packet, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
#endif
}

/**
 * @brief Send a vision_modules_versions message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_vision_modules_versions_send_struct(mavlink_channel_t chan, const mavlink_vision_modules_versions_t* vision_modules_versions)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_vision_modules_versions_send(chan, vision_modules_versions->optical_software_version, vision_modules_versions->optical_hardware_version, vision_modules_versions->realsense_software_version, vision_modules_versions->realsense_hardware_version);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS, (const char *)vision_modules_versions, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
#endif
}

#if MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_vision_modules_versions_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint32_t optical_software_version, uint32_t optical_hardware_version, uint32_t realsense_software_version, uint32_t realsense_hardware_version)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, optical_software_version);
    _mav_put_uint32_t(buf, 4, optical_hardware_version);
    _mav_put_uint32_t(buf, 8, realsense_software_version);
    _mav_put_uint32_t(buf, 12, realsense_hardware_version);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS, buf, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
#else
    mavlink_vision_modules_versions_t *packet = (mavlink_vision_modules_versions_t *)msgbuf;
    packet->optical_software_version = optical_software_version;
    packet->optical_hardware_version = optical_hardware_version;
    packet->realsense_software_version = realsense_software_version;
    packet->realsense_hardware_version = realsense_hardware_version;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS, (const char *)packet, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_MIN_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_CRC);
#endif
}
#endif

#endif

// MESSAGE VISION_MODULES_VERSIONS UNPACKING


/**
 * @brief Get field optical_software_version from vision_modules_versions message
 *
 * @return  Optical flow software version
 */
static inline uint32_t mavlink_msg_vision_modules_versions_get_optical_software_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field optical_hardware_version from vision_modules_versions message
 *
 * @return  Optical flow hardware version
 */
static inline uint32_t mavlink_msg_vision_modules_versions_get_optical_hardware_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  4);
}

/**
 * @brief Get field realsense_software_version from vision_modules_versions message
 *
 * @return  Realsense software version
 */
static inline uint32_t mavlink_msg_vision_modules_versions_get_realsense_software_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  8);
}

/**
 * @brief Get field realsense_hardware_version from vision_modules_versions message
 *
 * @return  Realsense hardware version
 */
static inline uint32_t mavlink_msg_vision_modules_versions_get_realsense_hardware_version(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  12);
}

/**
 * @brief Decode a vision_modules_versions message into a struct
 *
 * @param msg The message to decode
 * @param vision_modules_versions C-struct to decode the message contents into
 */
static inline void mavlink_msg_vision_modules_versions_decode(const mavlink_message_t* msg, mavlink_vision_modules_versions_t* vision_modules_versions)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    vision_modules_versions->optical_software_version = mavlink_msg_vision_modules_versions_get_optical_software_version(msg);
    vision_modules_versions->optical_hardware_version = mavlink_msg_vision_modules_versions_get_optical_hardware_version(msg);
    vision_modules_versions->realsense_software_version = mavlink_msg_vision_modules_versions_get_realsense_software_version(msg);
    vision_modules_versions->realsense_hardware_version = mavlink_msg_vision_modules_versions_get_realsense_hardware_version(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN? msg->len : MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN;
        memset(vision_modules_versions, 0, MAVLINK_MSG_ID_VISION_MODULES_VERSIONS_LEN);
    memcpy(vision_modules_versions, _MAV_PAYLOAD(msg), len);
#endif
}
