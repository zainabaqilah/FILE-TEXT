#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

int main(){
	ofstream myfile;
  
  myfile.open("DDPPRAKTIKUM.txt", ios::app);
	
	cout<<"..............."<<endl;
	cout<<"MENULIS FILE"<<endl;
	cout<<"..............."<<endl;
	
	if(!myfile.fail()){
    //menulis ke dalam file
		myfile<<"Belajar DDP Asik Sekali :))"<<endl;
		myfile.close();
		cout<<"Text Berhasil ditulis ke dalam File"<<endl;
	}
	else{
		cout<<"file tidak ditemukan"<<endl;
	}
  
	_getche();
	return EXIT_SUCCESS;
}
