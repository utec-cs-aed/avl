#include <iostream>
#include "avl.h"
using namespace std;

int main(int argc, char const *argv[])
{
    AVLTree<int> *bstree = new AVLTree<int>();
    int n, val;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        bstree->insert(val);
    }
    
    char option = argv[1][0];
    switch (option)
    {    
    case '1':
        bstree->displayPreOrder();
        break;    
    case '2':
        cout << bstree->height();
        break;  
    case '3':
        cout << bstree->isBalanced();
        break;  
    case '4':
        cin>>val;
        bstree->remove(val);
        cout << bstree->height();
        break;
    case '5':        
        bstree->remove(bstree->minValue());
        bstree->remove(bstree->minValue());
        bstree->remove(bstree->minValue());
        cout << bstree->height();
        break;    
    default:
        cout << "option not found";
        break;
    }
    cout<<endl;
}
