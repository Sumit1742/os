#include<iostream>
using namespace std;

	struct process
	{
		int p_id;
		char name[10];
		int bt,wt,tat;
	};
	struct process p[5];

int main()
{
	int t=0,i,n,q,total_wt=0,avg_wt,avg_tat=0,tat;
	cout<<"how many processes\n";
	cin>>n;
	cout<<"what is time quantum\n";
	cin>>q;
	for (i=0;i<n;i++)
	{
		cin>>p[i].p_id>>p[i].name>>p[i].bt;
		
	}
	int rem_time[10];
	for(i=0;i<n;i++)
	{
		rem_time[i]=p[i].bt;
	}
	while(1)
	{
		int done=1;
		for (int j=0;j<n;j++)
		{
			if(rem_time[j]>0)
			{
				done=0;
				if(rem_time[j]>q)
				{
					t+=q;
					rem_time[j] -=q;
				}
				else
				{
					t+=rem_time[j];
					p[j].wt = t-p[j].bt;
					rem_time[j]=0;
				}
			}
		}
		if(done ==1)
		break;
	}
	for(i=0;i<n;i++)
	{
		total_wt += p[i].wt;
		p[i].tat =p[i].bt +p[i].wt;
	}
	cout<<"PID\t"<<"NAME\t\t"<<"BT"<<"\t\t"<<"WT"<<"\t\t"<<"TAT"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<p[i].p_id<<"\t"<<p[i].name<<"\t\t"<<p[i].bt<<"\t\t"<<p[i].wt<<"\t\t"<<p[i].tat;
		cout<<endl;		
	}
	avg_wt=total_wt/n;
	cout<<"avarage waiting time :"<<avg_wt<<endl;
	avg_tat= tat/n;
		cout<<"avarage TAT time :"<<avg_tat<<endl;
	return 0;
}
