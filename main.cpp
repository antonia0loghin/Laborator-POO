#include <iostream>
class A{
    public:
        ///constructor - print "L-a creat"
        A()
        {
            
            std::cout<<"A\n";
        } 
        ///destructor = ...   
        virtual ~A()
        {
            std::cout<<"~A\n";
        }
        ///private string - status
        void SetStatus(std::string newS)
        {
            n_status=newS;
        }
        std::string GetStatus()
        {
            return n_status;
        }
    private:
        std::string n_status;
    
};

class B:public A{
    ///mosteneste pe A 
    public:
        ///constructor - print "L-a creat"
        B()
        {
            
            std::cout<<"B\n";
        } 
        ///destructor = ...   
        ~B()
        {
            std::cout<<"~B\n";
        }
        ///private string - status
        
};

class printable
{
    public:
        virtual void drawme();
};
class shape:public printable{};
class square:public shape{};

int main()
{
    /*
    ///pointer de clasa A la obiect de clasa A
    A* A_ptr=new A();
    ///pointer de clasa A la obiect de clasa B
    ///nu poti avea pointer de clasa B la obiect de clasa A 
    A* B_ptr=new B();
    

    delete A_ptr;
    delete B_ptr;
    */
    printable x;
    return 0;
}