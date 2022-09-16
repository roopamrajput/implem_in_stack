//implementation in stack by using c++
#include<iostream>
using namespace std;
class stack
{ 
 int a,n,c,top,stack[100];
 public:
 	void get();
 	void push();
 	void pop();
	 void show();
	 void exit();
	 
};
  
  void stack::get()
  { cout<<"enter the size of stack=";
  cin>>n;
  }
  
void stack::push()
 { cin>>stack[a];
 top=top+1;
 }



void stack::pop()
{ top=top-1;
}

void stack::show()
{ cout<<top;
}


int main()
{ stack q;
 int top=-1;
 int c=0;
 int a=0;
 int n=0;
 q.get();
	if(top==1)
	cout<<"overflow";
	else if(top==-1)
	cout<<"underflow";
	cout<<"enter your choice push 1,show 2,pop 3,exist 4";
	switch(c)
	{ case 1:
		{ cout<<"push";
		for(a=0;a<n;a++)
		{q.push();
		}
		 
		}
		break;
	  case 2:
	  {cout<<"pop";
	  q.pop();
		  }	
		  break;
	  case 3:
	  	{ cout<<"show";
	  	q.show();
	
		  }
		  break;
       
	}
	
}
