#include<iostream>
using namespace std;
struct process
{
	int p_id;
	char name[10];
	int bt, wt,tat,pt;
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
	for (i=0;i<m;i++)
	{
		min_index=i;
		 for (j=j+1;j<m;j++)
		 {
		 	if(s[j].pt<s[min_index].pt)
		 	min_index=j;
		 }
		 if(min_index !=i)
		 swap(&s[min_index],&s[i]);
	}
}
	int main()
	{
		int wait=0,i;
		for (i=0;i<3;i++)
		{
			cin>>p[i].p_id>>p[i].name>>p[i].bt>>p[i].pt;
		}
		sort(p,3);
		cout<<"PID\t"<<"PNAME\t\t"<<"BT\t\t"<<"PT"<<"\t\t"<<"WT"<<"\t\t"<<"TAT"<<endl;
		for(i=0;i<3;i++)
		{
			p[i].wt=wait;
			p[i].tat =p[i].wt+p[i].bt;
			wait=p[i].tat;
		}
	for (i=0;i<3;i++)
	{
		cout<<p[i].p_id<<"\t"<<p[i].name<<"\t\t"<<p[i].bt<<"\t\t"<<p[i].pt<<"\t\t"<<p[i].wt<<"\t\t"<<p[i].tat;
		cout<<endl;
	}
	return 0;
	}
	

