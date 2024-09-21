#include<iostream>
using namespace std;
class Account{
	private:
		string AccountNo,password;
		int balance;
	public:
	Account():AccountNo(""),password(""),balance(0)	{
	}
	setAccountNo(string id){
			AccountNo=id;
			}
	setpassword(string pw){
			password=pw;
			}	
	setbalance(int bal){
			balance=bal;
			}
	string getAccountNo(){
		return AccountNo;
	}
		string getpassword(){
		return password;
	}	
		int getbalance(){
		return balance;
	}	
};
openAccount(Acccount user){
	system("cls");
	string id,pw;
	
	cout<<"\t Enter Acccount number:"<<endl;
	cin>>id;
	user.setAccountNo(id);
	
	cout<<"\t Enter A Strong password:"<<endl;
	cin>>pw;
	user.setpassword(pw);
	
	user.setbalance(0);
	
	Sleep(5000);
}
int main(){
	Account user;
	bool exit=false;
	while(!exit){
	 system("cls");	
	 int val;
	 cout<<"Welcome to Bank Account Management System"<<endl;
	 cout<<"\t**********************************"<<endl;
	 cout<<"\t1.Open New Account"<<endl;
	 cout<<"\t2.Add Cash"<<endl;
	 cout<<"\t3.Withdraw Cash"<<endl;
	 cout<<"\t4.Exit"<<endl;
	 cout<<"\tEnter your Choice"<<endl;
	 cin>>val;
	 
	}
}
