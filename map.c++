#include <iostream>     
#include <map>          
using namespace std;
int main(){
    map<int, string > m;
    // use [] operator to add elements
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    // use insert() method to add elements
    m.insert({4,"afg"});
    map<int,string> :: iterator it;
    for(it = m.begin(); it != m.end() ; ++it){
        cout << it->first << " - " << it->second << endl;
    }
}