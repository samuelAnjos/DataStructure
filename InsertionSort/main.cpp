#include <iostream>

using namespace std;

int main(){
     int length = 8;
     int numbers[length];

     void readNumbers(int *numbers, int length);
     void showSorted(int *numbers, int length);
    void insertionSort(int *numbers, int length);

     readNumbers(numbers, length);
     insertionSort(numbers, length);
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

// Insertion Sort code
void insertionSort(int *lista, int length){
    int i, k, temporary;
    for(i=1; i<length; i++){
        k=i;
        temporary = lista[i];
        while((k>0) && temporary < lista[k-1]){
            lista[k] = lista[k-1];
            k--;
        }
        lista[k] = temporary;
    }
}
