// #include <iostream>


// int searchArray(std::string array[], int size, std::string element);
// int main() {

//     std::string foods[] = {"apples", "oranges", "bananas", "avocados", "pears"};
//     int size = sizeof(foods) / sizeof(std::string);
//     int index;
//     std::string myFood;
//     std::cout << "Enter element to search for: ";
//     std::getline(std::cin, myFood);

//     index = searchArray(foods, size, myFood);

//     if(index != -1) {
//         std::cout << myFood << " is at index " << index << '\n';
//     }
//     else{
//         std::cout << myFood << " is not contained in the array\n";
//     }
//     return 0;
// }

// int searchArray(std::string array[], int size, std::string element) {

//     for(int i = 0; i < size; i++) { 
//         if(array[i] == element) {
//             return i;
//         }
//     }
//     return -1;
// }