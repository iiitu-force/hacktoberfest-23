#include <iostream>
#include <queue>
using namespace std;

// Recursive function to reverse the first k elements of a queue
void solve(queue<int>& q, int k);

// Function to reverse first k elements of a queue
queue<int> reverseFirstK(queue<int> q, int k) {
    solve(q, k);  // Reverse the first k elements
    int s = q.size() - k;
    while (s-- > 0) {
        int x = q.front();  // Store the front element
        q.pop();            // Remove the front element
        q.push(x);           // Push the stored element to the end
    }
    return q;  // Return the modified queue
}

// Recursive function to reverse the first k elements
void solve(queue<int>& q, int k) {
    if (k == 0) return;  // Base case: When k becomes 0
    int e = q.front();   // Store the front element
    q.pop();             // Remove the front element
    solve(q, k - 1);     // Recursively reverse the next k-1 elements
    q.push(e);           // Push the stored element to the end
}

int main() {
    queue<int> q;
    int n, k, val;

    cout << "Enter the number of elements in the queue: ";
    cin >> n;

    cout << "Enter the elements of the queue: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        q.push(val);  // Populate the queue with user-entered elements
    }

    cout << "Enter the value of k (number of elements to reverse): ";
    cin >> k;

    q = reverseFirstK(q, k);  // Reverse the first k elements

    // Printing queue
    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";  // Print the modified queue
        q.pop();
    }
    cout << endl;

    return 0;
}


