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
	int wait=0,total_wt=0,i;
	for(i=0;i<3;i++)
	{
		cin>>p[i].p_id>>p[i].name>>p[i].bt;
	}
	cout<<"PID\t"<<"PNAME \t\t"<<"BT"<<"\t\t"<<"WT"<<"\t\t"<<"TAT"<<endl;
	for(i=0;i<3;i++)
	{
		p[i].wt =wait;
		p[i].tat=p[i].wt+p[i].bt;
		total_wt += p[i].wt;
		wait=p[i].tat;
	}
	
	for(i=0;i<3;i++)
	{
		cout<<p[i].p_id<<"\t\t"<<p[i].name<<"\t\t"<<p[i].bt<<"\t\t"<<p[i].wt<<"\t\t"<<p[i].tat<<"\t\t"<<;
		cout<<endl;
	}
	avg_wt=total_wt/3;
	cout<<"avarage waiting time :"<<avg_wt<<endl;
	

return 0;
}

