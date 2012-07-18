/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * libqmi-glib -- GLib/GIO based library to control QMI devices
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA.
 *
 * Copyright (C) 2012 Lanedo GmbH <aleksander@lanedo.com>
 */

#ifndef _LIBQMI_GLIB_QMI_ENUMS_DMS_H_
#define _LIBQMI_GLIB_QMI_ENUMS_DMS_H_

#include <glib.h>

/*****************************************************************************/
/* Helper enums for the 'QMI DMS Get Capabilities' message */

/**
 * QmiDmsDataServiceCapability:
 * @QMI_DMS_DATA_SERVICE_CAPABILITY_NONE: No data services supported.
 * @QMI_DMS_DATA_SERVICE_CAPABILITY_CS: Only CS supported.
 * @QMI_DMS_DATA_SERVICE_CAPABILITY_PS: Only PS supported.
 * @QMI_DMS_DATA_SERVICE_CAPABILITY_SIMULTANEOUS_CS_PS: Simultaneous CS and PS supported.
 * @QMI_DMS_DATA_SERVICE_CAPABILITY_NON_SIMULTANEOUS_CS_PS: Non simultaneous CS and PS supported.
 *
 * Data service capability.
 */
typedef enum {
    QMI_DMS_DATA_SERVICE_CAPABILITY_NONE                   = 0,
    QMI_DMS_DATA_SERVICE_CAPABILITY_CS                     = 1,
    QMI_DMS_DATA_SERVICE_CAPABILITY_PS                     = 2,
    QMI_DMS_DATA_SERVICE_CAPABILITY_SIMULTANEOUS_CS_PS     = 3,
    QMI_DMS_DATA_SERVICE_CAPABILITY_NON_SIMULTANEOUS_CS_PS = 4
} QmiDmsDataServiceCapability;

/**
 * QmiDmsSimCapability:
 * @QMI_DMS_SIM_CAPABILITY_NOT_SUPPORTED: SIM not supported.
 * @QMI_DMS_SIM_CAPABILITY_SUPPORTED: SIM is supported.
 *
 * SIM capability.
 */
typedef enum {
    QMI_DMS_SIM_CAPABILITY_NOT_SUPPORTED = 1,
    QMI_DMS_SIM_CAPABILITY_SUPPORTED     = 2
} QmiDmsSimCapability;

/**
 * QmiDmsRadioInterface:
 * @QMI_DMS_RADIO_INTERFACE_CDMA20001X: CDMA2000 1x.
 * @QMI_DMS_RADIO_INTERFACE_EVDO: CDMA2000 HRPD (1xEV-DO)
 * @QMI_DMS_RADIO_INTERFACE_GSM: GSM.
 * @QMI_DMS_RADIO_INTERFACE_UMTS: UMTS.
 * @QMI_DMS_RADIO_INTERFACE_LTE: LTE.
 *
 * Radio interface type.
 */
typedef enum {
    QMI_DMS_RADIO_INTERFACE_CDMA20001X = 1,
    QMI_DMS_RADIO_INTERFACE_EVDO       = 2,
    QMI_DMS_RADIO_INTERFACE_GSM        = 4,
    QMI_DMS_RADIO_INTERFACE_UMTS       = 5,
    QMI_DMS_RADIO_INTERFACE_LTE        = 8
} QmiDmsRadioInterface;


/*****************************************************************************/
/* Helper enums for the 'QMI DMS Get Power State' message */

/**
 * QmiDmsPowerState:
 * @QMI_DMS_POWER_STATE_EXTERNAL_SOURCE: Powered by an external source.
 * @QMI_DMS_POWER_STATE_BATTERY_CONNECTED: Battery is connected.
 * @QMI_DMS_POWER_STATE_BATTERY_CHARGING: Battery is currently being charged.
 * @QMI_DMS_POWER_STATE_FAULT: Recognized power fault.
 *
 * Flags specifying the current power state.
 *
 * If @QMI_DMS_POWER_STATE_EXTERNAL_SOURCE is set, the device is powerered by an
 * external source; otherwise it is powered by a battery.
 *
 * If @QMI_DMS_POWER_STATE_BATTERY_CONNECTED is set, the battery is connected;
 * otherwise the battery is not connected.
 *
 * If @QMI_DMS_POWER_STATE_BATTERY_CHARGING is set, the battery is being charged;
 * otherwise the battery is not being charged.
 *
 * If @QMI_DMS_POWER_STATE_FAULT is set, a power fault has been detected.
 */
