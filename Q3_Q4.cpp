#include<iostream>
using namespace std;
int main()
{
	int N;
	int hotDays, pleasantDays, coldDays,sum;
	double avgTemp;
	hotDays=pleasantDays = coldDays= sum=0;
	cin>> N;
	int temp[N];
	for(int i=0;i<N;i++)
	cin>>temp[N];
	
	for (int i=0;i<N;i++)
	{
	sum +=temp[N];
		if(temp[N]>=85)
		{
		cout<<temp[N]<<"is a Hot Day";
		hotDays++;
		}
		else if(temp[N]>=60&&temp[N]<=84)
		{
			cout<<temp[N]<<"is a Pleasant Day";
			pleasantDays++;
		}
		else if(temp[N]<60)
		{
			cout<<temp[N]<<"is a Cold Day";
			coldDays++;
		}
	}
	
	avgTemp = static_cast <double> (sum )/N;
	cout<<"AVERAGE TEMPERATURE:"<<avgTemp<<"TOTAL NUMBER OF HOT DAYS:"<<hotDays<<"\n TOTAL NUMBER OF PLEASANT DAYS:"<<pleasantDays<<"\nTOTAL NUMBER OF COLD DAYS:"<<coldDays;
	
}
