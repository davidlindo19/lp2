#include <stdio.h>

int main() {
    printf("primeiro numero inteiro");
    int a;
    scanf("%d" , &a);
    printf("segundo numero inteiros:");
    int b;
    scanf ("%d" , &b);
    printf ("%d + %d = %d\n" , a,b, (a+b));
    printf ("%d - %d = %d\n" , a,b, (a-b));
    printf ("%d * %d = %d\n" , a,b, (a*b));
    printf ("%d / %d = %d\n" , a,b, (a/b));
    return 0;
}


