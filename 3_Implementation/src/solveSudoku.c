#include<stdio.h>
#include "sudoku.h"


/* Takes a partially filled-in grid and attempts
to assign values to all unassigned locations in
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */
int solveSuduko(int *arr,int row, int col)
{
     
    // Check if we have reached the 8th row
    // and 9th column (0
    // indexed matrix) , we are 
    // returning true to avoid
    // further backtracking
    if (row == 8 && col == 9)
    {
        return 1;
    }
        
 
    //  Check if column value  becomes 9 ,
    //  we move to next row and
    //  column start from 0
    if (col == 9)
    {
        row++;
        col = 0;
    }
   
    // Check if the current position
    // of the grid already contains
    // value >0, we iterate for next column
    if (*arr > 0)
    {
        return solveSudoku(arr, row, col + 1);
    }
    for (int num = 1; num <= 9; num++) 
    {
         
        // Check if it is safe to place
        // the num (1-9)  in the
        // given row ,col  ->we move to next column
        if (safeSudoku(arr, row, col, num)==1)
        {
            /* assigning the num in the
               current (row,col)
               position of the grid
               and assuming our assined num
               in the position
               is correct     */
            *arr = num;
           
            //  Checking for next possibility with next
            //  column
            if (solveSudoku(arr, row, col + 1)==1)
            {
                return 1;
            }
        }
       
        // Removing the assigned num ,
        // since our assumption
        // was wrong , and we go for next
        // assumption with
        // diff num value
        *arr = 0;
    }
    return 0;
}
 