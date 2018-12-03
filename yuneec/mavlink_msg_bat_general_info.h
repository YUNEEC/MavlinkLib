#pragma once
// MESSAGE BAT_GENERAL_INFO PACKING

#define MAVLINK_MSG_ID_BAT_GENERAL_INFO 9002

MAVPACKED(
typedef struct __mavlink_bat_general_info_t {
 uint32_t alert; /*<  the warning items in discharge mode.*/
 uint16_t capacity; /*< [mAh] the full battery capacity in units mAh, it will reduce with usage.*/
 uint16_t remCap; /*< [mAh] the predicted remaining battery capacity in units mAh.*/
 uint16_t remSOC; /*<  the current capacity in percentage of capacity.*/
 int16_t temperature; /*< [cdegC] the temperature of battery in units Centigrade.*/
 uint16_t packVolt; /*< [mV] the pack voltage in units mV.*/
 uint16_t allVolt; /*< [mV] sum of each cell voltage in units mV.*/
 uint16_t cellnVolt[12]; /*< [mV] each cell voltage in units mV.*/
 uint16_t health; /*<  the State-of-Health information of the battery in percentage of design capacity and design energy.*/
 uint16_t cycle; /*<  the charge-discharge cycle number.*/
 uint16_t maxVn[12]; /*< [mV] the maximum voltage of each cell has ever been experienced in units mV.*/
 uint16_t minVn[12]; /*< [mV]  the minimum voltage of each cell has ever been experienced in units mV.*/
 int16_t maxChargeCurrent; /*< [mA] the max charging current of the battery has ever been experienced in units 10mA.*/
 int16_t maxDishargeCurrent; /*< [mA] the max discharging current of the battery has ever been experienced in units 10mA.*/
 uint16_t numOfOverCharge; /*<  the overcharge times of the battery.*/
 uint8_t onOff; /*<  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.*/
 int8_t maxTem; /*< [cdegC] the max temperature of the battery has ever been experienced in units Centigrade.*/
 uint8_t minTem; /*< [cdegC] the minimum temperature of the battery has ever been experienced in units Centigrade.*/
}) mavlink_bat_general_info_t;

#define MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN 101
#define MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN 101
#define MAVLINK_MSG_ID_9002_LEN 101
#define MAVLINK_MSG_ID_9002_MIN_LEN 101

#define MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC 160
#define MAVLINK_MSG_ID_9002_CRC 160

