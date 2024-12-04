#pragma once
#include <iostream>
using namespace std;






class Flat {
private:
    double area;
    double price;
    string address;

public:


    Flat() : area(0), price(0), address("") {}

    
    Flat(double a, double p, const string& addr) : area(a), price(p), address(addr) {}

   
    double getArea() const {
        return area;
    }

   
    double getPrice() const {
        return price;
    }

    
    bool operator==(const Flat& other) const {
        return this->area == other.area;
    }

    
    Flat& operator=(const Flat& other) {
        if (this == &other) {
            return *this;
        }
        this->area = other.area;
        this->price = other.price;
        this->address = other.address;
        return *this;
    }

    
    bool operator>(const Flat& other) const {
        return this->price > other.price;
    }

    
    void printInfo() const {
        cout << "Address: " << address
            << ", Area: " << area
            << " sqm, Price: " << price << " USD\n";
    }
};