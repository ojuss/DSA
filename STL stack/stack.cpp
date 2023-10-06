#include <iostream>
#include <stack>
using namespace std;

void printStack (stack<int> stack) {
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}

int main () {

    stack<int>numbersStack;

    numbersStack.push(1);
    numbersStack.push(2);
    numbersStack.push(3);
    numbersStack.pop();
    // numbersStack.pop();

    if (numbersStack.empty()) {
        cout << "Stack is empty";
    } else {
        cout << "Stack is not empty";
    }

    cout << "Stack size is : " << numbersStack.size() << endl;

    printStack(numbersStack);

    return 0;
}