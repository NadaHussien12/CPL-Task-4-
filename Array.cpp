#include<stdio.h>
int main()
{
//Declaration of  some variables and initialization of variable (count) to (0)
  int N, M, X, count=0;

//Enter the no. of rows of the matrix
 printf("Enter no. of rows: \n");
 
//Take the no. of rows of the matrix from the user
	scanf("%d", &N);
	
//Enter the no. of columns of matrix
	printf("Enter no. of columns: \n");
	
//Take the no. of columns of the matrix from the user
	scanf("%d", &M);

//create a 2D array of the same order
  int array[N][M];

//Take inputs into the 2D array
  printf("Enter %d elements of the array: \n", (N*M));
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<M; j++)
	{
      scanf("%d", &array[i][j]);
    }
  }

//Enter the number(X) to check in the 2D array
  printf("Enter a number: ");
  
//Take the number(X) from the user
  scanf("%d", &X);

//Check if the no.(X) exists in the 2D array or not
  for(int i=0; i<N; i++)
  {
    for(int j=0; j<M; j++)
	{
	//if it exists, then don't take the number
      if(array[i][j] == X)
	  {
        printf("Will not take the number");
        count++;
      }
    }
  }
  
//if it doen't exist, then take the number
  if(count==0)
  {
   	printf("Will take the number \n");	
  }
   
  return 0;
}




