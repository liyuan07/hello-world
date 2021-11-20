#include <iostream>
using namespace std

class Student{
	private:
		int age;
	public:
		Student(){}
		Student(int age){
			this->age = age;
		}
		void show(){
			cout<<"in class stduent  , age = "<<age<<endl;
		}

};

int main(){
	Student ss(18);
	return 0;
	;
}
