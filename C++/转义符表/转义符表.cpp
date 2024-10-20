#include <iostream>
using namespace std; 

int main() {
    cout << "转义符\t含义" << endl;
    cout << "\\a\t警报" << endl;
    cout << "\\b\t退格(BS),将当前位置移到前一列" << endl;
    cout << "\\f\t换页(FF),将当前位置移到下页开头" << endl;
    cout << "\\n\t换行(LF),将当前位置移到下一行开头" << endl;
    cout << "\\r\t回车(CR),将当前位置移到本行开头" << endl;
    cout << "\\t\t水平制表(HT) (等于一个TAB)" << endl;
    cout << "\\v\t垂直制表(VT)" << endl;
    cout << "\\\\\t代表一个反斜杠 \\" << endl;
    cout << "\\\'\t代表一个单引号 \'" << endl;
    cout << "\\\"\t代表一个双引号 \"" << endl;
    cout << "\\?\t代表一个问号 \?" << endl;
    
    cerr << "Press Enter to exit... ";
    cin.get();
    return 0;
}