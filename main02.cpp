#include <iostream>
#include <queue>

using namespace std;

int main() {
    priority_queue<string, vector<string>, greater<string> > pq;
    pq.push("Seminario");
    pq.push("De");
    pq.push("Solucion");
    pq.push("Problemas");
    pq.push("Estructura");
    pq.push("Datos");

    while (!pq.empty())
    {
        auto e = pq.top();
        pq.pop();
        cout << e << endl;
    }
    

    return 0;
}