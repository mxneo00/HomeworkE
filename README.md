# HomeworkE

Assignment Objectives
Practice using the fork() function to create multiple processes
Practice implementing a program in C that consists of several source code files
Assignment Summary
In this assignment, you will finish the coding of a partially-completed C program that uses the fork() and wait() functions to create child processes and then wait for each of them to terminate. The program finds the largest integer value in an array of integers. Provided on the command line are the number of children processes to be used to search the array, and the total number of entries in the array. In the Software Requirements section below is an explanation of the two functions that you will implement for this program.

The sample-runs.txt file contains a series of sample runs of the program. The output from your part of the program should match the format and style of the (Child process#) lines shown in these sample runs. The rest of the lines are printed by the parent process using code in the main module. Note that the actual maximum values found by the children processes in your program will vary depending on the contents of the integer array.

Software Requirements
You shall implement the following two functions:

void searchIntegerList(int list[], int nbrOfListEntries, int childrenCount)
This function shall first compute how many numbers to give to each child based on the total number of entries in the list and the number of children. Each child shall receive the same amount of numbers to search except for possibly the last child, who may get less. The function shall then use a for loop (as shown in the Robbins slides) and the fan method to distribute the list of numbers out to each child. Inside the for loop, the parent shall set two local variables. One variable is the starting index for the next child that is created. The other variable is the number of entries to be searched by the next child that
