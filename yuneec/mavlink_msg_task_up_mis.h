#pragma once
// MESSAGE TASK_UP_MIS PACKING

#define MAVLINK_MSG_ID_TASK_UP_MIS 4001

MAVPACKED(
typedef struct __mavlink_task_up_mis_t {
 float lat; /*<  waypoint latitude.*/
 float lon; /*<  waypoint longitude.*/
 float alt; /*<  waypoint altitude.*/
 float gb_pitch; /*<  gimbal pitch value -1f..1f.*/
 float uav_yaw; /*<  vehicle global yaw.*/
 float action; /*<  vehicle and camera execution. see enum(TASK_ACTION).*/
 float velocity; /*<  flight velocity, unit is meters.*/
 int16_t index; /*<  waypoint sequence.*/
 int16_t count; /*<  waypoint count.*/
}) mavlink_task_up_mis_t;

#define MAVLINK_MSG_ID_TASK_UP_MIS_LEN 32
#define MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN 32
#define MAVLINK_MSG_ID_4001_LEN 32
#define MAVLINK_MSG_ID_4001_MIN_LEN 32

#define MAVLINK_MSG_ID_TASK_UP_MIS_CRC 180
#define MAVLINK_MSG_ID_4001_CRC 180



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_TASK_UP_MIS { \
    4001, \
    "TASK_UP_MIS", \
    9, \
    {  { "index", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_task_up_mis_t, index) }, \
         { "count", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_task_up_mis_t, count) }, \
         { "lat", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_task_up_mis_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_task_up_mis_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_task_up_mis_t, alt) }, \
         { "gb_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_task_up_mis_t, gb_pitch) }, \
         { "uav_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_task_up_mis_t, uav_yaw) }, \
         { "action", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_task_up_mis_t, action) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_task_up_mis_t, velocity) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_TASK_UP_MIS { \
    "TASK_UP_MIS", \
    9, \
    {  { "index", NULL, MAVLINK_TYPE_INT16_T, 0, 28, offsetof(mavlink_task_up_mis_t, index) }, \
         { "count", NULL, MAVLINK_TYPE_INT16_T, 0, 30, offsetof(mavlink_task_up_mis_t, count) }, \
         { "lat", NULL, MAVLINK_TYPE_FLOAT, 0, 0, offsetof(mavlink_task_up_mis_t, lat) }, \
         { "lon", NULL, MAVLINK_TYPE_FLOAT, 0, 4, offsetof(mavlink_task_up_mis_t, lon) }, \
         { "alt", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_task_up_mis_t, alt) }, \
         { "gb_pitch", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_task_up_mis_t, gb_pitch) }, \
         { "uav_yaw", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_task_up_mis_t, uav_yaw) }, \
         { "action", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_task_up_mis_t, action) }, \
         { "velocity", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_task_up_mis_t, velocity) }, \
         } \
}
#endif

