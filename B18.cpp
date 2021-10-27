#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,n;
	do{
		cout<<"Nhap a: "<<endl;
		cin>>a;
		cout<<"Nhap b: "<<endl;
		cin>>b;
		cout<<"Nhap c: "<<endl;
		cin>>c;
		
		cout<<"-----CHUONG TRINH-----"<<endl;
		cout<<"1. Tinh a!"<<endl;
		cout<<"2. Tinh a^2 - b^3 + c^5"<<endl;
		cout<<"3. Tinh nghiem phuong trinh a*x^2 +b*x + c = 0"<<endl;
		cout<<"4. Kiem tra a, b, c co la canh tam giac hay khong"<<endl;
		cout<<"5. Thoat"<<endl;
		cout<<endl;
		
		cout<<"Nhap lua chon: "<<endl;
		cin>>n;
		cout<<endl;
    
	}while(n > 5);{
    	switch(n){
		case 1:{
			break;
			cout<<"1. Tinh a!"<<endl;
			int i=1, giai_thua =1;
			if(a<0){
				cout<<"a khong co giai thua"<<endl;
			}
			else if(a == 0){
				giai_thua =1;
			}
			else{
				for(; i<=a; i++){	
				giai_thua *= i;
			}
			cout << giai_thua << endl;
			}
		}
			break;
		
		case 2:
			cout<<"2. Tinh a^2 - b^3 + c^5"<<endl;
			int s;
			s = a^2 - b^3 + c^5;
			cout<<s<<endl;
			break;
		
		case 3:
			cout<<"3. Tinh nghiem phuong trinh a*x^2 +b*x + c = 0"<<endl;
			float delta;
			if(a==0){
				if (b==0 && c==0){
				cout <<"Phuong trinh vo so nghiem"<<endl;
				}else if (b==0 && c!=0){
				cout <<"Phuong trinh vo nghiem"<<endl;
				}else{
				cout<<"Phuong trinh co 1 nghiem: "<<-c/b<<endl;
				}
			}
			else{
			    delta = (b^2) - 4*a*c;
			    if(delta==0){
			    cout<<"Phuong trinh co nghiem kep: "<<(-b/(2*a))<<endl;
				}else if(delta<0){
				cout<<"Phuong trinh vo nghiem"<<endl;
				}else{
				cout<<"Phuong trinh co 2 nghiem phan biet la: "<<(((-b) + sqrt(delta))/2*a)<<" va "<<(((-b) - sqrt(delta))/2*a)<<endl;
				}
			} 
			break;
		
		case 4:
			cout<<"4. Kiem tra a, b, c co la canh tam giac hay khong"<<endl;
			if(a>0 && b>0 && c>0){
				if(a+b>c && a+c>b &&b+c>a){
				cout<<"3 so a, b, c tao thanh mot tam giac"<<endl;
				}
				else{
				cout<<"3 so a, b, c khong tao thanh mot tam giac"<<endl;
				}
			}
			else{
		        cout<<"3 so a, b, c khong tao thanh mot tam giac"<<endl;
			}
			break;
		
		case 5:
			cout<<"Chuong trinh ket thuc"<<endl;
			exit(0);
		
		defaul:
			cout<<"Vui long nhap lai!"<<endl;
			break;		
	    }
    }
	return 0;
}
