#include <bits/stdc++.h>
using namespace std;

struct Hash{
  int BUCKET;
  vector<vector<int>> table;

  void insertItem(int key){
    int index = hashFunction(key);
    table[index].push_back(key);
  }

  void deleteItem(int key);  //later used

  int hashFunction(int x){
    return (x % BUCKET);
  }

  void displayHash();    // later used

  Hash(int b){        // Constructor
    this -> BUCKET = b;
    table.resize(BUCKET);
  }
};

void Hash::deleteItem(int key){
  int index = hashFunction(key);

  auto it = find(table[index].begin(), table[index].end(), key);

  if(it !- table[index].end()){
    table[index].erase(it);
  }
}

void Hash::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        cout << i;
        for (int x : table[i]) {
            cout << " --> " << x;
        }
        cout << endl;
    }
}

int main() {
    vector<int> a = {15, 11, 27, 8, 12};

    Hash h(7);  
    for (int key : a)
        h.insertItem(key);

    h.deleteItem(12);
    h.displayHash();

    return 0;
}






