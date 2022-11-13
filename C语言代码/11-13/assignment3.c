#include<stdio.h>
#include<malloc.h>

void insert(struct Node**, int);
void delete(struct Node**, int);
struct Node* FindNode(struct Node*, int);
struct Node* FindLeftChild(struct Node*);
struct Node* FindRightChild(struct Node*);
struct Node* FindParent(struct Node*, struct Node*);
void inorder_traversal(struct Node*);

struct Node {
	int val;
	struct Node* left;
	struct Node* right;
};

void insert(struct Node** node,int v) {
	if (*node == NULL) {
		*node = (struct Node*)malloc(sizeof(struct Node));
		(*node)->val = v;
		(*node)->left = NULL;
		(*node)->right = NULL;
	}
	else if (v <= (*node)->val) {
		insert(&(*node)->left, v);
	}
	else {
		insert(&(*node)->right, v);
	}
}

void delete(struct Node** root, int v) {
	struct Node* node = FindNode((*root), v);
	if (node == NULL) return;
	struct Node* left = FindLeftChild(node);
	struct Node* right = FindRightChild(node);
	struct Node* parent = FindParent(node, (*root));
	if (parent) {
		if (!left && !right) {
			if (parent->left == node) {
				parent->left = NULL;
			}
			else {
				parent->right = NULL;
			}
			free(node);
		}
		else if (!left) {
			if (parent->left == node) {
				parent->left = right;
			}
			else {
				parent->right = right;
			}
			free(node);
		}
		else if (!right) {
			if (parent->left == node) {
				parent->left = left;
			}
			else {
				parent->right = left;
			}
			free(node);
		}
		else {
			struct Node* p = left;
			while (p->right) p = p->right;
			p->right = right;
			if (parent->left == node) {
				parent->left = p;
			}
			else {
				parent->right = p;
			}
			free(node);
		}
	}
	else {
		if (!left && !right) {
			struct Node* temp = *root;
			*root = NULL;
			free(temp);
		}
		else if (!left) {
			struct Node* temp = *root;
			*root = (*root)->right;
			free(temp);
		}
		else if (!right) {
			struct Node* temp = *root;
			*root = (*root)->left;
			free(temp);
		}
		else {
			struct Node* temp = *root;
			*root = left;
			free(temp);
			struct Node* p = left;
			while (p->right) p = p->right;
			p->right = right;
		}
	}
}

struct Node* FindNode(struct Node* node, int v) {
	if (node == NULL) return NULL;
	if (node->val == v) {
		return node;
	}
	else if (node->val < v) {
		return FindNode(node->right, v);
	}
	else {
		return FindNode(node->left, v);
	}
}
struct Node* FindLeftChild(struct Node* node) {
	if (node == NULL) return NULL;
	return node->left;
}
struct Node* FindRightChild(struct Node* node) {
	if (node == NULL) return NULL;
	return node->right;
}
struct Node* FindParent(struct Node* node,struct Node* root) {
	if (!root) return NULL;
	if (root == node) return NULL;
	if (root->left == node) return root;
	if (root->right == node) return root;
	if (node->val <= root->val) return FindParent(node, root->left);
	else return FindParent(node, root->right);
}
void inorder_traversal(struct Node* node) {
	if (node->left != NULL) inorder_traversal(node->left);
	printf("%d ", node->val);
	if (node->right != NULL) inorder_traversal(node->right);
}
int main() {
	struct Node* root = NULL;
	int t;
	while (1) {
		printf("1：插入 2:删除 3:中序 4:退出\n");
		scanf_s("%d", &t);
		if (t == 1) {
			printf("插入数字：");
			int v;
			scanf_s("%d", &v);
			insert(&root, v);
		}
		else if (t == 2) {
			printf("删除数字：");
			int v;
			scanf_s("%d", &v);
			delete(&root, v);
		}
		else if (t == 3) {
			if(root != NULL) inorder_traversal(root);
			printf("\n");
		}
		else break;
	}
	return 0;
}