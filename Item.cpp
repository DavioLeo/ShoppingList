//
// Created by leoda on 01/08/2022.
//

#include "Item.h"

string Item::getName() const {
    return this->name;
}
int Item::getQuantity() const {
    return this->quantity;
}
void Item::setName(string &n){
    this->name=n;
}
void Item::setQuantity(int q){
    this->quantity=q;
}
