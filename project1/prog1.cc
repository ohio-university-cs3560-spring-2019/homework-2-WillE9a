// Will Eshbaugh
// we175615@ohio.edu
// 01/27/19
// Source file for prog1.h. 

#include "prog1.h"

void find_n_replace(char *argv[], std::string tmp){
    std::string str1 = argv[1]; // string you are looking to replace
    std::string str2 = argv[2]; // string you will replace str1 with


    // Looks for any instances of str1 from the input file
    if(tmp.find(str1) != std::string::npos){
        size_t i = 0;
        for(i = 0; i < tmp.find(str1); i++){
            std::cout << tmp[i];
        }
        tmp.erase(0, i+str1.length());
        std::cout << str2 << tmp;
    }

    else{
        std::cout << tmp;
    }
    if(std::cin.peek() == ' '){
        std::cout << ' '; // Spaces (cin ignores whitespace)
    }else if(std::cin.peek() == '\n'){
        std::cout << '\n'; // Newlines (if they happen to be in the file)
    }
}
