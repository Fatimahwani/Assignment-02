#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"Number of values:";
	cin>>N;
	
	int values[N];
	cout << "Enter" << N << "values (one per line/space separated):";
	for(int i=0;i<N;i++)
	 cin >>values[i];
	
	int smallest,largest;
	double sum,average;
	smallest=largest=values[0];
	
	for(int i=0;i<N;i++)
{
	sum +=values[i];
	
	if(values[i]<smallest)
	smallest=values[i];
	
	if(values[i]>largest)
	largest=values[i];
	}	
	average = sum/N;
	cout<<"----------";
	cout<<"Smallest:"<< smallest ;
	cout<<"Average:"<< largest ;
	return 0;
}


