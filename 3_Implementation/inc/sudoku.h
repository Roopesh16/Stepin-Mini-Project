/**
 * @file sudoku.h
 * @author Roopesh Verma    
 * @brief Header file for sudoku pr
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __SUDOKU_H__
#define __SUDOKU_H__

/**
 * @param Row: FOR ROWS
 * @param Col : FOR COLUMNS 
 * @param r:For ROWS
 * @param c:For COLUMNS
 * 
 */


/**
 * @brief Function to print Sudoku
 * 
 */

void printSudoku(int *arr,int row,int col);

/**
 * @brief Function to check if input value is valid
 * and move to next column and rows.
 * 
 */

int safeSudoku(int *arr, int row, int col, int num);

/**
 * @brief Function to solve Sudoku
 * 
 */

int solveSudoku(int *arr,int row, int col);

/**
 * @brief Input new Sudoku
 * 
 */

int inputSudoku(int *arr,int row,int col);

#endif






