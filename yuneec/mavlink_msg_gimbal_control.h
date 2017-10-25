#pragma once
// MESSAGE GIMBAL_CONTROL PACKING

#define MAVLINK_MSG_ID_GIMBAL_CONTROL 5000

MAVPACKED(
typedef struct __mavlink_gimbal_control_t {
 int16_t quaternion[4]; /*< drone's quaternion, multiplied by 10000.*/
 int16_t hvel; /*< drone's horizontal velocity in cm/s unit.*/
 int16_t hacc; /*< drone's horizontal acceleration in cm/s/s unit.*/
 int16_t yaw_deg_desire; /*< yaw desired angle, drone send to gimbal,precise 0.1 degree, multiply 0.1 to use.*/
 uint16_t yaw_channel; /*< yaw channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.*/
 uint16_t pitch_channel; /*< pitch channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.*/
 uint16_t roll_channel; /*< roll channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.*/
 uint16_t yaw_mode; /*< yaw mode value, 410-820 is mode :follow point ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.*/
 uint16_t pitch_mode; /*< pitch mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.*/
 uint16_t roll_mode; /*< roll mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity changeable.*/
}) mavlink_gimbal_control_t;

#define MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN 26
#define MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN 26
#define MAVLINK_MSG_ID_5000_LEN 26
#define MAVLINK_MSG_ID_5000_MIN_LEN 26

#define MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC 252
#define MAVLINK_MSG_ID_5000_CRC 252

#define MAVLINK_MSG_GIMBAL_CONTROL_FIELD_QUATERNION_LEN 4

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL { \
    5000, \
    "GIMBAL_CONTROL", \
    10, \
    {  { "quaternion", NULL, MAVLINK_TYPE_INT16_T, 4, 0, offsetof(mavlink_gimbal_control_t, quaternion) }, \
         { "hvel", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_gimbal_control_t, hvel) }, \
         { "hacc", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_gimbal_control_t, hacc) }, \
         { "yaw_deg_desire", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_gimbal_control_t, yaw_deg_desire) }, \
         { "yaw_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_gimbal_control_t, yaw_channel) }, \
         { "pitch_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_gimbal_control_t, pitch_channel) }, \
         { "roll_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_gimbal_control_t, roll_channel) }, \
         { "yaw_mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_gimbal_control_t, yaw_mode) }, \
         { "pitch_mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_gimbal_control_t, pitch_mode) }, \
         { "roll_mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_gimbal_control_t, roll_mode) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_GIMBAL_CONTROL { \
    "GIMBAL_CONTROL", \
    10, \
    {  { "quaternion", NULL, MAVLINK_TYPE_INT16_T, 4, 0, offsetof(mavlink_gimbal_control_t, quaternion) }, \
         { "hvel", NULL, MAVLINK_TYPE_INT16_T, 0, 8, offsetof(mavlink_gimbal_control_t, hvel) }, \
         { "hacc", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_gimbal_control_t, hacc) }, \
         { "yaw_deg_desire", NULL, MAVLINK_TYPE_INT16_T, 0, 12, offsetof(mavlink_gimbal_control_t, yaw_deg_desire) }, \
         { "yaw_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_gimbal_control_t, yaw_channel) }, \
         { "pitch_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_gimbal_control_t, pitch_channel) }, \
         { "roll_channel", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_gimbal_control_t, roll_channel) }, \
         { "yaw_mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_gimbal_control_t, yaw_mode) }, \
         { "pitch_mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_gimbal_control_t, pitch_mode) }, \
         { "roll_mode", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_gimbal_control_t, roll_mode) }, \
         } \
}
#endif

