#include <iostream>
using namespace std;

int main(){
	int angka;
	cin >> angka;
	
	if(angka==1){
		cout << "satu \n";
	}else if(angka<=1&&angka<=1000){
		cout << "dua \n";
	}else if(angka<=1&&angka<=1000){
		cout << "tiga \n";
	}else{
		cout << "bilangan lebih besar dari tiga \n";

	}
 return 0;
}

