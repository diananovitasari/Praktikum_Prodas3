/*Program Looping*/
/*Diana Novita Sari*/
/*NIM: 20051397012*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	char Nama[45],Menu;
	string pagar =    "===============================================================================================";
	
	cout << pagar << endl << endl;
	cout << "					   Program								"<< endl;
	cout << "					Operasi Arimatika						"<< endl;
	cout << pagar << endl << endl;
	cout << " 				Oleh Diana Novita Sari "<< endl;
	cout << "_______________________________________________________________________________________________"<< endl;
	cout << " Masukkan Nama Anda: ";
	cin >> Nama;
	cout << endl;
	cout << " Hallo " << Nama;
	cout << ", Selamat Datang di Program Aritmatika";
	cout << endl << endl;
	cout <<"   1. Menghitung Jumlah 6 Suku Pertama \n   2. Menghitung Jumlah Deret \n   3. Menampilkan Tabel Perkalian \n   4. Menampilkan Segitiga Angka \n";
	cout << endl;
	cout <<"Masukkan Menu Pilihan Anda: ";
	cin >> Menu;
	cout << endl;
	cout << pagar << endl<< endl;
	
	switch(Menu)
	{
		case '1':
		{
		
			int i,bil,jumlah_suku;
			jumlah_suku= 0;
			cout <<" Jumlah 6 Suku Pertama \n";
			
			for (i = 1; i <= 6; i++)
			{
				bil = pow (i, 3);
				if (i < 6)
				{
					cout << i <<"^3 =  "<< bil <<"  ";	
				}
				if (i == 6)
				{
					cout << i <<"^3 = "<< bil << endl;
				}
			jumlah_suku += bil;
			}
			cout << endl <<" Jumlah 6  Suku Pertama: " <<jumlah_suku << endl << endl;
			break;
		}

		case '2':
		{
			
			int i,jumlah_deret = 0,total_deret = 0;
			cout << " Jumlah Deret \n";
			
			for ( i = 3; i <= 15; i += 4 )
			{
				if (i<15)
				{
					cout << i << ", ";
				}
				
				if ( i == 15)
				{
					cout << i << endl<< endl;
				}	
				jumlah_deret+=i;	
			}
			total_deret = jumlah_deret;
			cout << "  Jumlah Deret: " << total_deret << endl;
			break;
		}
		
		case'3':
		{
			int i,j;
			cout<<"  Tabel Perkalian \n\n";
			
			for (  i=1; i <=10; i++ )
			{
				cout << setw (5) << i;
				for ( j=1; j<=10; j++ )
				cout << setw (5) << i * j;
				cout << endl;
			}
			break;
		}

		case'4':
		{
			int n,i,j;
			n = 5 ;  
			cout << "  Segitiga Angka \n";   
			for ( i=1; i<= n; i++ )  
			{
				for ( j=1; j<=i; j++ )  
				{
					cout << j ;  
				}  
				cout << " "<< endl;  
			}  
	
			for ( i=n-1; i>=1; i-- )  
			{ 
				for  ( j=1; j<=i; j++ )  
				{
					cout << j; 
				}  
				cout << " "<< endl;  
			}  
			break;
		}
	}
	cout << pagar << endl<< endl;
	cout <<"	Thanks For Use My Program	"<< endl;
	cout <<"	Selamat Berkunjung Kembali	"<< endl;
	cout << pagar;
return 0;
}