#define MAVLINK_MSG_BAT_GENERAL_INFO_FIELD_CELLNVOLT_LEN 12
#define MAVLINK_MSG_BAT_GENERAL_INFO_FIELD_MAXVN_LEN 12
#define MAVLINK_MSG_BAT_GENERAL_INFO_FIELD_MINVN_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_BAT_GENERAL_INFO { \
    9002, \
    "BAT_GENERAL_INFO", \
    18, \
    {  { "capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bat_general_info_t, capacity) }, \
         { "remCap", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bat_general_info_t, remCap) }, \
         { "remSOC", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_bat_general_info_t, remSOC) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_bat_general_info_t, temperature) }, \
         { "packVolt", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_bat_general_info_t, packVolt) }, \
         { "allVolt", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_bat_general_info_t, allVolt) }, \
         { "cellnVolt", NULL, MAVLINK_TYPE_UINT16_T, 12, 16, offsetof(mavlink_bat_general_info_t, cellnVolt) }, \
         { "health", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_bat_general_info_t, health) }, \
         { "alert", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_bat_general_info_t, alert) }, \
         { "onOff", NULL, MAVLINK_TYPE_UINT8_T, 0, 98, offsetof(mavlink_bat_general_info_t, onOff) }, \
         { "cycle", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_bat_general_info_t, cycle) }, \
         { "maxVn", NULL, MAVLINK_TYPE_UINT16_T, 12, 44, offsetof(mavlink_bat_general_info_t, maxVn) }, \
         { "minVn", NULL, MAVLINK_TYPE_UINT16_T, 12, 68, offsetof(mavlink_bat_general_info_t, minVn) }, \
         { "maxTem", NULL, MAVLINK_TYPE_INT8_T, 0, 99, offsetof(mavlink_bat_general_info_t, maxTem) }, \
         { "minTem", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_bat_general_info_t, minTem) }, \
         { "maxChargeCurrent", NULL, MAVLINK_TYPE_INT16_T, 0, 92, offsetof(mavlink_bat_general_info_t, maxChargeCurrent) }, \
         { "maxDishargeCurrent", NULL, MAVLINK_TYPE_INT16_T, 0, 94, offsetof(mavlink_bat_general_info_t, maxDishargeCurrent) }, \
         { "numOfOverCharge", NULL, MAVLINK_TYPE_UINT16_T, 0, 96, offsetof(mavlink_bat_general_info_t, numOfOverCharge) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_BAT_GENERAL_INFO { \
    "BAT_GENERAL_INFO", \
    18, \
    {  { "capacity", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_bat_general_info_t, capacity) }, \
         { "remCap", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_bat_general_info_t, remCap) }, \
         { "remSOC", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_bat_general_info_t, remSOC) }, \
         { "temperature", NULL, MAVLINK_TYPE_INT16_T, 0, 10, offsetof(mavlink_bat_general_info_t, temperature) }, \
         { "packVolt", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_bat_general_info_t, packVolt) }, \
         { "allVolt", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_bat_general_info_t, allVolt) }, \
         { "cellnVolt", NULL, MAVLINK_TYPE_UINT16_T, 12, 16, offsetof(mavlink_bat_general_info_t, cellnVolt) }, \
         { "health", NULL, MAVLINK_TYPE_UINT16_T, 0, 40, offsetof(mavlink_bat_general_info_t, health) }, \
         { "alert", NULL, MAVLINK_TYPE_UINT32_T, 0, 0, offsetof(mavlink_bat_general_info_t, alert) }, \
         { "onOff", NULL, MAVLINK_TYPE_UINT8_T, 0, 98, offsetof(mavlink_bat_general_info_t, onOff) }, \
         { "cycle", NULL, MAVLINK_TYPE_UINT16_T, 0, 42, offsetof(mavlink_bat_general_info_t, cycle) }, \
         { "maxVn", NULL, MAVLINK_TYPE_UINT16_T, 12, 44, offsetof(mavlink_bat_general_info_t, maxVn) }, \
         { "minVn", NULL, MAVLINK_TYPE_UINT16_T, 12, 68, offsetof(mavlink_bat_general_info_t, minVn) }, \
         { "maxTem", NULL, MAVLINK_TYPE_INT8_T, 0, 99, offsetof(mavlink_bat_general_info_t, maxTem) }, \
         { "minTem", NULL, MAVLINK_TYPE_UINT8_T, 0, 100, offsetof(mavlink_bat_general_info_t, minTem) }, \
         { "maxChargeCurrent", NULL, MAVLINK_TYPE_INT16_T, 0, 92, offsetof(mavlink_bat_general_info_t, maxChargeCurrent) }, \
         { "maxDishargeCurrent", NULL, MAVLINK_TYPE_INT16_T, 0, 94, offsetof(mavlink_bat_general_info_t, maxDishargeCurrent) }, \
         { "numOfOverCharge", NULL, MAVLINK_TYPE_UINT16_T, 0, 96, offsetof(mavlink_bat_general_info_t, numOfOverCharge) }, \
         } \
}
#endif

/**
 * @brief Pack a bat_general_info message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param capacity [mAh] the full battery capacity in units mAh, it will reduce with usage.
 * @param remCap [mAh] the predicted remaining battery capacity in units mAh.
 * @param remSOC  the current capacity in percentage of capacity.
 * @param temperature [cdegC] the temperature of battery in units Centigrade.
 * @param packVolt [mV] the pack voltage in units mV.
 * @param allVolt [mV] sum of each cell voltage in units mV.
 * @param cellnVolt [mV] each cell voltage in units mV.
 * @param health  the State-of-Health information of the battery in percentage of design capacity and design energy.
 * @param alert  the warning items in discharge mode.
 * @param onOff  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 * @param cycle  the charge-discharge cycle number.
 * @param maxVn [mV] the maximum voltage of each cell has ever been experienced in units mV.
 * @param minVn [mV]  the minimum voltage of each cell has ever been experienced in units mV.
 * @param maxTem [cdegC] the max temperature of the battery has ever been experienced in units Centigrade.
 * @param minTem [cdegC] the minimum temperature of the battery has ever been experienced in units Centigrade.
 * @param maxChargeCurrent [mA] the max charging current of the battery has ever been experienced in units 10mA.
 * @param maxDishargeCurrent [mA] the max discharging current of the battery has ever been experienced in units 10mA.
 * @param numOfOverCharge  the overcharge times of the battery.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_general_info_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t capacity, uint16_t remCap, uint16_t remSOC, int16_t temperature, uint16_t packVolt, uint16_t allVolt, const uint16_t *cellnVolt, uint16_t health, uint32_t alert, uint8_t onOff, uint16_t cycle, const uint16_t *maxVn, const uint16_t *minVn, int8_t maxTem, uint8_t minTem, int16_t maxChargeCurrent, int16_t maxDishargeCurrent, uint16_t numOfOverCharge)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN];
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, capacity);
    _mav_put_uint16_t(buf, 6, remCap);
    _mav_put_uint16_t(buf, 8, remSOC);
    _mav_put_int16_t(buf, 10, temperature);
    _mav_put_uint16_t(buf, 12, packVolt);
    _mav_put_uint16_t(buf, 14, allVolt);
    _mav_put_uint16_t(buf, 40, health);
    _mav_put_uint16_t(buf, 42, cycle);
    _mav_put_int16_t(buf, 92, maxChargeCurrent);
    _mav_put_int16_t(buf, 94, maxDishargeCurrent);
    _mav_put_uint16_t(buf, 96, numOfOverCharge);
    _mav_put_uint8_t(buf, 98, onOff);
    _mav_put_int8_t(buf, 99, maxTem);
    _mav_put_uint8_t(buf, 100, minTem);
    _mav_put_uint16_t_array(buf, 16, cellnVolt, 12);
    _mav_put_uint16_t_array(buf, 44, maxVn, 12);
    _mav_put_uint16_t_array(buf, 68, minVn, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN);
#else
    mavlink_bat_general_info_t packet;
    packet.alert = alert;
    packet.capacity = capacity;
    packet.remCap = remCap;
    packet.remSOC = remSOC;
    packet.temperature = temperature;
    packet.packVolt = packVolt;
    packet.allVolt = allVolt;
    packet.health = health;
    packet.cycle = cycle;
    packet.maxChargeCurrent = maxChargeCurrent;
    packet.maxDishargeCurrent = maxDishargeCurrent;
    packet.numOfOverCharge = numOfOverCharge;
    packet.onOff = onOff;
    packet.maxTem = maxTem;
    packet.minTem = minTem;
    mav_array_memcpy(packet.cellnVolt, cellnVolt, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.maxVn, maxVn, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.minVn, minVn, sizeof(uint16_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_GENERAL_INFO;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
}

/**
 * @brief Pack a bat_general_info message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param capacity [mAh] the full battery capacity in units mAh, it will reduce with usage.
 * @param remCap [mAh] the predicted remaining battery capacity in units mAh.
 * @param remSOC  the current capacity in percentage of capacity.
 * @param temperature [cdegC] the temperature of battery in units Centigrade.
 * @param packVolt [mV] the pack voltage in units mV.
 * @param allVolt [mV] sum of each cell voltage in units mV.
 * @param cellnVolt [mV] each cell voltage in units mV.
 * @param health  the State-of-Health information of the battery in percentage of design capacity and design energy.
 * @param alert  the warning items in discharge mode.
 * @param onOff  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 * @param cycle  the charge-discharge cycle number.
 * @param maxVn [mV] the maximum voltage of each cell has ever been experienced in units mV.
 * @param minVn [mV]  the minimum voltage of each cell has ever been experienced in units mV.
 * @param maxTem [cdegC] the max temperature of the battery has ever been experienced in units Centigrade.
 * @param minTem [cdegC] the minimum temperature of the battery has ever been experienced in units Centigrade.
 * @param maxChargeCurrent [mA] the max charging current of the battery has ever been experienced in units 10mA.
 * @param maxDishargeCurrent [mA] the max discharging current of the battery has ever been experienced in units 10mA.
 * @param numOfOverCharge  the overcharge times of the battery.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_bat_general_info_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t capacity,uint16_t remCap,uint16_t remSOC,int16_t temperature,uint16_t packVolt,uint16_t allVolt,const uint16_t *cellnVolt,uint16_t health,uint32_t alert,uint8_t onOff,uint16_t cycle,const uint16_t *maxVn,const uint16_t *minVn,int8_t maxTem,uint8_t minTem,int16_t maxChargeCurrent,int16_t maxDishargeCurrent,uint16_t numOfOverCharge)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN];
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, capacity);
    _mav_put_uint16_t(buf, 6, remCap);
    _mav_put_uint16_t(buf, 8, remSOC);
    _mav_put_int16_t(buf, 10, temperature);
    _mav_put_uint16_t(buf, 12, packVolt);
    _mav_put_uint16_t(buf, 14, allVolt);
    _mav_put_uint16_t(buf, 40, health);
    _mav_put_uint16_t(buf, 42, cycle);
    _mav_put_int16_t(buf, 92, maxChargeCurrent);
    _mav_put_int16_t(buf, 94, maxDishargeCurrent);
    _mav_put_uint16_t(buf, 96, numOfOverCharge);
    _mav_put_uint8_t(buf, 98, onOff);
    _mav_put_int8_t(buf, 99, maxTem);
    _mav_put_uint8_t(buf, 100, minTem);
    _mav_put_uint16_t_array(buf, 16, cellnVolt, 12);
    _mav_put_uint16_t_array(buf, 44, maxVn, 12);
    _mav_put_uint16_t_array(buf, 68, minVn, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN);
#else
    mavlink_bat_general_info_t packet;
    packet.alert = alert;
    packet.capacity = capacity;
    packet.remCap = remCap;
    packet.remSOC = remSOC;
    packet.temperature = temperature;
    packet.packVolt = packVolt;
    packet.allVolt = allVolt;
    packet.health = health;
    packet.cycle = cycle;
    packet.maxChargeCurrent = maxChargeCurrent;
    packet.maxDishargeCurrent = maxDishargeCurrent;
    packet.numOfOverCharge = numOfOverCharge;
    packet.onOff = onOff;
    packet.maxTem = maxTem;
    packet.minTem = minTem;
    mav_array_memcpy(packet.cellnVolt, cellnVolt, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.maxVn, maxVn, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.minVn, minVn, sizeof(uint16_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_BAT_GENERAL_INFO;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
}

/**
 * @brief Encode a bat_general_info struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param bat_general_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_general_info_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_bat_general_info_t* bat_general_info)
{
    return mavlink_msg_bat_general_info_pack(system_id, component_id, msg, bat_general_info->capacity, bat_general_info->remCap, bat_general_info->remSOC, bat_general_info->temperature, bat_general_info->packVolt, bat_general_info->allVolt, bat_general_info->cellnVolt, bat_general_info->health, bat_general_info->alert, bat_general_info->onOff, bat_general_info->cycle, bat_general_info->maxVn, bat_general_info->minVn, bat_general_info->maxTem, bat_general_info->minTem, bat_general_info->maxChargeCurrent, bat_general_info->maxDishargeCurrent, bat_general_info->numOfOverCharge);
}

/**
 * @brief Encode a bat_general_info struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param bat_general_info C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_bat_general_info_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_bat_general_info_t* bat_general_info)
{
    return mavlink_msg_bat_general_info_pack_chan(system_id, component_id, chan, msg, bat_general_info->capacity, bat_general_info->remCap, bat_general_info->remSOC, bat_general_info->temperature, bat_general_info->packVolt, bat_general_info->allVolt, bat_general_info->cellnVolt, bat_general_info->health, bat_general_info->alert, bat_general_info->onOff, bat_general_info->cycle, bat_general_info->maxVn, bat_general_info->minVn, bat_general_info->maxTem, bat_general_info->minTem, bat_general_info->maxChargeCurrent, bat_general_info->maxDishargeCurrent, bat_general_info->numOfOverCharge);
}

/**
 * @brief Send a bat_general_info message
 * @param chan MAVLink channel to send the message
 *
 * @param capacity [mAh] the full battery capacity in units mAh, it will reduce with usage.
 * @param remCap [mAh] the predicted remaining battery capacity in units mAh.
 * @param remSOC  the current capacity in percentage of capacity.
 * @param temperature [cdegC] the temperature of battery in units Centigrade.
 * @param packVolt [mV] the pack voltage in units mV.
 * @param allVolt [mV] sum of each cell voltage in units mV.
 * @param cellnVolt [mV] each cell voltage in units mV.
 * @param health  the State-of-Health information of the battery in percentage of design capacity and design energy.
 * @param alert  the warning items in discharge mode.
 * @param onOff  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 * @param cycle  the charge-discharge cycle number.
 * @param maxVn [mV] the maximum voltage of each cell has ever been experienced in units mV.
 * @param minVn [mV]  the minimum voltage of each cell has ever been experienced in units mV.
 * @param maxTem [cdegC] the max temperature of the battery has ever been experienced in units Centigrade.
 * @param minTem [cdegC] the minimum temperature of the battery has ever been experienced in units Centigrade.
 * @param maxChargeCurrent [mA] the max charging current of the battery has ever been experienced in units 10mA.
 * @param maxDishargeCurrent [mA] the max discharging current of the battery has ever been experienced in units 10mA.
 * @param numOfOverCharge  the overcharge times of the battery.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_bat_general_info_send(mavlink_channel_t chan, uint16_t capacity, uint16_t remCap, uint16_t remSOC, int16_t temperature, uint16_t packVolt, uint16_t allVolt, const uint16_t *cellnVolt, uint16_t health, uint32_t alert, uint8_t onOff, uint16_t cycle, const uint16_t *maxVn, const uint16_t *minVn, int8_t maxTem, uint8_t minTem, int16_t maxChargeCurrent, int16_t maxDishargeCurrent, uint16_t numOfOverCharge)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN];
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, capacity);
    _mav_put_uint16_t(buf, 6, remCap);
    _mav_put_uint16_t(buf, 8, remSOC);
    _mav_put_int16_t(buf, 10, temperature);
    _mav_put_uint16_t(buf, 12, packVolt);
    _mav_put_uint16_t(buf, 14, allVolt);
    _mav_put_uint16_t(buf, 40, health);
    _mav_put_uint16_t(buf, 42, cycle);
    _mav_put_int16_t(buf, 92, maxChargeCurrent);
    _mav_put_int16_t(buf, 94, maxDishargeCurrent);
    _mav_put_uint16_t(buf, 96, numOfOverCharge);
    _mav_put_uint8_t(buf, 98, onOff);
    _mav_put_int8_t(buf, 99, maxTem);
    _mav_put_uint8_t(buf, 100, minTem);
    _mav_put_uint16_t_array(buf, 16, cellnVolt, 12);
    _mav_put_uint16_t_array(buf, 44, maxVn, 12);
    _mav_put_uint16_t_array(buf, 68, minVn, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_GENERAL_INFO, buf, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
#else
    mavlink_bat_general_info_t packet;
    packet.alert = alert;
    packet.capacity = capacity;
    packet.remCap = remCap;
    packet.remSOC = remSOC;
    packet.temperature = temperature;
    packet.packVolt = packVolt;
    packet.allVolt = allVolt;
    packet.health = health;
    packet.cycle = cycle;
    packet.maxChargeCurrent = maxChargeCurrent;
    packet.maxDishargeCurrent = maxDishargeCurrent;
    packet.numOfOverCharge = numOfOverCharge;
    packet.onOff = onOff;
    packet.maxTem = maxTem;
    packet.minTem = minTem;
    mav_array_memcpy(packet.cellnVolt, cellnVolt, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.maxVn, maxVn, sizeof(uint16_t)*12);
    mav_array_memcpy(packet.minVn, minVn, sizeof(uint16_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_GENERAL_INFO, (const char *)&packet, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
#endif
}

/**
 * @brief Send a bat_general_info message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_bat_general_info_send_struct(mavlink_channel_t chan, const mavlink_bat_general_info_t* bat_general_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_bat_general_info_send(chan, bat_general_info->capacity, bat_general_info->remCap, bat_general_info->remSOC, bat_general_info->temperature, bat_general_info->packVolt, bat_general_info->allVolt, bat_general_info->cellnVolt, bat_general_info->health, bat_general_info->alert, bat_general_info->onOff, bat_general_info->cycle, bat_general_info->maxVn, bat_general_info->minVn, bat_general_info->maxTem, bat_general_info->minTem, bat_general_info->maxChargeCurrent, bat_general_info->maxDishargeCurrent, bat_general_info->numOfOverCharge);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_GENERAL_INFO, (const char *)bat_general_info, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
#endif
}

#if MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_bat_general_info_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t capacity, uint16_t remCap, uint16_t remSOC, int16_t temperature, uint16_t packVolt, uint16_t allVolt, const uint16_t *cellnVolt, uint16_t health, uint32_t alert, uint8_t onOff, uint16_t cycle, const uint16_t *maxVn, const uint16_t *minVn, int8_t maxTem, uint8_t minTem, int16_t maxChargeCurrent, int16_t maxDishargeCurrent, uint16_t numOfOverCharge)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint32_t(buf, 0, alert);
    _mav_put_uint16_t(buf, 4, capacity);
    _mav_put_uint16_t(buf, 6, remCap);
    _mav_put_uint16_t(buf, 8, remSOC);
    _mav_put_int16_t(buf, 10, temperature);
    _mav_put_uint16_t(buf, 12, packVolt);
    _mav_put_uint16_t(buf, 14, allVolt);
    _mav_put_uint16_t(buf, 40, health);
    _mav_put_uint16_t(buf, 42, cycle);
    _mav_put_int16_t(buf, 92, maxChargeCurrent);
    _mav_put_int16_t(buf, 94, maxDishargeCurrent);
    _mav_put_uint16_t(buf, 96, numOfOverCharge);
    _mav_put_uint8_t(buf, 98, onOff);
    _mav_put_int8_t(buf, 99, maxTem);
    _mav_put_uint8_t(buf, 100, minTem);
    _mav_put_uint16_t_array(buf, 16, cellnVolt, 12);
    _mav_put_uint16_t_array(buf, 44, maxVn, 12);
    _mav_put_uint16_t_array(buf, 68, minVn, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_GENERAL_INFO, buf, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
#else
    mavlink_bat_general_info_t *packet = (mavlink_bat_general_info_t *)msgbuf;
    packet->alert = alert;
    packet->capacity = capacity;
    packet->remCap = remCap;
    packet->remSOC = remSOC;
    packet->temperature = temperature;
    packet->packVolt = packVolt;
    packet->allVolt = allVolt;
    packet->health = health;
    packet->cycle = cycle;
    packet->maxChargeCurrent = maxChargeCurrent;
    packet->maxDishargeCurrent = maxDishargeCurrent;
    packet->numOfOverCharge = numOfOverCharge;
    packet->onOff = onOff;
    packet->maxTem = maxTem;
    packet->minTem = minTem;
    mav_array_memcpy(packet->cellnVolt, cellnVolt, sizeof(uint16_t)*12);
    mav_array_memcpy(packet->maxVn, maxVn, sizeof(uint16_t)*12);
    mav_array_memcpy(packet->minVn, minVn, sizeof(uint16_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_BAT_GENERAL_INFO, (const char *)packet, MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN, MAVLINK_MSG_ID_BAT_GENERAL_INFO_CRC);
#endif
}
#endif

#endif

// MESSAGE BAT_GENERAL_INFO UNPACKING


/**
 * @brief Get field capacity from bat_general_info message
 *
 * @return [mAh] the full battery capacity in units mAh, it will reduce with usage.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_capacity(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field remCap from bat_general_info message
 *
 * @return [mAh] the predicted remaining battery capacity in units mAh.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_remCap(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field remSOC from bat_general_info message
 *
 * @return  the current capacity in percentage of capacity.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_remSOC(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field temperature from bat_general_info message
 *
 * @return [cdegC] the temperature of battery in units Centigrade.
 */
static inline int16_t mavlink_msg_bat_general_info_get_temperature(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  10);
}

/**
 * @brief Get field packVolt from bat_general_info message
 *
 * @return [mV] the pack voltage in units mV.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_packVolt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field allVolt from bat_general_info message
 *
 * @return [mV] sum of each cell voltage in units mV.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_allVolt(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field cellnVolt from bat_general_info message
 *
 * @return [mV] each cell voltage in units mV.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_cellnVolt(const mavlink_message_t* msg, uint16_t *cellnVolt)
{
    return _MAV_RETURN_uint16_t_array(msg, cellnVolt, 12,  16);
}

/**
 * @brief Get field health from bat_general_info message
 *
 * @return  the State-of-Health information of the battery in percentage of design capacity and design energy.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_health(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  40);
}

/**
 * @brief Get field alert from bat_general_info message
 *
 * @return  the warning items in discharge mode.
 */
static inline uint32_t mavlink_msg_bat_general_info_get_alert(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint32_t(msg,  0);
}

/**
 * @brief Get field onOff from bat_general_info message
 *
 * @return  the state of the key,which 0x00 indicates pulling up and 0xff indicates pulling down.
 */
static inline uint8_t mavlink_msg_bat_general_info_get_onOff(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  98);
}

