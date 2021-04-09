#include<stdio.h>
#include "sudoku.h"

void printSudoku(int *arr,int row,int col)
{
     for (int i = 0; i < row; i++)
      {
         for (int j = 0; j < col; j++)
         {
             printf("%d  ",*((arr+i*col) + j)); 
         }            
        printf("\n");
       }
}


