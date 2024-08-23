#include <iostream>
#include <random>
using namespace std;

int get_random_num (int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(min, max);
    int random_number = dist(gen);
    return random_number;
}

int main() {
    string arr[2][2][5];
    string names[50] = {
        "Landon", "Avery", "Kanden", "Bentley", "Finnegan", 
        "Nash", "Emmett", "Greyson", "Noah", "Jace", 
        "Jaxton", "Samyer", "Zachary", "Eli", "Keegan", 
        "Linux", "Isaac", "Asher", "Debian", "Theo", 
        "Levi", "Dominic", "Austin", "Wyatt", "Carter", 
        "Logan", "Luke", "Max", "Ethan", "Miles", 
        "Oliver", "Hudson", "Owen", "William", "Joshua", 
        "Benjamin", "Henry", "Lucas", "Alexander", "Jackson", 
        "Mason", "Grayzon", "Ryder", "Elijah", "Liam", 
        "Caleb", "Thomas", "Creeper", "Hunter", "Conner"
    };

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        for (int j = 0; j < sizeof(arr[0]) / sizeof(arr[0][0]); j++) {
            for (int k = 0; k < sizeof(arr[0][0]) / sizeof(arr[0][0][0]); k++) {
                arr[i][j][k] = names[get_random_num(0,sizeof(names) / sizeof(names[0])) - 1];
                cout << "专业";
                if (i == 0) {
                    cout << "1: 物理";
                } else {
                    cout << "2: 计算机";
                }
                cout << "，班级: " << j+1 << "班，座位号: " << k+1 << "号，姓名: " << arr[i][j][k] << endl;
            }
        }
    }

    system ("pause");
    return 0;
}