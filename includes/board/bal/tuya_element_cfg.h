/*
 * tuya_element_cfg.h
 *
 *  Created on: 2020-05-28
 *      Author: Joey
 */

#pragma once

#include "../../proj/tl_common.h"

#define ELE_CNT    (1)

#define VENDOR_MD_TUYA_LIGHT_S          (0x000407D0)
#define VENDOR_MD_TUYA_LIGHT_C          (0x000507D0)

#define MD_ID_ARRAY_CFG_CLIENT  
#define MD_ID_ARRAY_CFG         SIG_MD_CFG_SERVER, MD_ID_ARRAY_CFG_CLIENT       \
                                SIG_MD_HEALTH_SERVER, SIG_MD_HEALTH_CLIENT,     \
                                MD_ID_REMOTE_PROV_SERVER MD_ID_REMOTE_PROV_CLIENT \

#define MD_ID_ARRAY_VENDOR_CLIENT       0
#define MD_ID_ARRAY_VENDOR2     0
#define MD_ID_ARRAY_VENDOR_SERVER       VENDOR_MD_TUYA_S

#define MD_ID_ARRAY_ONOFF_SERVER        SIG_MD_G_ONOFF_S,
#define MD_ID_ARRAY_LEVEL_SERVER        SIG_MD_G_LEVEL_S,
#define MD_ID_ARRAY_DEF_TRANSIT_TIME_SERVER     SIG_MD_G_DEF_TRANSIT_TIME_S,
#define MD_ID_ARRAY_POWER_ONOFF_SERVER  SIG_MD_G_POWER_ONOFF_S, SIG_MD_G_POWER_ONOFF_SETUP_S,
#define MD_ID_ARRAY_TIME_SERVER         SIG_MD_TIME_S, SIG_MD_TIME_SETUP_S,
#define MD_ID_ARRAY_SCENE_SERVER        SIG_MD_SCENE_S, SIG_MD_SCENE_SETUP_S,
#define MD_ID_ARRAY_SCHED_SERVER        SIG_MD_SCHED_S, SIG_MD_SCHED_SETUP_S,
#define MD_ID_ARRAY_POWER_LEVEL_SERVER  SIG_MD_G_POWER_LEVEL_S, SIG_MD_G_POWER_LEVEL_SETUP_S,
#define MD_ID_ARRAY_LIGHTNESS_SERVER    SIG_MD_LIGHTNESS_S, SIG_MD_LIGHTNESS_SETUP_S,
#define MD_ID_ARRAY_LIGHT_XYL_SERVER    SIG_MD_LIGHT_XYL_S, SIG_MD_LIGHT_XYL_SETUP_S,
#define MD_ID_ARRAY_LIGHT_LC_SERVER     SIG_MD_LIGHT_LC_S, SIG_MD_LIGHT_LC_SETUP_S,
#define MD_ID_ARRAY_SENSOR_SERVER		SIG_MD_SENSOR_S, SIG_MD_SENSOR_SETUP_S,
#define MD_ID_ARRAY_PROP_SERVER		    SIG_MD_G_ADMIN_PROP_S, SIG_MD_G_MFG_PROP_S, SIG_MD_G_USER_PROP_S, SIG_MD_G_CLIENT_PROP_S,
#define	MD_ID_ARRAY_BATTERY_SERVER		SIG_MD_G_BAT_S,
#define MD_ID_ARRAY_LOCATION_SERVER		SIG_MD_G_LOCATION_S, SIG_MD_G_LOCATION_SETUP_S,