typedef enum {
    QMI_DMS_POWER_STATE_EXTERNAL_SOURCE   = 1 << 0,
    QMI_DMS_POWER_STATE_BATTERY_CONNECTED = 1 << 1,
    QMI_DMS_POWER_STATE_BATTERY_CHARGING  = 1 << 2,
    QMI_DMS_POWER_STATE_FAULT             = 1 << 3,
} QmiDmsPowerState;


/*****************************************************************************/
/* Helper enums for the 'QMI DMS UIM Set PIN Protection' message */

/**
 * QmiDmsUimPinId:
 * @QMI_DMS_UIM_PIN_ID_PIN: PIN.
 * @QMI_DMS_UIM_PIN_ID_PIN2: PIN2.
 *
 * The PIN identifier.
 */
typedef enum {
    QMI_DMS_UIM_PIN_ID_PIN  = 1,
    QMI_DMS_UIM_PIN_ID_PIN2 = 2
} QmiDmsUimPinId;


/*****************************************************************************/
/* Helper enums for the 'QMI DMS UIM Get PIN Status' message */

/**
 * QmiDmsPinStatus:
 * @QMI_DMS_UIM_PIN_STATUS_NOT_INITIALIZED: Not initialized.
 * @QMI_DMS_UIM_PIN_STATUS_ENABLED_NOT_VERIFIED: Enabled, not verified.
 * @QMI_DMS_UIM_PIN_STATUS_ENABLED_VERIFIED: Enabled, verified.
 * @QMI_DMS_UIM_PIN_STATUS_DISABLED: Disabled.
 * @QMI_DMS_UIM_PIN_STATUS_BLOCKED: Blocked.
 * @QMI_DMS_UIM_PIN_STATUS_PERMANENTLY_BLOCKED: Permanently Blocked.
 * @QMI_DMS_UIM_PIN_STATUS_UNBLOCKED: Unblocked.
 * @QMI_DMS_UIM_PIN_STATUS_CHANGED: Changed.
 *
 * The PIN status.
 */
typedef enum {
    QMI_DMS_UIM_PIN_STATUS_NOT_INITIALIZED      = 0,
    QMI_DMS_UIM_PIN_STATUS_ENABLED_NOT_VERIFIED = 1,
    QMI_DMS_UIM_PIN_STATUS_ENABLED_VERIFIED     = 2,
    QMI_DMS_UIM_PIN_STATUS_DISABLED             = 3,
    QMI_DMS_UIM_PIN_STATUS_BLOCKED              = 4,
    QMI_DMS_UIM_PIN_STATUS_PERMANENTLY_BLOCKED  = 5,
    QMI_DMS_UIM_PIN_STATUS_UNBLOCKED            = 6,
    QMI_DMS_UIM_PIN_STATUS_CHANGED              = 7,
} QmiDmsUimPinStatus;

/*****************************************************************************/
/* Helper enums for the 'QMI DMS Get Operating Mode' message */

/**
 * QmiDmsOperatingMode:
 * @QMI_DMS_OPERATING_MODE_ONLINE: Device can acquire a system and make calls.
 * @QMI_DMS_OPERATING_MODE_LOW_POWER: Device has temporarily disabled RF.
 * @QMI_DMS_OPERATING_MODE_PERSISTENT_LOW_POWER: Device has disabled RF and state persists even after a reset.
 * @QMI_DMS_OPERATING_MODE_FACTORY_TEST: Special mode for manufacturer tests.
 * @QMI_DMS_OPERATING_MODE_OFFLINE: Device has deactivated RF and is partially shutdown.
 * @QMI_DMS_OPERATING_MODE_RESETTING: Device is in the process of power cycling.
 * @QMI_DMS_OPERATING_MODE_SHUTTING_DOWN: Device is in the process of shutting down.
 * @QMI_DMS_OPERATING_MODE_MODE_ONLY_LOW_POWER: Mode-only Low Power.
 *
 * Operating mode of the device.
 */
