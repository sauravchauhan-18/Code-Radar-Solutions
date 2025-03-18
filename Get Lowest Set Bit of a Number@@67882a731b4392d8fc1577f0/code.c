#include <stdio.h>

int getLowestSetBit(int num) {
    int position = 0;

    // If num is 0, return -1 (no set bit found)
    if (num == 0) return -1;

    // Loop until we find the first set bit
    while ((num & 1) == 0) {
        num >>= 1;
        position++;
    }
    
    return position;
}

int main() {
    int nu
