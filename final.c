#pragma GCC optimize("O0")
#include <stdio.h>

#define TITLE      "You're on your own, kid"
#define HINT1      "Search deep within for the answers"
#define HINT2      "All good things take time"

#define N(a)       "%"#a"$hhn"
#define O(a,b)     "%45$"#a"d"N(b)
#define o(a)       "%100$"#a"d"
#define B(a,b,w)   o(*(a))o(*(b))o(w)N(a) 
#define SS         "\n\033[2J\n%26$s";

char* fmt = O(37,2)O(78,3)/*________________*/O(141,4)O(77,6)O(28,7)O(251,8)O(10,
            9)O(251,10)O/* | \    /|\    / |*/(254,11)O(257,12)O(12,13)O(255,14)O(
            141,1)O(109,/* |       |       |*/15)O(248,16)O(256,17)O(15,18)O(186,
            19)O(60,20)O/* |      /|\      |*/(255,21)O(11,22)O(186, 23)O(69,24)O(
            246,25)O(198,/*| -     o     - |*/26)O(74,27)O(236,28)O(255,29)O(261,
            30)O(251,31)O/*|               |*/(253,32)O(209,33)O(258,34)O(204,1)N(
            1)B(6,35,25)B/*| /     |     \ |*/(7,36,25)B(8,37,25)B(9,38,25)B(10,39,
            24)B(11,40,24)/*----------------*/B(12,41,24)B(13,42,24)B(14,43,24)O(2,
            1)O(103,30)O(251,31);

#define arg d+68,d,d+1,d+2,(scanf(d,d+58),d+68),\
    d+31,d+32,d+33,d+34,d+35,\
    d+36,d+37,d+38,d+39,d+10,\
    d+11,d+12,d+13,d+14,d+15,\
    d+16,d+17,d+18,d+19,d+20,\
    d+21,d+22,d+23,d+24,d+25,\
    d+26,d+27,d+28,d+29,d+30,\
    d+58,d+59,d+60,d+61,d+62,\
    d+63,d+64,d+65,d+66,d+67

volatile char d[69] __attribute__((aligned(64))) = {37,115, 0};

int main() {
    printf(fmt, arg);
}
