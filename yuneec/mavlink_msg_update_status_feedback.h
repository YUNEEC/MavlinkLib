#pragma once
// MESSAGE UPDATE_STATUS_FEEDBACK PACKING

#define MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK 6000

MAVPACKED(
typedef struct __mavlink_update_status_feedback_t {
 uint8_t target_system; /*< System ID*/
 uint8_t target_component; /*< Component ID*/
 uint8_t module_name; /*< update module name, 1 is autopilot, 2 is gimbal, 3 is camera, 4 is remote controller, 5 is opticalflow, 6 is OTA bundle firmware*/
 uint8_t update_status; /*< update status, 0 is ready, 1 is in progress, 2 is finished, 3 is failed*/
 uint8_t progress; /*< update progress(percentage), value range 0-100, the real value is progress*0.01f*/
}) mavlink_update_status_feedback_t;

#define MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN 5
#define MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN 5
#define MAVLINK_MSG_ID_6000_LEN 5
#define MAVLINK_MSG_ID_6000_MIN_LEN 5

#define MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC 18
#define MAVLINK_MSG_ID_6000_CRC 18



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_UPDATE_STATUS_FEEDBACK { \
    6000, \
    "UPDATE_STATUS_FEEDBACK", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_update_status_feedback_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_update_status_feedback_t, target_component) }, \
         { "module_name", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_update_status_feedback_t, module_name) }, \
         { "update_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_update_status_feedback_t, update_status) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_update_status_feedback_t, progress) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_UPDATE_STATUS_FEEDBACK { \
    "UPDATE_STATUS_FEEDBACK", \
    5, \
    {  { "target_system", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_update_status_feedback_t, target_system) }, \
         { "target_component", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_update_status_feedback_t, target_component) }, \
         { "module_name", NULL, MAVLINK_TYPE_UINT8_T, 0, 2, offsetof(mavlink_update_status_feedback_t, module_name) }, \
         { "update_status", NULL, MAVLINK_TYPE_UINT8_T, 0, 3, offsetof(mavlink_update_status_feedback_t, update_status) }, \
         { "progress", NULL, MAVLINK_TYPE_UINT8_T, 0, 4, offsetof(mavlink_update_status_feedback_t, progress) }, \
         } \
}
#endif

/**
 * @brief Pack a update_status_feedback message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param module_name update module name, 1 is autopilot, 2 is gimbal, 3 is camera, 4 is remote controller, 5 is opticalflow, 6 is OTA bundle firmware
 * @param update_status update status, 0 is ready, 1 is in progress, 2 is finished, 3 is failed
 * @param progress update progress(percentage), value range 0-100, the real value is progress*0.01f
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_update_status_feedback_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t target_system, uint8_t target_component, uint8_t module_name, uint8_t update_status, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, module_name);
    _mav_put_uint8_t(buf, 3, update_status);
    _mav_put_uint8_t(buf, 4, progress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN);
#else
    mavlink_update_status_feedback_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.module_name = module_name;
    packet.update_status = update_status;
    packet.progress = progress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
}

/**
 * @brief Pack a update_status_feedback message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param target_system System ID
 * @param target_component Component ID
 * @param module_name update module name, 1 is autopilot, 2 is gimbal, 3 is camera, 4 is remote controller, 5 is opticalflow, 6 is OTA bundle firmware
 * @param update_status update status, 0 is ready, 1 is in progress, 2 is finished, 3 is failed
 * @param progress update progress(percentage), value range 0-100, the real value is progress*0.01f
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_update_status_feedback_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t target_system,uint8_t target_component,uint8_t module_name,uint8_t update_status,uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, module_name);
    _mav_put_uint8_t(buf, 3, update_status);
    _mav_put_uint8_t(buf, 4, progress);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN);
#else
    mavlink_update_status_feedback_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.module_name = module_name;
    packet.update_status = update_status;
    packet.progress = progress;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
}

/**
 * @brief Encode a update_status_feedback struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param update_status_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_update_status_feedback_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_update_status_feedback_t* update_status_feedback)
{
    return mavlink_msg_update_status_feedback_pack(system_id, component_id, msg, update_status_feedback->target_system, update_status_feedback->target_component, update_status_feedback->module_name, update_status_feedback->update_status, update_status_feedback->progress);
}

/**
 * @brief Encode a update_status_feedback struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param update_status_feedback C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_update_status_feedback_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_update_status_feedback_t* update_status_feedback)
{
    return mavlink_msg_update_status_feedback_pack_chan(system_id, component_id, chan, msg, update_status_feedback->target_system, update_status_feedback->target_component, update_status_feedback->module_name, update_status_feedback->update_status, update_status_feedback->progress);
}

/**
 * @brief Send a update_status_feedback message
 * @param chan MAVLink channel to send the message
 *
 * @param target_system System ID
 * @param target_component Component ID
 * @param module_name update module name, 1 is autopilot, 2 is gimbal, 3 is camera, 4 is remote controller, 5 is opticalflow, 6 is OTA bundle firmware
 * @param update_status update status, 0 is ready, 1 is in progress, 2 is finished, 3 is failed
 * @param progress update progress(percentage), value range 0-100, the real value is progress*0.01f
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_update_status_feedback_send(mavlink_channel_t chan, uint8_t target_system, uint8_t target_component, uint8_t module_name, uint8_t update_status, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN];
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, module_name);
    _mav_put_uint8_t(buf, 3, update_status);
    _mav_put_uint8_t(buf, 4, progress);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK, buf, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
#else
    mavlink_update_status_feedback_t packet;
    packet.target_system = target_system;
    packet.target_component = target_component;
    packet.module_name = module_name;
    packet.update_status = update_status;
    packet.progress = progress;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK, (const char *)&packet, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
#endif
}

/**
 * @brief Send a update_status_feedback message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_update_status_feedback_send_struct(mavlink_channel_t chan, const mavlink_update_status_feedback_t* update_status_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_update_status_feedback_send(chan, update_status_feedback->target_system, update_status_feedback->target_component, update_status_feedback->module_name, update_status_feedback->update_status, update_status_feedback->progress);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK, (const char *)update_status_feedback, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_update_status_feedback_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t target_system, uint8_t target_component, uint8_t module_name, uint8_t update_status, uint8_t progress)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, target_system);
    _mav_put_uint8_t(buf, 1, target_component);
    _mav_put_uint8_t(buf, 2, module_name);
    _mav_put_uint8_t(buf, 3, update_status);
    _mav_put_uint8_t(buf, 4, progress);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK, buf, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
#else
    mavlink_update_status_feedback_t *packet = (mavlink_update_status_feedback_t *)msgbuf;
    packet->target_system = target_system;
    packet->target_component = target_component;
    packet->module_name = module_name;
    packet->update_status = update_status;
    packet->progress = progress;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK, (const char *)packet, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_MIN_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_CRC);
#endif
}
#endif

#endif

// MESSAGE UPDATE_STATUS_FEEDBACK UNPACKING


/**
 * @brief Get field target_system from update_status_feedback message
 *
 * @return System ID
 */
static inline uint8_t mavlink_msg_update_status_feedback_get_target_system(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field target_component from update_status_feedback message
 *
 * @return Component ID
 */
static inline uint8_t mavlink_msg_update_status_feedback_get_target_component(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field module_name from update_status_feedback message
 *
 * @return update module name, 1 is autopilot, 2 is gimbal, 3 is camera, 4 is remote controller, 5 is opticalflow, 6 is OTA bundle firmware
 */
static inline uint8_t mavlink_msg_update_status_feedback_get_module_name(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  2);
}

/**
 * @brief Get field update_status from update_status_feedback message
 *
 * @return update status, 0 is ready, 1 is in progress, 2 is finished, 3 is failed
 */
static inline uint8_t mavlink_msg_update_status_feedback_get_update_status(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  3);
}

/**
 * @brief Get field progress from update_status_feedback message
 *
 * @return update progress(percentage), value range 0-100, the real value is progress*0.01f
 */
static inline uint8_t mavlink_msg_update_status_feedback_get_progress(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  4);
}

/**
 * @brief Decode a update_status_feedback message into a struct
 *
 * @param msg The message to decode
 * @param update_status_feedback C-struct to decode the message contents into
 */
static inline void mavlink_msg_update_status_feedback_decode(const mavlink_message_t* msg, mavlink_update_status_feedback_t* update_status_feedback)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    update_status_feedback->target_system = mavlink_msg_update_status_feedback_get_target_system(msg);
    update_status_feedback->target_component = mavlink_msg_update_status_feedback_get_target_component(msg);
    update_status_feedback->module_name = mavlink_msg_update_status_feedback_get_module_name(msg);
    update_status_feedback->update_status = mavlink_msg_update_status_feedback_get_update_status(msg);
    update_status_feedback->progress = mavlink_msg_update_status_feedback_get_progress(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN? msg->len : MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN;
        memset(update_status_feedback, 0, MAVLINK_MSG_ID_UPDATE_STATUS_FEEDBACK_LEN);
    memcpy(update_status_feedback, _MAV_PAYLOAD(msg), len);
#endif
}
