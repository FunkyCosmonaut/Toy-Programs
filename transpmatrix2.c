#include <stdio.h>

int firstinputdimension;
int secinputdimension;

int main(void){


  int punchesnumbersin;
  int i, j;



  printf("Enter the row number\n");
  scanf("%i", &firstinputdimension);
  printf("Enter the column number\n");
  scanf("%i", &secinputdimension);

  int matrixtotranspose[firstinputdimension][secinputdimension];
  int outputmatrix[secinputdimension][firstinputdimension];
  void transposeMatrix(int inputMatrix[firstinputdimension][secinputdimension], int outputMatrix[secinputdimension][firstinputdimension]);
  void displayMatrix(int matrix[firstinputdimension][secinputdimension]);
  void displayMatrix2(int matrix[secinputdimension][firstinputdimension]);
  //cycle through a row and the outer one will
  //cycle through the columns.
  printf("Enter values for matrix:\n");
    for(i = 0; i < firstinputdimension; i++){
        for(j = 0; j < secinputdimension; j++){
          scanf("%i", &punchesnumbersin);
          matrixtotranspose[i][j] = punchesnumbersin;
        }}

displayMatrix(matrixtotranspose);
transposeMatrix(matrixtotranspose,outputmatrix);
displayMatrix2(outputmatrix);

}

void displayMatrix(int matrix[firstinputdimension][secinputdimension]){

  int i;
  int j;

  for(i = 0; i < firstinputdimension; i++){
    printf("\n");
    for(j = 0; j < secinputdimension; j++)
      printf("%5i ", matrix[i][j]);
}
printf("\n");
}
void transposeMatrix(int inputMatrix[firstinputdimension][secinputdimension], int outputMatrix[secinputdimension][firstinputdimension]){

  int i;
  int j;

  for(i = 0; i < firstinputdimension; i++){
    for(j = 0; j < secinputdimension; j++){
      outputMatrix[j][i] = inputMatrix[i][j];
    //  printf("%i ", outputMatrix[j][i]); //for testing purposes.
    }
} }
void displayMatrix2(int matrix[secinputdimension][firstinputdimension]){

  int i;
  int j;

  for(i = 0; i < secinputdimension; i++){
    printf("\n");
    for(j = 0; j < firstinputdimension; j++)
      printf("%5i ", matrix[i][j]);
} printf("\n");
}
