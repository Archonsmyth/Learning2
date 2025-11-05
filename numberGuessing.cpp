//  #include <iostream>

//  int main() {

//     int num;
//     int guess;
//     int tries;

//     srand(time(NULL));
//     num = (rand() % 100) + 1;

    
//      do {
//          std::cout << "Enter a number between 1 and 100: ";
//          std::cin >> guess;
//          tries++;

//          guess == num ? std::cout << "Correct! It took you " << tries <<" tries!\n" : std::cout << "Keep trying!\n";
//          if(guess < num) {
//              std::cout << "Too low!\n";
//          }
//          if(guess > num) {
//              std::cout << "Too high!\n";
//          }

//      } while(guess!=num);

//      return 0;
//  }