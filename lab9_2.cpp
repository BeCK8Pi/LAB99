#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int i, int j){
	if(i <= 0 || j <= 0){
		cout << "Invalid input";
	}
	else{
		for(int a = 1 ; a <= i ; a++){
			for(int b = 1 ; b <= j ; b++){
				cout << 'O';
			}
			cout << endl;
		}
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
