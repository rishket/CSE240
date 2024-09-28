// CSE240 Spring 2022 HW3

// Rishi Vadrevu
// IDE: GCC

#include <stdio.h>
#include <string.h>

#pragma warning(disable : 4996)  // compiler directive for Visual Studio only

// Read before you start:
// You are given a partially complete program. Your job is to complete the functions in order for this program to work successfully.
// All instructions are given above the required functions, please read them and follow them carefully. 
// You shoud not modify the function return types or parameters.
// You can assume that all inputs are valid. Ex: If prompted for an integer, the user will input an integer.

// Global Macro Values. They are used to define the size of 2D array of integers
#define NUM_ROWS 5
#define NUM_COLUMNS 5
#define NUM_STRINGS 5 
#define STRING_LENGTH 50

// Forward Declarations
void printMatrix(int[NUM_ROWS][NUM_COLUMNS]);
void printMatrixDiagonal(int[NUM_ROWS][NUM_COLUMNS]);
void sumMatrixCols(int[NUM_ROWS][NUM_COLUMNS]);
void rotateMatrixRows(int[NUM_ROWS][NUM_COLUMNS], int);
void transposeMatrix(int[NUM_ROWS][NUM_COLUMNS]);
void horizontalFlipMatrix(int[NUM_ROWS][NUM_COLUMNS]);
void reverseStrings(char strings[NUM_STRINGS * STRING_LENGTH]);
int noOfOccurencesOfChar(char s[NUM_STRINGS * STRING_LENGTH], char);


// Problem 1: printMatrix (5 points)
// Traverse the 2D array of integers variable 'matrix' (input from main)
// and print the contents in the following format (actual contents may vary)
// e.g.
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
void printMatrix(int matrix[NUM_ROWS][NUM_COLUMNS])
{
	for(int i = 0; i < NUM_ROWS; i++){
		for(int j = 0; j < NUM_COLUMNS; j++){
			printf("%d", matrix[i][j]);
			printf(" ");
		}
		printf("\n");
	}
	
}

// Problem 2: printMatrixDiagonal (5 points)
// Traverse the 2D array of integers 'matrix' and print each value on the diagonal from the 
// top left to bottom right position.
// e.g.
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15	=> 1 7 13 19 25
// 16 17 18 19 20
// 21 22 23 24 25
void printMatrixDiagonal(int matrix[NUM_ROWS][NUM_COLUMNS])
{
	for(int i = 0; i < NUM_ROWS; i++){
		for(int j = 0; j < NUM_COLUMNS; j++){
			if(i==j)
				printf("%d", matrix[i][j]);
				printf(" ");
		}
	}
	
}

// Problem 3: sumMatrixCols (5 points)
// Traverse the 2D array of integers 'matrix' and print the sum of each column on its own line.
// e.g.
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15	=> 55 60 65 70 75
// 16 17 18 19 20
// 21 22 23 24 25
void sumMatrixCols(int matrix[NUM_ROWS][NUM_COLUMNS])
{
	int sum = 0;
	for(int i = 0; i < NUM_ROWS; i++){
		for(int j = 0; j < NUM_COLUMNS; j++){
			sum = sum + matrix[j][i];
		}
		printf("%d", sum);
		printf(" ");
		sum = 0;
	}
	
}

