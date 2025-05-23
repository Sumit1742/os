//wap to implement fcfs algorithm
#include<stdio.h>
#include<stdlib.h>
void FCFS (int arr[],int n,int head){
	int total_movement=0;
	int distance,cur_head;
	
	cur_head=head;
	
	for(int i=0; i<=n; i++){
		distance=abs(arr[i]-cur_head);
		total_movement+= distance;
		cur_head=arr[i];
		
		printf("move from %d to %d, distance = %d\n",cur_head,arr[i],distance);
		
		
	}
	printf("total head movement=%d\n",total_movement);
}
int main()
{
	int arr{176,79,34,60,92,11,41,114};
	int head=50;
	int n= sizeof(arr)/sizeof(arr[0]);
	
	FCFS(arr,n,head);
	 return 0;
	 
	
}
