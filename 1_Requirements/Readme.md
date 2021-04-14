# Requirements

## Introduction

 - This work is taken from [https://www.geeksforgeeks.org/sudoku-backtracking-7/](https://www.geeksforgeeks.org/sudoku-backtracking-7/) by **Pradeep Mondal P** and this is an improvement on it.
 - For this project, we require C Programming, makefile and Unit Testing using Unity.
 - Basic knowledge of Sudoku would be helpful to understand. One can try to build their own sudoku from [https://sudoku9x9.com/sudoku_blank_grid_9x9.php](https://sudoku9x9.com/sudoku_blank_grid_9x9.php)


 ## Research

Sudoku has been a popular puzzle game among kids, youngsters, older people. They are in newspapers, magazines, mobile games. The uniqueness of this game makes it so challenging and fun. I have been a fan of this game as a child, even now I like to play Sudoku once in a while and also tell other people about it.

There wasn't much to research for the game, though for code, I had to look for best algorithms and found online mentioned in introduction. 

### Benefits
The benefit or the goal of this program is to make Sudoku more popular. It will give user an idea of the beauty of this game.
 
 
 ## Features
 
 - Solve a sudoku problem.
 - User can input new sudoku values and will output solution for it.

## SWOT Analysis
![SWOT ANALYIS](https://github.com/Roopesh16/Stepin-Mini-Project/blob/ac7f995781639321c7da096a3ea033e97ed3ebf3/.github/workflows/swot.png)

# 4W's and 1'H
## Who:  
This game can be played by anyone from children to older people.
## What:
Sudoku is a brain teaser game, originated in Japan, and has globally become a popular game. This program solves sudoku problem given by user also has a sample problem in it.
## When:
It is made as a part of LTTS Step-in Mini Project work.
## Where:
It's made using Visual Studio Code IDE on Windows 10.
## How:
A simple algorithm is used which has 2 

# Detail Requirements
## High-Level Requirements
|ID| Description | Status
|--|--|--|
| HL1 | Contain sample and take User Sudoku | Implemented
| HL2 | Print the solution if exist | Implemented

## Low-Level Requirements
|ID| Description | Status
|--|--|--|
| LL1 | Sample and User sudoku in main() |Implemented
| LL2 | Call to solveSudoku() | Implemented
| LL3 | Check sudoku using safeSudoku() before solving | Implemented
| LL4 | solveSudoku() self call to fill the empty spaces | Implemented
| LL5 | Then print the solution, if exist | Implemented

