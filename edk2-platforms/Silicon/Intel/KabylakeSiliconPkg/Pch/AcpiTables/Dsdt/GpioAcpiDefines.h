/**@file

Copyright (c) 2017, Intel Corporation. All rights reserved.<BR>
SPDX-License-Identifier: BSD-2-Clause-Patent

**/


//
// Definition for GPIO groups and pads
//
#ifndef GPIO_DEFINE_ASL
#define GPIO_DEFINE_ASL

#include "GpioPinsSklLp.h"
#include "GpioPinsSklH.h"
#include "Register/PchRegsGpio.h"

//
// SKL-PCH GPIO Community address
//
#define PCH_GPIO_COM0 0x00af0000 // PID_GPIOCOM0 = 0xAF
#define PCH_GPIO_COM1 0x00ae0000 // PID_GPIOCOM1 = 0xAE
#define PCH_GPIO_COM2 0x00ad0000 // PID_GPIOCOM2 = 0xAD
#define PCH_GPIO_COM3 0x00ac0000 // PID_GPIOCOM3 = 0xAC

//
// SKL-PCH-LP GPIO pin list for driver usage
//
#define GPIO_SKL_LP_DRIVER_GPP_A_00 0
#define GPIO_SKL_LP_DRIVER_GPP_A_01 1
#define GPIO_SKL_LP_DRIVER_GPP_A_02 2
#define GPIO_SKL_LP_DRIVER_GPP_A_03 3
#define GPIO_SKL_LP_DRIVER_GPP_A_04 4
#define GPIO_SKL_LP_DRIVER_GPP_A_05 5
#define GPIO_SKL_LP_DRIVER_GPP_A_06 6
#define GPIO_SKL_LP_DRIVER_GPP_A_07 7
#define GPIO_SKL_LP_DRIVER_GPP_A_08 8
#define GPIO_SKL_LP_DRIVER_GPP_A_09 9
#define GPIO_SKL_LP_DRIVER_GPP_A_10 10
#define GPIO_SKL_LP_DRIVER_GPP_A_11 11
#define GPIO_SKL_LP_DRIVER_GPP_A_12 12
#define GPIO_SKL_LP_DRIVER_GPP_A_13 13
#define GPIO_SKL_LP_DRIVER_GPP_A_14 14
#define GPIO_SKL_LP_DRIVER_GPP_A_15 15
#define GPIO_SKL_LP_DRIVER_GPP_A_16 16
#define GPIO_SKL_LP_DRIVER_GPP_A_17 17
#define GPIO_SKL_LP_DRIVER_GPP_A_18 18
#define GPIO_SKL_LP_DRIVER_GPP_A_19 19
#define GPIO_SKL_LP_DRIVER_GPP_A_20 20
#define GPIO_SKL_LP_DRIVER_GPP_A_21 21
#define GPIO_SKL_LP_DRIVER_GPP_A_22 22
#define GPIO_SKL_LP_DRIVER_GPP_A_23 23

#define GPIO_SKL_LP_DRIVER_GPP_B_00 24
#define GPIO_SKL_LP_DRIVER_GPP_B_01 25
#define GPIO_SKL_LP_DRIVER_GPP_B_02 26
#define GPIO_SKL_LP_DRIVER_GPP_B_03 27
#define GPIO_SKL_LP_DRIVER_GPP_B_04 28
#define GPIO_SKL_LP_DRIVER_GPP_B_05 29
#define GPIO_SKL_LP_DRIVER_GPP_B_06 30
#define GPIO_SKL_LP_DRIVER_GPP_B_07 31
#define GPIO_SKL_LP_DRIVER_GPP_B_08 32
#define GPIO_SKL_LP_DRIVER_GPP_B_09 33
#define GPIO_SKL_LP_DRIVER_GPP_B_10 34
#define GPIO_SKL_LP_DRIVER_GPP_B_11 35
#define GPIO_SKL_LP_DRIVER_GPP_B_12 36
#define GPIO_SKL_LP_DRIVER_GPP_B_13 37
#define GPIO_SKL_LP_DRIVER_GPP_B_14 38
#define GPIO_SKL_LP_DRIVER_GPP_B_15 39
#define GPIO_SKL_LP_DRIVER_GPP_B_16 40
#define GPIO_SKL_LP_DRIVER_GPP_B_17 41
#define GPIO_SKL_LP_DRIVER_GPP_B_18 42
#define GPIO_SKL_LP_DRIVER_GPP_B_19 43
#define GPIO_SKL_LP_DRIVER_GPP_B_20 44
#define GPIO_SKL_LP_DRIVER_GPP_B_21 45
#define GPIO_SKL_LP_DRIVER_GPP_B_22 46
#define GPIO_SKL_LP_DRIVER_GPP_B_23 47

#define GPIO_SKL_LP_DRIVER_GPP_C_00 48
#define GPIO_SKL_LP_DRIVER_GPP_C_01 49
#define GPIO_SKL_LP_DRIVER_GPP_C_02 50
#define GPIO_SKL_LP_DRIVER_GPP_C_03 51
#define GPIO_SKL_LP_DRIVER_GPP_C_04 52
#define GPIO_SKL_LP_DRIVER_GPP_C_05 53
#define GPIO_SKL_LP_DRIVER_GPP_C_06 54
#define GPIO_SKL_LP_DRIVER_GPP_C_07 55
#define GPIO_SKL_LP_DRIVER_GPP_C_08 56
#define GPIO_SKL_LP_DRIVER_GPP_C_09 57
#define GPIO_SKL_LP_DRIVER_GPP_C_10 58
#define GPIO_SKL_LP_DRIVER_GPP_C_11 59
#define GPIO_SKL_LP_DRIVER_GPP_C_12 60
#define GPIO_SKL_LP_DRIVER_GPP_C_13 61
#define GPIO_SKL_LP_DRIVER_GPP_C_14 62
#define GPIO_SKL_LP_DRIVER_GPP_C_15 63
#define GPIO_SKL_LP_DRIVER_GPP_C_16 64
#define GPIO_SKL_LP_DRIVER_GPP_C_17 65
#define GPIO_SKL_LP_DRIVER_GPP_C_18 66
#define GPIO_SKL_LP_DRIVER_GPP_C_19 67
#define GPIO_SKL_LP_DRIVER_GPP_C_20 68
#define GPIO_SKL_LP_DRIVER_GPP_C_21 69
#define GPIO_SKL_LP_DRIVER_GPP_C_22 70
#define GPIO_SKL_LP_DRIVER_GPP_C_23 71

