#pragma once
// MESSAGE VISUAL_TRACKING PACKING

#define MAVLINK_MSG_ID_VISUAL_TRACKING 4000

MAVPACKED(
typedef struct __mavlink_visual_tracking_t {
 uint64_t time_usec; /*< Timestamp (microseconds since boot or Unix epoch).*/
 float size; /*< The size of the visual target (no unit).*/
 float width; /*< The width of the visual target (no unit).*/
 float height; /*< The height of the visual target (no unit).*/
 float x; /*< Upper left coordinate value x (normalized, no unit).*/
 float y; /*< Upper left coordinate value y (normalized, no unit).*/
 float center_x; /*< Center coordinate value x (normalized, no unit).*/
 float center_y; /*< Center coordinate value y (normalized, no unit).*/
 uint8_t track_quality; /*< = 0: abnormal or lost; = 1: weak signal ; = 2: signal health.*/
 uint8_t task_ready; /*< =0 task ready fail;=1 task is being ready;=2 task ready ok.*/
}) mavlink_visual_tracking_t;

#define MAVLINK_MSG_ID_VISUAL_TRACKING_LEN 38
#define MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN 38
#define MAVLINK_MSG_ID_4000_LEN 38
#define MAVLINK_MSG_ID_4000_MIN_LEN 38

