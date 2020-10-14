#ifndef CREATOR_H
#define CREATOR_H

class Product;

class Creator
{
public:
    virtual Product* Create(Product Id);
};

Product * Creator::Create(Product Id)
{
    if(id == MINE) return new MyProduct;
    if(id == YOURS) return new YourProduct;
    //repeat for remaining products
    
    return 0;
}


Product* MyCreator::Create(Product id)
{
    if(id == YOURS) return new MyProduct;
    if(id == MINE) return new YourProduct;
    if(id == THEIRS) return new TheirProduct;
    
    return Createor::Create(id);    
}





#endif
