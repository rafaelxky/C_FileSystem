#include "block_iter.h"
#include "block.h"
#include <stddef.h>
#include <stdio.h>



struct BlockIterator newBlockIter(struct Inode* inode){
    struct BlockIterator biter;
    biter.inode = inode;
    biter.current = inode->block;
    return biter;
}

struct Block* current(struct BlockIterator* biter){
    return biter->current;
}

struct Block* next(struct BlockIterator* biter){
    biter->current = biter->current->next;
    return biter->current;
}

void appendNewIterBlock(struct BlockIterator* biter){
    struct Block* current = biter->current;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newBlock();
}