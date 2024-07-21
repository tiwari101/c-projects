#include<iostream>
using namespace std;
int main()
{
	char startvalue;
	float onlineshopping(void);
	char choiceagain;
	startlevel:
	cout<<"please press s to start"<<endl;
	start:
	cin>>startvalue;
	if(startvalue=='s'|| startvalue=='S')
	{
		float totalammount=onlineshopping();
		cout<<"total billammount is"<<totalammount;
		shopagain:
		cout<<"do you wants to shop again y or n"<<endl;
			cin>>choiceagain;
			if(choiceagain=='y'|| choiceagain=='Y'){
				goto startlevel;
			}
			else if(choiceagain=='n'|| choiceagain=='N'){
				cout<<"thanks for shopping"<<endl;
			}
			else{
				cout<<"you have entered wrong option,please try again";
				goto shopagain;
			}
			}
       else{
       	cout<<"you have entered wrong option, please press right answer s"<<endl;
       	goto start;
	   }

}

   float onlineshopping(){
   	char choice;
   	char item;
   	float billammount=0;
   	int quantity;
   	cout<<"*********welcome to online shopping********"<<endl;
   	cout<<"--------please follow the instructions--------"<<endl;
   	cout<<"(1) please enter m to order mobile phones"<<endl;
   	cout<<"(2) please enter l to order laptops"<<endl;
   	cout<<"(3) please enter d to order desktops"<<endl;
   	cout<<"(2) please enter s to order speaker"<<endl;
   	cout<<"(2) please enter h to order headphones"<<endl;
   	cin>>choice;
   	if(choice=='m' || choice=='M'){
   	Mobilelevel:
         cout<<"mobile details"<<endl;
		 cout<<"(1) Apple => price	:	50000"<<endl;
		 cout<<"(2) Vivo => price	:	25000"<<endl;
		 cout<<"(3) Oppo => price	:	30000"<<endl;
		 cout<<"(4) Redmi => price	:	25000"<<endl;
		 cout<<"(5) Realme=> price	:	14000"<<endl;
		 cout<<"(6) samsung => price	:	24000"<<endl;
		 cout<<"please enter your choice"<<endl;
		 cin>>item;
		 if(item='1'){
		 	cout<<"enter quantity"<<endl;
		 	cin>>quantity;
		 	billammount=billammount+quantity*50000;
		 	
		 }
		 	else if(item='2'){
		 		cout<<"enter quantity"<<endl;
		 	cin>>quantity;
		 	billammount=billammount+quantity*25000;
		 		
		 }
		 else if(item='3')
          {
          	cout<<"enter quantity"<<endl;
		 	cin>>quantity;
		 	billammount=billammount+quantity*30000;
				   }		 
				   else if(item='4'){
				   	cout<<"enter quantity"<<endl;
		 	cin>>quantity;
		 	billammount=billammount+quantity*25000;
		 	
				   }
				   else if (item='5'){
				   	cout<<"enter quantity"<<endl;
		 	cin>>quantity;
		 	billammount=billammount+quantity*14000;
				   }
   
 					else{
 						cout<<"you have entered wrong option,please correct it"<<endl;
 						goto Mobilelevel;
					 }  
}
return billammount;
   
}
