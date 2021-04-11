#include <stdio.h>
#include <stdlib.h>

int solution(int A[], int N)
{
    int i=0;
    int j=0;
    int temp = 0;
    for(i = 0; i<N - 1; i++)
    {
        for(j=0; j<N - 1 - i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp = A[j+1];
                A[j+1] = A[j];
                A[j]=temp;
            }
        }
    }
    for(i=0; i<N-1; i=i+2)
    {
        if(A[i]!=A[i+1])
        {
            return A[i];
        }
    }



}

int main()
{
    int A[7] = {9, 3, 9, 3, 9, 1, 9};
    printf("WYNIK: %d\n", solution(A, 7));
    return 0;
}
