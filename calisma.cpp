//bu calÄsma sadi evren sekerin 11.videosundaki 1.Ãrnek

#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"Turkish");
	int sayi;
	int tek;
	int div;
	cout<<"lÃ¼tfen bir sayÄ± giriniz: ";
	cin>>sayi;
	div=sayi/2;
	if(sayi%2==0){
		tek=0;
	}
	else{
		tek=1;
	}
	cout<<tek<<endl;
	div+=1;
	for(int i=1;i<=sayi;i++){
		for(int j=1;j<=sayi;j++)
		{
			if(tek==1){				
			if(div==j || div==i ){
				cout<<"1";
				
			}
			else{
				cout<<"0";
			}
			}
			else{
				if(div==i|| div==j+1 ||  div==i+1 || div==j){
					cout<<"1";
				}
				else{
					cout<<"0";
				}
			}
			
		}
		cout<<endl;
	
	}

}