#define MAVLINK_MSG_ID_VISUAL_TRACKING_CRC 58
#define MAVLINK_MSG_ID_4000_CRC 58



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_VISUAL_TRACKING { \
    4000, \
    "VISUAL_TRACKING", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_visual_tracking_t, time_usec) }, \
         { "track_quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_visual_tracking_t, track_quality) }, \
         { "task_ready", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_visual_tracking_t, task_ready) }, \
         { "size", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_visual_tracking_t, size) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_visual_tracking_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_visual_tracking_t, height) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_visual_tracking_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_visual_tracking_t, y) }, \
         { "center_x", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_visual_tracking_t, center_x) }, \
         { "center_y", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_visual_tracking_t, center_y) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_VISUAL_TRACKING { \
    "VISUAL_TRACKING", \
    10, \
    {  { "time_usec", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_visual_tracking_t, time_usec) }, \
         { "track_quality", NULL, MAVLINK_TYPE_UINT8_T, 0, 36, offsetof(mavlink_visual_tracking_t, track_quality) }, \
         { "task_ready", NULL, MAVLINK_TYPE_UINT8_T, 0, 37, offsetof(mavlink_visual_tracking_t, task_ready) }, \
         { "size", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_visual_tracking_t, size) }, \
         { "width", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_visual_tracking_t, width) }, \
         { "height", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_visual_tracking_t, height) }, \
         { "x", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_visual_tracking_t, x) }, \
         { "y", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_visual_tracking_t, y) }, \
         { "center_x", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_visual_tracking_t, center_x) }, \
         { "center_y", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_visual_tracking_t, center_y) }, \
         } \
}
#endif

/**
 * @brief Pack a visual_tracking message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param time_usec Timestamp (microseconds since boot or Unix epoch).
 * @param track_quality = 0: abnormal or lost; = 1: weak signal ; = 2: signal health.
 * @param task_ready =0 task ready fail;=1 task is being ready;=2 task ready ok.
 * @param size The size of the visual target (no unit).
 * @param width The width of the visual target (no unit).
 * @param height The height of the visual target (no unit).
 * @param x Upper left coordinate value x (normalized, no unit).
 * @param y Upper left coordinate value y (normalized, no unit).
 * @param center_x Center coordinate value x (normalized, no unit).
 * @param center_y Center coordinate value y (normalized, no unit).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visual_tracking_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t time_usec, uint8_t track_quality, uint8_t task_ready, float size, float width, float height, float x, float y, float center_x, float center_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISUAL_TRACKING_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, size);
    _mav_put_float(buf, 12, width);
    _mav_put_float(buf, 16, height);
    _mav_put_float(buf, 20, x);
    _mav_put_float(buf, 24, y);
    _mav_put_float(buf, 28, center_x);
    _mav_put_float(buf, 32, center_y);
    _mav_put_uint8_t(buf, 36, track_quality);
    _mav_put_uint8_t(buf, 37, task_ready);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN);
#else
    mavlink_visual_tracking_t packet;
    packet.time_usec = time_usec;
    packet.size = size;
    packet.width = width;
    packet.height = height;
    packet.x = x;
    packet.y = y;
    packet.center_x = center_x;
    packet.center_y = center_y;
    packet.track_quality = track_quality;
    packet.task_ready = task_ready;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISUAL_TRACKING;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
}

/**
 * @brief Pack a visual_tracking message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param time_usec Timestamp (microseconds since boot or Unix epoch).
 * @param track_quality = 0: abnormal or lost; = 1: weak signal ; = 2: signal health.
 * @param task_ready =0 task ready fail;=1 task is being ready;=2 task ready ok.
 * @param size The size of the visual target (no unit).
 * @param width The width of the visual target (no unit).
 * @param height The height of the visual target (no unit).
 * @param x Upper left coordinate value x (normalized, no unit).
 * @param y Upper left coordinate value y (normalized, no unit).
 * @param center_x Center coordinate value x (normalized, no unit).
 * @param center_y Center coordinate value y (normalized, no unit).
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_visual_tracking_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t time_usec,uint8_t track_quality,uint8_t task_ready,float size,float width,float height,float x,float y,float center_x,float center_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISUAL_TRACKING_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, size);
    _mav_put_float(buf, 12, width);
    _mav_put_float(buf, 16, height);
    _mav_put_float(buf, 20, x);
    _mav_put_float(buf, 24, y);
    _mav_put_float(buf, 28, center_x);
    _mav_put_float(buf, 32, center_y);
    _mav_put_uint8_t(buf, 36, track_quality);
    _mav_put_uint8_t(buf, 37, task_ready);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN);
#else
    mavlink_visual_tracking_t packet;
    packet.time_usec = time_usec;
    packet.size = size;
    packet.width = width;
    packet.height = height;
    packet.x = x;
    packet.y = y;
    packet.center_x = center_x;
    packet.center_y = center_y;
    packet.track_quality = track_quality;
    packet.task_ready = task_ready;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_VISUAL_TRACKING;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
}

/**
 * @brief Encode a visual_tracking struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param visual_tracking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visual_tracking_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_visual_tracking_t* visual_tracking)
{
    return mavlink_msg_visual_tracking_pack(system_id, component_id, msg, visual_tracking->time_usec, visual_tracking->track_quality, visual_tracking->task_ready, visual_tracking->size, visual_tracking->width, visual_tracking->height, visual_tracking->x, visual_tracking->y, visual_tracking->center_x, visual_tracking->center_y);
}

/**
 * @brief Encode a visual_tracking struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param visual_tracking C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_visual_tracking_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_visual_tracking_t* visual_tracking)
{
    return mavlink_msg_visual_tracking_pack_chan(system_id, component_id, chan, msg, visual_tracking->time_usec, visual_tracking->track_quality, visual_tracking->task_ready, visual_tracking->size, visual_tracking->width, visual_tracking->height, visual_tracking->x, visual_tracking->y, visual_tracking->center_x, visual_tracking->center_y);
}

/**
 * @brief Send a visual_tracking message
 * @param chan MAVLink channel to send the message
 *
 * @param time_usec Timestamp (microseconds since boot or Unix epoch).
 * @param track_quality = 0: abnormal or lost; = 1: weak signal ; = 2: signal health.
 * @param task_ready =0 task ready fail;=1 task is being ready;=2 task ready ok.
 * @param size The size of the visual target (no unit).
 * @param width The width of the visual target (no unit).
 * @param height The height of the visual target (no unit).
 * @param x Upper left coordinate value x (normalized, no unit).
 * @param y Upper left coordinate value y (normalized, no unit).
 * @param center_x Center coordinate value x (normalized, no unit).
 * @param center_y Center coordinate value y (normalized, no unit).
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_visual_tracking_send(mavlink_channel_t chan, uint64_t time_usec, uint8_t track_quality, uint8_t task_ready, float size, float width, float height, float x, float y, float center_x, float center_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_VISUAL_TRACKING_LEN];
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, size);
    _mav_put_float(buf, 12, width);
    _mav_put_float(buf, 16, height);
    _mav_put_float(buf, 20, x);
    _mav_put_float(buf, 24, y);
    _mav_put_float(buf, 28, center_x);
    _mav_put_float(buf, 32, center_y);
    _mav_put_uint8_t(buf, 36, track_quality);
    _mav_put_uint8_t(buf, 37, task_ready);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_TRACKING, buf, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
#else
    mavlink_visual_tracking_t packet;
    packet.time_usec = time_usec;
    packet.size = size;
    packet.width = width;
    packet.height = height;
    packet.x = x;
    packet.y = y;
    packet.center_x = center_x;
    packet.center_y = center_y;
    packet.track_quality = track_quality;
    packet.task_ready = task_ready;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_TRACKING, (const char *)&packet, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
#endif
}

/**
 * @brief Send a visual_tracking message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_visual_tracking_send_struct(mavlink_channel_t chan, const mavlink_visual_tracking_t* visual_tracking)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_visual_tracking_send(chan, visual_tracking->time_usec, visual_tracking->track_quality, visual_tracking->task_ready, visual_tracking->size, visual_tracking->width, visual_tracking->height, visual_tracking->x, visual_tracking->y, visual_tracking->center_x, visual_tracking->center_y);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_TRACKING, (const char *)visual_tracking, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
#endif
}

#if MAVLINK_MSG_ID_VISUAL_TRACKING_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_visual_tracking_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t time_usec, uint8_t track_quality, uint8_t task_ready, float size, float width, float height, float x, float y, float center_x, float center_y)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, time_usec);
    _mav_put_float(buf, 8, size);
    _mav_put_float(buf, 12, width);
    _mav_put_float(buf, 16, height);
    _mav_put_float(buf, 20, x);
    _mav_put_float(buf, 24, y);
    _mav_put_float(buf, 28, center_x);
    _mav_put_float(buf, 32, center_y);
    _mav_put_uint8_t(buf, 36, track_quality);
    _mav_put_uint8_t(buf, 37, task_ready);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_TRACKING, buf, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
#else
    mavlink_visual_tracking_t *packet = (mavlink_visual_tracking_t *)msgbuf;
    packet->time_usec = time_usec;
    packet->size = size;
    packet->width = width;
    packet->height = height;
    packet->x = x;
    packet->y = y;
    packet->center_x = center_x;
    packet->center_y = center_y;
    packet->track_quality = track_quality;
    packet->task_ready = task_ready;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_VISUAL_TRACKING, (const char *)packet, MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN, MAVLINK_MSG_ID_VISUAL_TRACKING_CRC);
#endif
}
#endif

#endif

// MESSAGE VISUAL_TRACKING UNPACKING


/**
 * @brief Get field time_usec from visual_tracking message
 *
 * @return Timestamp (microseconds since boot or Unix epoch).
 */
static inline uint64_t mavlink_msg_visual_tracking_get_time_usec(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field track_quality from visual_tracking message
 *
 * @return = 0: abnormal or lost; = 1: weak signal ; = 2: signal health.
 */
static inline uint8_t mavlink_msg_visual_tracking_get_track_quality(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  36);
}

/**
 * @brief Get field task_ready from visual_tracking message
 *
 * @return =0 task ready fail;=1 task is being ready;=2 task ready ok.
 */
static inline uint8_t mavlink_msg_visual_tracking_get_task_ready(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  37);
}

