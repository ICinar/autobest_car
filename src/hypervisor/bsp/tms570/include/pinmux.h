/*
 * pinmux.h
 *
 * TMS570 Pin Multiplexing
 * See TMS570 manual chapter 4.5
 *
 * azuepke, 2014-04-24: initial (imported from HalCoGen generated code)
 */

#ifndef __TMS570_PINMUX_H__
#define __TMS570_PINMUX_H__

#include <stdint.h>

#define PINMUX_BALL_A5_SHIFT    8U
#define PINMUX_BALL_A11_SHIFT   8U
#define PINMUX_BALL_A14_SHIFT   0U
#define PINMUX_BALL_B2_SHIFT    24U
#define PINMUX_BALL_B3_SHIFT    8U
#define PINMUX_BALL_B4_SHIFT    16U
#define PINMUX_BALL_B5_SHIFT    24U
#define PINMUX_BALL_B6_SHIFT    8U
#define PINMUX_BALL_B11_SHIFT   8U
#define PINMUX_BALL_C1_SHIFT    0U
#define PINMUX_BALL_C2_SHIFT    0U
#define PINMUX_BALL_C3_SHIFT    16U
#define PINMUX_BALL_C4_SHIFT    16U
#define PINMUX_BALL_C5_SHIFT    8U
#define PINMUX_BALL_C6_SHIFT    0U
#define PINMUX_BALL_C7_SHIFT    24U
#define PINMUX_BALL_C8_SHIFT    16U
#define PINMUX_BALL_C9_SHIFT    24U
#define PINMUX_BALL_C10_SHIFT   8U
#define PINMUX_BALL_C11_SHIFT   0U
#define PINMUX_BALL_C12_SHIFT   16U
#define PINMUX_BALL_C13_SHIFT   0U
#define PINMUX_BALL_C14_SHIFT   8U
#define PINMUX_BALL_C15_SHIFT   16U
#define PINMUX_BALL_C16_SHIFT   8U
#define PINMUX_BALL_C17_SHIFT   0U
#define PINMUX_BALL_D3_SHIFT    0U
#define PINMUX_BALL_D4_SHIFT    0U
#define PINMUX_BALL_D5_SHIFT    0U
#define PINMUX_BALL_D14_SHIFT   16U
#define PINMUX_BALL_D15_SHIFT   24U
#define PINMUX_BALL_D16_SHIFT   24U
#define PINMUX_BALL_D17_SHIFT   16U
#define PINMUX_BALL_D19_SHIFT   0U
#define PINMUX_BALL_E1_SHIFT    16U
#define PINMUX_BALL_E3_SHIFT    8U
#define PINMUX_BALL_E5_SHIFT	16U
#define PINMUX_BALL_E6_SHIFT	24U
#define PINMUX_BALL_E7_SHIFT	24U
#define PINMUX_BALL_E8_SHIFT	0U
#define PINMUX_BALL_E9_SHIFT	24U
#define PINMUX_BALL_E10_SHIFT	16U
#define PINMUX_BALL_E11_SHIFT	8U
#define PINMUX_BALL_E12_SHIFT	24U
#define PINMUX_BALL_E13_SHIFT	0U
#define PINMUX_BALL_E16_SHIFT   16U
#define PINMUX_BALL_E17_SHIFT   8U
#define PINMUX_BALL_E18_SHIFT   0U
#define PINMUX_BALL_E19_SHIFT   0U
#define PINMUX_BALL_F3_SHIFT    16U
#define PINMUX_BALL_F5_SHIFT	24U
#define PINMUX_BALL_G3_SHIFT    8U
#define PINMUX_BALL_G5_SHIFT	8U
#define PINMUX_BALL_G16_SHIFT   24U
#define PINMUX_BALL_G17_SHIFT   0U
#define PINMUX_BALL_G19_SHIFT   16U
#define PINMUX_BALL_H3_SHIFT    16U
#define PINMUX_BALL_H16_SHIFT   16U
#define PINMUX_BALL_H17_SHIFT   24U
#define PINMUX_BALL_H18_SHIFT   24U
#define PINMUX_BALL_H19_SHIFT   16U
#define PINMUX_BALL_J3_SHIFT    24U
#define PINMUX_BALL_J18_SHIFT   0U
#define PINMUX_BALL_J19_SHIFT   8U
#define PINMUX_BALL_K2_SHIFT    8U
#define PINMUX_BALL_K5_SHIFT	0U
#define PINMUX_BALL_K15_SHIFT   8U
#define PINMUX_BALL_K17_SHIFT   0U
#define PINMUX_BALL_K18_SHIFT   0U
#define PINMUX_BALL_K19_SHIFT   8U
#define PINMUX_BALL_L5_SHIFT	24U
#define PINMUX_BALL_L15_SHIFT   16U
#define PINMUX_BALL_M1_SHIFT    0U
#define PINMUX_BALL_M2_SHIFT    24U
#define PINMUX_BALL_M5_SHIFT	8U
#define PINMUX_BALL_M15_SHIFT   24U
#define PINMUX_BALL_M17_SHIFT   8U
#define PINMUX_BALL_N1_SHIFT    16U
#define PINMUX_BALL_N2_SHIFT    0U
#define PINMUX_BALL_N5_SHIFT	24U
#define PINMUX_BALL_N15_SHIFT   8U
#define PINMUX_BALL_N17_SHIFT   16U
#define PINMUX_BALL_N19_SHIFT   0U
#define PINMUX_BALL_P1_SHIFT    24U
#define PINMUX_BALL_P5_SHIFT	8U
#define PINMUX_BALL_R2_SHIFT    24U
#define PINMUX_BALL_R5_SHIFT    24U
#define PINMUX_BALL_R6_SHIFT    0U
#define PINMUX_BALL_R7_SHIFT    24U
#define PINMUX_BALL_R8_SHIFT    24U
#define PINMUX_BALL_R9_SHIFT    0U
#define PINMUX_BALL_T1_SHIFT    0U
#define PINMUX_BALL_T12_SHIFT   24U
#define PINMUX_BALL_U1_SHIFT    24U
#define PINMUX_BALL_V2_SHIFT    16U
#define PINMUX_BALL_V5_SHIFT    8U
#define PINMUX_BALL_V6_SHIFT    16U
#define PINMUX_BALL_V7_SHIFT    16U
#define PINMUX_BALL_V10_SHIFT   16U
#define PINMUX_BALL_W3_SHIFT    16U
#define PINMUX_BALL_W5_SHIFT    8U
#define PINMUX_BALL_W6_SHIFT    16U
#define PINMUX_BALL_W9_SHIFT    8U
#define PINMUX_BALL_W10_SHIFT   0U

#define PINMUX_GATE_EMIF_CLK_SHIFT              8U
#define PINMUX_GIOB_DISABLE_HET2_SHIFT          16U
#define PINMUX_ALT_ADC_TRIGGER_SHIFT            0U
#define PINMUX_ETHERNET_SHIFT                   24U

