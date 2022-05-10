class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        this->data = val;
        left = NULL;
        right = NULL;
    }
    //insert value in binary search tree.
    Node* insert(Node* root, int val) {
        if (root == NULL)
            return new Node(val);
        else {
            Node* current;
            //if value is smaller than or equal root's value.
            if (val <= root->data) {
                current = insert(root->left, val);
                root->left = current;
            }
            // if value is greater than root's value.
            else {
                current = insert(root->right, val);
                root->right = current;
            }
        }
    }
       //search for value in binary search tree.
        Node* search(Node * root, int key) {
            if (key == root->data || root == NULL)
                return root;
            //key is greater than root's data.
            if (key > root->data)
                return search(root->right, key);
            //key is smaller than root's data.
            return search(root->left, key);
        }
    //delete node (value) from binary search tree.
      Node* deleteNode(Node* root, int val) {
          //base case
          if (root == NULL)
              return root;
          // if the value is smaller than root's subtree.
          if (val < root->data) {
              root->left = deleteNode(root->left, val);
              return root;
          }
          //value is greater than root's subtree.
          else if (val > root->data) {
              root->right = deleteNode(root->right, val);
              return root;
          }
          //here after we get the node that we want to delete it.
          //if one of childern is empty (left or right node).
          if (root->left == NULL) {
              Node* temp = root->right;
              delete root;
              return temp;
          }
          else if (root->right == NULL) {
              Node* temp = root->left;
              delete root;
              return temp;
          }
      //if the both childerns are exist (right and left node), then we trying to
      //find the greatest value in subtree and replace it with the deleted node.
          else {
              Node* parent = root; // node that we want to delete.
          // find the smallest value in the node's right subtree.
              Node* temp = root->right; 
              while (temp->left != NULL) {
                  parent = temp;
                  temp = temp->left;
              }
              if(parent != root)
                  parent->left = temp->right;
              else
                  parent->right = temp->right;
              root->data = temp->data;
              delete temp;
              return root;
          }
      }
      // in orderTraversal
      void inorder(Node* root) {
          if (root == NULL)
              return;
          //First recur on left subtree 
          inorder(root->left);
          //Then read the data of child
          cout << root->data << " ";
          // Recur on the right subtree
          inorder(root->right);
      }
  //preorderTraversal
      void preorder(Node* root) {
          if (root == NULL)
              return;
          //First read the data of child
          cout << root->data << " ";
          //Then recur on left subtree 
          preorder(root->left);
          //Then Recur on the right subtree
          preorder(root->right);
      }
  //postorderTraversal
      void postorder(Node* root) {
          if (root == NULL)
              return;

          //Then recur on left subtree 
          postorder(root->left);
          //Then Recur on the right subtree
          postorder(root->right);
          //First read the data of child
          cout << root->data << " ";
      }
};
int main()
{
    Node Tree(0);
    Node* root = NULL;
    //Number of nodes to be inserted
    cout << "Enter size: " << endl;
    int t;
    cin >> t;
    cout << "Enter values of nodes:" << endl;
    while (t--) {
        int data;
        cin >> data;
        root = Tree.insert(root, data);
    }
    cout << "display nodes in inorderTraversal:" << endl;
    Tree.inorder(root);
    cout << endl;
    cout << "Enter the data to find:"<<endl;
    int data;
    cin >> data;
    Node* find_element = Tree.search(root, data);
    cout << endl;
    cout << "Enter node you want to delete: " << endl;
    int delete_data;
    cin >> delete_data;
    Node* deleteelement = Tree.deleteNode(root, delete_data);
    cout << endl;
    Tree.inorder(root);
    return 0;
}

