#ifndef __OLED_FONT_H
#define __OLED_FONT_H

/*OLED字模库，宽8像素，高16像素*/
const uint8_t OLED_F8x16[][8]=
{
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//  0
	
	0x00,0x00,0x00,0xF8,0x00,0x00,0x00,0x00,//! 1
	
	0x00,0x10,0x0C,0x06,0x10,0x0C,0x06,0x00,//" 2
	
	0x40,0xC0,0x78,0x40,0xC0,0x78,0x40,0x00,//# 3
	
	0x00,0x70,0x88,0xFC,0x08,0x30,0x00,0x00,//$ 4
	
	0xF0,0x08,0xF0,0x00,0xE0,0x18,0x00,0x00,//% 5
	
	0x00,0xF0,0x08,0x88,0x70,0x00,0x00,0x00,//& 6
	
	0x10,0x16,0x0E,0x00,0x00,0x00,0x00,0x00,//' 7
	
	0x00,0x00,0x00,0xE0,0x18,0x04,0x02,0x00,//( 8
	
	0x00,0x02,0x04,0x18,0xE0,0x00,0x00,0x00,//) 9
	
	0x40,0x40,0x80,0xF0,0x80,0x40,0x40,0x00,//* 10
	
	0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x00,//+ 11
	
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//, 12
	
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,//- 13
	
	0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,//. 14
	
	0x00,0x00,0x00,0x00,0x80,0x60,0x18,0x04,/// 15
	
	0x00,0x3E,0x32,0x2A,0x26,0x3E,0x00,0x00,//0 16
	
	0x00,0x18,0x08,0x08,0x08,0x08,0x00,0x00,//1 17
	
	0x00,0x3E,0x02,0x3E,0x20,0x3E,0x00,0x00,//2 18
	
	0x00,0x3E,0x02,0x0E,0x02,0x3E,0x00,0x00,//3 19
	
	0x00,0x22,0x22,0x3E,0x02,0x02,0x00,0x00,//4 20
	
	0x00,0x3E,0x20,0x3E,0x02,0x3E,0x00,0x00,//5 21
	
	0x00,0x3E,0x20,0x3E,0x22,0x3E,0x00,0x00,//6 22
	
	0x00,0x3E,0x02,0x02,0x02,0x02,0x00,0x00,//7 23
	
	0x00,0x3E,0x22,0x3E,0x22,0x3E,0x00,0x00,//8 24
	
	0x00,0x3E,0x22,0x3E,0x02,0x02,0x00,0x00,//9 25
	
	0x00,0x00,0x00,0xC0,0xC0,0x00,0x00,0x00,//: 26
	
	0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,//; 27
	
	0x00,0x00,0x80,0x40,0x20,0x10,0x08,0x00,//< 28
	
	0x40,0x40,0x40,0x40,0x40,0x40,0x40,0x00,//= 29
	
	0x00,0x10,0x18,0x1C,0x18,0x10,0x00,0x00,//> 30
	
	0x00,0x70,0x48,0x08,0x08,0x08,0xF0,0x00,//? 31
	
	0xC0,0x30,0xC8,0x28,0xE8,0x10,0xE0,0x00,//@ 32
	
	0x00,0x3E,0x22,0x3E,0x22,0x22,0x00,0x00,//A 33
	
	0x00,0x3C,0x22,0x3E,0x22,0x3C,0x00,0x00,//B 34
	
	0x00,0x3E,0x20,0x20,0x20,0x3E,0x00,0x00,//C 35
	
	0x00,0x3C,0x22,0x22,0x22,0x3C,0x00,0x00,//D 36
	
	0x00,0x3E,0x20,0x38,0x20,0x3E,0x00,0x00,//E 37
	
	0x00,0x3E,0x20,0x38,0x20,0x20,0x00,0x00,//F 38
	
	0x00,0x3E,0x20,0x2E,0x22,0x3E,0x00,0x00,//G 39
	
	0x00,0x22,0x22,0x3E,0x22,0x22,0x00,0x00,//H 40
	
	0x00,0x3E,0x08,0x08,0x08,0x3E,0x00,0x00,//I 41
	
	0x00,0x02,0x02,0x02,0x22,0x3E,0x00,0x00,//J 42
	
	0x00,0x22,0x24,0x38,0x24,0x22,0x00,0x00,//K 43
	
	0x00,0x20,0x20,0x20,0x20,0x3e,0x00,0x00,//L 44
	
	0x00,0x22,0x36,0x2a,0x22,0x22,0x00,0x00,//M 45
	
	0x00,0x22,0x32,0x2a,0x26,0x22,0x00,0x00,//N 46
	
	0x00,0x3e,0x22,0x22,0x22,0x3e,0x00,0x00,//O 47
	
	0x00,0x3c,0x22,0x3e,0x20,0x20,0x00,0x00,//P 48
	
	0x00,0x3e,0x22,0x22,0x2a,0x3e,0x08,0x00,//Q 49
	
	0x00,0x3c,0x22,0x3e,0x24,0x22,0x00,0x00,//R 50
	
	0x00,0x3e,0x20,0x1c,0x02,0x3e,0x00,0x00,//S 51
	
	0x00,0x3e,0x08,0x08,0x08,0x08,0x00,0x00,//T 52
	
	0x00,0x22,0x22,0x22,0x22,0x3e,0x00,0x00,//U 53
	
	0x00,0x22,0x22,0x22,0x14,0x08,0x00,0x00,//V 54
	
	0x00,0x22,0x22,0x2a,0x36,0x22,0x00,0x00,//W 55
	
	0x00,0x22,0x14,0x08,0x14,0x22,0x00,0x00,//X 56
	
	0x00,0x22,0x22,0x1c,0x08,0x08,0x00,0x00,//Y 57
	
	0x00,0x3e,0x04,0x08,0x10,0x3e,0x00,0x00,//Z 58
	
	0x00,0x1c,0x08,0x3e,0x3e,0x08,0x00,0x00,//[ 59 敌机
	
	0x00,0x08,0x3e,0x7f,0x08,0x08,0x1c,0x00,//\ 60
	
	0x00,0x14,0x3e,0x3e,0x1c,0x08,0x00,0x00,//] 61 爱心
	
	0x00,0x00,0x00,0x08,0x1c,0x08,0x00,0x00,//^ 62 子弹
	
	0x00,0x00,0x00,0x08,0x08,0x00,0x00,0x00,//_ 63
	
	0x00,0x08,0x3e,0x7f,0x08,0x08,0x1c,0x00,//` 64 自己飞机
	
	0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,//a 65
	
	0x08,0xF8,0x00,0x80,0x80,0x00,0x00,0x00,//b 66
	
	0x00,0x00,0x00,0x80,0x80,0x80,0x00,0x00,//c 67
	
	0x00,0x00,0x00,0x80,0x80,0x88,0xF8,0x00,//d 68
	
	0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,//e 69
	
	0x00,0x80,0x80,0xF0,0x88,0x88,0x88,0x18,//f 70
	
	0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,//g 71
	
	0x08,0xF8,0x00,0x80,0x80,0x80,0x00,0x00,//h 72
	
	0x00,0x80,0x98,0x98,0x00,0x00,0x00,0x00,//i 73
	
	0x00,0x00,0x00,0x80,0x98,0x98,0x00,0x00,//j 74
	
	0x08,0xF8,0x00,0x00,0x80,0x80,0x80,0x00,//k 75
	
	0x00,0x08,0x08,0xF8,0x00,0x00,0x00,0x00,//l 76
	
	0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x00,//m 77
	
	0x80,0x80,0x00,0x80,0x80,0x80,0x00,0x00,//n 78
	
	0x00,0x00,0x80,0x80,0x80,0x80,0x00,0x00,//o 79
	
	0x80,0x80,0x00,0x80,0x80,0x00,0x00,0x00,//p 80
	
	0x00,0x00,0x00,0x80,0x80,0x80,0x80,0x00,//q 81
	
	0x80,0x80,0x80,0x00,0x80,0x80,0x80,0x00,//r 82
	
	0x00,0x00,0x80,0x80,0x80,0x80,0x80,0x00,//s 83
	
	0x00,0x80,0x80,0xE0,0x80,0x80,0x00,0x00,//t 84
	
	0x80,0x80,0x00,0x00,0x00,0x80,0x80,0x00,//u 85
	
	0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,//v 86
	
	0x80,0x80,0x00,0x80,0x00,0x80,0x80,0x80,//w 87
	
	0x00,0x80,0x80,0x00,0x80,0x80,0x80,0x00,//x 88
	
	0x80,0x80,0x80,0x00,0x00,0x80,0x80,0x80,//y 89
	
	0x00,0x80,0x80,0x80,0x80,0x80,0x80,0x00,//z 90
	
	0x00,0x00,0x00,0x00,0x80,0x7C,0x02,0x02,//{ 91
	
	0x00,0x00,0x00,0x00,0xFF,0x00,0x00,0x00,//| 92
	
	0x00,0x02,0x02,0x7C,0x80,0x00,0x00,0x00,//} 93
	
	0x00,0x06,0x01,0x01,0x02,0x02,0x04,0x04,//~ 94
};

#endif