#define PINMUX_BALL_A5_MASK             (~(0xFFU << PINMUX_BALL_A5_SHIFT))
#define PINMUX_BALL_A11_MASK            (~(0xFFU << PINMUX_BALL_A11_SHIFT))
#define PINMUX_BALL_A14_MASK            (~(0xFFU << PINMUX_BALL_A14_SHIFT))
#define PINMUX_BALL_B2_MASK             (~(0xFFU << PINMUX_BALL_B2_SHIFT))
#define PINMUX_BALL_B3_MASK             (~(0xFFU << PINMUX_BALL_B3_SHIFT))
#define PINMUX_BALL_B4_MASK             (~(0xFFU << PINMUX_BALL_B4_SHIFT))
#define PINMUX_BALL_B5_MASK             (~(0xFFU << PINMUX_BALL_B5_SHIFT))
#define PINMUX_BALL_B6_MASK             (~(0xFFU << PINMUX_BALL_B6_SHIFT))
#define PINMUX_BALL_B11_MASK            (~(0xFFU << PINMUX_BALL_B11_SHIFT))
#define PINMUX_BALL_C1_MASK             (~(0xFFU << PINMUX_BALL_C1_SHIFT))
#define PINMUX_BALL_C2_MASK             (~(0xFFU << PINMUX_BALL_C2_SHIFT))
#define PINMUX_BALL_C3_MASK             (~(0xFFU << PINMUX_BALL_C3_SHIFT))
#define PINMUX_BALL_C4_MASK             (~(0xFFU << PINMUX_BALL_C4_SHIFT))
#define PINMUX_BALL_C5_MASK             (~(0xFFU << PINMUX_BALL_C5_SHIFT))
#define PINMUX_BALL_C6_MASK             (~(0xFFU << PINMUX_BALL_C6_SHIFT))
#define PINMUX_BALL_C7_MASK             (~(0xFFU << PINMUX_BALL_C7_SHIFT))
#define PINMUX_BALL_C8_MASK             (~(0xFFU << PINMUX_BALL_C8_SHIFT))
#define PINMUX_BALL_C9_MASK             (~(0xFFU << PINMUX_BALL_C9_SHIFT))
#define PINMUX_BALL_C10_MASK            (~(0xFFU << PINMUX_BALL_C10_SHIFT))
#define PINMUX_BALL_C11_MASK            (~(0xFFU << PINMUX_BALL_C11_SHIFT))
#define PINMUX_BALL_C12_MASK            (~(0xFFU << PINMUX_BALL_C12_SHIFT))
#define PINMUX_BALL_C13_MASK            (~(0xFFU << PINMUX_BALL_C13_SHIFT))
#define PINMUX_BALL_C14_MASK            (~(0xFFU << PINMUX_BALL_C14_SHIFT))
#define PINMUX_BALL_C15_MASK            (~(0xFFU << PINMUX_BALL_C15_SHIFT))
#define PINMUX_BALL_C16_MASK            (~(0xFFU << PINMUX_BALL_C16_SHIFT))
#define PINMUX_BALL_C17_MASK            (~(0xFFU << PINMUX_BALL_C17_SHIFT))
#define PINMUX_BALL_D3_MASK             (~(0xFFU << PINMUX_BALL_D3_SHIFT))
#define PINMUX_BALL_D4_MASK             (~(0xFFU << PINMUX_BALL_D4_SHIFT))
#define PINMUX_BALL_D5_MASK             (~(0xFFU << PINMUX_BALL_D5_SHIFT))
#define PINMUX_BALL_D14_MASK            (~(0xFFU << PINMUX_BALL_D14_SHIFT))
#define PINMUX_BALL_D15_MASK            (~(0xFFU << PINMUX_BALL_D15_SHIFT))
#define PINMUX_BALL_D16_MASK            (~(0xFFU << PINMUX_BALL_D16_SHIFT))
#define PINMUX_BALL_D17_MASK            (~(0xFFU << PINMUX_BALL_D17_SHIFT))
#define PINMUX_BALL_D19_MASK            (~(0xFFU << PINMUX_BALL_D19_SHIFT))
#define PINMUX_BALL_E1_MASK             (~(0xFFU << PINMUX_BALL_E1_SHIFT))
#define PINMUX_BALL_E3_MASK             (~(0xFFU << PINMUX_BALL_E3_SHIFT))
#define PINMUX_BALL_E5_MASK		(~(0xFFU << PINMUX_BALL_E5_SHIFT))
#define PINMUX_BALL_E6_MASK		(~(0xFFU << PINMUX_BALL_E6_SHIFT))
#define PINMUX_BALL_E7_MASK		(~(0xFFU << PINMUX_BALL_E7_SHIFT))
#define PINMUX_BALL_E8_MASK		(~(0xFFU << PINMUX_BALL_E8_SHIFT))
#define PINMUX_BALL_E9_MASK		(~(0xFFU << PINMUX_BALL_E9_SHIFT))
#define PINMUX_BALL_E10_MASK	(~(0xFFU << PINMUX_BALL_E10_SHIFT))
#define PINMUX_BALL_E11_MASK	(~(0xFFU << PINMUX_BALL_E11_SHIFT))
#define PINMUX_BALL_E12_MASK	(~(0xFFU << PINMUX_BALL_E12_SHIFT))
#define PINMUX_BALL_E13_MASK	(~(0xFFU << PINMUX_BALL_E13_SHIFT))
#define PINMUX_BALL_E16_MASK            (~(0xFFU << PINMUX_BALL_E16_SHIFT))
#define PINMUX_BALL_E17_MASK            (~(0xFFU << PINMUX_BALL_E17_SHIFT))
#define PINMUX_BALL_E18_MASK            (~(0xFFU << PINMUX_BALL_E18_SHIFT))
#define PINMUX_BALL_E19_MASK            (~(0xFFU << PINMUX_BALL_E19_SHIFT))
#define PINMUX_BALL_F3_MASK             (~(0xFFU << PINMUX_BALL_F3_SHIFT))
#define PINMUX_BALL_F5_MASK		(~(0xFFU << PINMUX_BALL_F4_SHIFT))
#define PINMUX_BALL_G3_MASK             (~(0xFFU << PINMUX_BALL_G3_SHIFT))
#define PINMUX_BALL_G5_MASK		(~(0xFFU << PINMUX_BALL_G4_SHIFT))
#define PINMUX_BALL_G16_MASK            (~(0xFFU << PINMUX_BALL_G16_SHIFT))
#define PINMUX_BALL_G17_MASK            (~(0xFFU << PINMUX_BALL_G17_SHIFT))
#define PINMUX_BALL_G19_MASK            (~(0xFFU << PINMUX_BALL_G19_SHIFT))
#define PINMUX_BALL_H3_MASK             (~(0xFFU << PINMUX_BALL_H3_SHIFT))
#define PINMUX_BALL_H16_MASK            (~(0xFFU << PINMUX_BALL_H16_SHIFT))
#define PINMUX_BALL_H17_MASK            (~(0xFFU << PINMUX_BALL_H17_SHIFT))
#define PINMUX_BALL_H18_MASK            (~(0xFFU << PINMUX_BALL_H18_SHIFT))
#define PINMUX_BALL_H19_MASK            (~(0xFFU << PINMUX_BALL_H19_SHIFT))
#define PINMUX_BALL_J3_MASK             (~(0xFFU << PINMUX_BALL_J3_SHIFT))
#define PINMUX_BALL_J18_MASK            (~(0xFFU << PINMUX_BALL_J18_SHIFT))
#define PINMUX_BALL_J19_MASK            (~(0xFFU << PINMUX_BALL_J19_SHIFT))
#define PINMUX_BALL_K2_MASK             (~(0xFFU << PINMUX_BALL_K2_SHIFT))
#define PINMUX_BALL_K5_MASK		(~(0xFFU << PINMUX_BALL_K4_SHIFT))
#define PINMUX_BALL_K15_MASK            (~(0xFFU << PINMUX_BALL_K15_SHIFT))
#define PINMUX_BALL_K17_MASK            (~(0xFFU << PINMUX_BALL_K17_SHIFT))
#define PINMUX_BALL_K18_MASK            (~(0xFFU << PINMUX_BALL_K18_SHIFT))
#define PINMUX_BALL_K19_MASK            (~(0xFFU << PINMUX_BALL_K19_SHIFT))
#define PINMUX_BALL_L5_MASK		(~(0xFFU << PINMUX_BALL_L4_SHIFT))
#define PINMUX_BALL_L15_MASK            (~(0xFFU << PINMUX_BALL_L15_SHIFT))
#define PINMUX_BALL_M1_MASK             (~(0xFFU << PINMUX_BALL_M1_SHIFT))
#define PINMUX_BALL_M2_MASK             (~(0xFFU << PINMUX_BALL_M2_SHIFT))
#define PINMUX_BALL_M5_MASK		(~(0xFFU << PINMUX_BALL_M4_SHIFT))
#define PINMUX_BALL_M15_MASK            (~(0xFFU << PINMUX_BALL_M15_SHIFT))
#define PINMUX_BALL_M17_MASK            (~(0xFFU << PINMUX_BALL_M17_SHIFT))
#define PINMUX_BALL_N1_MASK             (~(0xFFU << PINMUX_BALL_N1_SHIFT))
#define PINMUX_BALL_N2_MASK             (~(0xFFU << PINMUX_BALL_N2_SHIFT))
#define PINMUX_BALL_N5_MASK		(~(0xFFU << PINMUX_BALL_N4_SHIFT))
#define PINMUX_BALL_N15_MASK            (~(0xFFU << PINMUX_BALL_N15_SHIFT))
#define PINMUX_BALL_N17_MASK            (~(0xFFU << PINMUX_BALL_N17_SHIFT))
#define PINMUX_BALL_N19_MASK            (~(0xFFU << PINMUX_BALL_N19_SHIFT))
#define PINMUX_BALL_P1_MASK             (~(0xFFU << PINMUX_BALL_P1_SHIFT))
#define PINMUX_BALL_P5_MASK		(~(0xFFU << PINMUX_BALL_P4_SHIFT))
#define PINMUX_BALL_R2_MASK             (~(0xFFU << PINMUX_BALL_R2_SHIFT))
#define PINMUX_BALL_R5_MASK             (~(0xFFU << PINMUX_BALL_R5_SHIFT))
#define PINMUX_BALL_R6_MASK             (~(0xFFU << PINMUX_BALL_R6_SHIFT))
#define PINMUX_BALL_R7_MASK             (~(0xFFU << PINMUX_BALL_R7_SHIFT))
#define PINMUX_BALL_R8_MASK             (~(0xFFU << PINMUX_BALL_R8_SHIFT))
#define PINMUX_BALL_R9_MASK             (~(0xFFU << PINMUX_BALL_R9_SHIFT))
#define PINMUX_BALL_T1_MASK             (~(0xFFU << PINMUX_BALL_T1_SHIFT))
#define PINMUX_BALL_T12_MASK            (~(0xFFU << PINMUX_BALL_T12_SHIFT))
#define PINMUX_BALL_U1_MASK             (~(0xFFU << PINMUX_BALL_U1_SHIFT))
#define PINMUX_BALL_V2_MASK             (~(0xFFU << PINMUX_BALL_V2_SHIFT))
#define PINMUX_BALL_V5_MASK             (~(0xFFU << PINMUX_BALL_V5_SHIFT))
#define PINMUX_BALL_V6_MASK             (~(0xFFU << PINMUX_BALL_V6_SHIFT))
#define PINMUX_BALL_V7_MASK             (~(0xFFU << PINMUX_BALL_V7_SHIFT))
#define PINMUX_BALL_V10_MASK            (~(0xFFU << PINMUX_BALL_V10_SHIFT))
#define PINMUX_BALL_W3_MASK             (~(0xFFU << PINMUX_BALL_W3_SHIFT))
#define PINMUX_BALL_W5_MASK             (~(0xFFU << PINMUX_BALL_W5_SHIFT))
#define PINMUX_BALL_W6_MASK             (~(0xFFU << PINMUX_BALL_W6_SHIFT))
#define PINMUX_BALL_W9_MASK             (~(0xFFU << PINMUX_BALL_W9_SHIFT))
#define PINMUX_BALL_W10_MASK            (~(0xFFU << PINMUX_BALL_W10_SHIFT))

