#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace myStack {
	template <typename T>
	class Node {
	public:
		T info;
		Node* next;
		Node* prev;

		Node(T value) { info = value; next = prev = nullptr; }
	};


	template <typename U>
	class Stack { //LIFO = Last In First Out
		Node<U>* head;
		Node<U>* current;
	public:
		Stack() { head = current = nullptr; }
		~Stack() { 
		}

		bool isEmpty()const { 
			return (head == nullptr);
		}
		U top()const { 
			if (isEmpty()) throw "MyStack is Empty!";
			return current->info;
		}
		void push_back(U value) { 
			Node<U>* el = new Node<U>(value);
			if (isEmpty()) head = current = el;
			else {
				current->next = el;
				el->prev = current;

				current = current->next;
			}
		}
		void pop_back() { ... }
		void showStack()const { ... }
	};
}
