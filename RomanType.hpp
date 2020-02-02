//
//  RomanType.hpp
// 
//
//  Created by Edgar Olvera on 1/31/20.
//  Copyright © 2020 Edgar Olvera. All rights reserved.
//

#ifndef RomanType_hpp
#define RomanType_hpp

#include <stdio.h>
#include <string>

class RomanType{
    std::string romanNumeral;
    int decimal;
    int getDecimalValue(char);
    void convertToDecimal();
public:
    void setRomanNumeral(std::string);
    int getDecimal() const;
};

#endif /* RomanType_hpp */
