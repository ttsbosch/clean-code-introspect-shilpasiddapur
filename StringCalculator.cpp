#include "StringCalculator.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int sumFromString(const std::string& input) {
    int sum = 0;
    std::istringstream ss(input);
    std::string token;

    while (getline(ss, token, ',')) {
        sum += std::stoi(token);
    }

    return sum;
}

int StringCalculator::add(string numbers){
    if(numbers.empty() || numbers == "0"){
         return 0;
    }
    else{
        int sum = sumFromString(numbers);
        return sum;
    }
   
}