/**
 * @brief Pack a task_up_mis message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param index  waypoint sequence.
 * @param count  waypoint count.
 * @param lat  waypoint latitude.
 * @param lon  waypoint longitude.
 * @param alt  waypoint altitude.
 * @param gb_pitch  gimbal pitch value -1f..1f.
 * @param uav_yaw  vehicle global yaw.
 * @param action  vehicle and camera execution. see enum(TASK_ACTION).
 * @param velocity  flight velocity, unit is meters.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_up_mis_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               int16_t index, int16_t count, float lat, float lon, float alt, float gb_pitch, float uav_yaw, float action, float velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_UP_MIS_LEN];
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lon);
    _mav_put_float(buf, 8, alt);
    _mav_put_float(buf, 12, gb_pitch);
    _mav_put_float(buf, 16, uav_yaw);
    _mav_put_float(buf, 20, action);
    _mav_put_float(buf, 24, velocity);
    _mav_put_int16_t(buf, 28, index);
    _mav_put_int16_t(buf, 30, count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_UP_MIS_LEN);
#else
    mavlink_task_up_mis_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.gb_pitch = gb_pitch;
    packet.uav_yaw = uav_yaw;
    packet.action = action;
    packet.velocity = velocity;
    packet.index = index;
    packet.count = count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_UP_MIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_UP_MIS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
}

/**
 * @brief Pack a task_up_mis message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param index  waypoint sequence.
 * @param count  waypoint count.
 * @param lat  waypoint latitude.
 * @param lon  waypoint longitude.
 * @param alt  waypoint altitude.
 * @param gb_pitch  gimbal pitch value -1f..1f.
 * @param uav_yaw  vehicle global yaw.
 * @param action  vehicle and camera execution. see enum(TASK_ACTION).
 * @param velocity  flight velocity, unit is meters.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_task_up_mis_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   int16_t index,int16_t count,float lat,float lon,float alt,float gb_pitch,float uav_yaw,float action,float velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_UP_MIS_LEN];
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lon);
    _mav_put_float(buf, 8, alt);
    _mav_put_float(buf, 12, gb_pitch);
    _mav_put_float(buf, 16, uav_yaw);
    _mav_put_float(buf, 20, action);
    _mav_put_float(buf, 24, velocity);
    _mav_put_int16_t(buf, 28, index);
    _mav_put_int16_t(buf, 30, count);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_TASK_UP_MIS_LEN);
#else
    mavlink_task_up_mis_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.gb_pitch = gb_pitch;
    packet.uav_yaw = uav_yaw;
    packet.action = action;
    packet.velocity = velocity;
    packet.index = index;
    packet.count = count;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_TASK_UP_MIS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_TASK_UP_MIS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
}

/**
 * @brief Encode a task_up_mis struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param task_up_mis C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_up_mis_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_task_up_mis_t* task_up_mis)
{
    return mavlink_msg_task_up_mis_pack(system_id, component_id, msg, task_up_mis->index, task_up_mis->count, task_up_mis->lat, task_up_mis->lon, task_up_mis->alt, task_up_mis->gb_pitch, task_up_mis->uav_yaw, task_up_mis->action, task_up_mis->velocity);
}

/**
 * @brief Encode a task_up_mis struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param task_up_mis C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_task_up_mis_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_task_up_mis_t* task_up_mis)
{
    return mavlink_msg_task_up_mis_pack_chan(system_id, component_id, chan, msg, task_up_mis->index, task_up_mis->count, task_up_mis->lat, task_up_mis->lon, task_up_mis->alt, task_up_mis->gb_pitch, task_up_mis->uav_yaw, task_up_mis->action, task_up_mis->velocity);
}

/**
 * @brief Send a task_up_mis message
 * @param chan MAVLink channel to send the message
 *
 * @param index  waypoint sequence.
 * @param count  waypoint count.
 * @param lat  waypoint latitude.
 * @param lon  waypoint longitude.
 * @param alt  waypoint altitude.
 * @param gb_pitch  gimbal pitch value -1f..1f.
 * @param uav_yaw  vehicle global yaw.
 * @param action  vehicle and camera execution. see enum(TASK_ACTION).
 * @param velocity  flight velocity, unit is meters.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_task_up_mis_send(mavlink_channel_t chan, int16_t index, int16_t count, float lat, float lon, float alt, float gb_pitch, float uav_yaw, float action, float velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_TASK_UP_MIS_LEN];
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lon);
    _mav_put_float(buf, 8, alt);
    _mav_put_float(buf, 12, gb_pitch);
    _mav_put_float(buf, 16, uav_yaw);
    _mav_put_float(buf, 20, action);
    _mav_put_float(buf, 24, velocity);
    _mav_put_int16_t(buf, 28, index);
    _mav_put_int16_t(buf, 30, count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_UP_MIS, buf, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
#else
    mavlink_task_up_mis_t packet;
    packet.lat = lat;
    packet.lon = lon;
    packet.alt = alt;
    packet.gb_pitch = gb_pitch;
    packet.uav_yaw = uav_yaw;
    packet.action = action;
    packet.velocity = velocity;
    packet.index = index;
    packet.count = count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_UP_MIS, (const char *)&packet, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
#endif
}

/**
 * @brief Send a task_up_mis message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_task_up_mis_send_struct(mavlink_channel_t chan, const mavlink_task_up_mis_t* task_up_mis)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_task_up_mis_send(chan, task_up_mis->index, task_up_mis->count, task_up_mis->lat, task_up_mis->lon, task_up_mis->alt, task_up_mis->gb_pitch, task_up_mis->uav_yaw, task_up_mis->action, task_up_mis->velocity);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_UP_MIS, (const char *)task_up_mis, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
#endif
}

#if MAVLINK_MSG_ID_TASK_UP_MIS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_task_up_mis_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  int16_t index, int16_t count, float lat, float lon, float alt, float gb_pitch, float uav_yaw, float action, float velocity)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_float(buf, 0, lat);
    _mav_put_float(buf, 4, lon);
    _mav_put_float(buf, 8, alt);
    _mav_put_float(buf, 12, gb_pitch);
    _mav_put_float(buf, 16, uav_yaw);
    _mav_put_float(buf, 20, action);
    _mav_put_float(buf, 24, velocity);
    _mav_put_int16_t(buf, 28, index);
    _mav_put_int16_t(buf, 30, count);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_UP_MIS, buf, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
#else
    mavlink_task_up_mis_t *packet = (mavlink_task_up_mis_t *)msgbuf;
    packet->lat = lat;
    packet->lon = lon;
    packet->alt = alt;
    packet->gb_pitch = gb_pitch;
    packet->uav_yaw = uav_yaw;
    packet->action = action;
    packet->velocity = velocity;
    packet->index = index;
    packet->count = count;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_TASK_UP_MIS, (const char *)packet, MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_LEN, MAVLINK_MSG_ID_TASK_UP_MIS_CRC);
#endif
}
#endif

#endif

// MESSAGE TASK_UP_MIS UNPACKING


/**
 * @brief Get field index from task_up_mis message
 *
 * @return  waypoint sequence.
 */
