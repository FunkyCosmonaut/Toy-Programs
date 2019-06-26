#include <stdio.h>



int main(){



	//BIDIRECTIONAL BLOCK-------------
	int step = 1;
	int max = 5;
	int i;
	int count;
	for(i = 0; i < max+1; i += step){
	//BIDIRECTIONAL BLOCK-------------
		if(i == max)
			step = -1;
		if(i == 0)
			step = 1;
	//BIRIRECTIONAL BLOCK--------------

	printf ("%i\n", i);
	}
	return 0;
}

