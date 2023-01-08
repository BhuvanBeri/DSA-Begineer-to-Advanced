// structures and pointer and malloc()

#include<stdio.h>
#include<stdlib.h>

struct Emp
{
    int eno;
    char ename[25];
    int esal;
};

int main() {
    struct Emp* ptr;
    ptr = (struct Emp*) malloc(sizeof(struct Emp));
    scanf("%d,%s,%d", &ptr->eno, ptr->ename, &ptr->esal);
    if (ptr == NULL) {
        printf("Error: malloc failed \n");
    } else {
        printf("%d, %s, %d", ptr->eno, ptr->ename, ptr->esal);
    }
    return 0;
}