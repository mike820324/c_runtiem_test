#include <stdio.h>
#include <stdlib.h>

int main() {
    /* variable in stack */
    int stack_var = 10;
    /* variable in heap */
    int *heap_var = (int *)malloc(sizeof(int));
    *heap_var = 20;

    /* variable in data section */
    static int data_var = 20;

    /* print out the information so we can debug */
    printf("\n");
    printf("heap : 0x%x\n", heap_var);
    printf("stack : 0x%x\n", &stack_var);
    printf("data  : 0x%x\n", &data_var);

    /* hang the process, so that we can dump the process virtual address space */
    while(1) {
    }
    return 0;
}