#define PINMUX_GATE_EMIF_CLK_MASK               (~(0xFFU << PINMUX_GATE_EMIF_CLK_SHIFT))
#define PINMUX_GIOB_DISABLE_HET2_MASK           (~(0xFFU << PINMUX_GIOB_DISABLE_HET2_SHIFT))
#define PINMUX_ALT_ADC_TRIGGER_MASK             (~(0xFFU << PINMUX_ALT_ADC_TRIGGER_SHIFT))
#define PINMUX_ETHERNET_MASK                    (~(0xFFU << PINMUX_ETHERNET_SHIFT))



#define PINMUX_BALL_A5_GIOA_0                                   (0x1U <<  PINMUX_BALL_A5_SHIFT)
#define PINMUX_BALL_A5_OHCI_PRT_RcvDpls_1                       (0x2U <<  PINMUX_BALL_A5_SHIFT)
#define PINMUX_BALL_A5_W2FC_RXDPI                               (0x4U <<  PINMUX_BALL_A5_SHIFT)

#define PINMUX_BALL_A11_HET1_14                                 (0x1U <<  PINMUX_BALL_A11_SHIFT)
#define PINMUX_BALL_A11_OHCI_RCFG_txSe0_0                       (0x2U <<  PINMUX_BALL_A11_SHIFT)

#define PINMUX_BALL_A14_HET1_26                                 (0x1U <<  PINMUX_BALL_A14_SHIFT)
#define PINMUX_BALL_A14_MII_RXD_1                               (0x2U <<  PINMUX_BALL_A14_SHIFT)
#define PINMUX_BALL_A14_RMII_RXD_1                              (0x4U <<  PINMUX_BALL_A14_SHIFT)

#define PINMUX_BALL_B2_MIBSPI3NCS_2                             (0x1U <<  PINMUX_BALL_B2_SHIFT)
#define PINMUX_BALL_B2_I2C_SDA                                  (0x2U <<  PINMUX_BALL_B2_SHIFT)
#define PINMUX_BALL_B2_HET1_27                                  (0x4U <<  PINMUX_BALL_B2_SHIFT)

#define PINMUX_BALL_B3_HET1_22                                  (0x1U <<  PINMUX_BALL_B3_SHIFT)
#define PINMUX_BALL_B3_OHCI_RCFG_txSe0_1                        (0x2U <<  PINMUX_BALL_B3_SHIFT)
#define PINMUX_BALL_B3_W2FC_SE0O                                (0x4U <<  PINMUX_BALL_B3_SHIFT)

#define PINMUX_BALL_B4_HET1_12                                  (0x1U <<  PINMUX_BALL_B4_SHIFT)
#define PINMUX_BALL_B4_MII_CRS                                  (0x2U <<  PINMUX_BALL_B4_SHIFT)
#define PINMUX_BALL_B4_RMII_CRS_DV                              (0x4U <<  PINMUX_BALL_B4_SHIFT)

#define PINMUX_BALL_B5_GIOA_5                                   (0x1U <<  PINMUX_BALL_B5_SHIFT)
#define PINMUX_BALL_B5_EXTCLKIN                                 (0x2U <<  PINMUX_BALL_B5_SHIFT)

