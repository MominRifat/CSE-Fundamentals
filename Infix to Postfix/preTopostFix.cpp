// Created By Momin_Rifat
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string infix;
    cout << "Enter Infix Expression : " << endl;
    cin >> infix;
    vector<char> postfix;
    vector<char> stack;
    int top = -1;

    for(int i = 0; i < infix.size(); i++) 
    {
        char s = infix[i];
        if(s != '(' && s != ')' && s != '^' && s != '*' && 
           s != '/' && s != '%' && s != '+' && s != '-') 
        {
            postfix.push_back(s);
        }
        else 
        {
            if(s == '(') 
            {
                stack.push_back(s);
                top++;
            }
            else if(s == ')') 
            {
                while(top >= 0 && stack[top] != '(') 
                {
                    postfix.push_back(stack[top]);
                    stack.pop_back();
                    top--;
                }
                stack.pop_back();
                top--;
            }
            else 
            {
                while(top >= 0) 
                {
                    if(s == stack[top]) 
                    {
                        postfix.push_back(stack[top]);
                        stack.pop_back();
                        top--;
                        break;
                    }
                    else if(
                        (stack[top] == '^') ||
                        (stack[top] == '*' || stack[top] == '/' || stack[top] == '%') && 
                        (s == '*' || s == '/' || s == '%' || s == '+' || s == '-') ||
                        (stack[top] == '+' || stack[top] == '-') && (s == '+' || s == '-')) 
                    {
                        postfix.push_back(stack[top]);
                        stack.pop_back();
                        top--;
                    }
                    else 
                    {
                        break;
                    }
                }
                stack.push_back(s);
                top++;
            }
        }
    }

    while(top >= 0) 
    {
        postfix.push_back(stack[top]);
        stack.pop_back();
        top--;
    }

    cout << "Postfix Expression : ";
    for(int i = 0; i < postfix.size(); i++) 
    {
        cout << postfix[i];
    }
    cout << endl;
    return 0;
}