#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	int requests[] = {176,60,34,79,92,11,41,114};
	int n = sizeof(requests)/sizeof(requests[0]);
	int head = 50;
	int completed[n];
    int seek_count = 0;
	int current ;
	int min_distance,index;
	int i,j;
	
	for(i=0; i<n; i++)
	{
		completed[i]=0;
	}
	
	printf("Seek Sequence : ");
	printf("%d --> ",head);
	
	for(i=0; i<n; i++)
  {
		min_distance = INT_MAX;
		index = -1;
		 
		 for(j=0; j<n; j++)
	  {
		 	if(completed[j]==0)
	     {
		 	current = abs(head-requests[j]);	
		 	if(current<min_distance)
		 	{
		 		min_distance=current;
		 		index = j;
			}
		 }
	  }
	  seek_count += min_distance;
	  head = requests[index];
	  completed[index] = 1;
	  printf("%d --> ",head);
  }
  
    printf("\nTotal seek operations = %d\n",seek_count);
    printf("Average seek time = %.2f\n",(float) seek_count/n);	
}


