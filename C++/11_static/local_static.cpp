//11_3_局部静态
#include <iostream>
using namespace std;

//int i = 0; //同理

void Function()
{
    //static //加了就只会int i = 0;一次
    int i = 0;
    i++;
    cout << i << endl;
}

class Singleton
{
    private:
        static Singleton* s_Instance;
    public:
        //static Singleton& Get() { return *s_instance; } //与下面相等
        static Singleton& Get()
            {
                static Singleton instance;
                return instance; 
            }

        void Hello() 
        {
            cout << "Hello World" << endl;
        }
};

//Singleton* Singleton::s_Instance = nullptr;

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();

    Singleton::Get().Hello();


    cout << "Press Enter to continue... ";
    cin.get();   
    return 0;
}