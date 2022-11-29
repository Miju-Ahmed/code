#include<bits/stdc++.h>
using namespace std;

class Huffman_Codes
{
    struct Node
    {
        char data;
        size_t freq;
        Node* left=NULL, *right=NULL;
        Node(char data, size_t freq):data(data),freq(freq){};

        ~Node()
        {
            delete left;
            delete right;
        }
    };

    struct Compare
    {
        bool operator()(Node* l, Node* r)
        {
            return (l->freq > r->freq);
        }
    };
    
    Node* top;

    void Print_Codes(Node* root, string s)
    {
        if(root==NULL)  return;
        else if(root->data=='$')
        {
            Print_Codes(root->left, s+"0");
            Print_Codes(root->right, s+"1");
        }
        else if(root->data !='$')
        {
            cout<<root->data<<" : "<<s<<endl;
            Print_Codes(root->left, s+"0");
            Print_Codes(root->right, s+"1");
        }
    }

    public:
        Huffman_Codes(){};
        ~Huffman_Codes()
        {
            delete top;
        }

        void Generate_Huffman_Tree(vector<char>&data, vector<size_t>&freq, size_t size)
        {
            Node* left,*right;
            priority_queue<Node*, vector<Node*>, Compare> minHeap;

            for(size_t i=0; i<size; i++)
                minHeap.push(new Node(data[i], freq[i]));
            
            while(minHeap.size()!=1)
            {
                left = minHeap.top();
                minHeap.pop();
                right = minHeap.top();
                minHeap.pop();

                top = new Node('$', left->freq + right->freq);
                top->left = left;
                top->right = right;
                minHeap.push(top);
            }
            Print_Codes(minHeap.top(), "");
        }
};

int main()
{
    int n,f;
    char ch;
    Huffman_Codes s;
    vector<char>data;
    vector<size_t>freq;
    cout<<"Enter the elements number: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        data.insert(data.end(), ch);
    }
    cout<<"Enter the frequency number: ";
    for(int i=0; i<n; i++)
    {
        cin>>f;
        freq.insert(freq.end(), f);
    }

    size_t size = data.size();
    s.Generate_Huffman_Tree(data, freq, size);
    return 0;
}