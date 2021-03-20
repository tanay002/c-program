#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int *j;
    *j=*a+*b;
    *b=*b-*a;
    if(*b<0)
    {
        *b=-(*b);
    }
    *a=*j;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

