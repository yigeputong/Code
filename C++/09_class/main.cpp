#include <iostream>
using namespace std;

#define log(x) cout << x << endl

class Player {
public:
    int x, y;
    int speed;

    void move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

int main() {
    Player player;
    player.move(1, -1);

    return 0;
}