#pragma once
#include "block.h"
#include "c_fs.h"

struct BlockIterator{
    struct Inode* inode;
    struct Block* current;
};

struct BlockIterator newBlockIter(struct Inode* inode);
struct Block* next(struct BlockIterator* biter);
struct Block* current(struct BlockIterator* biter);
void appendNewIterBlock(struct BlockIterator* biter);