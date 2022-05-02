// Stack Using LL

/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/


class Stack {
    
    Node* head;
    int size;
    
   public:
    Stack() {
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return (size == 0);
    }

    void push(int element) {
        Node* temp = new Node(element);
        temp->next = head;
        head = temp;
        size++;
    }

    int pop() {
        if (isEmpty()){
            return -1;
        }
        int ans = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    int top() {
        if (size == 0){
            return -1;
        }
        return head->data;
    }
};


// Balanced Parenthesis


#include <stack>

bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> st;
    
    for (int i=0; i<expression.length(); i++){
        
        if (expression[0] == 41 || expression[0] == 93 || expression[0] == 125){
            return false;
        }
        
        if (expression[i] == 40 || expression[i] == 90 || expression[i] == 123){
            st.push(expression[i]);
            
        }else{
            if (st.top() == 40){
                if (expression[i] != 41){
                    return false;
                }else{
                    st.pop();
                }
            }else if (st.top() == 90){
                if (expression[i] != 93){
                    return false;
                }else{
                    st.pop();
                }
            }else{
                if (expression[i] != 125){
                    return false;
                }else{
                    st.pop();
                }
            }
        }
    }if (!st.empty()){
        return false;
    }return true;
    
}



// Queue Using LL

/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/

class Queue {
    
    Node *head;
    Node *tail;
    int size;
    
   public:
    Queue() {
        head = NULL;
        tail = NULL;
        size = 0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
        return size;
		// Implement the getSize() function
	}

    bool isEmpty() {
        return size == 0;
		// Implement the isEmpty() function
	}

    void enqueue(int data) {
        Node* temp = new Node(data);
        if (head != NULL){
            tail->next = temp;
            tail = temp;
        }else{
            head = temp;
            tail = temp;
        }
        size++;
		// Implement the enqueue() function
	}

    int dequeue() {
        if (isEmpty()){
            return -1;
        }
        int ans = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        return ans;
        // Implement the dequeue() function
    }

    int front() {
        if (isEmpty()){
            return -1;
        }
        return head->data;
        // Implement the front() function
    }
};
