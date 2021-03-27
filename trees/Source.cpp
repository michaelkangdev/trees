#include <iostream>
#include "Node.h"

using namespace std;

int main()
{
	struct Node *root = createNode(10);
	root->left = createNode(9);
	root->right = createNode(8);

	cout << "root: " << root->data << "\n";
	cout << "left: " << root->left->data << "\n";
	cout << "right: " << root->right->data << "\n";

	return 0;
}