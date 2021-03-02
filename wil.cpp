#include <iostream>
using namespace std;

int main()
{
	int a, b, tambah,kurang, kali, bagi,pil;
	char mau;
	
		do
		{
			cout<<"masukkan nilai"<<endl;
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
			tambah=a+b;
			kurang=a-b;
			kali=a*b;
			bagi=a/b;
			cout<<"1. tambah"<<endl;
			cout<<"2. kurang"<<endl;
			cout<<"3. kali"<<endl;
			cout<<"4. bagi"<<endl;
			cout<<"mau pilih no berapa?";
			cin>>pil;
			if(pil==1){
				cout<<"hasil tambah : "<<tambah<<endl;
			}
			else if(pil==2){
				cout<<"hasil kurang : "<<kurang<<endl;
			}
			else if(pil==3){
				cout<<"hasil kali : "<<kali<<endl;
			}
			else if(pil==4){
				cout<<"hasil bagi : " <<bagi<<endl;
			}
			else{
				cout<<"gaadak"<<endl;
			}
			cout<<"mau lanjut ndak (y/n)?";
			cin>>mau;
		}while(mau=='y'||mau=='Y');
	
	return 0;
}