#define GPIO_SKL_LP_DRIVER_GPP_D_00 72
#define GPIO_SKL_LP_DRIVER_GPP_D_01 73
#define GPIO_SKL_LP_DRIVER_GPP_D_02 74
#define GPIO_SKL_LP_DRIVER_GPP_D_03 75
#define GPIO_SKL_LP_DRIVER_GPP_D_04 76
#define GPIO_SKL_LP_DRIVER_GPP_D_05 77
#define GPIO_SKL_LP_DRIVER_GPP_D_06 78
#define GPIO_SKL_LP_DRIVER_GPP_D_07 79
#define GPIO_SKL_LP_DRIVER_GPP_D_08 80
#define GPIO_SKL_LP_DRIVER_GPP_D_09 81
#define GPIO_SKL_LP_DRIVER_GPP_D_10 82
#define GPIO_SKL_LP_DRIVER_GPP_D_11 83
#define GPIO_SKL_LP_DRIVER_GPP_D_12 84
#define GPIO_SKL_LP_DRIVER_GPP_D_13 85
#define GPIO_SKL_LP_DRIVER_GPP_D_14 86
#define GPIO_SKL_LP_DRIVER_GPP_D_15 87
#define GPIO_SKL_LP_DRIVER_GPP_D_16 88
#define GPIO_SKL_LP_DRIVER_GPP_D_17 89
#define GPIO_SKL_LP_DRIVER_GPP_D_18 90
#define GPIO_SKL_LP_DRIVER_GPP_D_19 91
#define GPIO_SKL_LP_DRIVER_GPP_D_20 92
#define GPIO_SKL_LP_DRIVER_GPP_D_21 93
#define GPIO_SKL_LP_DRIVER_GPP_D_22 94
#define GPIO_SKL_LP_DRIVER_GPP_D_23 95

#define GPIO_SKL_LP_DRIVER_GPP_E_00 96
#define GPIO_SKL_LP_DRIVER_GPP_E_01 97
#define GPIO_SKL_LP_DRIVER_GPP_E_02 98
#define GPIO_SKL_LP_DRIVER_GPP_E_03 99
#define GPIO_SKL_LP_DRIVER_GPP_E_04 100
#define GPIO_SKL_LP_DRIVER_GPP_E_05 101
#define GPIO_SKL_LP_DRIVER_GPP_E_06 102
#define GPIO_SKL_LP_DRIVER_GPP_E_07 103
#define GPIO_SKL_LP_DRIVER_GPP_E_08 104
#define GPIO_SKL_LP_DRIVER_GPP_E_09 105
#define GPIO_SKL_LP_DRIVER_GPP_E_10 106
#define GPIO_SKL_LP_DRIVER_GPP_E_11 107
#define GPIO_SKL_LP_DRIVER_GPP_E_12 108
#define GPIO_SKL_LP_DRIVER_GPP_E_13 109
#define GPIO_SKL_LP_DRIVER_GPP_E_14 110
#define GPIO_SKL_LP_DRIVER_GPP_E_15 111
#define GPIO_SKL_LP_DRIVER_GPP_E_16 112
#define GPIO_SKL_LP_DRIVER_GPP_E_17 113
#define GPIO_SKL_LP_DRIVER_GPP_E_18 114
#define GPIO_SKL_LP_DRIVER_GPP_E_19 115
#define GPIO_SKL_LP_DRIVER_GPP_E_20 116
#define GPIO_SKL_LP_DRIVER_GPP_E_21 117
#define GPIO_SKL_LP_DRIVER_GPP_E_22 118
#define GPIO_SKL_LP_DRIVER_GPP_E_23 119

#define GPIO_SKL_LP_DRIVER_GPP_F_00 120
#define GPIO_SKL_LP_DRIVER_GPP_F_01 121
#define GPIO_SKL_LP_DRIVER_GPP_F_02 122
#define GPIO_SKL_LP_DRIVER_GPP_F_03 123
#define GPIO_SKL_LP_DRIVER_GPP_F_04 124
#define GPIO_SKL_LP_DRIVER_GPP_F_05 125
#define GPIO_SKL_LP_DRIVER_GPP_F_06 126
#define GPIO_SKL_LP_DRIVER_GPP_F_07 127
#define GPIO_SKL_LP_DRIVER_GPP_F_08 128
#define GPIO_SKL_LP_DRIVER_GPP_F_09 129
#define GPIO_SKL_LP_DRIVER_GPP_F_10 130
#define GPIO_SKL_LP_DRIVER_GPP_F_11 131
#define GPIO_SKL_LP_DRIVER_GPP_F_12 132
#define GPIO_SKL_LP_DRIVER_GPP_F_13 133
#define GPIO_SKL_LP_DRIVER_GPP_F_14 134
#define GPIO_SKL_LP_DRIVER_GPP_F_15 135
#define GPIO_SKL_LP_DRIVER_GPP_F_16 136
#define GPIO_SKL_LP_DRIVER_GPP_F_17 137
#define GPIO_SKL_LP_DRIVER_GPP_F_18 138
#define GPIO_SKL_LP_DRIVER_GPP_F_19 139
#define GPIO_SKL_LP_DRIVER_GPP_F_20 140
#define GPIO_SKL_LP_DRIVER_GPP_F_21 141
#define GPIO_SKL_LP_DRIVER_GPP_F_22 142
#define GPIO_SKL_LP_DRIVER_GPP_F_23 143

#define GPIO_SKL_LP_DRIVER_GPP_G_00 144
#define GPIO_SKL_LP_DRIVER_GPP_G_01 145
#define GPIO_SKL_LP_DRIVER_GPP_G_02 146
#define GPIO_SKL_LP_DRIVER_GPP_G_03 147
#define GPIO_SKL_LP_DRIVER_GPP_G_04 148
#define GPIO_SKL_LP_DRIVER_GPP_G_05 149
#define GPIO_SKL_LP_DRIVER_GPP_G_06 150
#define GPIO_SKL_LP_DRIVER_GPP_G_07 151

//
// SPT H GPIO pin list for driver usage
//
#define GPIO_SKL_H_DRIVER_GPP_A_00 0
#define GPIO_SKL_H_DRIVER_GPP_A_01 1
#define GPIO_SKL_H_DRIVER_GPP_A_02 2
#define GPIO_SKL_H_DRIVER_GPP_A_03 3
#define GPIO_SKL_H_DRIVER_GPP_A_04 4
#define GPIO_SKL_H_DRIVER_GPP_A_05 5
#define GPIO_SKL_H_DRIVER_GPP_A_06 6
#define GPIO_SKL_H_DRIVER_GPP_A_07 7
#define GPIO_SKL_H_DRIVER_GPP_A_08 8
#define GPIO_SKL_H_DRIVER_GPP_A_09 9
#define GPIO_SKL_H_DRIVER_GPP_A_10 10
#define GPIO_SKL_H_DRIVER_GPP_A_11 11
#define GPIO_SKL_H_DRIVER_GPP_A_12 12
#define GPIO_SKL_H_DRIVER_GPP_A_13 13
#define GPIO_SKL_H_DRIVER_GPP_A_14 14
#define GPIO_SKL_H_DRIVER_GPP_A_15 15
#define GPIO_SKL_H_DRIVER_GPP_A_16 16
#define GPIO_SKL_H_DRIVER_GPP_A_17 17
#define GPIO_SKL_H_DRIVER_GPP_A_18 18
#define GPIO_SKL_H_DRIVER_GPP_A_19 19
#define GPIO_SKL_H_DRIVER_GPP_A_20 20
#define GPIO_SKL_H_DRIVER_GPP_A_21 21
#define GPIO_SKL_H_DRIVER_GPP_A_22 22
#define GPIO_SKL_H_DRIVER_GPP_A_23 23

