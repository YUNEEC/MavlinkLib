#pragma once
// MESSAGE EXPOSURE_INFO_ACK PACKING

#define MAVLINK_MSG_ID_EXPOSURE_INFO_ACK 4019

MAVPACKED(
typedef struct __mavlink_exposure_info_ack_t {
 uint64_t time_utc; /*<  [us] Time in UTC, 0 for unknown*/
 double lat; /*<  [deg] Latitude (WGS84)*/
 double lon; /*<  [deg] Longitude (WGS84)*/
 int32_t alt; /*<  [mm] Altitude (MSL). Positive for up*/
 float roll; /*<  [rad] Gimbal roll angle (-pi..+pi)*/
 float pitch; /*<  [rad] Gimbal pitch angle (-pi..+pi)*/
 float yaw; /*<  [rad] Gimbal yaw angle (-pi..+pi)*/
}) mavlink_exposure_info_ack_t;

#define MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN 40
#define MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN 40
#define MAVLINK_MSG_ID_4019_LEN 40
#define MAVLINK_MSG_ID_4019_MIN_LEN 40

#define MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC 206
#define MAVLINK_MSG_ID_4019_CRC 206



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_EXPOSURE_INFO_ACK { \
    4019, \
    "EXPOSURE_INFO_ACK", \
    7, \
    {  { "time_utc", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_exposure_info_ack_t, time_utc) }, \
         { "lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_exposure_info_ack_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_exposure_info_ack_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_exposure_info_ack_t, alt) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_exposure_info_ack_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_exposure_info_ack_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_exposure_info_ack_t, yaw) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_EXPOSURE_INFO_ACK { \
    "EXPOSURE_INFO_ACK", \
    7, \
    {  { "time_utc", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_exposure_info_ack_t, time_utc) }, \
         { "lat", NULL, MAVLINK_TYPE_DOUBLE, 0, 8, offsetof(mavlink_exposure_info_ack_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_DOUBLE, 0, 16, offsetof(mavlink_exposure_info_ack_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_INT32_T, 0, 24, offsetof(mavlink_exposure_info_ack_t, alt) }, \
         { "roll", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_exposure_info_ack_t, roll) }, \
         { "pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_exposure_info_ack_t, pitch) }, \
         { "yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_exposure_info_ack_t, yaw) }, \
         } \
}
#endif

/**
 * @brief Pack a exposure_info_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_utc  [us] Time in UTC, 0 for unknown
 * @param lat  [deg] Latitude (WGS84)
 * @param lon  [deg] Longitude (WGS84)
 * @param alt  [mm] Altitude (MSL). Positive for up
 * @param roll  [rad] Gimbal roll angle (-pi..+pi)
 * @param pitch  [rad] Gimbal pitch angle (-pi..+pi)
 * @param yaw  [rad] Gimbal yaw angle (-pi..+pi)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_exposure_info_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_utc, double lat, double lon, int32_t alt, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_double(buf, 8, lat);
    _mav_put_double(buf, 16, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_float(buf, 28, roll);
    _mav_put_float(buf, 32, pitch);
    _mav_put_float(buf, 36, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN);
#else
    mavlink_exposure_info_ack_t packet;
    packet.time_utc = time_utc;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXPOSURE_INFO_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
}

/**
 * @brief Pack a exposure_info_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_utc  [us] Time in UTC, 0 for unknown
 * @param lat  [deg] Latitude (WGS84)
 * @param lon  [deg] Longitude (WGS84)
 * @param alt  [mm] Altitude (MSL). Positive for up
 * @param roll  [rad] Gimbal roll angle (-pi..+pi)
 * @param pitch  [rad] Gimbal pitch angle (-pi..+pi)
 * @param yaw  [rad] Gimbal yaw angle (-pi..+pi)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_exposure_info_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_utc,double lat,double lon,int32_t alt,float roll,float pitch,float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_double(buf, 8, lat);
    _mav_put_double(buf, 16, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_float(buf, 28, roll);
    _mav_put_float(buf, 32, pitch);
    _mav_put_float(buf, 36, yaw);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN);
#else
    mavlink_exposure_info_ack_t packet;
    packet.time_utc = time_utc;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_EXPOSURE_INFO_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
}

/**
 * @brief Encode a exposure_info_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param exposure_info_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_exposure_info_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_exposure_info_ack_t* exposure_info_ack)
{
    return mavlink_msg_exposure_info_ack_pack(system_id, component_id, msg, exposure_info_ack->time_utc, exposure_info_ack->lat, exposure_info_ack->lon, exposure_info_ack->alt, exposure_info_ack->roll, exposure_info_ack->pitch, exposure_info_ack->yaw);
}

/**
 * @brief Encode a exposure_info_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param exposure_info_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_exposure_info_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_exposure_info_ack_t* exposure_info_ack)
{
    return mavlink_msg_exposure_info_ack_pack_chan(system_id, component_id, chan, msg, exposure_info_ack->time_utc, exposure_info_ack->lat, exposure_info_ack->lon, exposure_info_ack->alt, exposure_info_ack->roll, exposure_info_ack->pitch, exposure_info_ack->yaw);
}

/**
 * @brief Send a exposure_info_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param time_utc  [us] Time in UTC, 0 for unknown
 * @param lat  [deg] Latitude (WGS84)
 * @param lon  [deg] Longitude (WGS84)
 * @param alt  [mm] Altitude (MSL). Positive for up
 * @param roll  [rad] Gimbal roll angle (-pi..+pi)
 * @param pitch  [rad] Gimbal pitch angle (-pi..+pi)
 * @param yaw  [rad] Gimbal yaw angle (-pi..+pi)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_exposure_info_ack_send(mavlink_channel_t chan, uint64_t time_utc, double lat, double lon, int32_t alt, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN];
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_double(buf, 8, lat);
    _mav_put_double(buf, 16, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_float(buf, 28, roll);
    _mav_put_float(buf, 32, pitch);
    _mav_put_float(buf, 36, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK, buf, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
#else
    mavlink_exposure_info_ack_t packet;
    packet.time_utc = time_utc;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.roll = roll;
    packet.pitch = pitch;
    packet.yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK, (const char *)&packet, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
#endif
}

/**
 * @brief Send a exposure_info_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_exposure_info_ack_send_struct(mavlink_channel_t chan, const mavlink_exposure_info_ack_t* exposure_info_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_exposure_info_ack_send(chan, exposure_info_ack->time_utc, exposure_info_ack->lat, exposure_info_ack->lon, exposure_info_ack->alt, exposure_info_ack->roll, exposure_info_ack->pitch, exposure_info_ack->yaw);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK, (const char *)exposure_info_ack, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_exposure_info_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_utc, double lat, double lon, int32_t alt, float roll, float pitch, float yaw)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_utc);
    _mav_put_double(buf, 8, lat);
    _mav_put_double(buf, 16, lon);
    _mav_put_int32_t(buf, 24, alt);
    _mav_put_float(buf, 28, roll);
    _mav_put_float(buf, 32, pitch);
    _mav_put_float(buf, 36, yaw);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK, buf, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
#else
    mavlink_exposure_info_ack_t *packet = (mavlink_exposure_info_ack_t *)msgbuf;
    packet->time_utc = time_utc;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->roll = roll;
    packet->pitch = pitch;
    packet->yaw = yaw;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK, (const char *)packet, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_MIN_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE EXPOSURE_INFO_ACK UNPACKING


/**
 * @brief Get field time_utc from exposure_info_ack message
 *
 * @return  [us] Time in UTC, 0 for unknown
 */
static inline uint64_t mavlink_msg_exposure_info_ack_get_time_utc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field lat from exposure_info_ack message
 *
 * @return  [deg] Latitude (WGS84)
 */
static inline double mavlink_msg_exposure_info_ack_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  8);
}

