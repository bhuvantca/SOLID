
#include<iostream>
using namespace std;

class IPrintable
{
    public:
    virtual void print() = 0;
};

class IScannable
{
    public:
    virtual void scan() = 0;
};

class IFaxable
{
    public:
    virtual void fax() = 0;
};

class InkJetPrinter : public IPrintable, public IScannable, public IFaxable
{
    public:
    void print() override {
        cout<< "Inkjet printer printing."<<endl;
    }
    
    void scan() override {
        cout<< "Inkjet printer scanning."<<endl;
    }
    
    void fax() override {
        cout<< "Inkjet printer faxing."<<endl;
    }
};

class LaserPrinter : public IPrintable, public IScannable
{
  public:
   void print() override {
        cout<< "Laser printer printing."<<endl;
    }
    
    void scan() override {
        cout<< "Laser printer scanning."<<endl;
    }
};

int main()
{
    LaserPrinter lp;
    lp.print();
    lp.scan();
}




//https://www.linkedin.com/pulse/understanding-solid-c-interface-segregation-principle-abhishek-anand?trk=public_post_feed-article-content



/*
Interface Segregation Principle:
  ISP goal is splits the larger interfaces into smaller and more specific to requirement.
  So, Class shouldnot forced to implement a method, which is not used.
Adv: 1. Increase code reusability 2. Easier to implement.
*/
/*
A class must not have to implement any interface which is not required by the class
*/

/*
Interface Segregation Principle states that “Clients should not be forced to depend on methods that they don’t need.”

In simple terms, an interface should only contain methods that are relevant to the clients that use it and they should not be forced to implement methods that they don’t need.
*/
