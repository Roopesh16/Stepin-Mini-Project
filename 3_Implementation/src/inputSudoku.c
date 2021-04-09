#include<stdio.h>
#include "sudoku.h"

int inputSudoku(int *arr,int row,int col)
{
    printf("\n -->ENTER BELOW YOUR OWN SUDOKU VALUES.<--\n NOTE: 1. Must be a 9X9 Sudoku.\n\t2. For empty spaces enter '0'.\n\t 3.The Gap while entering represents that value is being added to a new row.\n\n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("  ");
            scanf("%d",((arr+i*col)+j));
            printf("  ");
        }
        printf("\n");
    }

    printf("\nBelow is the Solution\n\n");
    if (solveSuduko(arr, 0, 0)==1)
    {
        printSudoku(arr,row,col);
    }
    else
    {
        printf("No solution exists\n");
    }

 return 0;

}