#define GPIO_SKL_H_DRIVER_GPP_B_00 24
#define GPIO_SKL_H_DRIVER_GPP_B_01 25
#define GPIO_SKL_H_DRIVER_GPP_B_02 26
#define GPIO_SKL_H_DRIVER_GPP_B_03 27
#define GPIO_SKL_H_DRIVER_GPP_B_04 28
#define GPIO_SKL_H_DRIVER_GPP_B_05 29
#define GPIO_SKL_H_DRIVER_GPP_B_06 30
#define GPIO_SKL_H_DRIVER_GPP_B_07 31
#define GPIO_SKL_H_DRIVER_GPP_B_08 32
#define GPIO_SKL_H_DRIVER_GPP_B_09 33
#define GPIO_SKL_H_DRIVER_GPP_B_10 34
#define GPIO_SKL_H_DRIVER_GPP_B_11 35
#define GPIO_SKL_H_DRIVER_GPP_B_12 36
#define GPIO_SKL_H_DRIVER_GPP_B_13 37
#define GPIO_SKL_H_DRIVER_GPP_B_14 38
#define GPIO_SKL_H_DRIVER_GPP_B_15 39
#define GPIO_SKL_H_DRIVER_GPP_B_16 40
#define GPIO_SKL_H_DRIVER_GPP_B_17 41
#define GPIO_SKL_H_DRIVER_GPP_B_18 42
#define GPIO_SKL_H_DRIVER_GPP_B_19 43
#define GPIO_SKL_H_DRIVER_GPP_B_20 44
#define GPIO_SKL_H_DRIVER_GPP_B_21 45
#define GPIO_SKL_H_DRIVER_GPP_B_22 46
#define GPIO_SKL_H_DRIVER_GPP_B_23 47

#define GPIO_SKL_H_DRIVER_GPP_C_00 48
#define GPIO_SKL_H_DRIVER_GPP_C_01 49
#define GPIO_SKL_H_DRIVER_GPP_C_02 50
#define GPIO_SKL_H_DRIVER_GPP_C_03 51
#define GPIO_SKL_H_DRIVER_GPP_C_04 52
#define GPIO_SKL_H_DRIVER_GPP_C_05 53
#define GPIO_SKL_H_DRIVER_GPP_C_06 54
#define GPIO_SKL_H_DRIVER_GPP_C_07 55
#define GPIO_SKL_H_DRIVER_GPP_C_08 56
#define GPIO_SKL_H_DRIVER_GPP_C_09 57
#define GPIO_SKL_H_DRIVER_GPP_C_10 58
#define GPIO_SKL_H_DRIVER_GPP_C_11 59
#define GPIO_SKL_H_DRIVER_GPP_C_12 60
#define GPIO_SKL_H_DRIVER_GPP_C_13 61
#define GPIO_SKL_H_DRIVER_GPP_C_14 62
#define GPIO_SKL_H_DRIVER_GPP_C_15 63
#define GPIO_SKL_H_DRIVER_GPP_C_16 64
#define GPIO_SKL_H_DRIVER_GPP_C_17 65
#define GPIO_SKL_H_DRIVER_GPP_C_18 66
#define GPIO_SKL_H_DRIVER_GPP_C_19 67
#define GPIO_SKL_H_DRIVER_GPP_C_20 68
#define GPIO_SKL_H_DRIVER_GPP_C_21 69
#define GPIO_SKL_H_DRIVER_GPP_C_22 70
#define GPIO_SKL_H_DRIVER_GPP_C_23 71

#define GPIO_SKL_H_DRIVER_GPP_D_00 72
#define GPIO_SKL_H_DRIVER_GPP_D_01 73
#define GPIO_SKL_H_DRIVER_GPP_D_02 74
#define GPIO_SKL_H_DRIVER_GPP_D_03 75
#define GPIO_SKL_H_DRIVER_GPP_D_04 76
#define GPIO_SKL_H_DRIVER_GPP_D_05 77
#define GPIO_SKL_H_DRIVER_GPP_D_06 78
#define GPIO_SKL_H_DRIVER_GPP_D_07 79
#define GPIO_SKL_H_DRIVER_GPP_D_08 80
#define GPIO_SKL_H_DRIVER_GPP_D_09 81
#define GPIO_SKL_H_DRIVER_GPP_D_10 82
#define GPIO_SKL_H_DRIVER_GPP_D_11 83
#define GPIO_SKL_H_DRIVER_GPP_D_12 84
#define GPIO_SKL_H_DRIVER_GPP_D_13 85
#define GPIO_SKL_H_DRIVER_GPP_D_14 86
#define GPIO_SKL_H_DRIVER_GPP_D_15 87
#define GPIO_SKL_H_DRIVER_GPP_D_16 88
#define GPIO_SKL_H_DRIVER_GPP_D_17 89
#define GPIO_SKL_H_DRIVER_GPP_D_18 90
#define GPIO_SKL_H_DRIVER_GPP_D_19 91
#define GPIO_SKL_H_DRIVER_GPP_D_20 92
#define GPIO_SKL_H_DRIVER_GPP_D_21 93
#define GPIO_SKL_H_DRIVER_GPP_D_22 94
#define GPIO_SKL_H_DRIVER_GPP_D_23 95

#define GPIO_SKL_H_DRIVER_GPP_E_00 96
#define GPIO_SKL_H_DRIVER_GPP_E_01 97
#define GPIO_SKL_H_DRIVER_GPP_E_02 98
#define GPIO_SKL_H_DRIVER_GPP_E_03 99
#define GPIO_SKL_H_DRIVER_GPP_E_04 100
#define GPIO_SKL_H_DRIVER_GPP_E_05 101
#define GPIO_SKL_H_DRIVER_GPP_E_06 102
#define GPIO_SKL_H_DRIVER_GPP_E_07 103
#define GPIO_SKL_H_DRIVER_GPP_E_08 104
#define GPIO_SKL_H_DRIVER_GPP_E_09 105
#define GPIO_SKL_H_DRIVER_GPP_E_10 106
#define GPIO_SKL_H_DRIVER_GPP_E_11 107
#define GPIO_SKL_H_DRIVER_GPP_E_12 108
#define GPIO_SKL_H_DRIVER_GPP_E_13 109