// Problem 4: rotateMatrixRows (5 points)
// Take the 2D array of integers 'matrix' and print the result of rotating each row to the right
// by the amount specified by the integer 'offset'. In other words, shift each entry position right by 'offset'.
// If shifting would move an integer off the end of the row, it moves to the beginning of the row.
// **Hint: Use printMatrix to print the result**
// e.g.
// 1 2 3 4 5			5 1 2 3 4
// 6 7 8 9 10			10 6 7 8 9
// 11 12 13 14 15	=>	15 11 12 13 14
// 16 17 18 19 20		20 16 17 18 19
// 21 22 23 24 25		25 21 22 23 24
void rotateMatrixRows(int matrix[NUM_ROWS][NUM_COLUMNS], int offset)
{
	// Use this matrix to store each element
	int matrix2[NUM_ROWS][NUM_COLUMNS];

	for(int i = 0; i < NUM_ROWS; i++)
	{
		for(int j = 0; j < NUM_COLUMNS; j++)
		{
			if(j==0){
				matrix2[i][j] = matrix[i][NUM_COLUMNS-1];
			}		
			else{
				matrix2[i][j] = matrix[i][j-offset];
			}
		}
	}

	for(int i = 0; i < NUM_ROWS; i++){
		for(int j = 0; j < NUM_COLUMNS; j++){
			printf("%d", matrix2[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	

}

// Problem 5: transposeMatrix (10 points)
// Take the 2D array of integers 'matrix' and print the tranpose matrix.
// You may assume that row and column counts are equal.
// **Hint: Use printMatrix to print the result**
// e.g.
// 1 2 3 4 5			1 6 11 16 21
// 6 7 8 9 10			2 7 12 17 22
// 11 12 13 14 15	=>	3 8 13 18 23
// 16 17 18 19 20		4 9 14 19 24
// 21 22 23 24 25		5 10 15 20 25
void transposeMatrix(int matrix[NUM_ROWS][NUM_COLUMNS])
{
	int i, j;
	int matrix2[NUM_ROWS][NUM_COLUMNS];
	for(i = 0; i < NUM_ROWS; i++){
		for(j = 0; j < NUM_COLUMNS; j++){
				matrix2[i][j] = matrix[j][i];
				printf("%d", matrix2[i][j]);
				printf(" ");
		}
		printf("\n");
	}

}

// Problem 6: horizontalFlipMatrix (10 points)
// Take the 2D array of integers 'matrix' and print the matrix flipped horizontally.
// **Hint: Use printMatrix to print the result**
// e.g.
// 1 2 3 4 5			21 22 23 24 25
// 6 7 8 9 10			16 17 18 19 20
// 11 12 13 14 15	=>	11 12 13 14 15
// 16 17 18 19 20		6 7 8 9 10
// 21 22 23 24 25		1 2 3 4 5
void horizontalFlipMatrix(int matrix[NUM_ROWS][NUM_COLUMNS])
{
	// Use this matrix to store each element
	int matrix2[NUM_ROWS][NUM_COLUMNS];
	for(int i = 0; i < NUM_ROWS; i++){
		for(int j = 0; j < NUM_COLUMNS; j++){
			matrix2[i][j] = matrix[(NUM_ROWS-1)-i][j];
			printf("%d", matrix2[i][j]);
			printf(" ");
		}
		printf("\n");
	}

}

// Problem 7: reverseString (5 points)
// Reverse each string of strings[]. 
// Consider one string at a time and reverse the characters. For instance, "hi hello" should reverse to "olleh ih".
// begin with swapping first and last letter.
// We have 2 indices: i begins from start and increments, len begins from end and decrements
// run the swapping logic length/2 times
void reverseStrings(char strings[NUM_STRINGS * STRING_LENGTH])
{
	int i=0;
	int len = strlen(strings)-1;
	char temp;

	while(i < len){
		temp =  strings[len];
		strings[len] = strings[i];
		strings[i] = temp;
		i++;
		len--;
	}
}
	


// Problem 8: noOfOccurencesOfChar (5 points)
// Count all occurrences of the specified character 'filter' from s[]. 
int noOfOccurencesOfChar(char s[NUM_STRINGS * STRING_LENGTH], char filter)
{
	int counter = 0;
	for(int i = 0; i <= strlen(s)+1; i++){
		if(s[i] == filter){
			counter++;
		}

		printf("%c", s[i]);
	}
	return counter;

}

// You should study and understand how this main() works.
// *** DO NOT modify it in any way ***
int main()
{
	printf("CSE240 HW3: 2D Integer Arrays\n\n");

	int matrix[NUM_ROWS][NUM_COLUMNS] =
	{
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
		{21, 22, 23, 24, 25}
	};

	printMatrix(matrix);
	printf("\n\n");
	printMatrixDiagonal(matrix);
	printf("\n\n");
	sumMatrixCols(matrix);
	printf("\n\n");
	rotateMatrixRows(matrix, 1);
	printf("\n\n");
	transposeMatrix(matrix);
	printf("\n\n");
	horizontalFlipMatrix(matrix);

	printf("\nCSE240 HW3: 2D Character Arrays\n\n");

	char words[NUM_STRINGS * STRING_LENGTH];
	printf("\nEnter sentence with max 5 words: ");
	fgets(words, sizeof(words), stdin);
	reverseStrings(words);
	printf("\nReversed string: %s\n", words);
	printf("\nNo of occurences of \'a\': %d", noOfOccurencesOfChar(words, 'a'));

	int i = getchar();
	i = getchar(); // Keep console open
	return 0;
}
