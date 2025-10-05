#pragma once
struct Inode newInode();
struct Block* newBlock();
void print_file(struct Inode* inode);

// holds the first block and file metadata
  struct Inode
    {
        struct Block* block;
    };