#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d",&N);
    int A[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    int max=0,sum=0;
    for(int i=0; i<N; i++)
    {
        if(A[i]%2==0)
        {
            if(A[i]>max)
            {
                max=A[i];
            }
        }
    }
    for(int i=0; i<N; i++)
    {
        sum=0;
        for(int j=i+1; j<N; j++)
        {
            sum=A[i]+A[j];
            if(sum%2==0)
            {
                if(sum>max)
                {
                    max=sum;
                }
            }
        }
    }
    printf("%d",max);
    return 0;
}
