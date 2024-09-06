#include <iostream>
#include <vector>
using namespace std;
int main() {
   vector<int> v0 = { 20, 19, 23, 16, 7, 2, 5, 14 };
   cout<<" before:"<<endl;
   /*auto ბრძანბება ცვკლადს ავტომატურადდ ანიჭებს მონაცემის ტიპს.
   როდესაც მხოლოდ ინფორმაციის წაკითხვას ვააპირებთ და არა მის მოდიფიკაციას შეგვიძლია const auto &-ს გამოყენებ */
   
   for (const auto &i: v0)
      cout << i << ' '<<endl;
      
      for (int i = 0; i < v0.size(); i++) {
        for (int j = i; j < (v0.size()); j++) {
        if (v0[i] > v0[j]) {
                swap(v0[i], v0[j]);
        }
    }
}

   cout<< endl << " after:"<<endl;
   for (const auto &i: v0)
      cout << i << ' '<<endl;
   return 0;
}