#define GPIO_SKL_H_DRIVER_GPP_F_00 120
#define GPIO_SKL_H_DRIVER_GPP_F_01 121
#define GPIO_SKL_H_DRIVER_GPP_F_02 122
#define GPIO_SKL_H_DRIVER_GPP_F_03 123
#define GPIO_SKL_H_DRIVER_GPP_F_04 124
#define GPIO_SKL_H_DRIVER_GPP_F_05 125
#define GPIO_SKL_H_DRIVER_GPP_F_06 126
#define GPIO_SKL_H_DRIVER_GPP_F_07 127
#define GPIO_SKL_H_DRIVER_GPP_F_08 128
#define GPIO_SKL_H_DRIVER_GPP_F_09 129
#define GPIO_SKL_H_DRIVER_GPP_F_10 130
#define GPIO_SKL_H_DRIVER_GPP_F_11 131
#define GPIO_SKL_H_DRIVER_GPP_F_12 132
#define GPIO_SKL_H_DRIVER_GPP_F_13 133
#define GPIO_SKL_H_DRIVER_GPP_F_14 134
#define GPIO_SKL_H_DRIVER_GPP_F_15 135
#define GPIO_SKL_H_DRIVER_GPP_F_16 136
#define GPIO_SKL_H_DRIVER_GPP_F_17 137
#define GPIO_SKL_H_DRIVER_GPP_F_18 138
#define GPIO_SKL_H_DRIVER_GPP_F_19 139
#define GPIO_SKL_H_DRIVER_GPP_F_20 140
#define GPIO_SKL_H_DRIVER_GPP_F_21 141
#define GPIO_SKL_H_DRIVER_GPP_F_22 142
#define GPIO_SKL_H_DRIVER_GPP_F_23 143

#define GPIO_SKL_H_DRIVER_GPP_G_00 144
#define GPIO_SKL_H_DRIVER_GPP_G_01 145
#define GPIO_SKL_H_DRIVER_GPP_G_02 146
#define GPIO_SKL_H_DRIVER_GPP_G_03 147
#define GPIO_SKL_H_DRIVER_GPP_G_04 148
#define GPIO_SKL_H_DRIVER_GPP_G_05 149
#define GPIO_SKL_H_DRIVER_GPP_G_06 150
#define GPIO_SKL_H_DRIVER_GPP_G_07 151
#define GPIO_SKL_H_DRIVER_GPP_G_08 152
#define GPIO_SKL_H_DRIVER_GPP_G_09 153
#define GPIO_SKL_H_DRIVER_GPP_G_10 154
#define GPIO_SKL_H_DRIVER_GPP_G_11 155
#define GPIO_SKL_H_DRIVER_GPP_G_12 156
#define GPIO_SKL_H_DRIVER_GPP_G_13 157
#define GPIO_SKL_H_DRIVER_GPP_G_14 158
#define GPIO_SKL_H_DRIVER_GPP_G_15 159
#define GPIO_SKL_H_DRIVER_GPP_G_16 160
#define GPIO_SKL_H_DRIVER_GPP_G_17 161
#define GPIO_SKL_H_DRIVER_GPP_G_18 162
#define GPIO_SKL_H_DRIVER_GPP_G_19 163
#define GPIO_SKL_H_DRIVER_GPP_G_20 164
#define GPIO_SKL_H_DRIVER_GPP_G_21 165
#define GPIO_SKL_H_DRIVER_GPP_G_22 166
#define GPIO_SKL_H_DRIVER_GPP_G_23 167

#define GPIO_SKL_H_DRIVER_GPP_H_00 168
#define GPIO_SKL_H_DRIVER_GPP_H_01 169
#define GPIO_SKL_H_DRIVER_GPP_H_02 170
#define GPIO_SKL_H_DRIVER_GPP_H_03 171
#define GPIO_SKL_H_DRIVER_GPP_H_04 172
#define GPIO_SKL_H_DRIVER_GPP_H_05 173
#define GPIO_SKL_H_DRIVER_GPP_H_06 174
#define GPIO_SKL_H_DRIVER_GPP_H_07 175
#define GPIO_SKL_H_DRIVER_GPP_H_08 176
#define GPIO_SKL_H_DRIVER_GPP_H_09 177
#define GPIO_SKL_H_DRIVER_GPP_H_10 178
#define GPIO_SKL_H_DRIVER_GPP_H_11 179
#define GPIO_SKL_H_DRIVER_GPP_H_12 180
#define GPIO_SKL_H_DRIVER_GPP_H_13 181
#define GPIO_SKL_H_DRIVER_GPP_H_14 182
#define GPIO_SKL_H_DRIVER_GPP_H_15 183
#define GPIO_SKL_H_DRIVER_GPP_H_16 184
#define GPIO_SKL_H_DRIVER_GPP_H_17 185
#define GPIO_SKL_H_DRIVER_GPP_H_18 186
#define GPIO_SKL_H_DRIVER_GPP_H_19 187
#define GPIO_SKL_H_DRIVER_GPP_H_20 188
#define GPIO_SKL_H_DRIVER_GPP_H_21 189
#define GPIO_SKL_H_DRIVER_GPP_H_22 190
#define GPIO_SKL_H_DRIVER_GPP_H_23 191

#define PCH_I_GPIO_DRIVER_GPP_I_00 192
#define PCH_I_GPIO_DRIVER_GPP_I_01 193
#define PCH_I_GPIO_DRIVER_GPP_I_02 194
#define PCH_I_GPIO_DRIVER_GPP_I_03 195
#define PCH_I_GPIO_DRIVER_GPP_I_04 196
#define PCH_I_GPIO_DRIVER_GPP_I_05 197
#define PCH_I_GPIO_DRIVER_GPP_I_06 198
#define PCH_I_GPIO_DRIVER_GPP_I_07 199
#define PCH_I_GPIO_DRIVER_GPP_I_08 200
#define PCH_I_GPIO_DRIVER_GPP_I_09 201
#define PCH_I_GPIO_DRIVER_GPP_I_10 202

//
// SPT GPIO IOxAPIC interrupts
//
// SPT-LP:
#define GPIO_SKL_LP_IOAPIC_GPP_A_00 0x18
#define GPIO_SKL_LP_IOAPIC_GPP_A_01 0x19
#define GPIO_SKL_LP_IOAPIC_GPP_A_02 0x1a
#define GPIO_SKL_LP_IOAPIC_GPP_A_03 0x1b
#define GPIO_SKL_LP_IOAPIC_GPP_A_04 0x1c
#define GPIO_SKL_LP_IOAPIC_GPP_A_05 0x1d
#define GPIO_SKL_LP_IOAPIC_GPP_A_06 0x1e
#define GPIO_SKL_LP_IOAPIC_GPP_A_07 0x1f
#define GPIO_SKL_LP_IOAPIC_GPP_A_08 0x20
#define GPIO_SKL_LP_IOAPIC_GPP_A_09 0x21
#define GPIO_SKL_LP_IOAPIC_GPP_A_10 0x22
#define GPIO_SKL_LP_IOAPIC_GPP_A_11 0x23
#define GPIO_SKL_LP_IOAPIC_GPP_A_12 0x24
#define GPIO_SKL_LP_IOAPIC_GPP_A_13 0x25
#define GPIO_SKL_LP_IOAPIC_GPP_A_14 0x26
#define GPIO_SKL_LP_IOAPIC_GPP_A_15 0x27
#define GPIO_SKL_LP_IOAPIC_GPP_A_16 0x28
#define GPIO_SKL_LP_IOAPIC_GPP_A_17 0x29
#define GPIO_SKL_LP_IOAPIC_GPP_A_18 0x2a
#define GPIO_SKL_LP_IOAPIC_GPP_A_19 0x2b
#define GPIO_SKL_LP_IOAPIC_GPP_A_20 0x2c
#define GPIO_SKL_LP_IOAPIC_GPP_A_21 0x2d
#define GPIO_SKL_LP_IOAPIC_GPP_A_22 0x2e
#define GPIO_SKL_LP_IOAPIC_GPP_A_23 0x2f

