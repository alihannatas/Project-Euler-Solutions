//find fibonacci even numbers

#include <iostream>

using namespace std;

int fibonacci(int limit){
	
	unsigned long long  onceki=1,sonraki=0;
	    unsigned long long  temp,toplam=0; 
		for(int i=0;sonraki<=4000000;i++){
			temp=sonraki;
			sonraki+=onceki;
			onceki=temp;
			if(sonraki%2==0){
					
				toplam+=sonraki;
				
			}	
		}
	
return toplam;	
}


int main(){
	
	
		
	
	cout << fibonacci(4000000);
	

	return 13143;
}
