/*
These programs are made for practice with alghoritms
and data structures. It might contain some bugs.

Author: Jakub Brzazagacz
*/

#include <iostream>
using namespace std;

int binarySearchRecursive(int *tab,int left,int right,int value){
	int mid = (left + right)/2;
	if (tab[mid] == value) {
		return mid;
	}
	else if (value < tab[mid]) {
		return binarySearchRecursive(tab, left, mid, value);
	}
	else{
		return binarySearchRecursive(tab, mid, right, value);
	}
}

void TEST_binarySearchRecursive(){
    int x = 12,n = 1,index;
    const int size = 50;
    int tab[size];
    for(int j = 0; j < size; j++){
        tab[j] = j*n;
        if(tab[j] == x){
            index = j;
        }
    }
    if(binarySearchRecursive(tab,0,size-1,x) == index){
        cout << "All Binary Search tests passed\n";        
    }
    else{
        cout << "Error occured";
    }
}

// int main(){
//     Test_BinarySearchRecursive();
//     return 0;
// }