static inline int16_t mavlink_msg_task_up_mis_get_index(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  28);
}

/**
 * @brief Get field count from task_up_mis message
 *
 * @return  waypoint count.
 */
static inline int16_t mavlink_msg_task_up_mis_get_count(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  30);
}

/**
 * @brief Get field lat from task_up_mis message
 *
 * @return  waypoint latitude.
 */
static inline float mavlink_msg_task_up_mis_get_lat(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  0);
}

/**
 * @brief Get field lon from task_up_mis message
 *
 * @return  waypoint longitude.
 */
static inline float mavlink_msg_task_up_mis_get_lon(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  4);
}

/**
 * @brief Get field alt from task_up_mis message
 *
 * @return  waypoint altitude.
 */
static inline float mavlink_msg_task_up_mis_get_alt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field gb_pitch from task_up_mis message
 *
 * @return  gimbal pitch value -1f..1f.
 */
static inline float mavlink_msg_task_up_mis_get_gb_pitch(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field uav_yaw from task_up_mis message
 *
 * @return  vehicle global yaw.
 */
static inline float mavlink_msg_task_up_mis_get_uav_yaw(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field action from task_up_mis message
 *
 * @return  vehicle and camera execution. see enum(TASK_ACTION).
 */
static inline float mavlink_msg_task_up_mis_get_action(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field velocity from task_up_mis message
 *
 * @return  flight velocity, unit is meters.
 */
static inline float mavlink_msg_task_up_mis_get_velocity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Decode a task_up_mis message into a struct
 *
 * @param msg The message to decode
 * @param task_up_mis C-struct to decode the message contents into
 */
static inline void mavlink_msg_task_up_mis_decode(const mavlink_message_t* msg, mavlink_task_up_mis_t* task_up_mis)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    task_up_mis->lat = mavlink_msg_task_up_mis_get_lat(msg);
    task_up_mis->lon = mavlink_msg_task_up_mis_get_lon(msg);
    task_up_mis->alt = mavlink_msg_task_up_mis_get_alt(msg);
    task_up_mis->gb_pitch = mavlink_msg_task_up_mis_get_gb_pitch(msg);
    task_up_mis->uav_yaw = mavlink_msg_task_up_mis_get_uav_yaw(msg);
    task_up_mis->action = mavlink_msg_task_up_mis_get_action(msg);
    task_up_mis->velocity = mavlink_msg_task_up_mis_get_velocity(msg);
    task_up_mis->index = mavlink_msg_task_up_mis_get_index(msg);
    task_up_mis->count = mavlink_msg_task_up_mis_get_count(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_TASK_UP_MIS_LEN? msg->len : MAVLINK_MSG_ID_TASK_UP_MIS_LEN;
        memset(task_up_mis, 0, MAVLINK_MSG_ID_TASK_UP_MIS_LEN);
    memcpy(task_up_mis, _MAV_PAYLOAD(msg), len);
#endif
}
