#include<iostream>
using namespace std;
int main()
{
	struct process
	{
		int p_id;
		char name[10];
		int bt,wt,tat,avg_wt,total_wt;
	};
	struct process p[5];
void swap(struct process *p1,struct process *p2)
{
	struct process t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}
void sort(struct process s[],int m)
{
	int i,j,min_index;
	for(i=0;j<m;i++)
	{
		min_index = i;
		for (j=i+1;j<m;j++)
		{ 
		 if (s[j].bt<s[min_index].bt)
		   min_index =j;
		   cout<< min_index<<endl;
		}
		if(min_index != i)
		 swap(&s[min_index],&s[i]);
	}
}
int main()
{
	int wait=0,i;
	for(i=0;i<3;i++)
	{
		cin>>p[i].p_id>>p[i].name>>p[i].bt;
	}
	sort(p,3);
}