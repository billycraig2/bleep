#include <iostream>
#include <string>
#include "functions.hpp"

int main() {

    std::string word = "broccoli";
    std::string text = "I love broccoli cheddar soup, its my favourite dish that has broccoli in it."
                       "Broccoli is a great source of nutrients.";

    std::cout << bleep(word, text);
}
