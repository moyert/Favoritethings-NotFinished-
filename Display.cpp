#include <iostream>
#include <string>
#include "BeerList.h"
#include "Header.h"
using namespace std;

int main()
{
    char answer;
    
    do
    {
    
    beerList iobject;
    iobject.addItem();
    
        cout << "Would you like to enter another input?" << endl;
        cin >> answer;
    }while(answer == 'y' || 'Y');
    
    
    system("pause");
    return 0;
}


