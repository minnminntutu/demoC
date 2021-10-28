#include <iostream>
using namespace std;
int main(){
	double tien_gui, tien_mong_muon;
	int thoi_han=0;
	cout<<"Nhap tien gui: "<<endl;
	cin>>tien_gui;
	cout<<"Nhap tien mong muon: "<<endl;
	if(tien_gui>0 && tien_mong_muon>0){
	    cin>>tien_mong_muon;
	    while(tien_gui<tien_mong_muon){
	    tien_gui = tien_gui +tien_gui*(1.5/100);
	    thoi_han++;
	    }
	    cout<<"Sau "<<thoi_han<<" thang, khoan von se lon hon yeu cau"<<endl;
	}else{
		cout<<"Du lieu loi! Vui long nhap lai"<<endl;
	}
	return 0;
}
