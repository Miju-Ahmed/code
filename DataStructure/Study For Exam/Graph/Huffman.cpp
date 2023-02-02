#include<bits/stdc++.h>
using namespace std;

class Huffman_Codes
{
    struct Node
    {
        int data;
        size_t freq;
        Node* left=NULL,*right = NULL;
        Node(){}
        Node(int data, size_t freq): data(data), freq(freq){};

        ~Node()
        {
            delete left;
            delete right;
        }
    };

    struct compare
    {
        bool operator()(Node* l, Node* r)
        {
            return (l->freq>r->freq);
        }
    };

    Node* top;

    void Print(Node* root, string str)
    {
        if(root==NULL)  return;
        else if(root->data=='$')
        {
            Print(root->left, str+"0");
            Print(root->right, str+"1");
        }
        else if(root->data!='$')
        {
            cout<<root->data<<" : "<<str<<endl;
            Print(root->left, str+"0");
            Print(root->right, str+"1");
        }
    }

    public:
    Huffman_Codes(){};
    ~Huffman_Codes()
    {
        delete top;
    }

    void Genarate_Huffman(vector<char>&data, vector<size_t>&freq, size_t size)
    {
        Node* left, *right;
        priority_queue<Node*, vector<Node*>, compare> minHeap;
        for(size_t i = 0; i<size; i++)
            minHeap.push(new Node(data[i], freq[i]));

        while(minHeap.size()!=1)
        {
            left = minHeap.top(); minHeap.pop();
            right = minHeap.top(); minHeap.pop();

            top = new Node('$', left->freq + right->freq);
            top->left = left;
            top->right = right;
            minHeap.push(top);
        }

        Print(minHeap.top(), "");
    }

};

int main()
{
    int n,f;
    char ch;
    Huffman_Codes s;
    vector<char>data;
    vector<size_t>freq;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        data.insert(data.end(), ch);
    }
    for(int j=0; j<n; j++)
    {
        cin>>f;
        freq.insert(freq.end(), f);
    }

    size_t size = data.size();

    s.Genarate_Huffman(data, freq, size);

    return 0;
}