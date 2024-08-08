/*
These programs are made for practice with alghoritms
and data structures. It might contain some bugs.

Author: Jakub Brzazagacz
*/

#include <iostream>
#include <cstdlib>
using namespace std;

void bubbleSort(int *tab, int n){
    for(int i = 1; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(tab[j] > tab[j+1]){
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

void TEST_bubbleSort(){

    const int n = 50;
    srand((unsigned) time(NULL));
    int tab[n], tu = 0, ts = 0,i,j,k;
    bool error;

    for(k = 0; k < 3; k++){
        for(int i = 0; i < n; i++){
        tab[i] = rand() % 10;
        tu++;
        }
        bubbleSort(tab,n);
        for(int i = 0; i < n; i++){
            ts++;
        }
        if(tu != ts){
            error = true;
        }
        for(int j = 0; j < n-1; j++){
            if(tab[j] > tab[j+1]){
                error = true;
                break;
            }
        }
        if(error){
            break;
        }
    }
    if(error){
         cout << "Error occured";
    }
    else{
        cout << "All Bubble Sort (" << k << ") tests passed\n";
    }
}

// int main(){
//     Test_BubbleSort();
//     return 0;
// }