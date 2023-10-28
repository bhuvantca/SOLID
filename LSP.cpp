
#include<iostream>

class Fruit
{
  public:
  virtual void color() = 0;
};

class Orange : public Fruit
{
    public:
    void color()
    {
        std::cout<<"Orange"<<std::endl;
    }
};

class Apple : public Fruit
{
    public:
    void color()
    {
        std::cout<<"Red"<<std::endl;
    }
};

int main()
{
    Fruit *orange = new Orange();
    orange->color();
    Fruit *apple = new Apple();
    apple->color();
    return 0;
}



/*
The principle defines that objects of a superclass shall be replaceable with objects of its subclasses without breaking the application. That requires the objects of your subclasses to behave in the same way as the objects of your superclass.
  */

/*
Input Param - We need to implement less restrictive validation rules in subclass.
Output Param - We can implement strict rules in subclass for defined return value.

*/
