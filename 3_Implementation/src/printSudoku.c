/**
 * @file printSudoku.c
 * @author Roopesh Verma
 * @brief Function to print the solved SUDOKU
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include<stdio.h>
#include "sudoku.h"

int printSudoku(int arr[9][9])
{
     for (int i = 0; i < 9; i++)
      {
         for (int j = 0; j < 9; j++)
         {
             printf("%d  ",arr[i][j]); 
         }            
        printf("\n");
       }

       return 0;
}


