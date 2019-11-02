#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

Beer::Beer()
{
    name = " ";
    brewery = " ";
    type = " ";
    abv = 0;
    rating = 0;
}
Beer::Beer(string nam, string brew, string tp, int ab, int rate)
{
    name = nam;
    brewery = brew;
    type = tp;
    abv = ab;
    rating = rate;
}
string Beer::getName()
{
    return name;
}
string Beer::getBrewery()
{
    return brewery;
}
string Beer::getType()
{
    return type;
}
int Beer::getAbv()
{
    return abv;
}
int Beer::getRating()
{
    return rating;
}
void Beer::setName(string nam)
{
    name = nam;
}
void Beer::setBrewery(string brew)
{
    brewery = brew;
}
void Beer::setType(string tp)
{
    type = tp;
}
void Beer::setAbv(int ab)
{
    abv = ab;
}
void Beer::setRating(int rate)
{
    rating = rate;
}
void Beer::getBeerInpt()
{
    cout << "Please enter beer name:" << endl;
    getline(cin, name, '\n');
    cout << "Please enter brewery:" << endl;
    getline(cin, brewery, '\n');
    cout << "Please enter beer type:" << endl;
    getline(cin, type, '\n');
    cout << "Please enter the abv:" << endl;
    cin >> abv;
    cout << "Please enter your rating 1-5:" << endl;
    cin >> rating;
}
ostream& operator<<(ostream &output, Beer &i)
{
    output << "Favorite Beers:" << i.name << endl;
    output << "|" << i.brewery << "|" << i.type << "|" << i.abv << "|" << i.rating << endl;
    return output;
}
