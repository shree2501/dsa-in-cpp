#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main(){
    priority_queue <int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);
    q.pop();
    cout << q.top() << endl;
    cout << "Size: " << q.size() << endl;
    cout << "Is empty: " << q.empty() << endl;
}