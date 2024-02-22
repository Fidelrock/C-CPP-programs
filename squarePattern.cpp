#include<iostream>
using namespace std;

int main(int argc, char** argv)
{
	int i,j;
	
	cout<<endl;
	for(i=1;i<=5;i++){
	
		for(j=1;j<=5;j++){
			cout<<"\t"<< "*";
		}
		cout<<endl;
	}
	return 0;
}