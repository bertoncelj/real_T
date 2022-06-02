#include <stdio.h>
#include <stdlib.h>



int (*func_call)(int a, int b);

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}


void fun(int a)
{
    printf("me: %d\n", a);

}
int fn(int (*func_call)(int a, int b)){

    return (*func_call)(10,5);
}

/* void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*)) */



bool compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);

}


int search(void *arr, int arr_size, int ele_size, void *x, bool compate(const void *, const void*))
{


}

int main(int args, char *argv[]) 
{
    printf("Hello World! Add: %d\n", fn(add));
    printf("Hello World! Sub: %d\n", fn(sub));
    void (*neki)(int z);
    int arr[10] = {1,5,3,6,3,2,0,9,4,7};
    qsort(arr,10,sizeof(int), compare);
    neki = &fun;
    for (int i=0; i < 10; i++)
    {
        printf("%d, ", arr[i]);
    }
    (*neki)(10);





    return 0;
}
