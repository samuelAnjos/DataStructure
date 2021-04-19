#include <iostream>

using namespace std;

int main(){
     int length = 8;
     int numbers[length];

     void readNumbers(int *numbers, int length);
     void showSorted(int *numbers, int length);
     void bubbleSort(int *numbers, int length);

     readNumbers(numbers, length);
     bubbleSort(numbers, length);
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

// Bubble sort ordering method
void bubbleSort(int *numbers, int length){
    int change, temporary, endd = length;
    do{
        change = 0;
        for(int i=0; i<endd-1; i++){
            if(numbers[i] > numbers[i+1]){
                temporary = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temporary;
                change = 1;
            }
        }
    endd--;
    }while(endd && change > 0);
}