/**
 * @brief Get field size from visual_tracking message
 *
 * @return The size of the visual target (no unit).
 */
static inline float mavlink_msg_visual_tracking_get_size(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field width from visual_tracking message
 *
 * @return The width of the visual target (no unit).
 */
static inline float mavlink_msg_visual_tracking_get_width(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field height from visual_tracking message
 *
 * @return The height of the visual target (no unit).
 */
static inline float mavlink_msg_visual_tracking_get_height(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field x from visual_tracking message
 *
 * @return Upper left coordinate value x (normalized, no unit).
 */
static inline float mavlink_msg_visual_tracking_get_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field y from visual_tracking message
 *
 * @return Upper left coordinate value y (normalized, no unit).
 */
static inline float mavlink_msg_visual_tracking_get_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field center_x from visual_tracking message
 *
 * @return Center coordinate value x (normalized, no unit).
 */
static inline float mavlink_msg_visual_tracking_get_center_x(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field center_y from visual_tracking message
 *
 * @return Center coordinate value y (normalized, no unit).
 */
static inline float mavlink_msg_visual_tracking_get_center_y(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Decode a visual_tracking message into a struct
 *
 * @param msg The message to decode
 * @param visual_tracking C-struct to decode the message contents into
 */
static inline void mavlink_msg_visual_tracking_decode(const mavlink_message_t* msg, mavlink_visual_tracking_t* visual_tracking)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    visual_tracking->time_usec = mavlink_msg_visual_tracking_get_time_usec(msg);
    visual_tracking->size = mavlink_msg_visual_tracking_get_size(msg);
    visual_tracking->width = mavlink_msg_visual_tracking_get_width(msg);
    visual_tracking->height = mavlink_msg_visual_tracking_get_height(msg);
    visual_tracking->x = mavlink_msg_visual_tracking_get_x(msg);
    visual_tracking->y = mavlink_msg_visual_tracking_get_y(msg);
    visual_tracking->center_x = mavlink_msg_visual_tracking_get_center_x(msg);
    visual_tracking->center_y = mavlink_msg_visual_tracking_get_center_y(msg);
    visual_tracking->track_quality = mavlink_msg_visual_tracking_get_track_quality(msg);
    visual_tracking->task_ready = mavlink_msg_visual_tracking_get_task_ready(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_VISUAL_TRACKING_LEN? msg->len : MAVLINK_MSG_ID_VISUAL_TRACKING_LEN;
        memset(visual_tracking, 0, MAVLINK_MSG_ID_VISUAL_TRACKING_LEN);
    memcpy(visual_tracking, _MAV_PAYLOAD(msg), len);
#endif
}
