#include <iostream>
#include <queue>
using namespace std;

void printQueue (queue<int> queue) {
    while (!queue.empty()) {
        cout << queue.front() << "   ";  // prints the elemeent in the front
        queue.pop();  // removes an element from the front of the queue
    }
    cout << endl;
}

int main() {

    queue<int> numbersQueue;

    numbersQueue.push(1);
    numbersQueue.push(2);
    numbersQueue.push(3);
    numbersQueue.push(4);

    cout << "Size of the queue is : " << numbersQueue.size() << endl;
    cout << "First element is : " << numbersQueue.front() << endl;
    cout << "Last element is : " << numbersQueue.back() << endl; // prints last element

    cout << "Queue list is : " << endl;
    printQueue(numbersQueue); 
 

    return 0;
}