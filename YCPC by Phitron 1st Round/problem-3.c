// even odd in c program...

#include <stdio.h>

void find_parity(int n) {
    if(n % 2 == 0){
        printf("Even \n");
    }
    else{
        printf("Odd \n");
    }

return;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    find_parity(n);

return 0;
}
