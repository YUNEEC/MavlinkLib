/** @file
 *    @brief MAVLink comm protocol testsuite generated from yuneec.xml
 *    @see http://qgroundcontrol.org/mavlink/
 */
#pragma once
#ifndef YUNEEC_TESTSUITE_H
#define YUNEEC_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL
static void mavlink_test_common(uint8_t, uint8_t, mavlink_message_t *last_msg);
static void mavlink_test_yuneec(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_common(system_id, component_id, last_msg);
    mavlink_test_yuneec(system_id, component_id, last_msg);
}
#endif

#include "../common/testsuite.h"


static void mavlink_test_visual_tracking(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_VISUAL_TRACKING >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_visual_tracking_t packet_in = {
        93372036854775807ULL,73.0,101.0,129.0,157.0,185.0,213.0,101
    };
    mavlink_visual_tracking_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.time_usec = packet_in.time_usec;
        packet1.width = packet_in.width;
        packet1.height = packet_in.height;
        packet1.x = packet_in.x;
        packet1.y = packet_in.y;
        packet1.center_x = packet_in.center_x;
        packet1.center_y = packet_in.center_y;
        packet1.track_quality = packet_in.track_quality;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_VISUAL_TRACKING_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_visual_tracking_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_visual_tracking_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_visual_tracking_pack(system_id, component_id, &msg , packet1.time_usec , packet1.track_quality , packet1.width , packet1.height , packet1.x , packet1.y , packet1.center_x , packet1.center_y );
    mavlink_msg_visual_tracking_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_visual_tracking_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.time_usec , packet1.track_quality , packet1.width , packet1.height , packet1.x , packet1.y , packet1.center_x , packet1.center_y );
    mavlink_msg_visual_tracking_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_visual_tracking_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_visual_tracking_send(MAVLINK_COMM_1 , packet1.time_usec , packet1.track_quality , packet1.width , packet1.height , packet1.x , packet1.y , packet1.center_x , packet1.center_y );
    mavlink_msg_visual_tracking_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_task_up_mis(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TASK_UP_MIS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_task_up_mis_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,18691,18795
    };
    mavlink_task_up_mis_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.gb_pitch = packet_in.gb_pitch;
        packet1.uav_yaw = packet_in.uav_yaw;
        packet1.action = packet_in.action;
        packet1.velocity = packet_in.velocity;
        packet1.index = packet_in.index;
        packet1.count = packet_in.count;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TASK_UP_MIS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_up_mis_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_task_up_mis_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_up_mis_pack(system_id, component_id, &msg , packet1.index , packet1.count , packet1.lat , packet1.lon , packet1.alt , packet1.gb_pitch , packet1.uav_yaw , packet1.action , packet1.velocity );
    mavlink_msg_task_up_mis_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_up_mis_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.count , packet1.lat , packet1.lon , packet1.alt , packet1.gb_pitch , packet1.uav_yaw , packet1.action , packet1.velocity );
    mavlink_msg_task_up_mis_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_task_up_mis_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_up_mis_send(MAVLINK_COMM_1 , packet1.index , packet1.count , packet1.lat , packet1.lon , packet1.alt , packet1.gb_pitch , packet1.uav_yaw , packet1.action , packet1.velocity );
    mavlink_msg_task_up_mis_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_task_down_mis(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TASK_DOWN_MIS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_task_down_mis_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,18691,18795
    };
    mavlink_task_down_mis_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.lat = packet_in.lat;
        packet1.lon = packet_in.lon;
        packet1.alt = packet_in.alt;
        packet1.gb_pitch = packet_in.gb_pitch;
        packet1.uav_yaw = packet_in.uav_yaw;
        packet1.action = packet_in.action;
        packet1.velocity = packet_in.velocity;
        packet1.index = packet_in.index;
        packet1.count = packet_in.count;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TASK_DOWN_MIS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TASK_DOWN_MIS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_down_mis_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_task_down_mis_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_down_mis_pack(system_id, component_id, &msg , packet1.index , packet1.count , packet1.lat , packet1.lon , packet1.alt , packet1.gb_pitch , packet1.uav_yaw , packet1.action , packet1.velocity );
    mavlink_msg_task_down_mis_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_down_mis_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.index , packet1.count , packet1.lat , packet1.lon , packet1.alt , packet1.gb_pitch , packet1.uav_yaw , packet1.action , packet1.velocity );
    mavlink_msg_task_down_mis_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_task_down_mis_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_down_mis_send(MAVLINK_COMM_1 , packet1.index , packet1.count , packet1.lat , packet1.lon , packet1.alt , packet1.gb_pitch , packet1.uav_yaw , packet1.action , packet1.velocity );
    mavlink_msg_task_down_mis_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_task_request_list(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TASK_REQUEST_LIST >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_task_request_list_t packet_in = {
        5,72,139
    };
    mavlink_task_request_list_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.type = packet_in.type;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TASK_REQUEST_LIST_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TASK_REQUEST_LIST_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_request_list_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_task_request_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_request_list_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.type );
    mavlink_msg_task_request_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_request_list_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.type );
    mavlink_msg_task_request_list_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_task_request_list_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_request_list_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.type );
    mavlink_msg_task_request_list_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_task_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TASK_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_task_ack_t packet_in = {
        5,72,139
    };
    mavlink_task_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.target_system = packet_in.target_system;
        packet1.target_component = packet_in.target_component;
        packet1.result = packet_in.result;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TASK_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TASK_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_task_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_ack_pack(system_id, component_id, &msg , packet1.target_system , packet1.target_component , packet1.result );
    mavlink_msg_task_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.target_system , packet1.target_component , packet1.result );
    mavlink_msg_task_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_task_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_ack_send(MAVLINK_COMM_1 , packet1.target_system , packet1.target_component , packet1.result );
    mavlink_msg_task_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_task_state_feedback(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_TASK_STATE_FEEDBACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_task_state_feedback_t packet_in = {
        17.0,45.0,73.0,101.0,129.0,157.0,185.0,89,156
    };
    mavlink_task_state_feedback_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.param1 = packet_in.param1;
        packet1.param2 = packet_in.param2;
        packet1.param3 = packet_in.param3;
        packet1.param4 = packet_in.param4;
        packet1.param5 = packet_in.param5;
        packet1.param6 = packet_in.param6;
        packet1.param7 = packet_in.param7;
        packet1.task_mode = packet_in.task_mode;
        packet1.task_state = packet_in.task_state;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_TASK_STATE_FEEDBACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_state_feedback_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_task_state_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_state_feedback_pack(system_id, component_id, &msg , packet1.task_mode , packet1.task_state , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_task_state_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_state_feedback_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.task_mode , packet1.task_state , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_task_state_feedback_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_task_state_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_task_state_feedback_send(MAVLINK_COMM_1 , packet1.task_mode , packet1.task_state , packet1.param1 , packet1.param2 , packet1.param3 , packet1.param4 , packet1.param5 , packet1.param6 , packet1.param7 );
    mavlink_msg_task_state_feedback_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gimbal_control(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GIMBAL_CONTROL >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gimbal_control_t packet_in = {
        { 17235, 17236, 17237, 17238 },17651,17755,17859,17963,18067,18171,18275,18379,18483
    };
    mavlink_gimbal_control_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.hvel = packet_in.hvel;
        packet1.hacc = packet_in.hacc;
        packet1.yaw_deg_desire = packet_in.yaw_deg_desire;
        packet1.yaw_channel = packet_in.yaw_channel;
        packet1.pitch_channel = packet_in.pitch_channel;
        packet1.roll_channel = packet_in.roll_channel;
        packet1.yaw_mode = packet_in.yaw_mode;
        packet1.pitch_mode = packet_in.pitch_mode;
        packet1.roll_mode = packet_in.roll_mode;
        
        mav_array_memcpy(packet1.quaternion, packet_in.quaternion, sizeof(int16_t)*4);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GIMBAL_CONTROL_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gimbal_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_pack(system_id, component_id, &msg , packet1.quaternion , packet1.hvel , packet1.hacc , packet1.yaw_deg_desire , packet1.yaw_channel , packet1.pitch_channel , packet1.roll_channel , packet1.yaw_mode , packet1.pitch_mode , packet1.roll_mode );
    mavlink_msg_gimbal_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.quaternion , packet1.hvel , packet1.hacc , packet1.yaw_deg_desire , packet1.yaw_channel , packet1.pitch_channel , packet1.roll_channel , packet1.yaw_mode , packet1.pitch_mode , packet1.roll_mode );
    mavlink_msg_gimbal_control_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gimbal_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_send(MAVLINK_COMM_1 , packet1.quaternion , packet1.hvel , packet1.hacc , packet1.yaw_deg_desire , packet1.yaw_channel , packet1.pitch_channel , packet1.roll_channel , packet1.yaw_mode , packet1.pitch_mode , packet1.roll_mode );
    mavlink_msg_gimbal_control_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gimbal_control_standard(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gimbal_control_standard_t packet_in = {
        17.0,45.0,73.0,101.0,53,120,187,254
    };
    mavlink_gimbal_control_standard_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.yaw_channel = packet_in.yaw_channel;
        packet1.pitch_channel = packet_in.pitch_channel;
        packet1.roll_channel = packet_in.roll_channel;
        packet1.drones_yawvelocity_desire = packet_in.drones_yawvelocity_desire;
        packet1.priority = packet_in.priority;
        packet1.yaw_mode = packet_in.yaw_mode;
        packet1.pitch_mode = packet_in.pitch_mode;
        packet1.roll_mode = packet_in.roll_mode;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GIMBAL_CONTROL_STANDARD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_standard_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gimbal_control_standard_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_standard_pack(system_id, component_id, &msg , packet1.priority , packet1.yaw_mode , packet1.pitch_mode , packet1.roll_mode , packet1.yaw_channel , packet1.pitch_channel , packet1.roll_channel , packet1.drones_yawvelocity_desire );
    mavlink_msg_gimbal_control_standard_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_standard_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.priority , packet1.yaw_mode , packet1.pitch_mode , packet1.roll_mode , packet1.yaw_channel , packet1.pitch_channel , packet1.roll_channel , packet1.drones_yawvelocity_desire );
    mavlink_msg_gimbal_control_standard_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gimbal_control_standard_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_control_standard_send(MAVLINK_COMM_1 , packet1.priority , packet1.yaw_mode , packet1.pitch_mode , packet1.roll_mode , packet1.yaw_channel , packet1.pitch_channel , packet1.roll_channel , packet1.drones_yawvelocity_desire );
    mavlink_msg_gimbal_control_standard_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_gimbal_debugdata(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_GIMBAL_DEBUGDATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_gimbal_debugdata_t packet_in = {
        5,{ 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120 }
    };
    mavlink_gimbal_debugdata_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.msg_type = packet_in.msg_type;
        
        mav_array_memcpy(packet1.debug_data, packet_in.debug_data, sizeof(int8_t)*49);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_GIMBAL_DEBUGDATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_debugdata_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_gimbal_debugdata_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_debugdata_pack(system_id, component_id, &msg , packet1.msg_type , packet1.debug_data );
    mavlink_msg_gimbal_debugdata_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_debugdata_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.msg_type , packet1.debug_data );
    mavlink_msg_gimbal_debugdata_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_gimbal_debugdata_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_gimbal_debugdata_send(MAVLINK_COMM_1 , packet1.msg_type , packet1.debug_data );
    mavlink_msg_gimbal_debugdata_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bootload_data(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BOOTLOAD_DATA >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bootload_data_t packet_in = {
        { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137 }
    };
    mavlink_bootload_data_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.bootload_data, packet_in.bootload_data, sizeof(int8_t)*133);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BOOTLOAD_DATA_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BOOTLOAD_DATA_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bootload_data_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bootload_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bootload_data_pack(system_id, component_id, &msg , packet1.bootload_data );
    mavlink_msg_bootload_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bootload_data_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.bootload_data );
    mavlink_msg_bootload_data_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bootload_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bootload_data_send(MAVLINK_COMM_1 , packet1.bootload_data );
    mavlink_msg_bootload_data_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mav_rc_cmd(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAV_RC_CMD >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mav_rc_cmd_t packet_in = {
        5,{ 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69 }
    };
    mavlink_mav_rc_cmd_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command = packet_in.command;
        
        mav_array_memcpy(packet1.params, packet_in.params, sizeof(uint8_t)*254);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAV_RC_CMD_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAV_RC_CMD_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mav_rc_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_pack(system_id, component_id, &msg , packet1.command , packet1.params );
    mavlink_msg_mav_rc_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.params );
    mavlink_msg_mav_rc_cmd_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mav_rc_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_send(MAVLINK_COMM_1 , packet1.command , packet1.params );
    mavlink_msg_mav_rc_cmd_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_mav_rc_cmd_ack(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_MAV_RC_CMD_ACK >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_mav_rc_cmd_ack_t packet_in = {
        5,72,{ 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135 }
    };
    mavlink_mav_rc_cmd_ack_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.command = packet_in.command;
        packet1.code = packet_in.code;
        
        mav_array_memcpy(packet1.params, packet_in.params, sizeof(uint8_t)*253);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_MAV_RC_CMD_ACK_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_ack_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_mav_rc_cmd_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_ack_pack(system_id, component_id, &msg , packet1.command , packet1.code , packet1.params );
    mavlink_msg_mav_rc_cmd_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_ack_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.command , packet1.code , packet1.params );
    mavlink_msg_mav_rc_cmd_ack_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_mav_rc_cmd_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_mav_rc_cmd_ack_send(MAVLINK_COMM_1 , packet1.command , packet1.code , packet1.params );
    mavlink_msg_mav_rc_cmd_ack_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bat_general_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BAT_GENERAL_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bat_general_info_t packet_in = {
        963497464,17443,17547,17651,17755,17859,17963,{ 18067, 18068, 18069, 18070, 18071, 18072, 18073, 18074, 18075, 18076, 18077, 18078 },19315,19419,{ 19523, 19524, 19525, 19526, 19527, 19528, 19529, 19530, 19531, 19532, 19533, 19534 },{ 20771, 20772, 20773, 20774, 20775, 20776, 20777, 20778, 20779, 20780, 20781, 20782 },22019,22123,22227,171,238,49
    };
    mavlink_bat_general_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.alert = packet_in.alert;
        packet1.capacity = packet_in.capacity;
        packet1.remCap = packet_in.remCap;
        packet1.remSOC = packet_in.remSOC;
        packet1.temperature = packet_in.temperature;
        packet1.packVolt = packet_in.packVolt;
        packet1.allVolt = packet_in.allVolt;
        packet1.health = packet_in.health;
        packet1.cycle = packet_in.cycle;
        packet1.maxChargeCurrent = packet_in.maxChargeCurrent;
        packet1.maxDishargeCurrent = packet_in.maxDishargeCurrent;
        packet1.numOfOverCharge = packet_in.numOfOverCharge;
        packet1.onOff = packet_in.onOff;
        packet1.maxTem = packet_in.maxTem;
        packet1.minTem = packet_in.minTem;
        
        mav_array_memcpy(packet1.cellnVolt, packet_in.cellnVolt, sizeof(uint16_t)*12);
        mav_array_memcpy(packet1.maxVn, packet_in.maxVn, sizeof(uint16_t)*12);
        mav_array_memcpy(packet1.minVn, packet_in.minVn, sizeof(uint16_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BAT_GENERAL_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_general_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bat_general_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_general_info_pack(system_id, component_id, &msg , packet1.capacity , packet1.remCap , packet1.remSOC , packet1.temperature , packet1.packVolt , packet1.allVolt , packet1.cellnVolt , packet1.health , packet1.alert , packet1.onOff , packet1.cycle , packet1.maxVn , packet1.minVn , packet1.maxTem , packet1.minTem , packet1.maxChargeCurrent , packet1.maxDishargeCurrent , packet1.numOfOverCharge );
    mavlink_msg_bat_general_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_general_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.capacity , packet1.remCap , packet1.remSOC , packet1.temperature , packet1.packVolt , packet1.allVolt , packet1.cellnVolt , packet1.health , packet1.alert , packet1.onOff , packet1.cycle , packet1.maxVn , packet1.minVn , packet1.maxTem , packet1.minTem , packet1.maxChargeCurrent , packet1.maxDishargeCurrent , packet1.numOfOverCharge );
    mavlink_msg_bat_general_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bat_general_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_general_info_send(MAVLINK_COMM_1 , packet1.capacity , packet1.remCap , packet1.remSOC , packet1.temperature , packet1.packVolt , packet1.allVolt , packet1.cellnVolt , packet1.health , packet1.alert , packet1.onOff , packet1.cycle , packet1.maxVn , packet1.minVn , packet1.maxTem , packet1.minTem , packet1.maxChargeCurrent , packet1.maxDishargeCurrent , packet1.numOfOverCharge );
    mavlink_msg_bat_general_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bat_common_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BAT_COMMON_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bat_common_info_t packet_in = {
        963497464,17443,17547,17651,17755,{ 17859, 17860, 17861, 17862, 17863, 17864, 17865, 17866, 17867, 17868, 17869, 17870 },19107,247
    };
    mavlink_bat_common_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.alert = packet_in.alert;
        packet1.remCap = packet_in.remCap;
        packet1.remSOC = packet_in.remSOC;
        packet1.temperature = packet_in.temperature;
        packet1.packVolt = packet_in.packVolt;
        packet1.current = packet_in.current;
        packet1.onOff = packet_in.onOff;
        
        mav_array_memcpy(packet1.cellnVolt, packet_in.cellnVolt, sizeof(uint16_t)*12);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BAT_COMMON_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_common_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bat_common_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_common_info_pack(system_id, component_id, &msg , packet1.remCap , packet1.remSOC , packet1.temperature , packet1.packVolt , packet1.cellnVolt , packet1.current , packet1.alert , packet1.onOff );
    mavlink_msg_bat_common_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_common_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.remCap , packet1.remSOC , packet1.temperature , packet1.packVolt , packet1.cellnVolt , packet1.current , packet1.alert , packet1.onOff );
    mavlink_msg_bat_common_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bat_common_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_common_info_send(MAVLINK_COMM_1 , packet1.remCap , packet1.remSOC , packet1.temperature , packet1.packVolt , packet1.cellnVolt , packet1.current , packet1.alert , packet1.onOff );
    mavlink_msg_bat_common_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bat_const_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BAT_CONST_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bat_const_info_t packet_in = {
        963497464,963497672,963497880,963498088,18067,{ 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197 },{ 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187 },252
    };
    mavlink_bat_const_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.firmwareVersion = packet_in.firmwareVersion;
        packet1.bootloaderVersion = packet_in.bootloaderVersion;
        packet1.hardwareVersion = packet_in.hardwareVersion;
        packet1.firmwareSize = packet_in.firmwareSize;
        packet1.designCap = packet_in.designCap;
        packet1.nCell = packet_in.nCell;
        
        mav_array_memcpy(packet1.MCUType, packet_in.MCUType, sizeof(uint8_t)*11);
        mav_array_memcpy(packet1.companyOfBat, packet_in.companyOfBat, sizeof(uint8_t)*32);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BAT_CONST_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_const_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bat_const_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_const_info_pack(system_id, component_id, &msg , packet1.firmwareVersion , packet1.bootloaderVersion , packet1.hardwareVersion , packet1.firmwareSize , packet1.MCUType , packet1.companyOfBat , packet1.nCell , packet1.designCap );
    mavlink_msg_bat_const_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_const_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.firmwareVersion , packet1.bootloaderVersion , packet1.hardwareVersion , packet1.firmwareSize , packet1.MCUType , packet1.companyOfBat , packet1.nCell , packet1.designCap );
    mavlink_msg_bat_const_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bat_const_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_const_info_send(MAVLINK_COMM_1 , packet1.firmwareVersion , packet1.bootloaderVersion , packet1.hardwareVersion , packet1.firmwareSize , packet1.MCUType , packet1.companyOfBat , packet1.nCell , packet1.designCap );
    mavlink_msg_bat_const_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_bat_production_info(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_BAT_PRODUCTION_INFO >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_bat_production_info_t packet_in = {
        { 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 },{ 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178 }
    };
    mavlink_bat_production_info_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        
        mav_array_memcpy(packet1.productionTime, packet_in.productionTime, sizeof(uint8_t)*10);
        mav_array_memcpy(packet1.keyOfBat, packet_in.keyOfBat, sizeof(uint8_t)*16);
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_BAT_PRODUCTION_INFO_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_production_info_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_bat_production_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_production_info_pack(system_id, component_id, &msg , packet1.productionTime , packet1.keyOfBat );
    mavlink_msg_bat_production_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_production_info_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.productionTime , packet1.keyOfBat );
    mavlink_msg_bat_production_info_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_bat_production_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_bat_production_info_send(MAVLINK_COMM_1 , packet1.productionTime , packet1.keyOfBat );
    mavlink_msg_bat_production_info_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
}

static void mavlink_test_yuneec(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_visual_tracking(system_id, component_id, last_msg);
    mavlink_test_task_up_mis(system_id, component_id, last_msg);
    mavlink_test_task_down_mis(system_id, component_id, last_msg);
    mavlink_test_task_request_list(system_id, component_id, last_msg);
    mavlink_test_task_ack(system_id, component_id, last_msg);
    mavlink_test_task_state_feedback(system_id, component_id, last_msg);
    mavlink_test_gimbal_control(system_id, component_id, last_msg);
    mavlink_test_gimbal_control_standard(system_id, component_id, last_msg);
    mavlink_test_gimbal_debugdata(system_id, component_id, last_msg);
    mavlink_test_bootload_data(system_id, component_id, last_msg);
    mavlink_test_mav_rc_cmd(system_id, component_id, last_msg);
    mavlink_test_mav_rc_cmd_ack(system_id, component_id, last_msg);
    mavlink_test_bat_general_info(system_id, component_id, last_msg);
    mavlink_test_bat_common_info(system_id, component_id, last_msg);
    mavlink_test_bat_const_info(system_id, component_id, last_msg);
    mavlink_test_bat_production_info(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // YUNEEC_TESTSUITE_H