#define PINMUX_BALL_B6_MIBSPI5NCS_1                             (0x1U <<  PINMUX_BALL_B6_SHIFT)
#define PINMUX_BALL_B6_DMM_DATA_6                               (0x2U <<  PINMUX_BALL_B6_SHIFT)

#define PINMUX_BALL_B11_HET1_30                                 (0x1U <<  PINMUX_BALL_B11_SHIFT)
#define PINMUX_BALL_B11_MII_RX_DV                               (0x2U <<  PINMUX_BALL_B11_SHIFT)
#define PINMUX_BALL_B11_OHCI_RCFG_speed_0                       (0x4U <<  PINMUX_BALL_B11_SHIFT)

#define PINMUX_BALL_C1_GIOA_2                                   (0x1U <<  PINMUX_BALL_C1_SHIFT)
#define PINMUX_BALL_C1_OHCI_RCFG_txdPls_1                       (0x2U <<  PINMUX_BALL_C1_SHIFT)
#define PINMUX_BALL_C1_W2FC_TXDO                                (0x4U <<  PINMUX_BALL_C1_SHIFT)
#define PINMUX_BALL_C1_HET2_0                                   (0x8U <<  PINMUX_BALL_C1_SHIFT)

#define PINMUX_BALL_C2_GIOA_1                                   (0x1U <<  PINMUX_BALL_C2_SHIFT)
#define PINMUX_BALL_C2_OHCI_PRT_RcvDmns_1                       (0x2U <<  PINMUX_BALL_C2_SHIFT)
#define PINMUX_BALL_C2_W2FC_RXDMI                               (0x4U <<  PINMUX_BALL_C2_SHIFT)

#define PINMUX_BALL_C3_MIBSPI3NCS_3                             (0x1U <<  PINMUX_BALL_C3_SHIFT)
#define PINMUX_BALL_C3_I2C_SCL                                  (0x2U <<  PINMUX_BALL_C3_SHIFT)
#define PINMUX_BALL_C3_HET1_29                                  (0x4U <<  PINMUX_BALL_C3_SHIFT)

#define PINMUX_BALL_C4_EMIF_ADDR_6                              (0x1U <<  PINMUX_BALL_C4_SHIFT)
#define PINMUX_BALL_C4_RTP_DATA_13                              (0x2U <<  PINMUX_BALL_C4_SHIFT)
#define PINMUX_BALL_C4_HET2_11                                  (0x4U <<  PINMUX_BALL_C4_SHIFT)

#define PINMUX_BALL_C5_EMIF_ADDR_7                              (0x1U <<  PINMUX_BALL_C5_SHIFT)
#define PINMUX_BALL_C5_RTP_DATA_12                              (0x2U <<  PINMUX_BALL_C5_SHIFT)
#define PINMUX_BALL_C5_HET2_13                                  (0x4U <<  PINMUX_BALL_C5_SHIFT)

#define PINMUX_BALL_C6_EMIF_ADDR_8                              (0x1U <<  PINMUX_BALL_C6_SHIFT)
#define PINMUX_BALL_C6_RTP_DATA_11                              (0x2U <<  PINMUX_BALL_C6_SHIFT)
#define PINMUX_BALL_C6_HET2_15                                  (0x4U <<  PINMUX_BALL_C6_SHIFT)

#define PINMUX_BALL_C7_EMIF_ADDR_9                              (0x1U <<  PINMUX_BALL_C7_SHIFT)
#define PINMUX_BALL_C7_RTP_DATA_10                              (0x2U <<  PINMUX_BALL_C7_SHIFT)

#define PINMUX_BALL_C8_EMIF_ADDR_10                             (0x1U <<  PINMUX_BALL_C8_SHIFT)
#define PINMUX_BALL_C8_RTP_DATA_09                              (0x2U <<  PINMUX_BALL_C8_SHIFT)

#define PINMUX_BALL_C9_EMIF_ADDR_11                             (0x1U <<  PINMUX_BALL_C9_SHIFT)
#define PINMUX_BALL_C9_RTP_DATA_08                              (0x2U <<  PINMUX_BALL_C9_SHIFT)

#define PINMUX_BALL_C10_EMIF_ADDR_12                            (0x1U <<  PINMUX_BALL_C10_SHIFT)
#define PINMUX_BALL_C10_RTP_DATA_06                             (0x2U <<  PINMUX_BALL_C10_SHIFT)

#define PINMUX_BALL_C11_EMIF_ADDR_13                            (0x1U <<  PINMUX_BALL_C11_SHIFT)
#define PINMUX_BALL_C11_RTP_DATA_05                             (0x2U <<  PINMUX_BALL_C11_SHIFT)

#define PINMUX_BALL_C12_EMIF_ADDR_14                            (0x1U <<  PINMUX_BALL_C12_SHIFT)
#define PINMUX_BALL_C12_RTP_DATA_04                             (0x2U <<  PINMUX_BALL_C12_SHIFT)

#define PINMUX_BALL_C13_EMIF_ADDR_15                            (0x1U <<  PINMUX_BALL_C13_SHIFT)
#define PINMUX_BALL_C13_RTP_DATA_03                             (0x2U <<  PINMUX_BALL_C13_SHIFT)

#define PINMUX_BALL_C14_EMIF_ADDR_17                            (0x1U <<  PINMUX_BALL_C14_SHIFT)
#define PINMUX_BALL_C14_RTP_DATA_01                             (0x2U <<  PINMUX_BALL_C14_SHIFT)

#define PINMUX_BALL_C15_EMIF_ADDR_19                            (0x1U <<  PINMUX_BALL_C15_SHIFT)
#define PINMUX_BALL_C15_RTP_nENA                                (0x2U <<  PINMUX_BALL_C15_SHIFT)

#define PINMUX_BALL_C16_EMIF_ADDR_20                            (0x1U <<  PINMUX_BALL_C16_SHIFT)
#define PINMUX_BALL_C16_RTP_nSYNC                               (0x2U <<  PINMUX_BALL_C16_SHIFT)

#define PINMUX_BALL_C17_EMIF_ADDR_21                            (0x1U <<  PINMUX_BALL_C17_SHIFT)
#define PINMUX_BALL_C17_RTP_CLK                                 (0x2U <<  PINMUX_BALL_C17_SHIFT)

#define PINMUX_BALL_D3_SPI2NENA                                 (0x1U <<  PINMUX_BALL_D3_SHIFT)
#define PINMUX_BALL_D3_SPI2NCS_1                                (0x2U <<  PINMUX_BALL_D3_SHIFT)

#define PINMUX_BALL_D4_EMIF_ADDR_0                              (0x1U <<  PINMUX_BALL_D4_SHIFT)
#define PINMUX_BALL_D4_HET2_1                                   (0x2U <<  PINMUX_BALL_D4_SHIFT)

#define PINMUX_BALL_D5_EMIF_ADDR_1                              (0x1U <<  PINMUX_BALL_D5_SHIFT)
#define PINMUX_BALL_D5_HET2_3                                   (0x2U <<  PINMUX_BALL_D5_SHIFT)

#define PINMUX_BALL_D14_EMIF_ADDR_16                            (0x1U <<  PINMUX_BALL_D14_SHIFT)
#define PINMUX_BALL_D14_RTP_DATA_02                             (0x2U <<  PINMUX_BALL_D14_SHIFT)

#define PINMUX_BALL_D15_EMIF_ADDR_18                            (0x1U <<  PINMUX_BALL_D15_SHIFT)
#define PINMUX_BALL_D15_RTP_DATA_0                              (0x2U <<  PINMUX_BALL_D15_SHIFT)

