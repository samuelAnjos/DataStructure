#include <iostream>

using namespace std;

int main(){
     int length = 6;
     int numbers[length];

     void readNumbers(int *numbers, int length);
     void showSorted(int *numbers, int length);
     void selectionSort(int *numbers, int length);


     readNumbers(numbers, length);
     selectionSort(numbers, length);
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

// Sorting method by Selection Sort / selecao direta
void selectionSort(int *number, int length){
    int iMenor , temporary;
    for(int i=0; i<length-1; i++){
            iMenor = i;
        for(int j=i+1; j<length; j++){
            if(number[j] < number[iMenor]){
                iMenor = j;
            }
        }

         if(iMenor != i){
        temporary = number[iMenor];
        number[iMenor] = number[i];
        number[i] = temporary;
       }
    }


}


