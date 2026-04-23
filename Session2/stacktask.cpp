#include <iostream>
using namespace std;
class Stack{
private:
    int length;
    int stack_count;
    string* arr;
public:
    Stack()
    {
        length=5;
        stack_count=0;
        arr= new string[length];
    }
    void push(string s)
    {
        if(length==stack_count)
        {
            expand();
        }

        arr[stack_count]=s;
        stack_count++;
    }
    int getCount()
    {
        return stack_count;
    }
    bool isEmpty()
    {
        if(stack_count==0)
            return true;
        else
            return false;
    }
    string top()
    {
        return arr[stack_count-1];
    }
    void pop()
    {
        stack_count--;
    }

    string search(string s)
    {
        for(int i = 0; i < stack_count; i++)
        {
            if(arr[i]==s)
                return "Found";
        }
        return "Not Found";
    }

    void print()
    {
        for(int i = stack_count; i > 0 ;i--)
        {
            cout<<arr[i]<<endl;
        }
    }

    void duplicateTop()
    {
        if(stack_count==0)
            return;
        else
        {
            push(top());
        }
    }

private:
    void expand()
    {
        string* t= new string[length*2];
        for(int i=0;i<length;i++)
        {
            t[i]=arr[i];
        }
        delete arr;
        arr=t;
        length= length*2;
    }
};

int main() {
    Stack s1;
    s1.push("a.com");
    s1.push("b.com");
    s1.push("c.com");
    s1.push("d.com");
    s1.pop();
    cout<<s1.top()<<endl;

    s1.search("b.com");
    cout<<s1.search("b.com")<<endl;
    s1.search("e.com");
    cout<<s1.search("e.com")<<endl;
    s1.print();
    s1.duplicateTop();
    s1.print();
}
