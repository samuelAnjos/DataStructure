#include <iostream>

using namespace std;

int main(){
     int length = 8;
     int numbers[length];

     void readNumbers(int *numbers, int length);
     void quickSort(int *lista, int begin_, int endCurrent);
     void showSorted(int *numbers, int length);

     readNumbers(numbers, length);
     quickSort(numbers, 0, length-1);
     showSorted(numbers, length);

    return 0;
}

void readNumbers(int *numbers, int length){
    cout << "Enter with " << length << " numbers: " << endl;
    for(int i=0; i<length; i++){
      cin >> numbers[i];
   }
}

void showSorted(int *numbers, int length){
   for(int i=0; i<length; i++){
      cout << numbers[i] << " ";
   }
}

// how to make a quickSort...
void quickSort(int *v, int beginn, int finall){
    int i = beginn;
    int j = finall;
    int aux;
    int pivo = v[i];

   do{
    while(v[i]<pivo && i<finall){
        i++;
    }
    while(v[j]>pivo && j>beginn){
        j--;
    }

    if(i<=j){
       aux = v[i];
       v[i] = v[j];
       v[j] = aux;
       i++;
       j--;
    }
    }while(i<=j);
    if(beginn<j){
        quickSort(v, beginn, j);
    }
    if(i<finall){
       quickSort(v, i, finall);
    }


}












