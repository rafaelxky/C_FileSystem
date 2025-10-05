#include "c_fs.h"
#include "block_iter.h"
#include <string.h>

int main(int argc, char const *argv[])
{   
    struct Inode file1 = newInode();
    struct BlockIterator biter = newBlockIter(&file1);
    strcpy(current(&biter)->text, "Hello world \n");
    appendNewIterBlock(&biter);
    strcpy(next(&biter)->text, "This is text from the second block\n");
    print_file(biter.inode);

    // create new file
    // open file
    // write
    // close
    // only 1 file open at a time

    // todo: implement frontfacing file.c
    // implement free block tracking
    // implement mock functions for real raw disk write / read
    return 0;
}
