#include <stdio.h>
int main()
{
    int a;
    scanf("%u", &a);
    long int num = even(a);
    printf("%d ", num) ;
}
long int even(int a) {
    if (a > 1 && a % 2 == 0){
        return (a / 2) - 1;
    } else {if (a % 2 != 0 && a > 1){
        return (a - 1) / 2 ;
    } else {
        return 0;
    }
    }

}
