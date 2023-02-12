#include <iostream>
#include <string>
#include "functions.hpp"


std::string bleep(std::string word, std::string text) {
    for(int i = 0; i < word.length(); i++) {
        for(int j = 0; j < text.length(); j++) {
            if(toupper(word[i]) == toupper(text[j]) && toupper(word[i+1]) == toupper(text[j+1])) {
                text[j] = '*';
            }
        }
    }
    return text;
}