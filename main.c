#include <stdio.h>
#include <stdlib.h>

int getCandidate(int arr[], int size)
{
    int max = -1;
    int c_candidate = 0;
    int j;
    for (j = 0; j < size; j++)
    {
        if (arr[j] > max)
        {
            max = arr[j];
            c_candidate = j;
        }
    }
    return(c_candidate);
}


int main(int argc, char *argv[])
{

    int c_initial = 0;
    int c_array[255] = {0};
    int c_sorted = 0;
    int i = 0;
    int display_limit = 0;

    if (argc != 2){
        display_limit = 5;

    }
    else
    {
        if(sscanf(argv[1], "%d", &display_limit)!=1)
        return(1);
    }

            while((c_initial = getchar()) != EOF)
            {

                c_array[c_initial] ++;

            }

            for ( i = 0; i < display_limit; i++)
            {
                c_sorted = getCandidate(c_array, 255);
                printf( "%c:\t%d\n", c_sorted, c_array[c_sorted] );
                c_array[c_sorted] = -1;
            }

    return 0;
}