/**
 * @brief Pack a gimbal_control message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param quaternion drone's quaternion, multiplied by 10000.
 * @param hvel drone's horizontal velocity in cm/s unit.
 * @param hacc drone's horizontal acceleration in cm/s/s unit.
 * @param yaw_deg_desire yaw desired angle, drone send to gimbal,precise 0.1 degree, multiply 0.1 to use.
 * @param yaw_channel yaw channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param pitch_channel pitch channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param roll_channel roll channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param yaw_mode yaw mode value, 410-820 is mode :follow point ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 * @param pitch_mode pitch mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 * @param roll_mode roll mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity changeable.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_control_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               const int16_t *quaternion, int16_t hvel, int16_t hacc, int16_t yaw_deg_desire, uint16_t yaw_channel, uint16_t pitch_channel, uint16_t roll_channel, uint16_t yaw_mode, uint16_t pitch_mode, uint16_t roll_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 8, hvel);
    _mav_put_int16_t(buf, 10, hacc);
    _mav_put_int16_t(buf, 12, yaw_deg_desire);
    _mav_put_uint16_t(buf, 14, yaw_channel);
    _mav_put_uint16_t(buf, 16, pitch_channel);
    _mav_put_uint16_t(buf, 18, roll_channel);
    _mav_put_uint16_t(buf, 20, yaw_mode);
    _mav_put_uint16_t(buf, 22, pitch_mode);
    _mav_put_uint16_t(buf, 24, roll_mode);
    _mav_put_int16_t_array(buf, 0, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN);
#else
    mavlink_gimbal_control_t packet;
    packet.hvel = hvel;
    packet.hacc = hacc;
    packet.yaw_deg_desire = yaw_deg_desire;
    packet.yaw_channel = yaw_channel;
    packet.pitch_channel = pitch_channel;
    packet.roll_channel = roll_channel;
    packet.yaw_mode = yaw_mode;
    packet.pitch_mode = pitch_mode;
    packet.roll_mode = roll_mode;
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(int16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CONTROL;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
}

/**
 * @brief Pack a gimbal_control message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param quaternion drone's quaternion, multiplied by 10000.
 * @param hvel drone's horizontal velocity in cm/s unit.
 * @param hacc drone's horizontal acceleration in cm/s/s unit.
 * @param yaw_deg_desire yaw desired angle, drone send to gimbal,precise 0.1 degree, multiply 0.1 to use.
 * @param yaw_channel yaw channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param pitch_channel pitch channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param roll_channel roll channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param yaw_mode yaw mode value, 410-820 is mode :follow point ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 * @param pitch_mode pitch mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 * @param roll_mode roll mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity changeable.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_gimbal_control_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   const int16_t *quaternion,int16_t hvel,int16_t hacc,int16_t yaw_deg_desire,uint16_t yaw_channel,uint16_t pitch_channel,uint16_t roll_channel,uint16_t yaw_mode,uint16_t pitch_mode,uint16_t roll_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 8, hvel);
    _mav_put_int16_t(buf, 10, hacc);
    _mav_put_int16_t(buf, 12, yaw_deg_desire);
    _mav_put_uint16_t(buf, 14, yaw_channel);
    _mav_put_uint16_t(buf, 16, pitch_channel);
    _mav_put_uint16_t(buf, 18, roll_channel);
    _mav_put_uint16_t(buf, 20, yaw_mode);
    _mav_put_uint16_t(buf, 22, pitch_mode);
    _mav_put_uint16_t(buf, 24, roll_mode);
    _mav_put_int16_t_array(buf, 0, quaternion, 4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN);
#else
    mavlink_gimbal_control_t packet;
    packet.hvel = hvel;
    packet.hacc = hacc;
    packet.yaw_deg_desire = yaw_deg_desire;
    packet.yaw_channel = yaw_channel;
    packet.pitch_channel = pitch_channel;
    packet.roll_channel = roll_channel;
    packet.yaw_mode = yaw_mode;
    packet.pitch_mode = pitch_mode;
    packet.roll_mode = roll_mode;
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(int16_t)*4);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_GIMBAL_CONTROL;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
}

/**
 * @brief Encode a gimbal_control struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_control_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_gimbal_control_t* gimbal_control)
{
    return mavlink_msg_gimbal_control_pack(system_id, component_id, msg, gimbal_control->quaternion, gimbal_control->hvel, gimbal_control->hacc, gimbal_control->yaw_deg_desire, gimbal_control->yaw_channel, gimbal_control->pitch_channel, gimbal_control->roll_channel, gimbal_control->yaw_mode, gimbal_control->pitch_mode, gimbal_control->roll_mode);
}

/**
 * @brief Encode a gimbal_control struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param gimbal_control C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_gimbal_control_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_gimbal_control_t* gimbal_control)
{
    return mavlink_msg_gimbal_control_pack_chan(system_id, component_id, chan, msg, gimbal_control->quaternion, gimbal_control->hvel, gimbal_control->hacc, gimbal_control->yaw_deg_desire, gimbal_control->yaw_channel, gimbal_control->pitch_channel, gimbal_control->roll_channel, gimbal_control->yaw_mode, gimbal_control->pitch_mode, gimbal_control->roll_mode);
}

/**
 * @brief Send a gimbal_control message
 * @param chan MAVLink channel to send the message
 *
 * @param quaternion drone's quaternion, multiplied by 10000.
 * @param hvel drone's horizontal velocity in cm/s unit.
 * @param hacc drone's horizontal acceleration in cm/s/s unit.
 * @param yaw_deg_desire yaw desired angle, drone send to gimbal,precise 0.1 degree, multiply 0.1 to use.
 * @param yaw_channel yaw channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param pitch_channel pitch channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param roll_channel roll channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 * @param yaw_mode yaw mode value, 410-820 is mode :follow point ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 * @param pitch_mode pitch mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 * @param roll_mode roll mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity changeable.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_gimbal_control_send(mavlink_channel_t chan, const int16_t *quaternion, int16_t hvel, int16_t hacc, int16_t yaw_deg_desire, uint16_t yaw_channel, uint16_t pitch_channel, uint16_t roll_channel, uint16_t yaw_mode, uint16_t pitch_mode, uint16_t roll_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN];
    _mav_put_int16_t(buf, 8, hvel);
    _mav_put_int16_t(buf, 10, hacc);
    _mav_put_int16_t(buf, 12, yaw_deg_desire);
    _mav_put_uint16_t(buf, 14, yaw_channel);
    _mav_put_uint16_t(buf, 16, pitch_channel);
    _mav_put_uint16_t(buf, 18, roll_channel);
    _mav_put_uint16_t(buf, 20, yaw_mode);
    _mav_put_uint16_t(buf, 22, pitch_mode);
    _mav_put_uint16_t(buf, 24, roll_mode);
    _mav_put_int16_t_array(buf, 0, quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL, buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
#else
    mavlink_gimbal_control_t packet;
    packet.hvel = hvel;
    packet.hacc = hacc;
    packet.yaw_deg_desire = yaw_deg_desire;
    packet.yaw_channel = yaw_channel;
    packet.pitch_channel = pitch_channel;
    packet.roll_channel = roll_channel;
    packet.yaw_mode = yaw_mode;
    packet.pitch_mode = pitch_mode;
    packet.roll_mode = roll_mode;
    mav_array_memcpy(packet.quaternion, quaternion, sizeof(int16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL, (const char *)&packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
#endif
}

/**
 * @brief Send a gimbal_control message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_gimbal_control_send_struct(mavlink_channel_t chan, const mavlink_gimbal_control_t* gimbal_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_control_send(chan, gimbal_control->quaternion, gimbal_control->hvel, gimbal_control->hacc, gimbal_control->yaw_deg_desire, gimbal_control->yaw_channel, gimbal_control->pitch_channel, gimbal_control->roll_channel, gimbal_control->yaw_mode, gimbal_control->pitch_mode, gimbal_control->roll_mode);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL, (const char *)gimbal_control, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
#endif
}

#if MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_gimbal_control_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  const int16_t *quaternion, int16_t hvel, int16_t hacc, int16_t yaw_deg_desire, uint16_t yaw_channel, uint16_t pitch_channel, uint16_t roll_channel, uint16_t yaw_mode, uint16_t pitch_mode, uint16_t roll_mode)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_int16_t(buf, 8, hvel);
    _mav_put_int16_t(buf, 10, hacc);
    _mav_put_int16_t(buf, 12, yaw_deg_desire);
    _mav_put_uint16_t(buf, 14, yaw_channel);
    _mav_put_uint16_t(buf, 16, pitch_channel);
    _mav_put_uint16_t(buf, 18, roll_channel);
    _mav_put_uint16_t(buf, 20, yaw_mode);
    _mav_put_uint16_t(buf, 22, pitch_mode);
    _mav_put_uint16_t(buf, 24, roll_mode);
    _mav_put_int16_t_array(buf, 0, quaternion, 4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL, buf, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
#else
    mavlink_gimbal_control_t *packet = (mavlink_gimbal_control_t *)msgbuf;
    packet->hvel = hvel;
    packet->hacc = hacc;
    packet->yaw_deg_desire = yaw_deg_desire;
    packet->yaw_channel = yaw_channel;
    packet->pitch_channel = pitch_channel;
    packet->roll_channel = roll_channel;
    packet->yaw_mode = yaw_mode;
    packet->pitch_mode = pitch_mode;
    packet->roll_mode = roll_mode;
    mav_array_memcpy(packet->quaternion, quaternion, sizeof(int16_t)*4);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_GIMBAL_CONTROL, (const char *)packet, MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN, MAVLINK_MSG_ID_GIMBAL_CONTROL_CRC);
#endif
}
#endif

#endif

// MESSAGE GIMBAL_CONTROL UNPACKING


/**
 * @brief Get field quaternion from gimbal_control message
 *
 * @return drone's quaternion, multiplied by 10000.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_quaternion(const mavlink_message_t* msg, int16_t *quaternion)
{
    return _MAV_RETURN_int16_t_array(msg, quaternion, 4,  0);
}

/**
 * @brief Get field hvel from gimbal_control message
 *
 * @return drone's horizontal velocity in cm/s unit.
 */
