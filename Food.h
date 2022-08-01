//
// Created by leoda on 01/08/2022.
//

#ifndef FILE_FOOD_H
#define FILE_FOOD_H
#include <utility>

#include "Item.h"


class Food: public Item{
public:
    Food(string &n, int q): Item(n,q),nameCategory("Food"){};
    //nameCategory by default =Food.
    //TODO Implement the methods of the base class?
    //TODO destructor?
private:
    string nameCategory;
};


#endif //FILE_FOOD_H