#define PINMUX_BALL_D16_EMIF_BA_1                               (0x1U <<  PINMUX_BALL_D16_SHIFT)
#define PINMUX_BALL_D16_HET2_5                                  (0x2U <<  PINMUX_BALL_D16_SHIFT)

#define PINMUX_BALL_D17_EMIF_nWE                                (0x1U <<  PINMUX_BALL_D17_SHIFT)
#define PINMUX_BALL_D17_EMIF_RNW                                (0x2U <<  PINMUX_BALL_D17_SHIFT)

#define PINMUX_BALL_D19_HET1_10                                 (0x1U <<  PINMUX_BALL_D19_SHIFT)
#define PINMUX_BALL_D19_MII_TX_CLK                              (0x2U <<  PINMUX_BALL_D19_SHIFT)
#define PINMUX_BALL_D19_OHCI_RCFG_txEnL_0                       (0x4U <<  PINMUX_BALL_D19_SHIFT)
#define PINMUX_BALL_D19_MII_TX_AVCLK4                           (0x8U <<  PINMUX_BALL_D19_SHIFT)

#define PINMUX_BALL_E1_GIOA_3                                   (0x1U <<  PINMUX_BALL_E1_SHIFT)
#define PINMUX_BALL_E1_HET2_2                                   (0x2U <<  PINMUX_BALL_E1_SHIFT)

#define PINMUX_BALL_E3_HET1_11                                  (0x1U <<  PINMUX_BALL_E3_SHIFT)
#define PINMUX_BALL_E3_MIBSPI3NCS_4                             (0x2U <<  PINMUX_BALL_E3_SHIFT)
#define PINMUX_BALL_E3_HET2_18                                  (0x4U <<  PINMUX_BALL_E3_SHIFT)
#define PINMUX_BALL_E3_OHCI_PRT_OvrCurrent_1                    (0x8U <<  PINMUX_BALL_E3_SHIFT)
#define PINMUX_BALL_E3_W2FC_VBUSI                               (0x10U <<  PINMUX_BALL_E3_SHIFT)

#define PINMUX_BALL_E5_ETMDATA_20				(0x1U <<  PINMUX_BALL_E5_SHIFT)
#define PINMUX_BALL_E5_EMIF_DATA_4				(0x2U <<  PINMUX_BALL_E5_SHIFT)

#define PINMUX_BALL_E6_ETMDATA_11				(0x1U <<  PINMUX_BALL_E6_SHIFT)
#define PINMUX_BALL_E6_EMIF_ADDR_2				(0x2U <<  PINMUX_BALL_E6_SHIFT)

#define PINMUX_BALL_E7_ETMDATA_10				(0x1U <<  PINMUX_BALL_E7_SHIFT)
#define PINMUX_BALL_E7_EMIF_ADDR_3				(0x2U <<  PINMUX_BALL_E7_SHIFT)

#define PINMUX_BALL_E8_ETMDATA_09				(0x1U <<  PINMUX_BALL_E8_SHIFT)
#define PINMUX_BALL_E8_EMIF_ADDR_4				(0x2U <<  PINMUX_BALL_E8_SHIFT)

#define PINMUX_BALL_E9_ETMDATA_08				(0x1U <<  PINMUX_BALL_E9_SHIFT)
#define PINMUX_BALL_E9_EMIF_ADDR_5				(0x2U <<  PINMUX_BALL_E9_SHIFT)

#define PINMUX_BALL_E10_ETMDATA_15				(0x1U <<  PINMUX_BALL_E10_SHIFT)
#define PINMUX_BALL_E10_EMIF_nDQM_0				(0x2U <<  PINMUX_BALL_E10_SHIFT)

#define PINMUX_BALL_E11_ETMDATA_14				(0x1U <<  PINMUX_BALL_E11_SHIFT)
#define PINMUX_BALL_E11_EMIF_nDQM_1				(0x2U <<  PINMUX_BALL_E11_SHIFT)

#define PINMUX_BALL_E12_ETMDATA_13				(0x1U <<  PINMUX_BALL_E12_SHIFT)
#define PINMUX_BALL_E12_EMIF_nOE				(0x2U <<  PINMUX_BALL_E12_SHIFT)

#define PINMUX_BALL_E13_ETMDATA_12				(0x1U <<  PINMUX_BALL_E13_SHIFT)
#define PINMUX_BALL_E13_EMIF_BA_0				(0x2U <<  PINMUX_BALL_E13_SHIFT)

#define PINMUX_BALL_E16_MIBSPI5SIMO_1                           (0x1U <<  PINMUX_BALL_E16_SHIFT)
#define PINMUX_BALL_E16_DMM_DATA_9                              (0x2U <<  PINMUX_BALL_E16_SHIFT)

#define PINMUX_BALL_E17_MIBSPI5SOMI_1                           (0x1U <<  PINMUX_BALL_E17_SHIFT)
#define PINMUX_BALL_E17_DMM_DATA_13                             (0x2U <<  PINMUX_BALL_E17_SHIFT)

#define PINMUX_BALL_E18_HET1_08                                 (0x1U <<  PINMUX_BALL_E18_SHIFT)
#define PINMUX_BALL_E18_MIBSPI1SIMO_1                           (0x2U <<  PINMUX_BALL_E18_SHIFT)
#define PINMUX_BALL_E18_MII_TXD_3                               (0x4U <<  PINMUX_BALL_E18_SHIFT)
#define PINMUX_BALL_E18_OHCI_PRT_OvrCurrent_0                   (0x8U <<  PINMUX_BALL_E18_SHIFT)

#define PINMUX_BALL_E19_MIBSPI5NCS_0                            (0x1U <<  PINMUX_BALL_E19_SHIFT)
#define PINMUX_BALL_E19_DMM_DATA_5                              (0x2U <<  PINMUX_BALL_E19_SHIFT)

#define PINMUX_BALL_F3_MIBSPI1NCS_1                             (0x1U <<  PINMUX_BALL_F3_SHIFT)
#define PINMUX_BALL_F3_HET1_17                                  (0x2U <<  PINMUX_BALL_F3_SHIFT)
#define PINMUX_BALL_F3_MII_COL                                  (0x4U <<  PINMUX_BALL_F3_SHIFT)
#define PINMUX_BALL_F3_OHCI_RCFG_suspend_0                      (0x8U <<  PINMUX_BALL_F3_SHIFT)

#define PINMUX_BALL_F5_ETMDATA_21				(0x1U <<  PINMUX_BALL_F5_SHIFT)
#define PINMUX_BALL_F5_EMIF_DATA_5				(0x2U <<  PINMUX_BALL_F5_SHIFT)

#define PINMUX_BALL_G3_MIBSPI1NCS_2                             (0x1U <<  PINMUX_BALL_G3_SHIFT)
#define PINMUX_BALL_G3_HET1_19                                  (0x2U <<  PINMUX_BALL_G3_SHIFT)
#define PINMUX_BALL_G3_MDIO                                     (0x4U <<  PINMUX_BALL_G3_SHIFT)

#define PINMUX_BALL_G5_ETMDATA_22				(0x1U <<  PINMUX_BALL_G5_SHIFT)
#define PINMUX_BALL_G5_EMIF_DATA_6				(0x2U <<  PINMUX_BALL_G5_SHIFT)

#define PINMUX_BALL_G16_MIBSPI5SOMI_3                           (0x1U <<  PINMUX_BALL_G16_SHIFT)
#define PINMUX_BALL_G16_DMM_DATA_15                             (0x2U <<  PINMUX_BALL_G16_SHIFT)

