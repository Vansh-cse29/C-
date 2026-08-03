#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Stack {
    vector<char> item;
    int Top;

public:
    Stack(int s = 100) {
        item.resize(s);
        Top = -1;
    }

    void Push(char x) {
        if (Top == (int)item.size() - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        Top++;
        item[Top] = x;
    }

    char Pop() {
        if (IsEmpty()) {
            cout << "Stack Underflow" << endl;
            return '\0';
        }
        char x = item[Top];
        Top--;
        return x;
    }

    bool IsEmpty() {
        return Top == -1;
    }

    char StackTop() {
        if (IsEmpty()) {
            return '\0';
        }
        return item[Top];
    }
};

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/' || op == '%') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

bool prcd(char topOp, char currentOp) {
    int p1 = precedence(topOp);
    int p2 = precedence(currentOp);

    if (p1 == p2) {
        if (topOp == '^') return false; // Right-associative
        return true;                     // Left-associative
    }
    return p1 > p2;
}

string infixToPostfix(string infix) {
    Stack s(infix.length());
    string postfix = "";

    for (size_t i = 0; i < infix.length(); i++) {
        char symbol = infix[i];

        if ((symbol >= 'a' && symbol <= 'z') || 
            (symbol >= 'A' && symbol <= 'Z') || 
            (symbol >= '0' && symbol <= '9')) {
            postfix += symbol;
        }
        else if (symbol == '(') {
            s.Push(symbol);
        }
        else if (symbol == ')') {
            while (!s.IsEmpty() && s.StackTop() != '(') {
                postfix += s.Pop();
            }
            s.Pop(); // Pop '('
        }
        else {
            while (!s.IsEmpty() && s.StackTop() != '(' && prcd(s.StackTop(), symbol)) {
                postfix += s.Pop();
            }
            s.Push(symbol);
        }
    }

    while (!s.IsEmpty()) {
        postfix += s.Pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter Infix Expression (e.g., A+B*C or (A+B)*C): ";
    cin >> infix;

    string postfix = infixToPostfix(infix);
    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}