#include <iostream>
using namespace std;


bool asalKontrol( int a){
	
	 int temp;
		
		
			for( int i=2;i<a;i++){
				
				if(a%i==0){
					
					temp=1;
					
					
				}
				
				
			}
		if(temp==1){
			
			return false;
			
		}
		else {
			return true;
			
		}
	
}

int main(){
	
	
	int counter=0;
	
	
	int a=1;
	
	while(counter<10002){
		
		
		int b;
	
		if(asalKontrol(a)==true){
			
			counter++;
			 b=a;
	
		}
		a++;
		cout <<"Program calisiyor..."<< endl;
		}

cout <<counter-1 << ".asal sayi="<< a-1;

	
	return 1314;
	
}
