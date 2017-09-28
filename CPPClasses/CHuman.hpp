//
//  Human.hpp
//  CPPClasses
//
//  Created by Nicholas Outram on 28/09/2017.
//  Copyright © 2017 Nicholas Outram. All rights reserved.
//

#ifndef Human_hpp
#define Human_hpp

#include <stdio.h>

class CHuman {
    
private:
    //Private Properties
    unsigned int _age;
    float _weight;
    float _height;
    float _bmi;
    
public:
    CHuman(int age, float weight, float height);
    void display();
    //Read only Accessors
    float height();
    float weight();
    float bmi();
    //Write accessors
    float updateWeight(double);
    float updateHeight(double);
    
private:
    //Private member function (aka "method")
    void updateBMI();
};

#endif /* Human_hpp */
