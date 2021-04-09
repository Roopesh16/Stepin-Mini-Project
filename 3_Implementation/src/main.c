#include<stdio.h>
#include "sudoku.h"

#define N 9

int main()
{
    // 0 means unassigned cells

    printf("\nBelow is a sample 9X9 Sudoku Problem \n\n");
    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },
                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },
                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },
                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },
                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },
                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },
                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },
                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },
                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };


    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d  ", grid[i][j]);             
        }
        printf("\n");
    }
    
    printf("\nBelow is the Solution\n\n");
    if (solveSuduko(grid, 0, 0)==1)
        printSudoku(grid,N,N);
    else
        printf("No solution exists\n");

printf("To enter your Sudoku, enter 1. \n To exit,enter 2");
int a, newArr[N][N];
scanf("%d",&a);

switch(a)
{
    case 1: inputSudoku(newArr,N,N);
            break;
    case 2: exit(1);
}

printf("\t\tTHANK YOU");

return 0;

}