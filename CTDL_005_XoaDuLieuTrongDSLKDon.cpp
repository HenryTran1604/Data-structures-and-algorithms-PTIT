#include <bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *next;
};
typedef struct Node* node;
node makeNode(int x)
{
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
bool empty(node a)
{
	return a == NULL;
}
int Size(node a)
{
	int cnt = 0;
	while(a != NULL)
	{
		cnt++;
		a = a->next;
	}
	return cnt;
}

void insertFirst(node &a, int x) // them 1 phan tu vao dau
{
	node tmp = makeNode(x);
	if(a == NULL) // danh sach rong
		a = tmp;
	else
	{
		tmp->next = a;
		a = tmp;
	}
}

void insertLast(node &a, int x)
{
	node tmp = makeNode(x);
	if(a == NULL)
		a = tmp;
	else
	{
		node p = a;
		while(p->next != NULL)
			p = p->next;
		p->next = tmp;
	}
}

void insertMiddle(node &a, int x, int pos)
{
	int n = Size(a);
	if(pos <= 0 || pos > n+1) return;
	if(n == 1)
		insertFirst(a, x);
	else if(n == pos+1)
		insertLast(a, x);
	else
	{
		node p = a;
		for(int i = 0; i < pos-1; i++)
			p = p->next;
		node tmp = makeNode(x);
		tmp->next = p->next;
		p->next = tmp;
	}
}

void deleteFirst(node &a, int x) // xoa phan tu o dau
{
	if(Size(a) == 0)
		return;
	a = a->next;
}

void deleteLast(node &a, int x) // xoa phan tu o cuoi
{
	if(Size(a) == 0)
		return;
	node prev = NULL, after = a;
	while(after->next != NULL)
	{
		prev = after;
		after = after->next;
	}	
	if(prev == NULL) // dslk chi co 1 phan tu
		a = NULL;
	else
		prev->next = NULL;
}

void deleteMiddle(node &a, int x, int pos) // xoa phan tu o giua
{
	if(pos <= 0 || pos > Size(a))
		return;
	node prev = NULL, after = a;
	for(int i = 1; i < pos; i++)
	{
		prev = after;
		after = after->next;
	}	
	if(prev == NULL)
		a = a->next;
	else
		prev->next = after->next;
}
void printList(node a)
{
	while(a != NULL)
	{
		cout << a->data << " ";
		a = a->next;
	}
}
void deleteNum(node a, int del)
{
	node p = a;
	while(p != NULL)
	{
		if(p->data != del)
			cout << p->data << " ";
		p = p->next;
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	node First = NULL;
	int n; cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x; cin >> x;
		insertLast(First, x);
	}
	int del; cin >> del;
	deleteNum(First, del);
	return 0;
}
/*Code by: Tran Quang Huy*/