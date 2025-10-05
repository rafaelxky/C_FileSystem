#include "c_fs.h"
#include "block.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

// creates inode
struct Inode newInode(){
    struct Inode inode;
    inode.block = newBlock();
    return inode;
}

struct Block* newBlock(){
    struct Block *block = alloc(sizeof(struct Block));
    block->text[0] = '\0';
    block->next = NULL;
    block->inUse = true;
    return block;
}

void print_file(struct Inode* inode){
    struct Block* current = inode->block;
    while (current != NULL)
    {
        printf("%s", current->text);
        current = current->next;
    }
}
