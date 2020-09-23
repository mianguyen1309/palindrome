//hw1_palindrome.cpp
//Purpose: This program determines whether a user-provided word
//          is a palindrome
// Written by: Mia Nguyen

#include <iostream>
#include <string>

using namespace std;

int main() {
  // declare a boolean to store the result of the palindrome test
  bool result = false;
  palindrome_decide();

  //using conditional statement with boolean result to determine what
  //to print out to the console
  if(result == true){
      cout << "Your word is a palindrome! Fantastic!";
      palindrome_decide();
  }
  else {
      cout << "Your word is NOT a palindrome! Thanks anyways!";
      // program ends here
  }

  return 0;
}

      //create a function and call on it later to repeat the
      //entire palindrome program

      void palindrome_decide() {

          bool result = false;
          //Create variable to store the user provided word
          string user_word;

          //Print a message explaining the purpose of this program
          cout << "Greeetings! I am the palindrome decider!";
          cout << endl;

          //Prompt the user for a word
          cout << "Please enter a word: ";
          cin >> user_word;

          //Compute the length of user-provided word
          int length_of_word = user_word.length();

          //if only one character word = palindrome
          if(length_of_word == 1){
                result = true;
          }

      //this conditional will check to if word is a "close enough" palindrome
          if(length_of_word >= 6) {
                if((user_word[0] == user_word[length_of_word -1]) && (user_word[1] == user_word[length_of_word] -2) && (user_word[2] == user_word[length_of_word -3])) {
                      result = true;
                      cout <<" Not quite a palindrome but close enough.";
                      cout << "Please enter a word: ";
                      palindrome_decide();
                }
                else {
                      result = false;
                }
          }
          else {
                result = false;
          }


      //check to see if the first character and last character are the same
      if(user_word[0] == user_word[length_of_word -1]) {
        // do a while loop here to compare the character from
        //index 1 to index length_of_word -2
            int counter = 1;
            while(counter < length_of_word /2) {
                if(user_word[counter] == user_word[length_of_word -(counter +1)]) {
                    result = true;
                    counter++;
                }
                else {
                    result = false;
                    break;
                }
          }
      }
      else {
          result = false;
      }

    }
