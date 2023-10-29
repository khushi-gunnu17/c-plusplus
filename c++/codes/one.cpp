void PrintStack(stack<int> s)
{
    // If stack is empty
    if (s.empty())
        return;
 
// Extract top of the stack
    int x = s.top();
 
    // Pop the top element
    s.pop();
 
    // Print the current top
    // of the stack i.e., x
    cout << x << ' ';
 
    // Proceed to print
// remaining stack
    PrintStack(s);
 
    // Push the element back
    s.push(x);
}
 
// Driver Code
int main()
{
    stack<int> s;
 
    // Given stack s
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
 
    // Function Call
    PrintStack(s);
 
    return 0;
}