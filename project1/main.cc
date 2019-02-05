// Will Eshbaugh
// we175615@ohio.edu
// 01/27/19
// application file for assignment 1. Replaces all instances of a string with another string using command line arguments.

#include"prog1.h"

int main(int argc, char *argv[]){

    std::string tmp;            // strings being read from input

    std::cin >> tmp;
    while(!std::cin.eof()){
        find_n_replace(argv, tmp);
        std::cin >> tmp;
        if(std::cin.eof()){
            // Call replace function again to check the last word from input. Without the call, the last word of the input will not be included in the output!
            find_n_replace(argv, tmp);
        }
    }
    return 0;
}
