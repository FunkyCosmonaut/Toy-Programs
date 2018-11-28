#include <stdio.h>

#define ROWS 5
#define COL 4

int main(void){

void displayMatrix(int matrix[ROWS][COL]);
void displayMatrix2(int matrix[COL][ROWS]);
void transposeMatrix(int inputMatrix[ROWS][COL], int outputMatrix[COL][ROWS]);
int finalMatrix[COL][ROWS];
int sampleMatrix[ROWS][COL] =
{
  {1 , 2, 3, 4},
  {5 , 6, 7, 8},
  {9, 10,11,12},
  {13,14,15,16},
  {17,18,19,20}
};

displayMatrix(sampleMatrix);
transposeMatrix(sampleMatrix, finalMatrix);
displayMatrix2(finalMatrix);

}
void displayMatrix(int matrix[ROWS][COL]){

  int i;
  int j;

  for(i = 0; i < ROWS; i++){
    printf("\n");
    for(j = 0; j < COL; j++)
      printf("%i ", matrix[i][j]);
  }
}
void displayMatrix2(int matrix[COL][ROWS]){

  int i;
  int j;

  for(i = 0; i < COL; i++){
    printf("\n");
    for(j = 0; j < ROWS; j++)
      printf("%i ", matrix[i][j]);
  }
}
void transposeMatrix(int inputMatrix[ROWS][COL], int outputMatrix[COL][ROWS]){

  int i;
  int j;

  for(i = 0; i < ROWS; i++){
    for(j = 0; j < COL; j++)
      outputMatrix[j][i] = inputMatrix[i][j];
  }
}
