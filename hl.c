#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    size_t elem_size;
    size_t size;
    size_t capacity;
    void* data;
}vector;

void init_vector(vector* l_vec, size_t el_size){
    l_vec->elem_size = el_size;
    l_vec->size = 0;
    l_vec->data = NULL;
}

void push_vector(vector* vec, void* i){
    ++vec->capacity;
    vec->size++;
    vec->data = realloc(vec->data, vec->elem_size);
    // vec->data+vec->size = i;
    memcpy(vec->data, i, vec->elem_size);
    printf("Pointer: %p \n", vec->data);
}

int main()
{
    vector vec;
    int i;
    init_vector(&vec, sizeof(int));
    for (i = 0; i < 5; i++)
    {
        push_vector(&vec, &i);
    }
    for (i = 0; i < vec.size; i++)
    {
        // printf("%d\n", i);
        // void* elem = (char*) (vec.data);
        // printf("%d, %d \n", i, *(int*)elem);
        printf("Pointer: %p \n", (int*)vec.data);
    }
    free(vec.data);
    
}