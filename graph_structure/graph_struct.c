#include <stdio.h>
#include <stdlib.h>

/*public class graph_adjlist{


};*/

int main(int argc, char *argv[]){

	int *graph_matrix = (int*) calloc(5*5, sizeof(int));
    int i, j;

	for(i = 0 ; i < 5 ; i++){

		for(j = 0 ; j < 5 ; j++)
			printf("%d ", *(graph_matrix + 5*i + j));

		printf("\n");

	}

	return 0;

}
