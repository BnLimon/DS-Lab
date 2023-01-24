#include <iostream>
using namespace std;

class ArrayManipulation{
    public:
        int printArr(int arr[]){
            cout << "input: ";
            for(int i = 0; i < 5;i++){
                cin >> arr[i];
            }
            cout << "Output: ";
            for(int i = 0; i < 5;i++){
                cout << arr[i] << " ";
            }
        };
        int printReversedArr(int arr[]){
            cout << "\nreversed Output: ";
            for(int i = 4; i >= 0;i--){
                cout << arr[i] << " ";
            }
        };
};

int main(){
    int arr[5];
    ArrayManipulation arrayManipulation;
    arrayManipulation.printArr(arr);
    arrayManipulation.printReversedArr(arr);
    return 0;
}
