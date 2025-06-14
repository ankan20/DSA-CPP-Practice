// ==================== VECTORS ====================
#include<iostream>
#include<vector>
using namespace std;

int main() {
    // -------------------- Basic vector operations --------------------
    vector<int> vec; // size 0

    vec.push_back(1);
    cout << "Size & capacity of the vector " << vec.size() << " & " << vec.capacity() << endl;
    vec.push_back(2);
    cout << "Size & capacity of the vector " << vec.size() << " & " << vec.capacity() << endl;
    vec.push_back(3);
    cout << "Size & capacity of the vector " << vec.size() << " & " << vec.capacity() << endl;
    vec.push_back(4);
    cout << "Size & capacity of the vector " << vec.size() << " & " << vec.capacity() << endl;

    // Loop through the vector
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;

    // -------------------- Vector with initial values --------------------
    vector<int> vec1(3, 10); // size = 3, each value = 10
    cout << "Vector 2 with same values \n";
    for (int val : vec1) {
        cout << val << " ";
    }
    cout << endl;

    // -------------------- Erase and Clear --------------------
    cout << "Erase function of vector\n";
    vector<int> vec3 = {1, 2, 3, 4, 5, 6, 7, 8};
    for (int val : vec3) {
        cout << val << " ";
    }
    cout << endl;

    vec3.erase(vec3.begin(), vec3.begin() + 2);
    cout << "After delete\n";
    for (int val : vec3) {
        cout << val << " ";
    }
    cout << "\nCapacity of vector 3 is " << vec3.capacity() << endl;

    vec3.clear();
    cout << "After clearing vector, capacity of vector 3 is " << vec3.capacity();
    cout << "\nSize of the vector 3 is " << vec3.size();

    for (int val : vec3) {
        cout << val << " - ";
    }

    // -------------------- End Iterator --------------------
    vector<int> vec4 = {1, 2, 3, 4};
    cout << "\nvec.end value is " << *(vec.end()) << endl;

    // -------------------- Iterators --------------------
    vector<int> vec5 = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it;
    for (it = vec5.begin(); it != vec5.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = vec5.rbegin(); it != vec5.rend(); it++) {
        cout << *(it) << " ";
    }

    return 0;
}

// ==================== LIST ====================
#include<iostream>
#include<list>

using namespace std;

int main_list() {
    list<int> ls = {1, 2, 3, 4, 5};
    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl;

    ls.push_front(0);
    for (auto it : ls) {
        cout << it << " ";
    }
    cout << endl;

    ls.pop_front();
    for (auto it : ls) {
        cout << it << " ";
    }

    cout << endl << ls.back();

    return 0;
}

// ==================== QUEUE ====================
#include<iostream>
#include<queue>

using namespace std;

int main_queue() {
    queue<int> st;

    st.push(1);
    st.push(2);
    st.emplace(3);

    cout << "Front -> " << st.front() << endl;
    st.pop();
    cout << "Front -> " << st.front() << endl;

    queue<int> st1;
    st1.push(1);
    st1.push(2);
    st1.push(3);
    st1.push(4);

    while (!st1.empty()) {
        cout << st1.front() << " ";
        st1.pop();
    }

    cout << st1.size();

    return 0;
}

// ==================== PRIORITY QUEUE (MIN HEAP) ====================
#include<iostream>
#include<queue>

using namespace std;

int main_priority_queue() {
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(10);
    pq.push(3);
    pq.push(1);
    pq.push(6);

    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}

// ==================== MAP ====================
#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main_map() {
    vector<int> arr = {1, 2, 3, 45, 1, 2, 45, 3, 3, 1, 1, 10};
    map<int, int> mp;

    for (auto it : arr) {
        mp[it]++;
    }

    for (auto it : mp) {
        cout << "Key " << it.first << " & value " << it.second << endl;
    }

    return 0;
}

// ==================== UNORDERED SET ====================
#include<iostream>
#include<unordered_set>

using namespace std;

int main_unordered_set() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(4);
    s.insert(40);
    s.insert(12);

    for (auto val : s) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}

// ==================== CUSTOM COMPARATOR SORT ====================
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comparator(pair<int, int> s1, pair<int, int> s2) {
    if (s1.second < s2.second) return true;
    if (s1.second > s2.second) return false;
    return s1.first < s2.first;
}

int main_comparator_sort() {
    vector<pair<int, int>> vec = {{3, 1}, {7, 1}, {5, 2}, {2, 1}, {1, 2}};
    sort(vec.begin(), vec.end(), comparator);

    for (auto it : vec) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}