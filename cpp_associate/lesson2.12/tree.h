#include<iostream>

template<typename T>
struct node {
	T key;
	node* left, * right;
	node() : left(nullptr), right(nullptr) {}
	node(const int a) : key(a) {}
};

template<typename T>
class tree {
	node<T>* root;
public:
	tree() :root(nullptr) {}
	void push(const T& val);
	void show();
private:
	void push(node<T>* ptr, const T& val);
	void show(node<T>* ptr);
};

template<typename T>
inline void tree<T>::push(const T& val)
{
	if (!root->key) {
		root = new node<T>();
		root->key = val;
	}
	else {
		push(root, val);
	}
}

template<typename T>
inline void tree<T>::show()
{
	if (root == nullptr) {
		std::cout << "no data" << std::endl;
	}
	else {
		show(root);
	}
}

template<typename T>
inline void tree<T>::push(node<T>* ptr, const T& val)
{
	if (ptr->key > val)
	{
		if (ptr->left != nullptr) {
			push(ptr->left, val);
		}
		else
		{
			ptr->left = new node<T>();
			ptr->left->key = val;
		}
	}
	else
	{
		if (ptr->right != nullptr) {
			push(ptr->right, val);
		}
		else
		{
			ptr->right = new node<T>();
			ptr->right->key = val;
		}
	}
}

template<typename T>
inline void tree<T>::show(node<T>* ptr)
{
	if (ptr->left != nullptr) {
		show(ptr->left);
	}
	std::cout << ptr->key << std::endl;
	if (ptr->right != nullptr) {
		show(ptr->right);
	}
}