#define PINMUX_BALL_G17_MIBSPI5SIMO_3                           (0x1U <<  PINMUX_BALL_G17_SHIFT)
#define PINMUX_BALL_G17_DMM_DATA_11                             (0x2U <<  PINMUX_BALL_G17_SHIFT)

#define PINMUX_BALL_G19_MIBSPI1NENA                             (0x1U <<  PINMUX_BALL_G19_SHIFT)
#define PINMUX_BALL_G19_HET1_23                                 (0x2U <<  PINMUX_BALL_G19_SHIFT)
#define PINMUX_BALL_G19_MII_RXD_2                               (0x4U <<  PINMUX_BALL_G19_SHIFT)
#define PINMUX_BALL_G19_OHCI_PRT_RcvDpls_0                      (0x8U <<  PINMUX_BALL_G19_SHIFT)

#define PINMUX_BALL_H3_GIOA_6                                   (0x1U <<  PINMUX_BALL_H3_SHIFT)
#define PINMUX_BALL_H3_HET2_4                                   (0x2U <<  PINMUX_BALL_H3_SHIFT)

#define PINMUX_BALL_H16_MIBSPI5SOMI_2                           (0x1U <<  PINMUX_BALL_H16_SHIFT)
#define PINMUX_BALL_H16_DMM_DATA_14                             (0x2U <<  PINMUX_BALL_H16_SHIFT)

#define PINMUX_BALL_H17_MIBSPI5SIMO_2                           (0x1U <<  PINMUX_BALL_H17_SHIFT)
#define PINMUX_BALL_H17_DMM_DATA_10                             (0x2U <<  PINMUX_BALL_H17_SHIFT)

#define PINMUX_BALL_H18_MIBSPI5NENA                             (0x1U <<  PINMUX_BALL_H18_SHIFT)
#define PINMUX_BALL_H18_DMM_DATA_7                              (0x2U <<  PINMUX_BALL_H18_SHIFT)
#define PINMUX_BALL_H18_MII_RXD_3                               (0x4U <<  PINMUX_BALL_H18_SHIFT)
#define PINMUX_BALL_H18_OHCI_PRT_RcvDmns_0                      (0x8U <<  PINMUX_BALL_H18_SHIFT)

#define PINMUX_BALL_H19_MIBSPI5CLK                              (0x1U <<  PINMUX_BALL_H19_SHIFT)
#define PINMUX_BALL_H19_DMM_DATA_4                              (0x2U <<  PINMUX_BALL_H19_SHIFT)
#define PINMUX_BALL_H19_MII_TXEN                                (0x4U <<  PINMUX_BALL_H19_SHIFT)
#define PINMUX_BALL_H19_RMII_TXEN                               (0x8U <<  PINMUX_BALL_H19_SHIFT)

#define PINMUX_BALL_J3_MIBSPI1NCS_3                             (0x1U <<  PINMUX_BALL_J3_SHIFT)
#define PINMUX_BALL_J3_HET1_21                                  (0x2U <<  PINMUX_BALL_J3_SHIFT)

#define PINMUX_BALL_J18_MIBSPI5SOMI_0                           (0x1U <<  PINMUX_BALL_J18_SHIFT)
#define PINMUX_BALL_J18_DMM_DATA_12                             (0x2U <<  PINMUX_BALL_J18_SHIFT)
#define PINMUX_BALL_J18_MII_TXD_0                               (0x4U <<  PINMUX_BALL_J18_SHIFT)
#define PINMUX_BALL_J18_RMII_TXD_0                              (0x8U <<  PINMUX_BALL_J18_SHIFT)

#define PINMUX_BALL_J19_MIBSPI5SIMO_0                           (0x1U <<  PINMUX_BALL_J19_SHIFT)
#define PINMUX_BALL_J19_DMM_DATA_8                              (0x2U <<  PINMUX_BALL_J19_SHIFT)
#define PINMUX_BALL_J19_MII_TXD_1                               (0x4U <<  PINMUX_BALL_J19_SHIFT)
#define PINMUX_BALL_J19_RMII_TXD_1                              (0x8U <<  PINMUX_BALL_J19_SHIFT)

#define PINMUX_BALL_K2_GIOB_1                                   (0x1U <<  PINMUX_BALL_K2_SHIFT)
#define PINMUX_BALL_K2_OHCI_RCFG_PrtPower_0                     (0x2U <<  PINMUX_BALL_K2_SHIFT)

#define PINMUX_BALL_K5_ETMDATA_23				(0x1U <<  PINMUX_BALL_K5_SHIFT)
#define PINMUX_BALL_K5_EMIF_DATA_7				(0x2U <<  PINMUX_BALL_K5_SHIFT)

#define PINMUX_BALL_K15_ETMDATA_16                              (0x1U <<  PINMUX_BALL_K15_SHIFT)
#define PINMUX_BALL_K15_EMIF_DATA_0                             (0x2U <<  PINMUX_BALL_K15_SHIFT)

#define PINMUX_BALL_K17_EMIF_nCS_3                              (0x1U <<  PINMUX_BALL_K17_SHIFT)
#define PINMUX_BALL_K17_RTP_DATA_14                             (0x2U <<  PINMUX_BALL_K17_SHIFT)
#define PINMUX_BALL_K17_HET2_9                                  (0x4U <<  PINMUX_BALL_K17_SHIFT)

#define PINMUX_BALL_K18_HET1_0                                  (0x1U <<  PINMUX_BALL_K18_SHIFT)
#define PINMUX_BALL_K18_SPI4CLK                                 (0x2U <<  PINMUX_BALL_K18_SHIFT)

#define PINMUX_BALL_K19_HET1_28                                 (0x1U <<  PINMUX_BALL_K19_SHIFT)
#define PINMUX_BALL_K19_MII_RXCLK                               (0x2U <<  PINMUX_BALL_K19_SHIFT)
#define PINMUX_BALL_K19_RMII_REFCLK                             (0x4U <<  PINMUX_BALL_K19_SHIFT)
#define PINMUX_BALL_K19_MII_RX_AVCLK4                           (0x8U <<  PINMUX_BALL_K19_SHIFT)

#define PINMUX_BALL_L5_ETMDATA_24				(0x1U <<  PINMUX_BALL_L5_SHIFT)
#define PINMUX_BALL_L5_EMIF_DATA_8				(0x2U <<  PINMUX_BALL_L5_SHIFT)

#define PINMUX_BALL_L15_ETMDATA_17                              (0x1U <<  PINMUX_BALL_L15_SHIFT)
#define PINMUX_BALL_L15_EMIF_DATA_1                             (0x2U <<  PINMUX_BALL_L15_SHIFT)

#define PINMUX_BALL_M1_GIOA_7                                   (0x1U <<  PINMUX_BALL_M1_SHIFT)
#define PINMUX_BALL_M1_HET2_6                                   (0x2U <<  PINMUX_BALL_M1_SHIFT)

#define PINMUX_BALL_M2_GIOB_0                                   (0x1U <<  PINMUX_BALL_M2_SHIFT)
#define PINMUX_BALL_M2_OHCI_RCFG_txDpls_0                       (0x2U <<  PINMUX_BALL_M2_SHIFT)

#define PINMUX_BALL_M5_ETMDATA_25				(0x1U <<  PINMUX_BALL_M5_SHIFT)
#define PINMUX_BALL_M5_EMIF_DATA_9				(0x2U <<  PINMUX_BALL_M5_SHIFT)

