/*
We defined each pin connected to the IC under test according to the schematic design.
This is much easier to keep track of each pin.
*/
#include "reg52.h"
#include "stdio.h" 

sbit Test_switch = P3^5;

sbit latch = P3^6;

// DIP14 pin definitions
sbit P1_14 = P0^3;
sbit P2_14 = P0^4;
sbit P3_14 = P0^5;
sbit P4_14 = P0^6;
sbit P5_14 = P0^7;
sbit P6_14 = P2^7;
sbit P7_14 = P2^6;

sbit P8_14 = P3^4;
sbit P9_14 = P3^3;
sbit P10_14 = P3^2;
sbit P11_14 = P2^0;
sbit P12_14 = P2^1;
sbit P13_14 = P2^2;
sbit P14_14 = P2^3;

//DIP16 pin definitions

sbit P1_16 = P0^2;
sbit P2_16 = P0^3;
sbit P3_16 = P0^4;
sbit P4_16 = P0^5;
sbit P5_16 = P0^6;
sbit P6_16 = P0^7;
sbit P7_16 = P2^7;
sbit P8_16 = P2^6;
sbit P9_16 = P3^4;
sbit P10_16 = P3^3;
sbit P11_16 = P3^2;
sbit P12_16 = P2^0;
sbit P13_16 = P2^1;
sbit P14_16 = P2^2;
sbit P15_16 = P2^3;
sbit P16_16 = P2^4;
