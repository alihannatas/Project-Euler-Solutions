//Alihan Atas
#include <iostream>
#include <stdint.h>
using namespace std;

intmax_t factorial(int a){
	
	intmax_t sum=1;
	for(int i=1;i<=a;i++){
		
		
		sum*=i;
	}
	
	
	return sum;
	
}

int main(){
	
	
	int arrayRow, arrayColumn;
	
	cout << "Please enter the number of rows in the array." << endl;
	cin >> arrayRow;
	cout << "Please enter the number of column in the array.." << endl;
	cin >> arrayColumn;	
	
 // cout << factorial(arrayRow+arrayColumn) /( factorial(arrayRow) *factorial(arrayColumn) )  ;      // The factorial function works, but for large numbers, it overflows
  
	  unsigned  long long   array[arrayRow+1][arrayColumn+1];

         for(int i=0;i<arrayRow+1;i++){     // We equate all elements to 1
            for(int j=0;j<arrayColumn+1;j++){

                   array[i][j]=1; 
            }
        }

            
       
        for(int i=1;i<arrayRow+1;i++){
            for(int j=1;j<arrayColumn+1;j++){

                  array[i][j]=array[i][j-1]+array[i-1][j];
            }
        }

   
    cout << array[arrayRow][arrayColumn];


	
	
	return 1314;
}
