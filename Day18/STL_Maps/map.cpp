#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    map<string, int> m;
    m["tv"] = 100;
    m["laptop"] = 50;
    m["tablet"] = 80;

    m.insert({"computer", 120});
    m.emplace("watch", 120);
    m.erase("tv");

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    cout << m["tablet"] << endl;
    cout << "Count = " << m.count("laptop") << endl;

    if(m.find("laptop") != m.end()){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

    return 0;
}