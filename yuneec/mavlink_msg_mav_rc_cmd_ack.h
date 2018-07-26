#pragma once
// MESSAGE MAV_RC_CMD_ACK PACKING

#define MAVLINK_MSG_ID_MAV_RC_CMD_ACK 7051

MAVPACKED(
typedef struct __mavlink_mav_rc_cmd_ack_t {
 uint8_t command; /*<  */
 uint8_t code; /*<  */
 uint8_t params[253]; /*<  */
}) mavlink_mav_rc_cmd_ack_t;

#define MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN 255
#define MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN 255
#define MAVLINK_MSG_ID_7051_LEN 255
#define MAVLINK_MSG_ID_7051_MIN_LEN 255

#define MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC 232
#define MAVLINK_MSG_ID_7051_CRC 232

#define MAVLINK_MSG_MAV_RC_CMD_ACK_FIELD_PARAMS_LEN 253

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_MAV_RC_CMD_ACK { \
    7051, \
    "MAV_RC_CMD_ACK", \
    3, \
    {  { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mav_rc_cmd_ack_t, command) }, \
         { "code", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_mav_rc_cmd_ack_t, code) }, \
         { "params", NULL, MAVLINK_TYPE_UINT8_T, 253, 2, offsetof(mavlink_mav_rc_cmd_ack_t, params) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_MAV_RC_CMD_ACK { \
    "MAV_RC_CMD_ACK", \
    3, \
    {  { "command", NULL, MAVLINK_TYPE_UINT8_T, 0, 0, offsetof(mavlink_mav_rc_cmd_ack_t, command) }, \
         { "code", NULL, MAVLINK_TYPE_UINT8_T, 0, 1, offsetof(mavlink_mav_rc_cmd_ack_t, code) }, \
         { "params", NULL, MAVLINK_TYPE_UINT8_T, 253, 2, offsetof(mavlink_mav_rc_cmd_ack_t, params) }, \
         } \
}
#endif

/**
 * @brief Pack a mav_rc_cmd_ack message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param command  
 * @param code  
 * @param params  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mav_rc_cmd_ack_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint8_t command, uint8_t code, const uint8_t *params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN];
    _mav_put_uint8_t(buf, 0, command);
    _mav_put_uint8_t(buf, 1, code);
    _mav_put_uint8_t_array(buf, 2, params, 253);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN);
#else
    mavlink_mav_rc_cmd_ack_t packet;
    packet.command = command;
    packet.code = code;
    mav_array_memcpy(packet.params, params, sizeof(uint8_t)*253);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAV_RC_CMD_ACK;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
}

/**
 * @brief Pack a mav_rc_cmd_ack message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param command  
 * @param code  
 * @param params  
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_mav_rc_cmd_ack_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint8_t command,uint8_t code,const uint8_t *params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN];
    _mav_put_uint8_t(buf, 0, command);
    _mav_put_uint8_t(buf, 1, code);
    _mav_put_uint8_t_array(buf, 2, params, 253);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN);
#else
    mavlink_mav_rc_cmd_ack_t packet;
    packet.command = command;
    packet.code = code;
    mav_array_memcpy(packet.params, params, sizeof(uint8_t)*253);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_MAV_RC_CMD_ACK;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
}

/**
 * @brief Encode a mav_rc_cmd_ack struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param mav_rc_cmd_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mav_rc_cmd_ack_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_mav_rc_cmd_ack_t* mav_rc_cmd_ack)
{
    return mavlink_msg_mav_rc_cmd_ack_pack(system_id, component_id, msg, mav_rc_cmd_ack->command, mav_rc_cmd_ack->code, mav_rc_cmd_ack->params);
}

/**
 * @brief Encode a mav_rc_cmd_ack struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mav_rc_cmd_ack C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_mav_rc_cmd_ack_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_mav_rc_cmd_ack_t* mav_rc_cmd_ack)
{
    return mavlink_msg_mav_rc_cmd_ack_pack_chan(system_id, component_id, chan, msg, mav_rc_cmd_ack->command, mav_rc_cmd_ack->code, mav_rc_cmd_ack->params);
}

/**
 * @brief Send a mav_rc_cmd_ack message
 * @param chan MAVLink channel to send the message
 *
 * @param command  
 * @param code  
 * @param params  
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_mav_rc_cmd_ack_send(mavlink_channel_t chan, uint8_t command, uint8_t code, const uint8_t *params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN];
    _mav_put_uint8_t(buf, 0, command);
    _mav_put_uint8_t(buf, 1, code);
    _mav_put_uint8_t_array(buf, 2, params, 253);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAV_RC_CMD_ACK, buf, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
#else
    mavlink_mav_rc_cmd_ack_t packet;
    packet.command = command;
    packet.code = code;
    mav_array_memcpy(packet.params, params, sizeof(uint8_t)*253);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAV_RC_CMD_ACK, (const char *)&packet, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
#endif
}

/**
 * @brief Send a mav_rc_cmd_ack message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_mav_rc_cmd_ack_send_struct(mavlink_channel_t chan, const mavlink_mav_rc_cmd_ack_t* mav_rc_cmd_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_mav_rc_cmd_ack_send(chan, mav_rc_cmd_ack->command, mav_rc_cmd_ack->code, mav_rc_cmd_ack->params);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAV_RC_CMD_ACK, (const char *)mav_rc_cmd_ack, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
#endif
}

#if MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_mav_rc_cmd_ack_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint8_t command, uint8_t code, const uint8_t *params)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint8_t(buf, 0, command);
    _mav_put_uint8_t(buf, 1, code);
    _mav_put_uint8_t_array(buf, 2, params, 253);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAV_RC_CMD_ACK, buf, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
#else
    mavlink_mav_rc_cmd_ack_t *packet = (mavlink_mav_rc_cmd_ack_t *)msgbuf;
    packet->command = command;
    packet->code = code;
    mav_array_memcpy(packet->params, params, sizeof(uint8_t)*253);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_MAV_RC_CMD_ACK, (const char *)packet, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_CRC);
#endif
}
#endif

#endif

// MESSAGE MAV_RC_CMD_ACK UNPACKING


/**
 * @brief Get field command from mav_rc_cmd_ack message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_mav_rc_cmd_ack_get_command(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  0);
}

/**
 * @brief Get field code from mav_rc_cmd_ack message
 *
 * @return  
 */
static inline uint8_t mavlink_msg_mav_rc_cmd_ack_get_code(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  1);
}

