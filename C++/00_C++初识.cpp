//00_C++初识
//欢迎来到 C++!
#include <iostream> //这是一个头文件，里面包含了一些关于输入输出的函数和变量

using namespace std;    //使用 std 命名空间，这样就可以直接使用 std 中的函数和变量，而不需要加上 std::

//使用宏定义定义常量(不需要分号)
#define day 7

//你还可以替换关键字
#define retrun return

int main() {    //这是一个主函数，是程序的入口，程序从这里开始执行，所有的代码都要写在这个函数中
    //所有的代码除了注释和字符串内容，其余都要使用英文，不然报一堆错别怪我
    //下面是一行代码，你现在只需要记住每一行代码后都要加一个分号即可(是英文分号";"不是中文分号"；")
    cout << "Hello world!" << endl; //这行代码用于输出"Hello world!"，endl是换行的意思
    //cout 的用法：
    //cout << "要输出的内容" << endl;


//注释
    //注释就是给代码作解释，让别人可以快速理解代码
    //在编译时，编译器会忽略所有注释(注释是给人看的，不是给编译器看的)
    //以下是注释的两种方式
    //这是单行注释
    /*
    这是
    多行
    注释
    */

//变量
    /**
     * 变量就是给一块内存起个名字，方便操作这块内存
     * 语法：
     * 数据类型 变量名 = 初始值;
    **/

    int variable = 10;          //定义了一个变量，变量名为 variable ，变量类型为 int ，变量初始值为 10
    cout << variable << endl;   //输出变量的值
    variable = 20;              //修改变量的值，不需要写上变量类型，因为变量已经定义过了
    cout << variable << endl;   //再次输出变量的值

//常量
    //常量用于记录程序中不能更改的数据
    /**
     * 定义常量的两种方式
     * 1.使用宏定义，让编译器在进行预处理时直接把常量名替换成指定的值，需要在文件的最开头写：
     *     #define 常量名 常量值
     * 2.使用 const 修饰变量，让变量的值不能修改，仍然占用一部分内存，不需要在文件的最开头写：
     *     const 数据类型 常量名 = 常量值;
     * 常量是不能修改的，比如一周有7天是一个常量，你就不能改变了
     * 如果你对别人说：“一周有8天！”人家肯定不信你，如果你强行修改，那就会报错
    **/

    cout << "一周有 " << day << " 天" << endl;  //使用宏定义定义的常量

    //使用 const 修饰变量
    const int week = 7;
    cout << "一周有 " << week << " 天" << endl;

//关键字
    /**
     * 关键字是 C++ 中预先保留的单词，你不能将其指定为标识符
     * C++ 关键字如下：
     * asm          auto        bool                break           case        catch
     * char         class       const               const_cast      continue    default
     * delete       do          double              dtnamic_cast    else        enum
     * explicit     export      extern              false           float       for
     * friend       goto        if                  inline          int         long
     * mutable      namespace   new                 operator        private     protected
     * public       register    reinterpret_cast    return          short       signed
     * sizeof       static      static_cast         struct switch   template    this
     * throw        true        try                 typedef         typeid      typename
     * union        unsigned    using               virtual         void        volatile
     * wchar_t      while
     * 虽然有这么多，但是我们在学习时用多了，就会记住的
    **/

    //int return = 10;    //你不能这样做，因为 return 是一个关键字，你不能用它作为变量名

//标识符命名规则
    /**
     * C++ 中，给标识符(变量、常量、函数的名字)命名时，有以下规则：
     * 1.标识符只能由字母、数字、下划线组成
     * 2.标识符不能以数字开头
     * 3.标识符不能是关键字
     * 4.标识符区分大小写
     * 5.标识符长度不能超过 255 个字符
     * 6.(C++11 以下标准)标识符不能使用中文
     * 7.(不硬性要求)标识符最好有意义，最好能够体现出变量、常量、函数的作用，使人一眼就能看出它的作用
     * 8.避免缩写，除非是像HTTP（超文本传输协议）、CPU（中央处理器）这样的广为人知的缩写是可以使用的
     * 
     * 变量建议使用小驼峰命名法
     * 小驼峰命名法，就是第一个单词的首字母小写，后面单词的首字母大写。例如 userName ， userAge 等
     * 
     * 常量建议使用全大写+下划线命名法
     * 比如 PI_VALUE ， MAX_VALUE 等
     * 
     * 函数建议使用大驼峰命名法
     * 大驼峰命名法，就是所有单词的首字母都大写。例如 UserName ， UserAge 等
     * 
     * 类名建议使用下划线命名法
     * 下划线命名法，就是所有单词之间用下划线连接。例如 user_name ， user_age 等
     * 
    **/

    //int 123 = 10;     //这是一个错误的例子，标识符不能以数字开头
    //int return = 10;  //这是一个错误的例子，标识符不能是关键字

    cout << "Press Enter to continue... ";  
    cin.get();  //这行代码用于暂停程序，等待用户按下回车键，然后继续执行下面的代码
    //cin 的用法：
    //cin >> 变量名;
    //cin 可以让用户输入数据，然后将数据赋值给变量，变量类型要和用户输入的数据类型一致
    retrun 0;   //这行代码用于结束程序，一般 0 表示程序正常结束，非 0 表示程序异常结束
    //这里的 return 被我改成了 retrun ，因为它在预处理时会被替换成 return ，这样就不会报错了
}