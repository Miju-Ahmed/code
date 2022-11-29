#include<bits/stdc++.h>
using namespace std;

class Huffman_Codes
{
    struct New_Node
    {
        char data;
        size_t freq;
        New_Node* left, *right;
        New_Node(char data, size_t freq): data(data), freq(freq), left(NULL), right(NULL){};

        ~New_Node()
        {
            delete left;
            delete right;
        }
    };

    struct compare
    {
        bool operator()(New_Node* l, New_Node* r)
        {
            return (l->freq > r->freq);
        }
    };

    New_Node* top;

    void Print_Code(New_Node* root, string str)
    {
        if(root==NULL)  return;
        else if(root->data == '$')
        {
            Print_Code(root->left, str+"0");
            Print_Code(root->right, str+"1");
        }
        else if(root->data!='$')
        {
            cout<<root->data<<" : "<<str<<endl;
            Print_Code(root->left, str+"0");
            Print_Code(root->right, str+"1");
        }
    }

    public:
    Huffman_Codes(){};
    ~Huffman_Codes()
    {
        delete top;
    }

    void Generate_Huffman_Tree(vector<char>& data, vector<size_t>& freq, size_t size)
    {
        New_Node* left;
        New_Node* right;
        priority_queue<New_Node*, vector<New_Node*>, compare> minHeap;
        for(size_t i=0; i<size; i++)
            minHeap.push(new New_Node(data[i], freq[i]));
        while(minHeap.size()!=1)
        {
            left = minHeap.top();
            minHeap.pop();
            right = minHeap.top();
            minHeap.pop();
            top = new New_Node('$', left->freq + right->freq);
            top->left = left;
            top->right = right;
            minHeap.push(top);
        }
        Print_Code(minHeap.top(), "");
    }
};

int main()
{
    char ch;
    int f, n;
    vector<char>data;
    vector<size_t>freq;
    Huffman_Codes set1;
    cout<<"Enter the elements number: ";
    cin>>n;
    cout<<"Enter the elements: \n";
    for(int i=0; i<n; i++)
    {
        cin>>ch;
        data.insert(data.end(), ch);
    }
    cout<<"Enter the frequencies:\n";
    for(int i=0; i<n; i++)
    {
        cin>>f;
        freq.insert(freq.end(), f);
    }

    size_t size = data.size();
    set1.Generate_Huffman_Tree(data, freq, size);
    return 0;
}