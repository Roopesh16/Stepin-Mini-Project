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
 * @brief Function to print Sudoku
 * 
 */

int printSudoku(int* arr);

/**
 * @brief Function to check if input value is valid
 * and move to next column and rows.
 * 
 */

int safeSudoku(int* arr, int row, int col, int num);

/**
 * @brief Function to solve Sudoku
 * 
 */

int solveSudoku(int* arr,int row, int col);


#endif






