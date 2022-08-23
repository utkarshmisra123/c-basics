#include <iostream>

using namespace std; 

struct node {
  int data;
  struct node *next;
};


void insert(node** root, int item)
{
    node *ptr, *temp;
    temp = new node;
    temp->data = item;
    temp->next = NULL;
 
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
 
        ptr->next = temp;
    }
}

 void display(node* root)
{
    while (root != NULL) {
        cout << root->data << " -> ";
        root = root->next;
    }
    cout << "NULL";
}

void answer(node** root1, node** root2)
{
    node *temp1, *temp2, *temp3;
    temp1 = *root1;
    temp2= *root2;
    temp3=new node;
    
    while(temp1 != NULL && temp2 != NULL) {
  if(temp1->data <= temp2->data)
  {
      temp3->data=temp1->data;
      temp1=temp1->next;
      temp3=temp3->next;
  }
    else if(temp1->data > temp2->data)
  {
      temp3->data=temp2->data;
      temp2=temp2->next;
      temp3=temp3->next;
  }
    }
     while (temp3 != NULL) {
        cout << temp3->data << " -> ";
        temp3 = temp3->next;
    }
}
 


int main()
{
     node *root1 = NULL, *root2 = NULL, *root3 = NULL;
 
    insert(&root1, 5);
    insert(&root1, 2);
    insert(&root1, 3);
    insert(&root1, 8);
    insert(&root2, 1);
    insert(&root2, 7);
    insert(&root2, 4);
    insert(&root2, 5);


        return 0;
}
