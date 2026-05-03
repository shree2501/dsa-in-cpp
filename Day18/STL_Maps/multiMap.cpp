#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    multimap<string, int> m;
    m.emplace("tv",100);
    m.emplace("watch", 120);
    m.insert({"computer", 120});
    
    m.erase("tv");

    for(auto p : m){
        cout << p.first << " " << p.second << endl;
    }
    
    cout << "Count = " << m.count("laptop") << endl;

    if(m.find("laptop") != m.end()){
        cout << "Found";
    }
    else{
        cout << "Not Found";
    }

    return 0;
}