static inline int16_t mavlink_msg_gimbal_control_get_hvel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  8);
}

/**
 * @brief Get field hacc from gimbal_control message
 *
 * @return drone's horizontal acceleration in cm/s/s unit.
 */
static inline int16_t mavlink_msg_gimbal_control_get_hacc(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field yaw_deg_desire from gimbal_control message
 *
 * @return yaw desired angle, drone send to gimbal,precise 0.1 degree, multiply 0.1 to use.
 */
static inline int16_t mavlink_msg_gimbal_control_get_yaw_deg_desire(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  12);
}

/**
 * @brief Get field yaw_channel from gimbal_control message
 *
 * @return yaw channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_yaw_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field pitch_channel from gimbal_control message
 *
 * @return pitch channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_pitch_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field roll_channel from gimbal_control message
 *
 * @return roll channel value,value range 0-4096,follow point ahead mode is none;degree = -((channel_value-2048)*0.03dgree+45dgree); velocity=-(channel_value-2130)/41 or velocity=-(channel_value-1966)/41 there has a lsb deadline.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_roll_channel(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field yaw_mode from gimbal_control message
 *
 * @return yaw mode value, 410-820 is mode :follow point ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_yaw_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field pitch_mode from gimbal_control message
 *
 * @return pitch mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity  changeable.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_pitch_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field roll_mode from gimbal_control message
 *
 * @return roll mode value, 410-820 is mode :follow point  ahead;820-1229 is mode:follow point angle changeable, 1229-1638 is mode:follow point velocity  changeable,2048-2458 is mode:global angle changeable, 2867-3686 is mode: global velocity changeable.
 */