#define GPIO_SKL_LP_IOAPIC_GPP_B_00 0x30
#define GPIO_SKL_LP_IOAPIC_GPP_B_01 0x31
#define GPIO_SKL_LP_IOAPIC_GPP_B_02 0x32
#define GPIO_SKL_LP_IOAPIC_GPP_B_03 0x33
#define GPIO_SKL_LP_IOAPIC_GPP_B_04 0x34
#define GPIO_SKL_LP_IOAPIC_GPP_B_05 0x35
#define GPIO_SKL_LP_IOAPIC_GPP_B_06 0x36
#define GPIO_SKL_LP_IOAPIC_GPP_B_07 0x37
#define GPIO_SKL_LP_IOAPIC_GPP_B_08 0x38
#define GPIO_SKL_LP_IOAPIC_GPP_B_09 0x39
#define GPIO_SKL_LP_IOAPIC_GPP_B_10 0x3a
#define GPIO_SKL_LP_IOAPIC_GPP_B_11 0x3b
#define GPIO_SKL_LP_IOAPIC_GPP_B_12 0x3c
#define GPIO_SKL_LP_IOAPIC_GPP_B_13 0x3d
#define GPIO_SKL_LP_IOAPIC_GPP_B_14 0x3e
#define GPIO_SKL_LP_IOAPIC_GPP_B_15 0x3f
#define GPIO_SKL_LP_IOAPIC_GPP_B_16 0x40
#define GPIO_SKL_LP_IOAPIC_GPP_B_17 0x41
#define GPIO_SKL_LP_IOAPIC_GPP_B_18 0x42
#define GPIO_SKL_LP_IOAPIC_GPP_B_19 0x43
#define GPIO_SKL_LP_IOAPIC_GPP_B_20 0x44
#define GPIO_SKL_LP_IOAPIC_GPP_B_21 0x45
#define GPIO_SKL_LP_IOAPIC_GPP_B_22 0x46
#define GPIO_SKL_LP_IOAPIC_GPP_B_23 0x47

#define GPIO_SKL_LP_IOAPIC_GPP_C_00 0x48
#define GPIO_SKL_LP_IOAPIC_GPP_C_01 0x49
#define GPIO_SKL_LP_IOAPIC_GPP_C_02 0x4a
#define GPIO_SKL_LP_IOAPIC_GPP_C_03 0x4b
#define GPIO_SKL_LP_IOAPIC_GPP_C_04 0x4c
#define GPIO_SKL_LP_IOAPIC_GPP_C_05 0x4d
#define GPIO_SKL_LP_IOAPIC_GPP_C_06 0x4e
#define GPIO_SKL_LP_IOAPIC_GPP_C_07 0x4f
#define GPIO_SKL_LP_IOAPIC_GPP_C_08 0x50
#define GPIO_SKL_LP_IOAPIC_GPP_C_09 0x51
#define GPIO_SKL_LP_IOAPIC_GPP_C_10 0x52
#define GPIO_SKL_LP_IOAPIC_GPP_C_11 0x53
#define GPIO_SKL_LP_IOAPIC_GPP_C_12 0x54
#define GPIO_SKL_LP_IOAPIC_GPP_C_13 0x55
#define GPIO_SKL_LP_IOAPIC_GPP_C_14 0x56
#define GPIO_SKL_LP_IOAPIC_GPP_C_15 0x57
#define GPIO_SKL_LP_IOAPIC_GPP_C_16 0x58
#define GPIO_SKL_LP_IOAPIC_GPP_C_17 0x59
#define GPIO_SKL_LP_IOAPIC_GPP_C_18 0x5a
#define GPIO_SKL_LP_IOAPIC_GPP_C_19 0x5b
#define GPIO_SKL_LP_IOAPIC_GPP_C_20 0x5c
#define GPIO_SKL_LP_IOAPIC_GPP_C_21 0x5d
#define GPIO_SKL_LP_IOAPIC_GPP_C_22 0x5e
#define GPIO_SKL_LP_IOAPIC_GPP_C_23 0x5f

#define GPIO_SKL_LP_IOAPIC_GPP_D_00 0x60
#define GPIO_SKL_LP_IOAPIC_GPP_D_01 0x61
#define GPIO_SKL_LP_IOAPIC_GPP_D_02 0x62
#define GPIO_SKL_LP_IOAPIC_GPP_D_03 0x63
#define GPIO_SKL_LP_IOAPIC_GPP_D_04 0x64
#define GPIO_SKL_LP_IOAPIC_GPP_D_05 0x65
#define GPIO_SKL_LP_IOAPIC_GPP_D_06 0x66
#define GPIO_SKL_LP_IOAPIC_GPP_D_07 0x67
#define GPIO_SKL_LP_IOAPIC_GPP_D_08 0x68
#define GPIO_SKL_LP_IOAPIC_GPP_D_09 0x69
#define GPIO_SKL_LP_IOAPIC_GPP_D_10 0x6a
#define GPIO_SKL_LP_IOAPIC_GPP_D_11 0x6b
#define GPIO_SKL_LP_IOAPIC_GPP_D_12 0x6c
#define GPIO_SKL_LP_IOAPIC_GPP_D_13 0x6d
#define GPIO_SKL_LP_IOAPIC_GPP_D_14 0x6e
#define GPIO_SKL_LP_IOAPIC_GPP_D_15 0x6f
#define GPIO_SKL_LP_IOAPIC_GPP_D_16 0x70
#define GPIO_SKL_LP_IOAPIC_GPP_D_17 0x71
#define GPIO_SKL_LP_IOAPIC_GPP_D_18 0x72
#define GPIO_SKL_LP_IOAPIC_GPP_D_19 0x73
#define GPIO_SKL_LP_IOAPIC_GPP_D_20 0x74
#define GPIO_SKL_LP_IOAPIC_GPP_D_21 0x75
#define GPIO_SKL_LP_IOAPIC_GPP_D_22 0x76
#define GPIO_SKL_LP_IOAPIC_GPP_D_23 0x77

