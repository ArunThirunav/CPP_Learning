#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    size_t elem_size;
    size_t capacity;
    size_t size;
    void* data;
}vec;

void new_vector(vec* l_vec, size_t el_size){
    l_vec->elem_size = el_size;
    l_vec->capacity = 0;
    l_vec->size = 0;
    l_vec->data = NULL;
}

void push_vector(vec* vec, void* i){
    void* insertor;
    if(vec->size == vec->capacity){
        vec->capacity = vec->capacity*2 + 1;
        printf("cap: %ld\n", vec->capacity);
        vec->data = realloc(vec->data, vec->capacity);
    }
    insertor = (char*)(vec->data + vec->size * vec->elem_size);
    memcpy(insertor, (char*)i, vec->elem_size);
    vec->size++;
}

int main()
{
    vec vector;
    int i;
    new_vector(&vector, sizeof(int));
    printf("%ld\n", vector.elem_size);
    for (i = 0; i < 5; i++)
    {
        push_vector(&vector, &i);
    }
    free(vector.data);
    
}