/**
 * @brief Get field lon from exposure_info_ack message
 *
 * @return  [deg] Longitude (WGS84)
 */
static inline double mavlink_msg_exposure_info_ack_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_double(msg,  16);
}

/**
 * @brief Get field alt from exposure_info_ack message
 *
 * @return  [mm] Altitude (MSL). Positive for up
 */
static inline int32_t mavlink_msg_exposure_info_ack_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int32_t(msg,  24);
}

/**
 * @brief Get field roll from exposure_info_ack message
 *
 * @return  [rad] Gimbal roll angle (-pi..+pi)
 */
static inline float mavlink_msg_exposure_info_ack_get_roll(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field pitch from exposure_info_ack message
 *
 * @return  [rad] Gimbal pitch angle (-pi..+pi)
 */
static inline float mavlink_msg_exposure_info_ack_get_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field yaw from exposure_info_ack message
 *
 * @return  [rad] Gimbal yaw angle (-pi..+pi)
 */
static inline float mavlink_msg_exposure_info_ack_get_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a exposure_info_ack message into a struct
 *
 * @param msg The message to decode
 * @param exposure_info_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_exposure_info_ack_decode(const mavlink_message_t* msg, mavlink_exposure_info_ack_t* exposure_info_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    exposure_info_ack->time_utc = mavlink_msg_exposure_info_ack_get_time_utc(msg);
    exposure_info_ack->lat = mavlink_msg_exposure_info_ack_get_lat(msg);
    exposure_info_ack->lon = mavlink_msg_exposure_info_ack_get_lon(msg);
    exposure_info_ack->alt = mavlink_msg_exposure_info_ack_get_alt(msg);
    exposure_info_ack->roll = mavlink_msg_exposure_info_ack_get_roll(msg);
    exposure_info_ack->pitch = mavlink_msg_exposure_info_ack_get_pitch(msg);
    exposure_info_ack->yaw = mavlink_msg_exposure_info_ack_get_yaw(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN? msg->len : MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN;
        memset(exposure_info_ack, 0, MAVLINK_MSG_ID_EXPOSURE_INFO_ACK_LEN);
    memcpy(exposure_info_ack, _MAV_PAYLOAD(msg), len);
#endif
}
