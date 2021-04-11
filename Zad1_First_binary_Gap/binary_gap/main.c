#include <stdio.h>
#include <stdlib.h>

int solution(int N)
{
    int zeroGap = 0;
    int tempZeroGap = 0;
    int i = 0;
    int j = 0;
    int tableForN[32] = {0};

    for( i=0; N>0; i++)
    {
        tableForN[i]= N%2;
        N = N/2;
    }

   /* for(j = i-1; j>=0; j--)
    {
        printf("tables: %d", tableForN[j]);
    }*/


    for( j=i-1; j>=0; j--)
    {
        if(tableForN[j] == 0)
        {
            tempZeroGap++;
        }
        else
        {
            if(tempZeroGap > zeroGap)
            {
                zeroGap = tempZeroGap;
            }
            tempZeroGap = 0;
        }
    }
    /*if(tempZeroGap > zeroGap)   //when ther is example like 10000 gap i not end by 1 but i is the longest string of 1
    {
        zeroGap = tempZeroGap;
    }*/

    return zeroGap;


}

int main()
{
    printf("PRZERWA:  %d\n", solution(32));
    return 0;
}