static inline uint16_t mavlink_msg_gimbal_control_get_roll_mode(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Decode a gimbal_control message into a struct
 *
 * @param msg The message to decode
 * @param gimbal_control C-struct to decode the message contents into
 */
static inline void mavlink_msg_gimbal_control_decode(const mavlink_message_t* msg, mavlink_gimbal_control_t* gimbal_control)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_gimbal_control_get_quaternion(msg, gimbal_control->quaternion);
    gimbal_control->hvel = mavlink_msg_gimbal_control_get_hvel(msg);
    gimbal_control->hacc = mavlink_msg_gimbal_control_get_hacc(msg);
    gimbal_control->yaw_deg_desire = mavlink_msg_gimbal_control_get_yaw_deg_desire(msg);
    gimbal_control->yaw_channel = mavlink_msg_gimbal_control_get_yaw_channel(msg);
    gimbal_control->pitch_channel = mavlink_msg_gimbal_control_get_pitch_channel(msg);
    gimbal_control->roll_channel = mavlink_msg_gimbal_control_get_roll_channel(msg);
    gimbal_control->yaw_mode = mavlink_msg_gimbal_control_get_yaw_mode(msg);
    gimbal_control->pitch_mode = mavlink_msg_gimbal_control_get_pitch_mode(msg);
    gimbal_control->roll_mode = mavlink_msg_gimbal_control_get_roll_mode(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN? msg->len : MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN;
        memset(gimbal_control, 0, MAVLINK_MSG_ID_GIMBAL_CONTROL_LEN);
    memcpy(gimbal_control, _MAV_PAYLOAD(msg), len);
#endif
}
