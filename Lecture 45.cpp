#include<iostream>
using namespace std;

void printMaxClassesAttend(int start[], int end[], int class_id[]){
	cout<<"The classed which you should attend to cover maximum of them : "<<endl;
	cout<<class_id[0];
	
	int i,end_of_class_currently_attending=end[0];
	for(i=1;i<9;i++){
		if(start[i] >= end_of_class_currently_attending){
			cout<<class_id[i];
			end_of_class_currently_attending = end[i];
		}
	}
}

int main(){
	int start[] = {2,2,4,1,6,8,9,11,13};
	int end[] = {3,5,2,8,9,10,11,14,16};
	int class_id[] = {8,2,3,1,5,6,7,8,9};
	printMaxClassesAttend(start,end,class_id);
	
	return 0;
}
