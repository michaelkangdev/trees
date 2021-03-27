#pragma once

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node* createNode(int);