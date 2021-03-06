EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Device:LED D1
U 1 1 61461596
P 7050 2250
F 0 "D1" H 7043 1995 50  0000 C CNN
F 1 "LED" H 7043 2086 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 7050 2250 50  0001 C CNN
F 3 "~" H 7050 2250 50  0001 C CNN
	1    7050 2250
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_Push_SPDT SW1
U 1 1 6146345D
P 6350 1550
F 0 "SW1" H 6350 1835 50  0000 C CNN
F 1 "SW_Push_SPDT" H 6350 1744 50  0000 C CNN
F 2 "buttons_custom:3_pin_switch_smd_side_mount" H 6350 1550 50  0001 C CNN
F 3 "~" H 6350 1550 50  0001 C CNN
	1    6350 1550
	1    0    0    -1  
$EndComp
Wire Wire Line
	6150 1950 6150 1550
Wire Wire Line
	6550 1450 7150 1450
Wire Wire Line
	7150 1450 7150 1650
$Comp
L MCU_Microchip_ATtiny:ATtiny85-20PU U1
U 1 1 61460E80
P 6150 2550
F 0 "U1" H 5621 2596 50  0000 R CNN
F 1 "ATtiny85-20PU" H 5621 2505 50  0000 R CNN
F 2 "Package_DIP:DIP-8_W7.62mm" H 6150 2550 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/atmel-2586-avr-8-bit-microcontroller-attiny25-attiny45-attiny85_datasheet.pdf" H 6150 2550 50  0001 C CNN
	1    6150 2550
	1    0    0    -1  
$EndComp
$Comp
L Device:LED D2
U 1 1 6146FA11
P 7700 2350
F 0 "D2" H 7693 2095 50  0000 C CNN
F 1 "LED" H 7693 2186 50  0000 C CNN
F 2 "LED_THT:LED_D3.0mm" H 7700 2350 50  0001 C CNN
F 3 "~" H 7700 2350 50  0001 C CNN
	1    7700 2350
	-1   0    0    1   
$EndComp
$Comp
L Device:R R2
U 1 1 6146FC72
P 8250 2400
F 0 "R2" H 8180 2354 50  0000 R CNN
F 1 "R" H 8180 2445 50  0000 R CNN
F 2 "Resistor_THT:R_Axial_DIN0414_L11.9mm_D4.5mm_P7.62mm_Vertical" V 8180 2400 50  0001 C CNN
F 3 "~" H 8250 2400 50  0001 C CNN
	1    8250 2400
	-1   0    0    1   
$EndComp
$Comp
L Device:R R1
U 1 1 6147010E
P 8050 2500
F 0 "R1" H 8120 2546 50  0000 L CNN
F 1 "R" H 8120 2455 50  0000 L CNN
F 2 "Resistor_THT:R_Axial_DIN0414_L11.9mm_D4.5mm_P7.62mm_Vertical" V 7980 2500 50  0001 C CNN
F 3 "~" H 8050 2500 50  0001 C CNN
	1    8050 2500
	1    0    0    -1  
$EndComp
Wire Wire Line
	6750 2250 6900 2250
Wire Wire Line
	7200 2250 8250 2250
Wire Wire Line
	8250 2550 8250 3150
Wire Wire Line
	8250 3150 8050 3150
Wire Wire Line
	6750 2350 7550 2350
Wire Wire Line
	7850 2350 8050 2350
Wire Wire Line
	8050 2650 8050 3150
Connection ~ 8050 3150
Wire Wire Line
	6150 3150 7450 3150
Connection ~ 7450 3150
Wire Wire Line
	7450 3150 8050 3150
$Comp
L Switch:SW_Push SW2
U 1 1 6148042E
P 7050 2650
F 0 "SW2" H 7050 2935 50  0000 C CNN
F 1 "SW_Push" H 7050 2844 50  0000 C CNN
F 2 "buttons_custom:SMD_2pin_button_custom" H 7050 2850 50  0001 C CNN
F 3 "~" H 7050 2850 50  0001 C CNN
	1    7050 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	7450 1650 7450 2650
Wire Wire Line
	6750 2650 6850 2650
Wire Wire Line
	7250 2650 7450 2650
Connection ~ 7450 2650
Wire Wire Line
	7450 2650 7450 3150
$Comp
L Device:Battery_Cell BT1
U 1 1 61487FDB
P 7350 1650
F 0 "BT1" V 7605 1700 50  0000 C CNN
F 1 "Battery_Cell" V 7514 1700 50  0000 C CNN
F 2 "Battery_Holders:Keystone_3034_1x20mm-CoinCell" V 7350 1710 50  0001 C CNN
F 3 "~" V 7350 1710 50  0001 C CNN
	1    7350 1650
	0    -1   -1   0   
$EndComp
$EndSCHEMATC
