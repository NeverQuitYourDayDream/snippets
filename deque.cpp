// deque is Double-ended queues
// items can be obtained from both the front and back of a deque

#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    
    // initialize a deque called "dint" which holds ints
    deque<int> dint;
    // is dint empty? use empty() to find out
    cout << "Is dint empty? " << dint.empty() << endl; 
    
    // add the integer 15 to dint using push_back
    dint.push_back(15);
    cout << dint.empty() << endl;
    
    // inserting items at the front
    dint.push_front(10);
    dint.push_front(4);
    // now dint looks like this: 4, 10, 15
    
    // insert items at the back of the deque
    dint.push_back(50);
    dint.push_back(100);
    // now dint looks like this: 4, 10, 15, 50, 100
   
    // find the size of the deque using size()
    cout << "dint size is " << dint.size() << endl;
    
    // to find the first item in the deque
    cout << dint.front() << endl;
    // likewise for the last element
    cout << din.back() << endl;
    
    // let's see what elements are in dint?
    int size_of_dint = dint.size()
    for (int i = 0; i < size_of_dint; i++)
        // at(i) to find the item at the index i
        cout << dint.at(i) << endl;
    }
    
    // now let's have a deque filled with strings
    deque<string> dstr;
    
    // let's add the word "apple" into dstr
    dstr.push_back("apple");
    
    // how about "book"
    dstr.push_back("book");
    
    // add "train" to the front of dstr?
    dstr.push_front("train")
    // dstr looks like this: train, apple, book
    
}
    