/**
 * @brief Get field cycle from bat_general_info message
 *
 * @return  the charge-discharge cycle number.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_cycle(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  42);
}

/**
 * @brief Get field maxVn from bat_general_info message
 *
 * @return [mV] the maximum voltage of each cell has ever been experienced in units mV.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_maxVn(const mavlink_message_t* msg, uint16_t *maxVn)
{
    return _MAV_RETURN_uint16_t_array(msg, maxVn, 12,  44);
}

/**
 * @brief Get field minVn from bat_general_info message
 *
 * @return [mV]  the minimum voltage of each cell has ever been experienced in units mV.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_minVn(const mavlink_message_t* msg, uint16_t *minVn)
{
    return _MAV_RETURN_uint16_t_array(msg, minVn, 12,  68);
}

/**
 * @brief Get field maxTem from bat_general_info message
 *
 * @return [cdegC] the max temperature of the battery has ever been experienced in units Centigrade.
 */
static inline int8_t mavlink_msg_bat_general_info_get_maxTem(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int8_t(msg,  99);
}

/**
 * @brief Get field minTem from bat_general_info message
 *
 * @return [cdegC] the minimum temperature of the battery has ever been experienced in units Centigrade.
 */
static inline uint8_t mavlink_msg_bat_general_info_get_minTem(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  100);
}

