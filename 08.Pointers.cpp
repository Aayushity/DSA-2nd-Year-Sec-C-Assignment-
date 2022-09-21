#include <stdio.h>
#include <cmath>
void update(int *a,int *b) {
    // Complete this function
        int temp=*a; //temp = 4
    if(*a>*b) {
        *a=*a+*b;
        *b=temp-*b;
    } else {
         *a=*a+*b; // *a= 9
         *b=(temp-*b)/-1; // *b=1
    }
    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
