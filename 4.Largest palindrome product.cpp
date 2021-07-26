// Alihan Atas
#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;


int main(){
	
	 vector<int> g1;  
		vector<int> g2;
		for(int i=100;i<1000;i++){   
			for(int j=100;j<1000;j++){
				
				g1.push_back(i*j);		  //3 basamalik tum sayilarin carpimini bulma ve g1 vectorune atama
			}	
			
		}
		
	
	for(int i=809999;i>-1;i--){

	int a, no, b, temp=0;
   
     no=g1[i];
    b = no;
    while(no>0)
    {
        a=no%10;
        no=no/10;
        temp=temp*10+a;
    }
     
    if(temp==b)
    {
        
        g2.push_back(temp);  //vektore palindrom sayilari atama
    }
   	}
	sort(g2.begin(), g2.end());  //vektor siralama
	
	
	cout << g2.back();   //vektor son elemani dondurme
	
	
	
	return 1314;
}
