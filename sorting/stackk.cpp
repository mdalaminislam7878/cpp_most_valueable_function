#include<bits/stdc++.h>
#define max_size 10
using namespace std;

struct Stack{
	int top;
	int data[max_size];
};
void push(Stack *s,int item){
	if(s->top<max_size){
		s->top=s->top+1;
		s->data[s->top]=item;
	}else{
		cout<<"Stack is overflow!!!"<<endl;
	}
}
void pop(Stack *s){
	if(s->top<0){
		cout << "Stack is UnderFlow" << endl;
	}else{
		s->top=s->top-1;
	}
}
void show(Stack *s){
	if(s->top<0){
		cout<<"Stack is Empty"<<endl;
	}else{
		for(int i=0;i<=s->top;i++){
			cout << s->data[i] << " ";
		}
	}
}
int main(){
    Stack my_stack;
    my_stack.top=-1;
    int n;
    cout << "****** Stack HERO******" << endl;
    while(1){
        cout << "\n1.show()\n2.push()\n3.pop()\n4.exit()" <<endl;
        cin>>n;
        switch(n){
        case 2:
            {
                int item;
                cin>>item;
                push(&my_stack,item);
                break;
            }
        case 3:
            pop(&my_stack);
            break;
        case 1:
            show(&my_stack);
            break;
        case 4:
            exit(1);
            break;
        }
    }


    return 0;
}