#define GPIO_SKL_LP_IOAPIC_GPP_E_00 0x18
#define GPIO_SKL_LP_IOAPIC_GPP_E_01 0x19
#define GPIO_SKL_LP_IOAPIC_GPP_E_02 0x1a
#define GPIO_SKL_LP_IOAPIC_GPP_E_03 0x1b
#define GPIO_SKL_LP_IOAPIC_GPP_E_04 0x1c
#define GPIO_SKL_LP_IOAPIC_GPP_E_05 0x1d
#define GPIO_SKL_LP_IOAPIC_GPP_E_06 0x1e
#define GPIO_SKL_LP_IOAPIC_GPP_E_07 0x1f
#define GPIO_SKL_LP_IOAPIC_GPP_E_08 0x20
#define GPIO_SKL_LP_IOAPIC_GPP_E_09 0x21
#define GPIO_SKL_LP_IOAPIC_GPP_E_10 0x22
#define GPIO_SKL_LP_IOAPIC_GPP_E_11 0x23
#define GPIO_SKL_LP_IOAPIC_GPP_E_12 0x24
#define GPIO_SKL_LP_IOAPIC_GPP_E_13 0x25
#define GPIO_SKL_LP_IOAPIC_GPP_E_14 0x26
#define GPIO_SKL_LP_IOAPIC_GPP_E_15 0x27
#define GPIO_SKL_LP_IOAPIC_GPP_E_16 0x28
#define GPIO_SKL_LP_IOAPIC_GPP_E_17 0x29
#define GPIO_SKL_LP_IOAPIC_GPP_E_18 0x2a
#define GPIO_SKL_LP_IOAPIC_GPP_E_19 0x2b
#define GPIO_SKL_LP_IOAPIC_GPP_E_20 0x2c
#define GPIO_SKL_LP_IOAPIC_GPP_E_21 0x2d
#define GPIO_SKL_LP_IOAPIC_GPP_E_22 0x2e
#define GPIO_SKL_LP_IOAPIC_GPP_E_23 0x2f

#define GPIO_SKL_LP_IOAPIC_GPP_F_00 0x30
#define GPIO_SKL_LP_IOAPIC_GPP_F_01 0x31
#define GPIO_SKL_LP_IOAPIC_GPP_F_02 0x32
#define GPIO_SKL_LP_IOAPIC_GPP_F_03 0x33
#define GPIO_SKL_LP_IOAPIC_GPP_F_04 0x34
#define GPIO_SKL_LP_IOAPIC_GPP_F_05 0x35
#define GPIO_SKL_LP_IOAPIC_GPP_F_06 0x36
#define GPIO_SKL_LP_IOAPIC_GPP_F_07 0x37
#define GPIO_SKL_LP_IOAPIC_GPP_F_08 0x38
#define GPIO_SKL_LP_IOAPIC_GPP_F_09 0x39
#define GPIO_SKL_LP_IOAPIC_GPP_F_10 0x3a
#define GPIO_SKL_LP_IOAPIC_GPP_F_11 0x3b
#define GPIO_SKL_LP_IOAPIC_GPP_F_12 0x3c
#define GPIO_SKL_LP_IOAPIC_GPP_F_13 0x3d
#define GPIO_SKL_LP_IOAPIC_GPP_F_14 0x3e
#define GPIO_SKL_LP_IOAPIC_GPP_F_15 0x3f
#define GPIO_SKL_LP_IOAPIC_GPP_F_16 0x40
#define GPIO_SKL_LP_IOAPIC_GPP_F_17 0x41
#define GPIO_SKL_LP_IOAPIC_GPP_F_18 0x42
#define GPIO_SKL_LP_IOAPIC_GPP_F_19 0x43
#define GPIO_SKL_LP_IOAPIC_GPP_F_20 0x44
#define GPIO_SKL_LP_IOAPIC_GPP_F_21 0x45
#define GPIO_SKL_LP_IOAPIC_GPP_F_22 0x46
#define GPIO_SKL_LP_IOAPIC_GPP_F_23 0x47

#define GPIO_SKL_LP_IOAPIC_GPP_G_00 0x48
#define GPIO_SKL_LP_IOAPIC_GPP_G_01 0x49
#define GPIO_SKL_LP_IOAPIC_GPP_G_02 0x4a
#define GPIO_SKL_LP_IOAPIC_GPP_G_03 0x4b
#define GPIO_SKL_LP_IOAPIC_GPP_G_04 0x4c
#define GPIO_SKL_LP_IOAPIC_GPP_G_05 0x4d
#define GPIO_SKL_LP_IOAPIC_GPP_G_06 0x4e
#define GPIO_SKL_LP_IOAPIC_GPP_G_07 0x4f

#define GPIO_SKL_LP_IOAPIC_GPD_00   0x50
#define GPIO_SKL_LP_IOAPIC_GPD_01   0x51
#define GPIO_SKL_LP_IOAPIC_GPD_02   0x52
#define GPIO_SKL_LP_IOAPIC_GPD_03   0x53
#define GPIO_SKL_LP_IOAPIC_GPD_04   0x54
#define GPIO_SKL_LP_IOAPIC_GPD_05   0x55
#define GPIO_SKL_LP_IOAPIC_GPD_06   0x56
#define GPIO_SKL_LP_IOAPIC_GPD_07   0x57
#define GPIO_SKL_LP_IOAPIC_GPD_08   0x58
#define GPIO_SKL_LP_IOAPIC_GPD_09   0x59
#define GPIO_SKL_LP_IOAPIC_GPD_10   0x5a
#define GPIO_SKL_LP_IOAPIC_GPD_11   0x5b

//SPT-H:
#define GPIO_SKL_H_IOAPIC_GPP_A_00 0x18
#define GPIO_SKL_H_IOAPIC_GPP_A_01 0x19
#define GPIO_SKL_H_IOAPIC_GPP_A_02 0x1a
#define GPIO_SKL_H_IOAPIC_GPP_A_03 0x1b
#define GPIO_SKL_H_IOAPIC_GPP_A_04 0x1c
#define GPIO_SKL_H_IOAPIC_GPP_A_05 0x1d
#define GPIO_SKL_H_IOAPIC_GPP_A_06 0x1e
#define GPIO_SKL_H_IOAPIC_GPP_A_07 0x1f
#define GPIO_SKL_H_IOAPIC_GPP_A_08 0x20
#define GPIO_SKL_H_IOAPIC_GPP_A_09 0x21
#define GPIO_SKL_H_IOAPIC_GPP_A_10 0x22
#define GPIO_SKL_H_IOAPIC_GPP_A_11 0x23
#define GPIO_SKL_H_IOAPIC_GPP_A_12 0x24
#define GPIO_SKL_H_IOAPIC_GPP_A_13 0x25
#define GPIO_SKL_H_IOAPIC_GPP_A_14 0x26
#define GPIO_SKL_H_IOAPIC_GPP_A_15 0x27
#define GPIO_SKL_H_IOAPIC_GPP_A_16 0x28
#define GPIO_SKL_H_IOAPIC_GPP_A_17 0x29
#define GPIO_SKL_H_IOAPIC_GPP_A_18 0x2a
#define GPIO_SKL_H_IOAPIC_GPP_A_19 0x2b
#define GPIO_SKL_H_IOAPIC_GPP_A_20 0x2c
#define GPIO_SKL_H_IOAPIC_GPP_A_21 0x2d
#define GPIO_SKL_H_IOAPIC_GPP_A_22 0x2e
#define GPIO_SKL_H_IOAPIC_GPP_A_23 0x2f

