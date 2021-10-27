#include<iostream>
using namespace std;
int main()
	{	int b, i=1, tich =1;
		cout<<"Nhap b: "<<endl;
		cin >> b;
		for(; i<=b; i++){	
			tich *= i;
			}
		cout << tich << endl;
		return 0;
	}

