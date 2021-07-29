//Alihan Atas
#include <iostream>
#include <vector>
using namespace std;


long long chain(long long n,long long &a){
	    
	
		a++;
		if(n>1 && n%2==1) {
			
			n=3*n+1;
	//		cout << n<< endl;
		
		
			return chain(n,a);
		}
	else if(n>1 && n%2==0){
			
			
			n=n/2;
		//	cout << n<< endl;
		
		
			return chain(n,a);
		}
	else{
	return 1;
	
	}	
	
}

int main(){
	
	long long a=0, uzunluk=0,uzunluk1=0, sayi=0;

		for(int i=100000000;i>1;i--){
			
			chain(i,a);
		
				if(a>uzunluk){
					
					uzunluk=a;
					sayi=i;
					
				}
				a=0;	
		}
	cout << sayi<<endl;
	cout << uzunluk;
	
	return 1314;
}
