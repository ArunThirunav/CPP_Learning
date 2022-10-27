#include<stdio.h>
//To use realloc in our program
#include<stdlib.h>

int main()
{
    void *ptr=NULL;
    int size,i;
    size = 5;
    int cap = 0;
    for (i = 0; i < size; i++)
    {
        /* code */
        ++cap;
        ptr = realloc(ptr, cap*sizeof(int));
        *(int*)ptr + i = i*3;
        printf("add: %p\n", ptr);
        printf("%d\n",*(int*)ptr+i);
    }
    
    // *((int*)ptr + 1) = 2;
    // *((int*)ptr + 2) = 3;
    // *((int*)ptr + 3) = 4;
    // *((int*)ptr + 4) = 5;
    printf("addAt: %p\n", ptr);
    for(i = 0; i < size; i++)
          printf("%d\n",*(int*)ptr+i);
    printf("add: %p\n", ptr);
    free(ptr);
    return 0;
}