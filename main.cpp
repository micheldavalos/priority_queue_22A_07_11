#include <queue>
#include <iostream>
using namespace std;

int main() {
    queue<int> cola;

    for (size_t i = 0; i < 10; i++) {
        cola.push(i);
    }

    cout << "frente: " << cola.front() << endl;
    cout << "ultimo: " << cola.back() << endl;

    while (!cola.empty())
    {
        auto e = cola.front();
        cout << e << endl;
        cola.pop();
    }


    return 0;
}