typedef enum {
    QMI_DMS_OPERATING_MODE_ONLINE                = 0,
    QMI_DMS_OPERATING_MODE_LOW_POWER             = 1,
    QMI_DMS_OPERATING_MODE_FACTORY_TEST          = 2,
    QMI_DMS_OPERATING_MODE_OFFLINE               = 3,
    QMI_DMS_OPERATING_MODE_RESETTING             = 4,
    QMI_DMS_OPERATING_MODE_SHUTTING_DOWN         = 5,
    QMI_DMS_OPERATING_MODE_PERSISTENT_LOW_POWER  = 6,
    QMI_DMS_OPERATING_MODE_MODE_ONLY_LOW_POWER   = 7
} QmiDmsOperatingMode;

/**
 * QmiDmsOfflineReason:
 * @QMI_DMS_OFFLINE_REASON_HOST_IMAGE_MISCONFIGURATION: Host image misconfiguration.
 * @QMI_DMS_OFFLINE_REASON_PRI_IMAGE_MISCONFIGURATION: PRI image misconfiguration.
 * @QMI_DMS_OFFLINE_REASON_PRI_VERSION_INCOMPATIBLE: PRI version incompatible.
 * @QMI_DMS_OFFLINE_REASON_DEVICE_MEMORY_FULL: Memory full, cannot copy PRI information.
 *
 * Reasons for being in Offline (@QMI_DMS_OPERATING_MODE_OFFLINE) state.
 */
typedef enum {
    QMI_DMS_OFFLINE_REASON_HOST_IMAGE_MISCONFIGURATION = 1 << 0,
    QMI_DMS_OFFLINE_REASON_PRI_IMAGE_MISCONFIGURATION  = 1 << 1,
    QMI_DMS_OFFLINE_REASON_PRI_VERSION_INCOMPATIBLE    = 1 << 2,
    QMI_DMS_OFFLINE_REASON_DEVICE_MEMORY_FULL          = 1 << 3
} QmiDmsOfflineReason;

/*****************************************************************************/
/* Helper enums for the 'QMI DMS Get Time' message */

/**
 * QmiDmsTimeSource:
 * @QMI_DMS_TIME_SOURCE_DEVICE: 32 kHz device clock.
 * @QMI_DMS_TIME_SOURCE_CDMA_NETWORK: CDMA network.
 * @QMI_DMS_TIME_SOURCE_HDR_NETWORK: HDR network.
 *
 * Source of the timestamp.
 */
typedef enum {
    QMI_DMS_TIME_SOURCE_DEVICE        = 0,
    QMI_DMS_TIME_SOURCE_CDMA_NETWORK  = 1,
    QMI_DMS_TIME_SOURCE_HDR_NETWORK   = 2,
} QmiDmsTimeSource;

/*****************************************************************************/
/* Helper enums for the 'QMI DMS Get Activation State' message */

/**
 * QmiDmsActivationState:
 * @QMI_DMS_ACTIVATION_STATE_NOT_ACTIVATED: Service not activated.
 * @QMI_DMS_ACTIVATION_STATE_ACTIVATED: Service is activated.
 * @QMI_DMS_ACTIVATION_STATE_CONNECTING: Connection in progress for automatic activation.
 * @QMI_DMS_ACTIVATION_STATE_CONNECTED: Connection connected for automatic activation.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_AUTHENTICATED: OTASP security authenticated.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_NAM: OTASP NAM downloaded.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_MDN: OTASP MDN downloaded.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_IMSI: OTASP IMSI downloaded.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_PRL: OTASP PRL downloaded.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_SPC: OTASP SPC downloaded.
 * @QMI_DMS_ACTIVATION_STATE_OTASP_COMMITED: OTASP settings committed.
 *
 * State of the service activation.
 */
