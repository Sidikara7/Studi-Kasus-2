#include<iostream>
using namespace std;
int main(){
	int jumlah,harga,ongkir,diskon,total,biaya_akhir,menu;
	char jarak;
	cout<<"Menu Rumah Makan\n";
	cout<<"1. Nasi Bakar Ayam	 :18000\n";
	cout<<"2. Nasi Bakar Tongkol 	 :20000\n";
	cout<<"3. Nasi Bakar Mix	 :25000\n";
	cout<<"4. Nasi Bakar Cumi	 :30000\n";
	cout<<"5. Nasi Goreng Bakar 	 :25000\n";
	cout<<endl;
	cout<<"NB: -Ongkir untuk jarak rumah <4km adalah 8000, jika >=4km adalah 20000\n";
	cout<<"    -Total pembelian >40000 potongan ongkirnya 4000\n";
	cout<<"    -Total pembelian >100000 potongan ongkirnya 9000 dan diskon 25%\n";
	cout<<"    -Total pembelian >150000 potongan ongkirnya adalah 12000 dan diskon 35%\n";
	cout<<endl;
	cout<<"Masukkan menu yang anda pilih:\n";
	cin>>menu;
	cout<<"Jumlah:\n";
	cin>>jumlah;
	cout<<"Apakah jarak rumah lebih dari 4 Km?(y/n):\n";
	cin>>jarak;
	switch(menu){
		case 1:
			harga = 18000;
			break;
		case 2:
			harga = 20000;
			break;
		case 3:
			harga = 25000;
			break;
		case 4:
			harga = 30000;
			break;
		case 5:
			harga = 25000;
			break;
		default :
			break;
	}
	total = harga * jumlah;	
	if (jarak == 'y'){
		ongkir = 20000;
	}else if (jarak == 'n'){
		ongkir = 8000;
	}
	if(total > 40000 && total<= 100000){
		ongkir = ongkir - 4000; diskon = 0;
	}else if (total >100000 && total <= 150000){
		ongkir = ongkir - 9000; diskon = total * 0.25;
	}else if (total >150000){
		ongkir = ongkir - 12000; diskon = total*0.35;
	}
	biaya_akhir = (total + ongkir)- diskon;
	system("cls");
	cout<<"\t\t\t\t\t\tRincian Belanja Kamu\n";
	cout<<"Menu:\t\tHarga:\t\tJumlah:\t\tJarak>4km:\tOngkir:\t\tDiskon:\t\tTotal:\t\tbiaya akhir:\n";
	if(menu == 1){
		cout<<"Nasi Bakar Ayam\t"<< harga << "\t\t" << jumlah << "\t\t" << jarak << "\t\t" << ongkir << "\t\t" << -diskon << "\t\t" << total << "\t\t" << biaya_akhir << endl;
	}
    else if(menu == 2){
		cout<<"Nasi Bakar Tongkol\t"<< harga << "\t\t" << jumlah << "\t\t" << jarak << "\t\t" << ongkir << "\t\t" << -diskon << "\t\t" << total << "\t\t" << biaya_akhir << endl;
	}
    else if(menu == 3){
		cout<<"Nasi Bakar Mix\t"<< harga << "\t\t" << jumlah << "\t\t" << jarak << "\t\t" << ongkir << "\t\t" << -diskon << "\t\t" << total << "\t\t" << biaya_akhir << endl;
	}
    else if(menu == 4){
		cout<<"Nasi Bakar Cumi\t"<< harga << "\t\t" << jumlah << "\t\t" << jarak << "\t\t" << ongkir << "\t\t" << -diskon << "\t\t" << total << "\t\t" << biaya_akhir << endl;
	}
    else if(menu == 5){
		cout<<"Nasi Goreng Bakar\t"<< harga << "\t\t" << jumlah << "\t\t" << jarak << "\t\t" << ongkir << "\t\t" << -diskon << "\t\t" << total << "\t\t" << biaya_akhir << endl;
	}
}
