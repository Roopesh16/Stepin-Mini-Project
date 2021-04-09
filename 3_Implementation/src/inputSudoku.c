#include<stdio.h>
#include "sudoku.h"

int (*SolveSud)(int *,int,int) = &solveSudoku;
int(*PrintSudoku)(int *) = &printSudoku;

int inputSudoku(int* arr)
{
    printf("\n -->ENTER BELOW YOUR OWN SUDOKU VALUES.<--\n NOTE: 1. Must be a 9X9 Sudoku.\n\t2. For empty spaces enter '0'.\n\t 3.The Gap while entering represents that value is being added to a new row.\n\n");

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            printf("  ");
            scanf("%d",((arr+i*9)+j));
            printf("  ");
        }
        printf("\n");
    }

    printf("\nBelow is the Solution\n\n");
    if (SolveSud(arr, 0, 0)==1)
    {
        PrintSudoku(arr);
    }
    else
    {
        printf("No solution exists\n");
    }

 return 0;

}