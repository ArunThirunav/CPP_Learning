#include<stdio.h>
//To use realloc in our program
#include<stdlib.h>
#include<string.h>
int main()
{
    void *ptr=NULL;
    int size = 5;
    int i;
    int cap = 0;
    for (i = 0; i < size; i++)
    {
        ++cap;
        ptr = realloc(ptr,cap*sizeof(int));
        printf("OK\n");
        printf("Point: %p\n", ptr);
        memcpy(ptr, &i, sizeof(int));
    }


    for(i = 0; i < size; i++)
        printf("%d\n",*(int*)ptr);
    free(ptr);
    return 0;
}