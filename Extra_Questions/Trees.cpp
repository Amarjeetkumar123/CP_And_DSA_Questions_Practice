//It includes all basics questions  of Binary Tree
#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node *left;
        node *right;

        // constructor
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

node* buildTree(){
    int x;
    cin >> x;
    if(x == -1){
        return nullptr;
    }
    else{
        node *root = new node(x);
        root->left = buildTree();
        root->right = buildTree();
    }
}

// Printing Tree in (3 ways)

void preorder(node* root){

    if(root == nullptr){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node* root){

    if(root == nullptr){
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void postorder(node* root){

    if(root == nullptr){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}

// count nodes
int countNodes(node* root){

    if(root == NULL)
        return 0;

    int x = countNodes(root->left);
    int y = countNodes(root->right);

    int ans = x + y + 1;

    return ans;
}

// Total sum of Nodes
int Totalsum(node*root){
    if(root == NULL)
        return 0;

    int x = Totalsum(root->left);
    int y = Totalsum(root->right);

    int ans = x + y + root->data;

    return ans;
}

// Height of the tree
int height(node* root) {
	if (root == NULL) {
		return 0;
	}
	int left_subtree_height = height(root->left);
	int right_subtree_height = height(root->right);
	int ans = max(left_subtree_height, right_subtree_height) + 1;
	return ans;
}

// mirror of the tree
void mirror(node* &root) {
	if (root == NULL) {
		return;
	}
	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

// Diameter of the tree
int diameter(node* root) {
	if (root == NULL) {
		return 0;
	}

	int option1 = diameter(root->left);
	int option2 = diameter(root->right);
	//Diameter goes through the root:
	int option3 = height(root->left) + height(root->right);

	return max(option1, max(option2, option3));
}
//Time Complexity: O(n^2);

// Diameter in O(n) Time Complexity
class Pair2 {
public:
	int height;
	int diameter;
};

Pair2 fastdiameter(node* root) {
	Pair2 p;

	if (root == NULL) {
		p.diameter = 0;
		p.height = 0;
		return p;
	}

	Pair2 left_subtree = fastdiameter(root->left);
	Pair2 right_subtree = fastdiameter(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	p.diameter = max(left_subtree.diameter, max(right_subtree.diameter,
	                 left_subtree.height + right_subtree.height));
	return p;

}

// Check Height of binary tree is balance or not
class Pair3 {
public:
	int height;
	bool isbalanced;
};

Pair3 isheightbalanced(node* root) {
	Pair3 p;

	if (root == NULL) {
		p.isbalanced = true;
		p.height = 0;
		return p;
	}

	Pair3 left_subtree = isheightbalanced(root->left);
	Pair3 right_subtree = isheightbalanced(root->right);

	p.height = max(left_subtree.height, right_subtree.height) + 1;

	if (left_subtree.isbalanced == 1 and right_subtree.isbalanced == 1
	        and abs(left_subtree.height - right_subtree.height) <= 1) {
		p.isbalanced = true;
	} else {
		p.isbalanced = false;
	}
	return p;
}

// Create Binary Tree from array
node *buildTreefromarray(int *a, int s, int e) {
	if (s > e) {
		return NULL;
	}

	int mid = (s + e) / 2;

	node* root = new node(a[mid]);
	root->left = buildTreefromarray(a, s, mid - 1);
	root->right = buildTreefromarray(a, mid + 1, e);
	return root;
}

// Print kth level
void printkthlevel(node* root , int k){
    if(root == NULL){
        return;
    }

    if(k == 1){
        cout << root->data << " ";
        return;
    }

    printkthlevel(root->right, k - 1);
    printkthlevel(root->left, k - 1);
    

}

// Print All level of binary tree
void printAllLevel(node* root){
    int H = height(root);
    for (int i = 1; i <= H; i++){
        printkthlevel(root, i);
        cout << endl;
    }
}


void bfs(node* root) {
	queue<node*>q;

	q.push(root);
	while (!q.empty()) {
		node* first = q.front();
		cout << first->data << " ";
		q.pop();
		if (first->left != NULL) {
			q.push(first->left);
		}
		if (first->right) {
			q.push(first->right);
		}
	}
}

void bfs2(node* root) {
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* first = q.front();
		if (first == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		} else {
			cout << first->data << " ";
			q.pop();
			if (first->left != NULL) {
				q.push(first->left);
			}
			if (first->right) {
				q.push(first->right);
			}
		}
	}
}

node* buildTreefrompreandin(int *in, int *pre, int s, int e) {
	if (s > e) {
		return NULL;
	}
	static int i = 0;
	node* root = new node(pre[i]);
	// root=2;i will always become 0 in the stack every time
	// recursion calls;
	int index = -1;

	for (int j = s; j <= e; j++) {
		if (in[j] == pre[i]) {
			index = j;
			break;
		}
	}
	i++;//i=1;

	root->left = buildTreefrompreandin(in, pre, s, index - 1);
	root->right = buildTreefrompreandin(in, pre, index + 1, e);
	return root;
}

//Because you can insert and pop an element from
//queue in O(1) time that means you are doinf
//this for the n elements hence tC=
//O(2n) i.e linear why because every element
//is inserted and removed only one time.

// root:
// two pointer: left and right:

// the subtree which was ealier pointed by the pointer left
// now will be pointed by the pointer right.



int main(void){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);

int t = 1;
//cin>>t;

while(t--){

// Creating Binary Tree
node *root = buildTree();

// Print Tree
cout << "Preorder : ";
preorder(root);
cout << endl;

cout << "Inorder : ";
inorder(root);
cout << endl;

cout << "Postorder : ";
postorder(root);
cout << endl;

// count the number of nodes present in binary tree
cout << "Count of Node : " <<countNodes(root) << endl;

// Print sum of all Nodes
cout <<"Total sum of nodes : "<< Totalsum(root) << endl;

// Print height of the tree
cout << "Height of the tree : " << height(root) << endl;

// Print mirror of the Tree
mirror(root);
cout << "Mirror of the Tree : ";
preorder(root);
cout << endl;

//Print diameter of the tree
cout << "Diameter of the tree : " << diameter(root) << endl;

Pair2 p = fastdiameter(root);
cout <<"Diameter & Height : "<< p.diameter << " " << p.height << endl;

// check Balanced binary tree or not
Pair3 p1 = isheightbalanced(root);
cout << "Balance & Height : ";
cout << p1.isbalanced << " " << p1.height << endl;
cout << endl;


// Create Binary tree from array
int a[] = {9, 7, 1, 2, 5, 17, 3};
	node* root4 = buildTreefromarray(a, 0, 6);
	preorder(root4);
	cout << endl;
	// cout << diameter(root4) << endl;
	// cout << height(root4) << endl;


// Print kth level
    cout << endl;
    cout << "Kth level Print : " << endl;
    printkthlevel(root, 2);
	cout << endl;

    cout << endl;
// Print All Levels of Binary Tree
    cout << "All levels of Binary tree : " << endl;
    printAllLevel(root);
    cout << endl;
    cout << endl;

// Level order printing using queue
    bfs(root);
	cout << endl;
    cout << endl;
    bfs2(root);
	cout << endl;

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;

    // create binary tree using preorder and inorder
	int in[] = {9, 4, 2, 3, 10};
	int pre[] = {2, 9, 4, 10, 3};
	node* root9 = buildTreefrompreandin(in, pre, 0, 4);
	preorder(root9);
	cout << endl;

}
    return 0;
}