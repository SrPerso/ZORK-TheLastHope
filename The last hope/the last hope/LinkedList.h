#ifndef _LINKED_LIST_
#define _LINKED_LIST_

typedef unsigned int uint;

template<class TYPE>
class LinkedList
{
public:


	LinkedList(){};
	~LinkedList(){};

public:
	struct Node
	{
		TYPE data;
		Node* nxt = nullptr;
		Node* prv = nullptr;

		Node(const TYPE& data) :data(data){}
		~Node(){}
	};

	Node* first = nullptr;

public:
	
	//--------------------------------------------------
	bool empty() const
	{
		return first == nullptr;
	}

	uint size() const
	{
		uint n_elements = 0;
		Node* temp = first;
		while (temp != nullptr)
		{
			temp = temp->nxt;
			n_elements++;
		}
		return n_elements;
	}

	Node* end() const
	{
		Node* temp = first;

		if (temp != nullptr)
		{
			while (temp->nxt != nullptr)
			{
				temp = temp->nxt;
			}
		}
		return temp;
	}

	void push_back(const TYPE& data)
	{
		Node* temp = first;
		Node* new_node = new Node(data);

		if (temp == nullptr)
		{
			first = new_node;
		}

		else
		{
			while (temp->nxt != nullptr)
			{
				temp = temp->nxt;
			}
			temp->nxt = new_node;
			new_node->prv = temp;
		}
	}

	void push_front(const TYPE& data)
	{
		Node* new_node = new Node(data);

		if (first == nullptr)
		{
			first = new_node;
		}

		else
		{
			new_node->nxt = first;
			first->prv = new_node;
			first = new_node;
		}
	}

	bool pop_back()
	{
		if (first != nullptr) 
		{
			if (first->nxt != nullptr) 
			{
				Node* temp = first;
				while (temp->nxt != nullptr)
				{
					temp = temp->nxt;
				}
				temp->prv->nxt = nullptr;
				delete temp;
			}
			else 
			{
				Node* temp = first;
				first = nullptr;
				delete temp;
			}
			return true;
		}
		return false;
	}

	bool pop_front()
	{
		if (first != nullptr)
		{
			if (first->nxt != nullptr)
			{
				Node* temp = first;
				first = temp->nxt;
				first->prv = nullptr;
				delete temp;
			}
			else
			{
				Node* temp = first;
				first = nullptr;
				delete temp;
			}
			return true;
		}
		return false;
	}

	void erase(Node* item)
	{
		if (size() > 1)
		{
			if (item->prv == nullptr)
			{
				first = item->nxt;
				first->prv = nullptr;
			}
			else if (item->nxt == nullptr)
			{
				item->prv->nxt = nullptr;
			}
			else
			{
				item->prv->nxt = item->nxt;
				item->nxt->prv = item->prv;
			}
			delete item;
		}
		else
		{
			first = nullptr;
			delete item;
		}
	}

	void insert(Node* item, const TYPE& data)
	{
		Node* new_node = new Node(data);
		if (first != nullptr)
		{
			if (item->prev == nullptr)
			{
				new_node->nxt = item;
				item->prv = new_node;
				first = new_node;
			}

			else
			{
				new_node->nxt = item;
				item->prv->nxt = new_node;
				new_node->prv = item->prv;
				item->prv = new_node;
			}
		}

		else
		{
			first = new_node;
		}
	}

	void clear()
	{
		Node* n = first;
		Node* nxt;
		while (n != nullptr)
		{
			nxt = n->nxt;
			delete n;
			n = nxt;
		}
		first = nullptr;
	}

};

#endif