//Alihan Atas
//The program runs fine but runs slow

#include <iostream>
using namespace std;


bool ucgenselKontrol(int a){
	
	
	int toplam=0,temp=0;
	
			for(int i=1;i<a;i++){
				
				toplam+=i;
				
					if(toplam==a){
						temp=1;	
						break;		
					}
			}
			if(temp==1){
				
				return true;
			}else {
				
				return false;
			}
							
}


int bolenSayisi(int a){
	int temp=0;
	
			for(int i=1;i<=a/2;i++){
				
				if(a%i==0){
					
					temp++;
				}				
}

				return temp;
}

int main(){
	
	int a=0;
	
			for(int i=1;a<1;i++){
				
				if(ucgenselKontrol(i)==true  ){

						if(bolenSayisi(i)>=130){
							a=2;
							cout <<i<<endl;
						}
					
				     
				}
				}

	return 1314;
}
