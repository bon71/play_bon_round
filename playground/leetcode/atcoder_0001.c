#include <stdio.h>
#include <stdlib.h>
int	main(int arc, char**arcv)
{
  	int	a, b, c;
 
	if (arc != 3)
      return (0);
 	a = atoi(arcv[1]);
  	b = atoi(arcv[2]);
	c = a * b;
	printf("a x b = %d\n", c);
	if ((a*b) % 2)
      printf("Odd");
  	else
      printf("Even");
	return (0);
}