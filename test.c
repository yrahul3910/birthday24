#pragma GCC optimize("O0")
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define N(a)       "%"#a"$hhn"
#define O(a,b)     "%45$"#a"d"N(b)
#define o(a)       "%100$"#a"d"
#define B(a,b,w)   o(*(a))o(*(b))o(w)N(a) 
#define SS         "\n\033[2J\n%26$s";  // Clear the screen, then print argument 26 as a string

char* fmt = O(37,2) // Write 37 (%) to arg 1 (which is d)
    O(78,3)  // Write 115 (s) to arg 2 (d+1), since we already wrote 37 bytes
    O(141, 4)  // Write 0 (256 % 256) to arg 3 (d+2)
    O(77,6)O(28,7)O(251,8)O(10,9)O(251,10)O(254,11)O(257,12)O(12,13)O(255,14) // Write "Midnights" to d[32-41]
    O(141,1)  // Reset counter to 0
    O(109,15)O(248,16)O(256,17)O(15,18)O(186,19)O(60,20)O(255,21)O(11,22)O(186,23)O(69,24)O(246,25)O(198,26)O(74,27)O(236,28)O(255,29)O(261,30)O(251,31)O(253,32)O(209,33)O(258,34)  // meet.jit.si/yedida24
    O(204,1)  // Reset counter to 0
    N(1)
    B(6,35,25)B(7,36,25)B(8,37,25)B(9,38,25)B(10,39,24)B(11,40,24)B(12,41,24)B(13,42,24)B(14,43,24)
    O(2,1)  // Reset counter to 0
    O(103,30)O(251,31);

// Memory layout
// d[0-2]: %s
// d[10-30]: meet.jit.si/yedida24
// d[31-40]: Midnights (expected)
// d[58-67]: Input
// d[68]: Temporary stuff

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

    for (int i = 0; i < 69; i++) {
        printf("d[%2d] = %c,%d\n", i, d[i], d[i]);
    }

    printf("%s\n", memcmp(d+31, d+58, 3) ? d+10 : (memset(d+10, 0, 21), d+10));
}

