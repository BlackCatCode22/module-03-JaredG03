#include <iostream>
using namespace std;

int main(){
    //setting up variable
    int a = 2;
    int* p = &a;
    std::cout << "Adress stored in p:" << &a << std::endl;
    std::cout << "value of a using p:" << *p << std::endl;

    //change the value of my pointer 
    *p = 22;
    std::cout <<"New Value:" << *p << std::endl;
   

    //using Pointer Arithmetic
    int arr[5] = {1,2,3,4,5};
    int* arrPtr = arr;

    for (int i = 0; i < 5; ++i) {
        std::cout << "AddressElement " << i << ":" << arrPtr + i << std::endl;
    }
    std::cout << "Values in the array:";
    for (int i = 0; i < 5; ++i) {
        std::cout << "ElementValues" << i << ":" << *(arrPtr + i) << std::endl;
    }

    return 0; 
} 