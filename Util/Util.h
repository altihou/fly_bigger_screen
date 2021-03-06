//
// Created by xjs on 2020/7/17.
//

#ifndef FLY_BIGGER_SCREEN_UTIL_H
#define FLY_BIGGER_SCREEN_UTIL_H

#include <stdint.h>
#include <stdlib.h>
#include "LoopArray.h"
#include "HashMap.h"
#include "ShareMemory.h"
#include "Stack.h"
#include "Heap.h"
#include "Huffman.h"
#include "vector.h"

#define BYTE_ALIGNED  __attribute__((packed, aligned(1)))
#define SWAP(a, b) \
do {\
    typeof(a) _temp = (a);\
    (a) = (b);\
    (b) = _temp;\
} while(0)

#define SET_BIT(v, b, pos) ((v) |= ((0x1 & b) << pos))
#define GET_BIT(v, pos) (((v) >> (pos)) & 0x1)


#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
uint16_t checksum(uint16_t *data, size_t len);
char *strrev(char *s);
typedef unsigned char byte;

void **pthis(void);
#define THIS(p) ((*(typeof(p))((*pthis()) = p)))
#endif //FLY_BIGGER_SCREEN_UTIL_H
