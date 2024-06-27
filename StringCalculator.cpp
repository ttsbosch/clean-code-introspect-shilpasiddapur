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
    std::string result = input;

    for (char delimiter : delimiters) {
        result.erase(std::remove(result.begin(), result.end(), delimiter), result.end());
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

