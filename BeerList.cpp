#include <iostream>
#include <string>
#include "Header.h"
#include "BeerList.h"
using namespace std;

beerList::beerList()
{
    num = 0;
    total = 0;
}
void beerList::addItem()
{
    items[num].getInventoryInput();
    total += items[num].getQuantity();
    num++;
}
void beerList::showItem()
{
    int i;
    for(i = 0; i < num; i++)
    {
        cout << items[i];
    }
    cout << "total quantity of all items is: " << total << endl;
}
