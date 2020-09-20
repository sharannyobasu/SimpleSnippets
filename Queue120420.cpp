#include<iostream>
using namespace std;
class queue{
	private:
		int front, rear, arr[5];
		public :
			queue()
			{
				front=-1;
				rear=-1;
				for(int i=0;i<5;i++)
				{
					arr[i]=0;
				}
			}
			void isempty()
			{
				if(front==-1 && rear==-1)
				{
					cout<<"Queue is empty";
				}
				else
				{
					cout<<"Queue is not empty";
				}
			}
			void isfull()
			{
				if(rear==4)
				{
					cout<<"Queue is full";
				}
				else
				{
					cout<<"Not full";
				}
			}
			void enqueue(int value)
			{
				if(front==-1 && rear==-1)
				{
					front=0;
					rear=0;
					arr[rear]=value;
				}
				else if(rear==4)
				{
					cout<<"Queue is full !";
				}
				else
				{
					rear++;
					arr[rear]=value;
				}
			}
			int dequeue()
			{
				int x;
				if(front==-1 && rear==-1)
				{
					cout<<"Queue is empty !";
				}
				else 
				{
					x=arr[front];
					arr[front]=0;
					front++;
					return x;
				}
			}
			void count()
			{
				cout<<"Total elements is the queue is : "<<(rear-front);
			}
			void display()
			{
				int i;
				for(i=0;i<5;i++)
				{
					cout<<arr[i];
				}
			}
};
int main()
{
	queue q1;
	int value, option;
	do
	{
		cout<<endl<<"What operations do you want to perform? Enter 0 to exit."<<endl;
		cout<<"1. Enqueue"<<endl;
		cout<<"2. Dequeue"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5 count()"<<endl;
		cout<<"6. display"<<endl;
		cout<<"7. Clear screen."<<endl<<endl;
		
		cin>>option;
		switch(option)
		{
		case 1:
			cout<<"Enter value to insert : ";
			cin>>value;
			q1.enqueue(value);
			break;
		case 2:
			cout<<"The removed value is : "<<q1.dequeue();
			break;
		case 3:
			q1.isempty();
			break;
		case 4:
			q1.isfull();
			break;
		case 5:
			q1.count();
			break;
		case 6:
			q1.display();
			break;
		case 7:
			cout<<system("cls");
			break;
		}
	}while(option!=0);
}