#define MD_ID_ARRAY_ONOFF       MD_ID_ARRAY_ONOFF_SERVER
#define MD_ID_ARRAY_LIGHTNESS   MD_ID_ARRAY_LIGHTNESS_SERVER
#define MD_CTL_TEMP_S_PRIMARY   SIG_MD_LIGHT_CTL_TEMP_S, 
#define MD_ID_ARRAY_LIGHT_CTL_SERVER    SIG_MD_LIGHT_CTL_S, SIG_MD_LIGHT_CTL_SETUP_S, MD_CTL_TEMP_S_PRIMARY
#define MD_ID_ARRAY_LIGHT_CTL   MD_ID_ARRAY_LIGHT_CTL_SERVER
#define MD_HSL_HUE_SAT_S_PRIMARY    SIG_MD_LIGHT_HSL_HUE_S,SIG_MD_LIGHT_HSL_SAT_S,
#define MD_ID_ARRAY_LIGHT_HSL_SERVER    SIG_MD_LIGHT_HSL_S, SIG_MD_LIGHT_HSL_SETUP_S, MD_HSL_HUE_SAT_S_PRIMARY
#define MD_ID_ARRAY_LIGHT_HSL   MD_ID_ARRAY_LIGHT_HSL_SERVER

#ifndef MD_ID_ARRAY_VENDOR_SERVER
#define MD_ID_ARRAY_VENDOR_SERVER      
#endif
#ifndef MD_ID_ARRAY_MESH_OTA
#define MD_ID_ARRAY_MESH_OTA      
#endif
#ifndef MD_ID_ARRAY_LEVEL
#define MD_ID_ARRAY_LEVEL      
#endif
#ifndef MD_ID_ARRAY_DEF_TRANSIT_TIME
#define MD_ID_ARRAY_DEF_TRANSIT_TIME      
#endif
#ifndef MD_ID_ARRAY_POWER_ONOFF
#define MD_ID_ARRAY_POWER_ONOFF      
#endif
#ifndef MD_ID_ARRAY_TIME
#define MD_ID_ARRAY_TIME      
#endif
#ifndef MD_ID_ARRAY_SCENE
#define MD_ID_ARRAY_SCENE      
#endif
#ifndef MD_ID_ARRAY_SCHED
#define MD_ID_ARRAY_SCHED      
#endif
#ifndef MD_ID_ARRAY_POWER_LEVEL
#define MD_ID_ARRAY_POWER_LEVEL      
#endif
#ifndef MD_ID_ARRAY_LIGHT_XYL
#define MD_ID_ARRAY_LIGHT_XYL      
#endif
#ifndef MD_ID_ARRAY_LIGHT_LC
#define MD_ID_ARRAY_LIGHT_LC      
#endif
#ifndef MD_ID_ARRAY_SENSOR
#define MD_ID_ARRAY_SENSOR      
#endif
#ifndef MD_ID_ARRAY_PROPERTY
#define MD_ID_ARRAY_PROPERTY      
#endif
#ifndef MD_ID_ARRAY_BATTERY
#define MD_ID_ARRAY_BATTERY      
#endif
#ifndef MD_ID_ARRAY_LOCATION
#define MD_ID_ARRAY_LOCATION
#endif
#ifndef MD_ID_REMOTE_PROV_SERVER
#define MD_ID_REMOTE_PROV_SERVER    
#endif
#ifndef MD_ID_REMOTE_PROV_CLIENT
#define MD_ID_REMOTE_PROV_CLIENT    
#endif

//   user config---------------

#define LIGHT_TYPE_CT_EN            0
#define LIGHT_TYPE_HSL_EN           0
#define MD_LIGHTNESS_EN             0


#define MD_ID_ARRAY_COMMON      MD_ID_ARRAY_ONOFF

#define MD_ID_ARRAY_PRIMARY     MD_ID_ARRAY_CFG   MD_ID_ARRAY_MESH_OTA   MD_ID_ARRAY_TIME   MD_ID_ARRAY_COMMON
    
#define MD_ID_ARRAY_PRIMARY_VD  MD_ID_ARRAY_VENDOR_SERVER

#define MD_ID_ARRAY_SECOND      MD_ID_ARRAY_ONOFF

#define MD_ID_ARRAY_SECOND_VD  
