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

std::string removeDelimiters(const std::string& input, const std::string& delimiters) {
    std::string result;

    for (char c : input) {
        if (delimiters.find(c) == std::string::npos) {
            result += c;
        }
    }

    return result;
}

int StringCalculator::add(string numbers){
    if(numbers.empty() || numbers == "0"){
         return 0;
    }
    else{
        std::string delimiters = ",;: \t\n";
        string result = removeDelimiters(numbers,delimiters);
        int sum = sumFromString(result);
        return sum;
    }
   
}