/**
 * @brief Get field maxChargeCurrent from bat_general_info message
 *
 * @return [mA] the max charging current of the battery has ever been experienced in units 10mA.
 */
static inline int16_t mavlink_msg_bat_general_info_get_maxChargeCurrent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  92);
}

/**
 * @brief Get field maxDishargeCurrent from bat_general_info message
 *
 * @return [mA] the max discharging current of the battery has ever been experienced in units 10mA.
 */
static inline int16_t mavlink_msg_bat_general_info_get_maxDishargeCurrent(const mavlink_message_t* msg)
{
    return _MAV_RETURN_int16_t(msg,  94);
}

/**
 * @brief Get field numOfOverCharge from bat_general_info message
 *
 * @return  the overcharge times of the battery.
 */
static inline uint16_t mavlink_msg_bat_general_info_get_numOfOverCharge(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  96);
}

/**
 * @brief Decode a bat_general_info message into a struct
 *
 * @param msg The message to decode
 * @param bat_general_info C-struct to decode the message contents into
 */
static inline void mavlink_msg_bat_general_info_decode(const mavlink_message_t* msg, mavlink_bat_general_info_t* bat_general_info)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    bat_general_info->alert = mavlink_msg_bat_general_info_get_alert(msg);
    bat_general_info->capacity = mavlink_msg_bat_general_info_get_capacity(msg);
    bat_general_info->remCap = mavlink_msg_bat_general_info_get_remCap(msg);
    bat_general_info->remSOC = mavlink_msg_bat_general_info_get_remSOC(msg);
    bat_general_info->temperature = mavlink_msg_bat_general_info_get_temperature(msg);
    bat_general_info->packVolt = mavlink_msg_bat_general_info_get_packVolt(msg);
    bat_general_info->allVolt = mavlink_msg_bat_general_info_get_allVolt(msg);
    mavlink_msg_bat_general_info_get_cellnVolt(msg, bat_general_info->cellnVolt);
    bat_general_info->health = mavlink_msg_bat_general_info_get_health(msg);
    bat_general_info->cycle = mavlink_msg_bat_general_info_get_cycle(msg);
    mavlink_msg_bat_general_info_get_maxVn(msg, bat_general_info->maxVn);
    mavlink_msg_bat_general_info_get_minVn(msg, bat_general_info->minVn);
    bat_general_info->maxChargeCurrent = mavlink_msg_bat_general_info_get_maxChargeCurrent(msg);
    bat_general_info->maxDishargeCurrent = mavlink_msg_bat_general_info_get_maxDishargeCurrent(msg);
    bat_general_info->numOfOverCharge = mavlink_msg_bat_general_info_get_numOfOverCharge(msg);
    bat_general_info->onOff = mavlink_msg_bat_general_info_get_onOff(msg);
    bat_general_info->maxTem = mavlink_msg_bat_general_info_get_maxTem(msg);
    bat_general_info->minTem = mavlink_msg_bat_general_info_get_minTem(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN? msg->len : MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN;
        memset(bat_general_info, 0, MAVLINK_MSG_ID_BAT_GENERAL_INFO_LEN);
    memcpy(bat_general_info, _MAV_PAYLOAD(msg), len);
#endif
}