#define PINMUX_BALL_M15_ETMDATA_18                              (0x1U <<  PINMUX_BALL_M15_SHIFT)
#define PINMUX_BALL_M15_EMIF_DATA_2                             (0x2U <<  PINMUX_BALL_M15_SHIFT)

#define PINMUX_BALL_M17_EMIF_nCS_4                              (0x1U <<  PINMUX_BALL_M17_SHIFT)
#define PINMUX_BALL_M17_RTP_DATA_07                             (0x2U <<  PINMUX_BALL_M17_SHIFT)

#define PINMUX_BALL_N1_HET1_15                                  (0x1U <<  PINMUX_BALL_N1_SHIFT)
#define PINMUX_BALL_N1_MIBSPI1NCS_4                             (0x2U <<  PINMUX_BALL_N1_SHIFT)

#define PINMUX_BALL_N2_HET1_13                                  (0x1U <<  PINMUX_BALL_N2_SHIFT)
#define PINMUX_BALL_N2_SCITX                                    (0x2U <<  PINMUX_BALL_N2_SHIFT)

#define PINMUX_BALL_N5_ETMDATA_26				(0x1U <<  PINMUX_BALL_N5_SHIFT)
#define PINMUX_BALL_N5_EMIF_DATA_10				(0x2U <<  PINMUX_BALL_N5_SHIFT)

#define PINMUX_BALL_N15_ETMDATA_19                              (0x1U <<  PINMUX_BALL_N15_SHIFT)
#define PINMUX_BALL_N15_EMIF_DATA_3                             (0x2U <<  PINMUX_BALL_N15_SHIFT)

#define PINMUX_BALL_N17_EMIF_nCS_0                              (0x1U <<  PINMUX_BALL_N17_SHIFT)
#define PINMUX_BALL_N17_RTP_DATA_15                             (0x2U <<  PINMUX_BALL_N17_SHIFT)
#define PINMUX_BALL_N17_HET2_7                                  (0x4U <<  PINMUX_BALL_N17_SHIFT)

#define PINMUX_BALL_N19_AD1EVT                                  (0x1U <<  PINMUX_BALL_N19_SHIFT)
#define PINMUX_BALL_N19_MII_RX_ER                               (0x2U <<  PINMUX_BALL_N19_SHIFT)
#define PINMUX_BALL_N19_RMII_RX_ER                              (0x4U <<  PINMUX_BALL_N19_SHIFT)

#define PINMUX_BALL_P1_HET1_24                                  (0x1U <<  PINMUX_BALL_P1_SHIFT)
#define PINMUX_BALL_P1_MIBSPI1NCS_5                             (0x2U <<  PINMUX_BALL_P1_SHIFT)
#define PINMUX_BALL_P1_MII_RXD_0                                (0x4U <<  PINMUX_BALL_P1_SHIFT)
#define PINMUX_BALL_P1_RMII_RXD_0                               (0x8U <<  PINMUX_BALL_P1_SHIFT)

#define PINMUX_BALL_P5_ETMDATA_27				(0x1U <<  PINMUX_BALL_P5_SHIFT)
#define PINMUX_BALL_P5_EMIF_DATA_11				(0x2U <<  PINMUX_BALL_P5_SHIFT)

#define PINMUX_BALL_R2_MIBSPI1NCS_0                             (0x1U <<  PINMUX_BALL_R2_SHIFT)
#define PINMUX_BALL_R2_MIBSPI1SOMI_1                            (0x2U <<  PINMUX_BALL_R2_SHIFT)
#define PINMUX_BALL_R2_MII_TXD_2                                (0x4U <<  PINMUX_BALL_R2_SHIFT)
#define PINMUX_BALL_R2_OHCI_PRT_RcvData_0                       (0x8U <<  PINMUX_BALL_R2_SHIFT)

#define PINMUX_BALL_R5_ETMDATA_28                               (0x1U <<  PINMUX_BALL_R5_SHIFT)
#define PINMUX_BALL_R5_EMIF_DATA_12                             (0x2U <<  PINMUX_BALL_R5_SHIFT)

#define PINMUX_BALL_R6_ETMDATA_29                               (0x1U <<  PINMUX_BALL_R6_SHIFT)
#define PINMUX_BALL_R6_EMIF_DATA_13                             (0x2U <<  PINMUX_BALL_R6_SHIFT)

#define PINMUX_BALL_R7_ETMDATA_30                               (0x1U <<  PINMUX_BALL_R7_SHIFT)
#define PINMUX_BALL_R7_EMIF_DATA_14                             (0x2U <<  PINMUX_BALL_R7_SHIFT)
        
#define PINMUX_BALL_R8_ETMDATA_31                               (0x1U <<  PINMUX_BALL_R8_SHIFT)
#define PINMUX_BALL_R8_EMIF_DATA_15                             (0x2U <<  PINMUX_BALL_R8_SHIFT)

#define PINMUX_BALL_R9_ETMTRACECLKIN                            (0x1U <<  PINMUX_BALL_R9_SHIFT)
#define PINMUX_BALL_R9_EXTCLKIN2                                (0x2U <<  PINMUX_BALL_R9_SHIFT)

#define PINMUX_BALL_T1_HET1_07                                  (0x1U <<  PINMUX_BALL_T1_SHIFT)
#define PINMUX_BALL_T1_OHCI_RCFG_PrtPower_1                     (0x2U <<  PINMUX_BALL_T1_SHIFT)
#define PINMUX_BALL_T1_W2FC_GZO                                 (0x4U <<  PINMUX_BALL_T1_SHIFT)
#define PINMUX_BALL_T1_HET2_14                                  (0x8U <<  PINMUX_BALL_T1_SHIFT)

#define PINMUX_BALL_T12_MIBSPI5NCS_3                            (0x1U <<  PINMUX_BALL_T12_SHIFT)
#define PINMUX_BALL_T12_DMM_DATA_3                              (0x2U <<  PINMUX_BALL_T12_SHIFT)

#define PINMUX_BALL_U1_HET1_03                                  (0x1U <<  PINMUX_BALL_U1_SHIFT)
#define PINMUX_BALL_U1_SPI4NCS_0                                (0x2U <<  PINMUX_BALL_U1_SHIFT)
#define PINMUX_BALL_U1_OHCI_RCFG_speed_1                        (0x4U <<  PINMUX_BALL_U1_SHIFT)
#define PINMUX_BALL_U1_W2FC_PUENON                              (0x8U <<  PINMUX_BALL_U1_SHIFT)
#define PINMUX_BALL_U1_HET2_10                                  (0x10U <<  PINMUX_BALL_U1_SHIFT)

#define PINMUX_BALL_V2_HET1_01                                  (0x1U <<  PINMUX_BALL_V2_SHIFT)
#define PINMUX_BALL_V2_SPI4NENA                                 (0x2U <<  PINMUX_BALL_V2_SHIFT)
#define PINMUX_BALL_V2_OHCI_RCFG_txEnL_1                        (0x4U <<  PINMUX_BALL_V2_SHIFT)
#define PINMUX_BALL_V2_W2FC_PUENO                               (0x8U <<  PINMUX_BALL_V2_SHIFT)
#define PINMUX_BALL_V2_HET2_8                                   (0x10U <<  PINMUX_BALL_V2_SHIFT)

#define PINMUX_BALL_V5_MIBSPI3NCS_1                             (0x1U <<  PINMUX_BALL_V5_SHIFT)
#define PINMUX_BALL_V5_HET1_25                                  (0x2U <<  PINMUX_BALL_V5_SHIFT)
#define PINMUX_BALL_V5_MDCLK                                    (0x4U <<  PINMUX_BALL_V5_SHIFT)

