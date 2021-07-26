// Alihan Atas
#include <iostream>
using namespace std;
int main()
{
   
   
   int  toplamKare=0;
  
   
   
		int a;
		cin  >>a;
	 int  toplaminKaresi=  a*(a+1)/2;
	 toplaminKaresi*=toplaminKaresi;
		for(int i=1;i<=a;i++){
			
			int b=i*i;
			toplamKare+=b;
			
			
		}
   	cout << toplaminKaresi-toplamKare;
   
   
   
   
}