typedef enum {
    QMI_DMS_ACTIVATION_STATE_NOT_ACTIVATED       = 0x00,
    QMI_DMS_ACTIVATION_STATE_ACTIVATED           = 0x01,
    QMI_DMS_ACTIVATION_STATE_CONNECTING          = 0x02,
    QMI_DMS_ACTIVATION_STATE_CONNECTED           = 0x03,
    QMI_DMS_ACTIVATION_STATE_OTASP_AUTHENTICATED = 0x04,
    QMI_DMS_ACTIVATION_STATE_OTASP_NAM           = 0x05,
    QMI_DMS_ACTIVATION_STATE_OTASP_MDN           = 0x06,
    QMI_DMS_ACTIVATION_STATE_OTASP_IMSI          = 0x07,
    QMI_DMS_ACTIVATION_STATE_OTASP_PRL           = 0x08,
    QMI_DMS_ACTIVATION_STATE_OTASP_SPC           = 0x09,
    QMI_DMS_ACTIVATION_STATE_OTASP_COMMITED      = 0x0A
} QmiDmsActivationState;

/*****************************************************************************/
/* Helper enums for the 'QMI DMS UIM Get CK Status' message */

/**
 * QmiDmsUimFacility:
 * @QMI_DMS_UIM_FACILITY_PN: Network personalization facility.
 * @QMI_DMS_UIM_FACILITY_PU: Network subset personalization facility.
 * @QMI_DMS_UIM_FACILITY_PP: Service provider facility.
 * @QMI_DMS_UIM_FACILITY_PC: Corporate personalization facility.
 * @QMI_DMS_UIM_FACILITY_PF: UIM personalization facility.
 *
 * UIM personalization facilities.
 */
typedef enum {
    QMI_DMS_UIM_FACILITY_PN = 0,
    QMI_DMS_UIM_FACILITY_PU = 1,
    QMI_DMS_UIM_FACILITY_PP = 2,
    QMI_DMS_UIM_FACILITY_PC = 3,
    QMI_DMS_UIM_FACILITY_PF = 4
} QmiDmsUimFacility;

/**
 * QmiDmsUimFacilityState:
 * @QMI_DMS_UIM_FACILITY_STATE_DEACTIVATED: Facility is deactivated.
 * @QMI_DMS_UIM_FACILITY_STATE_ACTIVATED: Facility is activated.
 * @QMI_DMS_UIM_FACILITY_STATE_BLOCKED: Facility is blocked.
 */
typedef enum {
    QMI_DMS_UIM_FACILITY_STATE_DEACTIVATED = 0,
    QMI_DMS_UIM_FACILITY_STATE_ACTIVATED   = 1,
    QMI_DMS_UIM_FACILITY_STATE_BLOCKED     = 2
} QmiDmsUimFacilityState;

/*****************************************************************************/
/* Helper enums for the 'QMI DMS UIM Get State' message */

/**
 * QmiDmsUimState:
 * @QMI_DMS_UIM_STATE_INITIALIZATION_COMPLETED: UIM initialization completed.
 * @QMI_DMS_UIM_STATE_LOCKED_OR_FAILED: UIM is locked or failed.
 * @QMI_DMS_UIM_STATE_NOT_PRESENT: No UIM in the device.
 * @QMI_DMS_UIM_STATE_RESERVED: Reserved, unknown.
 * @QMI_DMS_UIM_STATE_UNKNOWN: UIM state currently unavailable.
 *
 * State of the UIM.
 */
typedef enum {
    QMI_DMS_UIM_STATE_INITIALIZATION_COMPLETED = 0x00,
    QMI_DMS_UIM_STATE_LOCKED_OR_FAILED         = 0x01,
    QMI_DMS_UIM_STATE_NOT_PRESENT              = 0x02,
    QMI_DMS_UIM_STATE_RESERVED                 = 0x03,
    QMI_DMS_UIM_STATE_UNKNOWN                  = 0xFF
} QmiDmsUimState;

/*****************************************************************************/
/* Helper enums for the 'QMI DMS Get Band Capability' message */