#define GPIO_SKL_H_IOAPIC_GPP_B_00 0x30
#define GPIO_SKL_H_IOAPIC_GPP_B_01 0x31
#define GPIO_SKL_H_IOAPIC_GPP_B_02 0x32
#define GPIO_SKL_H_IOAPIC_GPP_B_03 0x33
#define GPIO_SKL_H_IOAPIC_GPP_B_04 0x34
#define GPIO_SKL_H_IOAPIC_GPP_B_05 0x35
#define GPIO_SKL_H_IOAPIC_GPP_B_06 0x36
#define GPIO_SKL_H_IOAPIC_GPP_B_07 0x37
#define GPIO_SKL_H_IOAPIC_GPP_B_08 0x38
#define GPIO_SKL_H_IOAPIC_GPP_B_09 0x39
#define GPIO_SKL_H_IOAPIC_GPP_B_10 0x3a
#define GPIO_SKL_H_IOAPIC_GPP_B_11 0x3b
#define GPIO_SKL_H_IOAPIC_GPP_B_12 0x3c
#define GPIO_SKL_H_IOAPIC_GPP_B_13 0x3d
#define GPIO_SKL_H_IOAPIC_GPP_B_14 0x3e
#define GPIO_SKL_H_IOAPIC_GPP_B_15 0x3f
#define GPIO_SKL_H_IOAPIC_GPP_B_16 0x40
#define GPIO_SKL_H_IOAPIC_GPP_B_17 0x41
#define GPIO_SKL_H_IOAPIC_GPP_B_18 0x42
#define GPIO_SKL_H_IOAPIC_GPP_B_19 0x43
#define GPIO_SKL_H_IOAPIC_GPP_B_20 0x44
#define GPIO_SKL_H_IOAPIC_GPP_B_21 0x45
#define GPIO_SKL_H_IOAPIC_GPP_B_22 0x46
#define GPIO_SKL_H_IOAPIC_GPP_B_23 0x47

#define GPIO_SKL_H_IOAPIC_GPP_C_00 0x48
#define GPIO_SKL_H_IOAPIC_GPP_C_01 0x49
#define GPIO_SKL_H_IOAPIC_GPP_C_02 0x4a
#define GPIO_SKL_H_IOAPIC_GPP_C_03 0x4b
#define GPIO_SKL_H_IOAPIC_GPP_C_04 0x4c
#define GPIO_SKL_H_IOAPIC_GPP_C_05 0x4d
#define GPIO_SKL_H_IOAPIC_GPP_C_06 0x4e
#define GPIO_SKL_H_IOAPIC_GPP_C_07 0x4f
#define GPIO_SKL_H_IOAPIC_GPP_C_08 0x50
#define GPIO_SKL_H_IOAPIC_GPP_C_09 0x51
#define GPIO_SKL_H_IOAPIC_GPP_C_10 0x52
#define GPIO_SKL_H_IOAPIC_GPP_C_11 0x53
#define GPIO_SKL_H_IOAPIC_GPP_C_12 0x54
#define GPIO_SKL_H_IOAPIC_GPP_C_13 0x55
#define GPIO_SKL_H_IOAPIC_GPP_C_14 0x56
#define GPIO_SKL_H_IOAPIC_GPP_C_15 0x57
#define GPIO_SKL_H_IOAPIC_GPP_C_16 0x58
#define GPIO_SKL_H_IOAPIC_GPP_C_17 0x59
#define GPIO_SKL_H_IOAPIC_GPP_C_18 0x5a
#define GPIO_SKL_H_IOAPIC_GPP_C_19 0x5b
#define GPIO_SKL_H_IOAPIC_GPP_C_20 0x5c
#define GPIO_SKL_H_IOAPIC_GPP_C_21 0x5d
#define GPIO_SKL_H_IOAPIC_GPP_C_22 0x5e
#define GPIO_SKL_H_IOAPIC_GPP_C_23 0x5f

#define GPIO_SKL_H_IOAPIC_GPP_D_00 0x60
#define GPIO_SKL_H_IOAPIC_GPP_D_01 0x61
#define GPIO_SKL_H_IOAPIC_GPP_D_02 0x62
#define GPIO_SKL_H_IOAPIC_GPP_D_03 0x63
#define GPIO_SKL_H_IOAPIC_GPP_D_04 0x64
#define GPIO_SKL_H_IOAPIC_GPP_D_05 0x65
#define GPIO_SKL_H_IOAPIC_GPP_D_06 0x66
#define GPIO_SKL_H_IOAPIC_GPP_D_07 0x67
#define GPIO_SKL_H_IOAPIC_GPP_D_08 0x68
#define GPIO_SKL_H_IOAPIC_GPP_D_09 0x69
#define GPIO_SKL_H_IOAPIC_GPP_D_10 0x6a
#define GPIO_SKL_H_IOAPIC_GPP_D_11 0x6b
#define GPIO_SKL_H_IOAPIC_GPP_D_12 0x6c
#define GPIO_SKL_H_IOAPIC_GPP_D_13 0x6d
#define GPIO_SKL_H_IOAPIC_GPP_D_14 0x6e
#define GPIO_SKL_H_IOAPIC_GPP_D_15 0x6f
#define GPIO_SKL_H_IOAPIC_GPP_D_16 0x70
#define GPIO_SKL_H_IOAPIC_GPP_D_17 0x71
#define GPIO_SKL_H_IOAPIC_GPP_D_18 0x72
#define GPIO_SKL_H_IOAPIC_GPP_D_19 0x73
#define GPIO_SKL_H_IOAPIC_GPP_D_20 0x74
#define GPIO_SKL_H_IOAPIC_GPP_D_21 0x75
#define GPIO_SKL_H_IOAPIC_GPP_D_22 0x76
#define GPIO_SKL_H_IOAPIC_GPP_D_23 0x77

#define GPIO_SKL_H_IOAPIC_GPP_E_00 0x18
#define GPIO_SKL_H_IOAPIC_GPP_E_01 0x19
#define GPIO_SKL_H_IOAPIC_GPP_E_02 0x1a
#define GPIO_SKL_H_IOAPIC_GPP_E_03 0x1b
#define GPIO_SKL_H_IOAPIC_GPP_E_04 0x1c
#define GPIO_SKL_H_IOAPIC_GPP_E_05 0x1d
#define GPIO_SKL_H_IOAPIC_GPP_E_06 0x1e
#define GPIO_SKL_H_IOAPIC_GPP_E_07 0x1f
#define GPIO_SKL_H_IOAPIC_GPP_E_08 0x20
#define GPIO_SKL_H_IOAPIC_GPP_E_09 0x21
#define GPIO_SKL_H_IOAPIC_GPP_E_10 0x22
#define GPIO_SKL_H_IOAPIC_GPP_E_11 0x23
#define GPIO_SKL_H_IOAPIC_GPP_E_12 0x24

