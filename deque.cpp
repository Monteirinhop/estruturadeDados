#include "iostream"
#include "deque"
using namespace std;

int main(){
deque<int> dq;
dq.push_back(1);
dq.push_back(2);
dq.push_back(3);
dq.push_back(4);
dq.push_back(5);
dq.push_back(6);
dq.push_back(7);
dq.push_back(8);
dq.push_back(9);
for (auto i=dq.begin(); i!=dq.end(); ++i) {
if (*i % 2 == 0) {
dq.erase(i);
i--;
}
}
for (auto it=dq.begin(); it!=dq.end();++it)
cout << ' ' << *it;
return 0;
}