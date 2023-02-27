//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList()
{
    int n; // length of link list
    scanf("%d ", &n);

    int data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
//User function Template for C++

/*
Definition for singly Link List Node
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
*/


class Solution
{
public:
  Node* reverseList(Node* head) {
         Node* next = NULL;
        Node* prev = NULL;
        
        
        while(head!=NULL)
        {
            next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
        
    }
    
    int len(Node* head)
    {
        int count=0;
        while(head)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    Node* rotateRight(Node* head, int k) {
        if(head==NULL || head->next==NULL)return head;
        //if(k==0)return head;
        int n = len(head);
        k = k%n;
        if(k==0)return head;
        k = n-k;
        Node * prev = head;
        while(--k)
        {
            prev = prev->next;
        }

        Node* temp = prev->next;
        prev->next = NULL;
        Node* ans = temp;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = head;
        return ans; 
        
        

    }
    Node *reverse(Node *head, int k)
    {
        // code here
        rotateRight(reverseList(head),k);
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        struct Node *head = inputList();
        int k;
        cin >> k;

        Solution obj;
        Node *res = obj.reverse(head, k);

        printList(res);
    }
}
// } Driver Code Ends