#define PINMUX_BALL_V6_HET1_05                                  (0x1U <<  PINMUX_BALL_V6_SHIFT)
#define PINMUX_BALL_V6_SPI4SOMI                                 (0x2U <<  PINMUX_BALL_V6_SHIFT)
#define PINMUX_BALL_V6_HET2_12                                  (0x4U <<  PINMUX_BALL_V6_SHIFT)

#define PINMUX_BALL_V7_HET1_09                                  (0x1U <<  PINMUX_BALL_V7_SHIFT)
#define PINMUX_BALL_V7_HET2_16                                  (0x2U <<  PINMUX_BALL_V7_SHIFT)
#define PINMUX_BALL_V7_OHCI_RCFG_suspend_1                      (0x4U <<  PINMUX_BALL_V7_SHIFT)
#define PINMUX_BALL_V7_W2FC_SUSPENDO                            (0x8U <<  PINMUX_BALL_V7_SHIFT)

#define PINMUX_BALL_V10_MIBSPI3NCS_0                            (0x1U <<  PINMUX_BALL_V10_SHIFT)
#define PINMUX_BALL_V10_AD2EVT                                  (0x2U <<  PINMUX_BALL_V10_SHIFT)
#define PINMUX_BALL_V10_GIOB_2                                  (0x4U <<  PINMUX_BALL_V10_SHIFT)

#define PINMUX_BALL_W3_HET1_06                                  (0x1U <<  PINMUX_BALL_W3_SHIFT)
#define PINMUX_BALL_W3_SCIRX                                    (0x2U <<  PINMUX_BALL_W3_SHIFT)

#define PINMUX_BALL_W5_HET1_02                                  (0x1U <<  PINMUX_BALL_W5_SHIFT)
#define PINMUX_BALL_W5_SPI4SIMO                                 (0x2U <<  PINMUX_BALL_W5_SHIFT)

#define PINMUX_BALL_W6_MIBSPI5NCS_2                             (0x1U <<  PINMUX_BALL_W6_SHIFT)
#define PINMUX_BALL_W6_DMM_DATA_2                               (0x2U <<  PINMUX_BALL_W6_SHIFT)

#define PINMUX_BALL_W9_MIBSPI3NENA                              (0x1U <<  PINMUX_BALL_W9_SHIFT)
#define PINMUX_BALL_W9_MIBSPI3NCS_5                             (0x2U <<  PINMUX_BALL_W9_SHIFT)
#define PINMUX_BALL_W9_HET1_31                                  (0x4U <<  PINMUX_BALL_W9_SHIFT)

#define PINMUX_BALL_W10_GIOB_3                                  (0x1U <<  PINMUX_BALL_W10_SHIFT)
#define PINMUX_BALL_W10_OHCI_PRT_RcvData_1                      (0x2U <<  PINMUX_BALL_W10_SHIFT)
#define PINMUX_BALL_W10_W2FC_RXDI                               (0x4U <<  PINMUX_BALL_W10_SHIFT)

#define PINMUX_GATE_EMIF_CLK_ON                                 (0x0 <<  PINMUX_GATE_EMIF_CLK_SHIFT)      /**/ 
#define PINMUX_GIOB_DISABLE_HET2_ON                             (0x1U <<  PINMUX_GIOB_DISABLE_HET2_SHIFT)
#define PINMUX_GATE_EMIF_CLK_OFF                                (0x1U <<  PINMUX_GATE_EMIF_CLK_SHIFT)    
#define PINMUX_GIOB_DISABLE_HET2_OFF                            (0x0 <<  PINMUX_GIOB_DISABLE_HET2_SHIFT)
#define PINMUX_ALT_ADC_TRIGGER_1                                (0x1U <<  PINMUX_ALT_ADC_TRIGGER_SHIFT)
#define PINMUX_ALT_ADC_TRIGGER_2                                (0x2U <<  PINMUX_ALT_ADC_TRIGGER_SHIFT)
#define PINMUX_ETHERNET_MII                                     (0x0 <<  PINMUX_ETHERNET_SHIFT)
#define PINMUX_ETHERNET_RMII                                    (0x1U <<  PINMUX_ETHERNET_SHIFT)



/** Pin Multiplexing Control Registers located at 0xffffeb10
 *  See TMS570 manual chapter 4.5.12
 */
typedef volatile struct {
	uint32_t PINMMR0;				/* 0xEB10 Pin Mux 0 register */
	uint32_t PINMMR1;				/* 0xEB14 Pin Mux 1 register */
	uint32_t PINMMR2;				/* 0xEB18 Pin Mux 2 register */
	uint32_t PINMMR3;				/* 0xEB1C Pin Mux 3 register */
	uint32_t PINMMR4;				/* 0xEB20 Pin Mux 4 register */
	uint32_t PINMMR5;				/* 0xEB24 Pin Mux 5 register */
	uint32_t PINMMR6;				/* 0xEB28 Pin Mux 6 register */
	uint32_t PINMMR7;				/* 0xEB2C Pin Mux 7 register */
	uint32_t PINMMR8;				/* 0xEB30 Pin Mux 8 register */
	uint32_t PINMMR9;				/* 0xEB34 Pin Mux 9 register */
	uint32_t PINMMR10;				/* 0xEB38 Pin Mux 10 register */
	uint32_t PINMMR11;				/* 0xEB3C Pin Mux 11 register */
	uint32_t PINMMR12;				/* 0xEB40 Pin Mux 12 register */
	uint32_t PINMMR13;				/* 0xEB44 Pin Mux 13 register */
	uint32_t PINMMR14;				/* 0xEB48 Pin Mux 14 register */
	uint32_t PINMMR15;				/* 0xEB4C Pin Mux 15 register */
	uint32_t PINMMR16;				/* 0xEB50 Pin Mux 16 register */
	uint32_t PINMMR17;				/* 0xEB54 Pin Mux 17 register */
	uint32_t PINMMR18;				/* 0xEB58 Pin Mux 18 register */
	uint32_t PINMMR19;				/* 0xEB5C Pin Mux 19 register */
	uint32_t PINMMR20;				/* 0xEB60 Pin Mux 20 register */
	uint32_t PINMMR21;				/* 0xEB64 Pin Mux 21 register */
	uint32_t PINMMR22;				/* 0xEB68 Pin Mux 22 register */
	uint32_t PINMMR23;				/* 0xEB6C Pin Mux 23 register */
	uint32_t PINMMR24;				/* 0xEB70 Pin Mux 24 register */
	uint32_t PINMMR25;				/* 0xEB74 Pin Mux 25 register */
	uint32_t PINMMR26;				/* 0xEB78 Pin Mux 26 register */
	uint32_t PINMMR27;				/* 0xEB7C Pin Mux 27 register */
	uint32_t PINMMR28;				/* 0xEB80 Pin Mux 28 register */
	uint32_t PINMMR29;				/* 0xEB84 Pin Mux 29 register */
	uint32_t PINMMR30;				/* 0xEB88 Pin Mux 30 register */
} pinmuxreg_t;

#define PINMUXREG	((pinmuxreg_t *)0xffffeb10U)

/* PINMUX kicker registers */
#define PINMUX_KICKER0	(*(volatile uint32_t *)0xffffea38U)
#define PINMUX_KICKER1	(*(volatile uint32_t *)0xffffea3cU)

#endif