/**
 * QmiDmsBandCapability:
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_0_A_SYSTEM: Band class 0, A-system.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_0_B_SYSTEM: Band class 0, B-system.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_1_ALL_BLOCKS: Band class 1, all blocks.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_2: Band class 2.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_3_A_SYSTEM: Band class 3, A-system.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_4_ALL_BLOCKS: Band class 4, all blocks.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_5_ALL_BLOCKS: Band class 5, all blocks.
 * @QMI_DMS_BAND_CAPABILITY_GSM_DCS: GSM DCS band.
 * @QMI_DMS_BAND_CAPABILITY_GSM_EGSM: GSM Extended GSM band (900).
 * @QMI_DMS_BAND_CAPABILITY_GSM_PGSM: GSM Primary GSM band (900).
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_6: Band class 6.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_7: Band class 7.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_8: Band class 8.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_9: Band class 9.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_10: Band class 10.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_11: Band class 11.
 * @QMI_DMS_BAND_CAPABILITY_GSM_450: GSM 450 band.
 * @QMI_DMS_BAND_CAPABILITY_GSM_480: GSM 480 band.
 * @QMI_DMS_BAND_CAPABILITY_GSM_750: GSM 750 band.
 * @QMI_DMS_BAND_CAPABILITY_GSM_850: GSM 850 band.
 * @QMI_DMS_BAND_CAPABILITY_GSM_RAILWAYS: GSM railways band (900).
 * @QMI_DMS_BAND_CAPABILITY_GSM_PCS: GSM PCS band (1900).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_2100: WCDMA 2100 band (Europe, Japan, China).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_PCS_1900: WCDMA PCS 1900 band (US).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_DCS_1800: WCDMA DCS 1800 band (Europe, China).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_1700_US: WCDMA 1700 band (US).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_850_US: WCDMA 850 band (US).
 * @QMI_DMS_BAND_CAPABILITY_QWCDMA_800: QWCDMA 850 band (Japan).
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_12: Band class 12.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_14: Band class 14.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_15: Band class 15.
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_2600: WCDMA 2600 band (Europe).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_900: WCDMA 900 band (Europe, Japan).
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_1700_JAPAN: WCDMA 1700 band (Japan).
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_16: Band class 16.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_17: Band class 17.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_18: Band class 18.
 * @QMI_DMS_BAND_CAPABILITY_BAND_CLASS_19: Band class 19.
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_850_JAPAN: WCDMA 850 band (Japan)
 * @QMI_DMS_BAND_CAPABILITY_WCDMA_1500: WCDMA 1500 band.
 *
 * Frequency bands.
 */
typedef enum { /*< skip >*/
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_0_A_SYSTEM   = 1 << 0,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_0_B_SYSTEM   = 1 << 1,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_1_ALL_BLOCKS = 1 << 2,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_2            = 1 << 3,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_3_A_SYSTEM   = 1 << 4,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_4_ALL_BLOCKS = 1 << 5,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_5_ALL_BLOCKS = 1 << 6,
    QMI_DMS_BAND_CAPABILITY_GSM_DCS                 = 1 << 7,
    QMI_DMS_BAND_CAPABILITY_GSM_EGSM                = 1 << 8,
    QMI_DMS_BAND_CAPABILITY_GSM_PGSM                = 1 << 9,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_6            = 1 << 10,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_7            = 1 << 11,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_8            = 1 << 12,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_9            = 1 << 13,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_10           = 1 << 14,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_11           = 1 << 15,
    QMI_DMS_BAND_CAPABILITY_GSM_450                 = 1 << 16,
    QMI_DMS_BAND_CAPABILITY_GSM_480                 = 1 << 17,
    QMI_DMS_BAND_CAPABILITY_GSM_750                 = 1 << 18,
    QMI_DMS_BAND_CAPABILITY_GSM_850                 = 1 << 19,
    QMI_DMS_BAND_CAPABILITY_GSM_RAILWAYS            = 1 << 20,
    QMI_DMS_BAND_CAPABILITY_GSM_PCS                 = 1 << 21,
    QMI_DMS_BAND_CAPABILITY_WCDMA_2100              = 1 << 22,
    QMI_DMS_BAND_CAPABILITY_WCDMA_PCS_1900          = 1 << 23,
    QMI_DMS_BAND_CAPABILITY_WCDMA_DCS_1800          = 1 << 24,
    QMI_DMS_BAND_CAPABILITY_WCDMA_1700_US           = 1 << 25,
    QMI_DMS_BAND_CAPABILITY_WCDMA_850_US            = 1 << 26,
    QMI_DMS_BAND_CAPABILITY_QWCDMA_800              = 1 << 27,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_12           = 1 << 28,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_14           = 1 << 29,
    /* Bit 30 reserved */
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_15           = 1 << 31,
    /* Bits 32-47 reserved */
    QMI_DMS_BAND_CAPABILITY_WCDMA_2600              = ((guint64) 1) << 48,
    QMI_DMS_BAND_CAPABILITY_WCDMA_900               = ((guint64) 1) << 49,
    QMI_DMS_BAND_CAPABILITY_WCDMA_1700_JAPAN        = ((guint64) 1) << 50,
    /* Bits 51-55 reserved */
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_16           = ((guint64) 1) << 56,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_17           = ((guint64) 1) << 57,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_18           = ((guint64) 1) << 58,
    QMI_DMS_BAND_CAPABILITY_BAND_CLASS_19           = ((guint64) 1) << 59,
    QMI_DMS_BAND_CAPABILITY_WCDMA_850_JAPAN         = ((guint64) 1) << 60,
    QMI_DMS_BAND_CAPABILITY_WCDMA_1500              = ((guint64) 1) << 61,
    /* Bits 62-63 reserved */
} QmiDmsBandCapability;

