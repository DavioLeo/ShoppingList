//
// Created by leoda on 01/08/2022.
//

#ifndef FILE_ITEM_H
#define FILE_ITEM_H
#include <iostream>

using namespace std;

class Item {
public:
    Item(string &n, int q, bool iT=false):name(n),quantity(q),itemTake(iT){};
    virtual string getName() const;
    virtual int getQuantity() const;
    virtual void setName(string &n);
    virtual void setQuantity(int q);
    //TODO virtual methods?
    //TODO destructor?
private:
    string name;
    int quantity;
    //name of item to buy and the amount to buy it.
    bool itemTake;
    //Item that its checked on the list.
};


#endif //FILE_ITEM_H
