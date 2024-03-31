/*
These programs are made for practice with alghoritms
and data structures. It might contain some bugs.

Author: Jakub Brzazagacz
*/

#include <iostream>
using namespace std;

int BinarySearchRecursive(int *tab,int left,int right,int value) {
	int mid = (left + right)/2;
	if (tab[mid] == value) {
		return mid;
	}
	else if (value < tab[mid]) {
		return BinarySearchRecursive(tab, left, mid, value);
	}
	else{
		return BinarySearchRecursive(tab, mid, right, value);
	}
}

void Test_BinarySearchRecursive(){
    int x = 12,n = 1,index;
    const int size = 50;
    int tab[size];
    for(int j = 0; j < size; j++){
        tab[j] = j*n;
        if(tab[j] == x){
            index = j;
        }
    }
    if(BinarySearchRecursive(tab,0,size-1,x) == index){
        cout << "Test passed";        
    }
    else{
        cout << "Error occured";
    }
}

int main(){
    Test_BinarySearchRecursive();
    return 0;
}