/**
 * @brief Get field params from mav_rc_cmd_ack message
 *
 * @return  
 */
static inline uint16_t mavlink_msg_mav_rc_cmd_ack_get_params(const mavlink_message_t* msg, uint8_t *params)
{
    return _MAV_RETURN_uint8_t_array(msg, params, 253,  2);
}

/**
 * @brief Decode a mav_rc_cmd_ack message into a struct
 *
 * @param msg The message to decode
 * @param mav_rc_cmd_ack C-struct to decode the message contents into
 */
static inline void mavlink_msg_mav_rc_cmd_ack_decode(const mavlink_message_t* msg, mavlink_mav_rc_cmd_ack_t* mav_rc_cmd_ack)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mav_rc_cmd_ack->command = mavlink_msg_mav_rc_cmd_ack_get_command(msg);
    mav_rc_cmd_ack->code = mavlink_msg_mav_rc_cmd_ack_get_code(msg);
    mavlink_msg_mav_rc_cmd_ack_get_params(msg, mav_rc_cmd_ack->params);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN? msg->len : MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN;
        memset(mav_rc_cmd_ack, 0, MAVLINK_MSG_ID_MAV_RC_CMD_ACK_LEN);
    memcpy(mav_rc_cmd_ack, _MAV_PAYLOAD(msg), len);
#endif
}
