#ifndef TEMP_H
#define TEMP_H

class Product;
class Creator
{
    virtual Product* CreateProduct() = 0;
};

template<typename TheProduct>
class StandardCreator : public Creator
{
public:
    Product * CreateProduct() override;
};

template<typename TheProduct> 
Product * StandardCreator<TheProduct>::CreateProduct()
{
    return new TheProduct;
};

/*
 class MyProduct : public Product
 {
 public: MyProduct();
 //...
 }
 
 StandardCreator<MyProduct> myCreator;
 */





#endif