/**
 * QmiDmsLteBandCapability:
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_1: LTE EUTRAN Band 1
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_2: LTE EUTRAN Band 2.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_3: LTE EUTRAN Band 3.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_4: LTE EUTRAN Band 4.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_5: LTE EUTRAN Band 5.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_6: LTE EUTRAN Band 6.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_7: LTE EUTRAN Band 7.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_8: LTE EUTRAN Band 8.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_9: LTE EUTRAN Band 9.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_10: LTE EUTRAN Band 10.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_11: LTE EUTRAN Band 11.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_12: LTE EUTRAN Band 12.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_13: LTE EUTRAN Band 13.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_14: LTE EUTRAN Band 14.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_17: LTE EUTRAN Band 17.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_18: LTE EUTRAN Band 18.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_19: LTE EUTRAN Band 19.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_20: LTE EUTRAN Band 20.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_21: LTE EUTRAN Band 21.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_24: LTE EUTRAN Band 24.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_25: LTE EUTRAN Band 25.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_33: LTE EUTRAN Band 33.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_34: LTE EUTRAN Band 34.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_35: LTE EUTRAN Band 35.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_36: LTE EUTRAN Band 36.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_37: LTE EUTRAN Band 37.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_38: LTE EUTRAN Band 38.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_39: LTE EUTRAN Band 39.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_40: LTE EUTRAN Band 40.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_41: LTE EUTRAN Band 41.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_42: LTE EUTRAN Band 42.
 * @QMI_DMS_LTE_BAND_CAPABILITY_BAND_43: LTE EUTRAN Band 43.
 *
 * LTE-specific Frequency bands.
 */
typedef enum { /*< skip >*/
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_1 = 1 << 0,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_2 = 1 << 1,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_3 = 1 << 2,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_4 = 1 << 3,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_5 = 1 << 4,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_6 = 1 << 5,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_7 = 1 << 6,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_8 = 1 << 7,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_9 = 1 << 8,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_10 = 1 << 9,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_11 = 1 << 10,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_12 = 1 << 11,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_13 = 1 << 12,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_14 = 1 << 13,
    /* Bit 14-15 reserved */
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_17 = 1 << 16,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_18 = 1 << 17,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_19 = 1 << 18,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_20 = 1 << 19,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_21 = 1 << 20,
    /* Bit 21-22 reserved */
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_24 = 1 << 23,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_25 = 1 << 24,
    /* Bit 25-31 reserved */
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_33 = ((guint64) 1) << 32,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_34 = ((guint64) 1) << 33,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_35 = ((guint64) 1) << 34,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_36 = ((guint64) 1) << 35,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_37 = ((guint64) 1) << 36,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_38 = ((guint64) 1) << 37,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_39 = ((guint64) 1) << 38,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_40 = ((guint64) 1) << 39,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_41 = ((guint64) 1) << 40,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_42 = ((guint64) 1) << 41,
    QMI_DMS_LTE_BAND_CAPABILITY_BAND_43 = ((guint64) 1) << 42
    /* Bit 43-64 reserved */
} QmiDmsLteBandCapability;

#endif /* _LIBQMI_GLIB_QMI_ENUMS_DMS_H_ */
