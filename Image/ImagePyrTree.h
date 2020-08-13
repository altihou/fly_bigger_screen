//
// Created by xjs on 2020/8/11.
//

#ifndef FLY_BIGGER_SCREEN_IMAGEPYRTREE_H
#define FLY_BIGGER_SCREEN_IMAGEPYRTREE_H

#include "PImage.h"

typedef struct ImagePyramid {
    PImage image[4];
} ImagePyramid;

typedef struct ImagePyrDataType {
    PImage image;
    int odd_even_num;
    int node_layer;
} ImagePyrDataType;

typedef struct ImagePyrTree {
    StackHead stack;
    int layer;
} ImagePyrTree;

ImagePyrTree initImagePyrTree(int layer);
void destoryImagePyrTree(ImagePyrTree *tree);
int imagePyramid(ImagePyrTree *tree, PImage image);
int putPyramid(ImagePyrTree *tree, ImagePyrDataType pyramid);
int mergePyramid(ImagePyramid pyramid, PImage *out);
int splitPyramid(PImage image, ImagePyramid *out);

#endif //FLY_BIGGER_SCREEN_IMAGEPYRTREE_H
