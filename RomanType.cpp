//
//  RomanType.cpp
//  
//
//  Created by Edgar Olvera on 1/31/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#include "RomanType.hpp"

int RomanType::getDecimalValue(char romanLetter){
    switch (romanLetter) {
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
    }
    return 0;
}

void RomanType::convertToDecimal(){
    int len = romanNumeral.size();
    int temp{};
    
    for(int i{len-1}; i >= 0; --i){
        int num = getDecimalValue(romanNumeral.at(i));
        if(num >= temp){
            decimal += num;
        }
        else{
            decimal -= num;
        }
        temp = num;
    }
}

void RomanType::setRomanNumeral(std::string roman){
    romanNumeral = roman;
    convertToDecimal();
}

int RomanType::getDecimal() const{
    return decimal;
}