#define GPIO_SKL_H_IOAPIC_GPP_F_00 0x25
#define GPIO_SKL_H_IOAPIC_GPP_F_01 0x26
#define GPIO_SKL_H_IOAPIC_GPP_F_02 0x27
#define GPIO_SKL_H_IOAPIC_GPP_F_03 0x28
#define GPIO_SKL_H_IOAPIC_GPP_F_04 0x29
#define GPIO_SKL_H_IOAPIC_GPP_F_05 0x2a
#define GPIO_SKL_H_IOAPIC_GPP_F_06 0x2b
#define GPIO_SKL_H_IOAPIC_GPP_F_07 0x2c
#define GPIO_SKL_H_IOAPIC_GPP_F_08 0x2d
#define GPIO_SKL_H_IOAPIC_GPP_F_09 0x2e
#define GPIO_SKL_H_IOAPIC_GPP_F_10 0x2f
#define GPIO_SKL_H_IOAPIC_GPP_F_11 0x30
#define GPIO_SKL_H_IOAPIC_GPP_F_12 0x31
#define GPIO_SKL_H_IOAPIC_GPP_F_13 0x32
#define GPIO_SKL_H_IOAPIC_GPP_F_14 0x33
#define GPIO_SKL_H_IOAPIC_GPP_F_15 0x34
#define GPIO_SKL_H_IOAPIC_GPP_F_16 0x35
#define GPIO_SKL_H_IOAPIC_GPP_F_17 0x36
#define GPIO_SKL_H_IOAPIC_GPP_F_18 0x37
#define GPIO_SKL_H_IOAPIC_GPP_F_19 0x38
#define GPIO_SKL_H_IOAPIC_GPP_F_20 0x39
#define GPIO_SKL_H_IOAPIC_GPP_F_21 0x3a
#define GPIO_SKL_H_IOAPIC_GPP_F_22 0x3b
#define GPIO_SKL_H_IOAPIC_GPP_F_23 0x3c

#define GPIO_SKL_H_IOAPIC_GPP_G_00 0x3d
#define GPIO_SKL_H_IOAPIC_GPP_G_01 0x3e
#define GPIO_SKL_H_IOAPIC_GPP_G_02 0x3f
#define GPIO_SKL_H_IOAPIC_GPP_G_03 0x40
#define GPIO_SKL_H_IOAPIC_GPP_G_04 0x41
#define GPIO_SKL_H_IOAPIC_GPP_G_05 0x42
#define GPIO_SKL_H_IOAPIC_GPP_G_06 0x43
#define GPIO_SKL_H_IOAPIC_GPP_G_07 0x44
#define GPIO_SKL_H_IOAPIC_GPP_G_08 0x45
#define GPIO_SKL_H_IOAPIC_GPP_G_09 0x46
#define GPIO_SKL_H_IOAPIC_GPP_G_10 0x47
#define GPIO_SKL_H_IOAPIC_GPP_G_11 0x48
#define GPIO_SKL_H_IOAPIC_GPP_G_12 0x49
#define GPIO_SKL_H_IOAPIC_GPP_G_13 0x4a
#define GPIO_SKL_H_IOAPIC_GPP_G_14 0x4b
#define GPIO_SKL_H_IOAPIC_GPP_G_15 0x4c
#define GPIO_SKL_H_IOAPIC_GPP_G_16 0x4d
#define GPIO_SKL_H_IOAPIC_GPP_G_17 0x4e
#define GPIO_SKL_H_IOAPIC_GPP_G_18 0x4f
#define GPIO_SKL_H_IOAPIC_GPP_G_19 0x50
#define GPIO_SKL_H_IOAPIC_GPP_G_20 0x51
#define GPIO_SKL_H_IOAPIC_GPP_G_21 0x52
#define GPIO_SKL_H_IOAPIC_GPP_G_22 0x53
#define GPIO_SKL_H_IOAPIC_GPP_G_23 0x54

#define GPIO_SKL_H_IOAPIC_GPP_H_00 0x55
#define GPIO_SKL_H_IOAPIC_GPP_H_01 0x56
#define GPIO_SKL_H_IOAPIC_GPP_H_02 0x57
#define GPIO_SKL_H_IOAPIC_GPP_H_03 0x58
#define GPIO_SKL_H_IOAPIC_GPP_H_04 0x59
#define GPIO_SKL_H_IOAPIC_GPP_H_05 0x5a
#define GPIO_SKL_H_IOAPIC_GPP_H_06 0x5b
#define GPIO_SKL_H_IOAPIC_GPP_H_07 0x5c
#define GPIO_SKL_H_IOAPIC_GPP_H_08 0x5d
#define GPIO_SKL_H_IOAPIC_GPP_H_09 0x5e
#define GPIO_SKL_H_IOAPIC_GPP_H_10 0x5f
#define GPIO_SKL_H_IOAPIC_GPP_H_11 0x60
#define GPIO_SKL_H_IOAPIC_GPP_H_12 0x61
#define GPIO_SKL_H_IOAPIC_GPP_H_13 0x62
#define GPIO_SKL_H_IOAPIC_GPP_H_14 0x63
#define GPIO_SKL_H_IOAPIC_GPP_H_15 0x64
#define GPIO_SKL_H_IOAPIC_GPP_H_16 0x65
#define GPIO_SKL_H_IOAPIC_GPP_H_17 0x66
#define GPIO_SKL_H_IOAPIC_GPP_H_18 0x67
#define GPIO_SKL_H_IOAPIC_GPP_H_19 0x68
#define GPIO_SKL_H_IOAPIC_GPP_H_20 0x69
#define GPIO_SKL_H_IOAPIC_GPP_H_21 0x6a
#define GPIO_SKL_H_IOAPIC_GPP_H_22 0x6b
#define GPIO_SKL_H_IOAPIC_GPP_H_23 0x6c

#define GPIO_SKL_H_IOAPIC_GPP_I_00 0x6d
#define GPIO_SKL_H_IOAPIC_GPP_I_01 0x6e
#define GPIO_SKL_H_IOAPIC_GPP_I_02 0x6f
#define GPIO_SKL_H_IOAPIC_GPP_I_03 0x70
#define GPIO_SKL_H_IOAPIC_GPP_I_04 0x71
#define GPIO_SKL_H_IOAPIC_GPP_I_05 0x72
#define GPIO_SKL_H_IOAPIC_GPP_I_06 0x73
#define GPIO_SKL_H_IOAPIC_GPP_I_07 0x74
#define GPIO_SKL_H_IOAPIC_GPP_I_08 0x75
#define GPIO_SKL_H_IOAPIC_GPP_I_09 0x76
#define GPIO_SKL_H_IOAPIC_GPP_I_10 0x77

#define GPIO_SKL_H_IOAPIC_GPD_00   0x18
#define GPIO_SKL_H_IOAPIC_GPD_01   0x19
#define GPIO_SKL_H_IOAPIC_GPD_02   0x1a
#define GPIO_SKL_H_IOAPIC_GPD_03   0x1b
#define GPIO_SKL_H_IOAPIC_GPD_04   0x1c
#define GPIO_SKL_H_IOAPIC_GPD_05   0x1d
#define GPIO_SKL_H_IOAPIC_GPD_06   0x1e
#define GPIO_SKL_H_IOAPIC_GPD_07   0x1f
#define GPIO_SKL_H_IOAPIC_GPD_08   0x20
#define GPIO_SKL_H_IOAPIC_GPD_09   0x21
#define GPIO_SKL_H_IOAPIC_GPD_10   0x22
#define GPIO_SKL_H_IOAPIC_GPD_11   0x23

#endif // GPIO_DEFINE_ASL