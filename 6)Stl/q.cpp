#include <bits/stdc++.h>
using namespace std;

void speed(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

int main(){
    speed(); // Call speed() at the beginning

    priority_queue<int, vector<int>, greater<>> pq;
    pq.push(5);
    pq.push(7);
    pq.push(3);
    pq.push(8);
    pq.push(6);
    
    cout << pq.top() << endl; // Should print the smallest element
    pq.pop();
    cout << pq.top() << endl; // Should print the next smallest element

    return 0; // Return an integer at the end of main
}