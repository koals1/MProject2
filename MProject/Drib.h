#pragma once
#include <iostream>

class Drib {
private:
    int numerator;  
    int denominator; 

public:
    Drib(int num = 0, int denom = 1);   

  
    void input();       
    void output() const;  
    Drib plus(const Drib& other);       
    Drib minus(const Drib& other);       
    Drib multiply(const Drib& other);    
    Drib divide(const Drib& other);      
};
