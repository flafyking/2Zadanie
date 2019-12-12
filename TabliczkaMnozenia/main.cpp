#include <iostream>
int tPierwsza[21];
int tDruga[21];
using namespace std;

int Wypisz() {
	
	for(int i = 1; i <21; i++)
	{
		for(int j = 1; j < 21; j++){
			cout << tPierwsza[i] * tDruga[j] << " ";
		}
		cout << "" << endl;
	}
	return 0;
}

int Przypisz() {
	
	for(int i = 1; i <21; i++)
	{
		for(int j = 1; j < 21; j++){
			tPierwsza[i] = i;
			tDruga[j] = j; 
		}
		cout << "" << endl;
	}
	return 0;
}

int main(){
	Przypisz();
	Wypisz();
	return 0;
}


