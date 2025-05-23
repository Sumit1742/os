#include<iostream>
using namespace std;

	struct process
	{
		int p_id;
		char name[10];
		int bt,wt,tat;
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
	int wait=0,i,avg_wt,total_wt=0;
	for(i=0;i<3;i++)
	{
		cin>>p[i].p_id>>p[i].name>>p[i].bt;
	}
	sort(p,3);
	cout<<"PID\t"<<"PNAME \t\t"<<"BT"<<"\t\t"<<"WT"<<"\t\t"<<"TAT"<<endl;
	for(i=0;i<3;i++)
	{
		p[i].wt =wait;
		p[i].tat=p[i].wt+p[i].bt;
		wait=p[i].tat;
		total_wt += p[i].wt;
	}
	
	for(i=0;i<3;i++)
	{
		cout<<p[i].p_id<<"\t\t"<<p[i].name<<"\t\t"<<p[i].bt<<"\t\t"<<p[i].wt<<"\t\t"<<p[i].tat;
		cout<<endl;
	}
	avg_wt=total_wt/3;
	cout<<"avarage waiting time :"<<avg_wt<<endl;
	
return 0;
}
