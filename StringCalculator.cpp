#include "StringCalculator.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int StringCalculator::add(string numbers){
    if(numbers.empty() || numbers == "0"){
         return 0;
    }
    else{
        istringstream input(numbers);
        string token;
        int sum = 0;
        while (getline(input, token, ',')) {
            sum += std::stoi(token);
        }
        return sum;
    }
   
}
