// Alihan Atas
#include <iostream>
#include <math.h>
#include <time.h>
#include <iomanip> 
using namespace std;

 bool asalKontrol(int a) {


	for (int i = 3; i <= sqrt(a); i+=2) {
		                                
		if (a % i == 0) {return false;}
}  return true;  }

int main() {

	long double start_time, end_time;
	start_time = time(NULL);


	unsigned long long toplamm = 2;
	int a = 3;

	while (a < 2000000) {

		if (asalKontrol(a) == true) {

			toplamm += a;

		}
		a+=2;
		
	}
	end_time = time(NULL);


	cout << endl << toplamm << endl;
	cout << "Islem suresi=" <<end_time - start_time<< " seconds." << endl;

	return 1314;

}


