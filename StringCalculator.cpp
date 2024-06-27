#include "StringCalculator.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int addNumbers(const std::string& input, const std::string& delimiters) {
    int sum = 0;
    std::istringstream ss(input);
    std::string token;
    bool negativeNum = false;

    for (char c : input) {
        cout<<"char "<<c<<endl;
        if(c == '-'){
            negativeNum  = true;
        }
        else if (delimiters.find(c) == std::string::npos) {
             if(negativeNum){
                 negativeNum = false;
                 continue;
             }
              sum += c - '0';
              cout<<"sum = "<<sum<<endl;
        }
    }
    return sum;
}

int StringCalculator::add(string numbers){
    if(numbers.empty() || numbers == "0"){
         return 0;
    }
    else{
        std::string delimiters = ",;: \t\n/";
        int sum = addNumbers(numbers,delimiters);
        return sum;
    }
   
}

