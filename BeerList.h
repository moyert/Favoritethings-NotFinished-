#pragma once
#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

class beerList
{
    Inventory items[1000];
    int num;
    int total;
public:
    beerList();
    void addItem();
    void showItem();
};
