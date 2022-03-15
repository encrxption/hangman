#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <algorithm>
#include "./hangman.hpp"

#define SPLIT_CHAR ':' //the character in words.txt to split words from hints

int main() 
{
    std::ifstream words("./hangman.txt") ; // stores the words & hints for hangman
    drawHangman(0);
    std::cout << "\n\n" ;
    std::cout << "____\n\n\n" ;
    std::cout << "Hint: type 'hint' to get a hint." ;
    getWord();

    return 0;
}