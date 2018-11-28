#include <stdio.h>

int main(void){

  int howmany, i, element;

  printf("Enter how many elements\n");
  scanf("%i", &howmany);
  int set[howmany];
  printf("Enter %i elements: \n", howmany);

  for (i = 0; i < howmany; i++){
    printf("%i. ", i+1);
    scanf("%i", &element);
    set[i] = element;
  }

  int arraySum(int length, int array[length]);
  printf("%i", arraySum(howmany, set));

  return 0;


}

int arraySum(int length, int array[length]){

  int i;
  int final = 0;

  for(i = 0; i < length; i++)
    final = final + array[i];

    return final;
}
