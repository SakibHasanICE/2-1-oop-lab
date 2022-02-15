#include<iostream>
using namespace std;

class Files{
public:
	void virtual download(){
		cout<<"Download Files"<<endl;
	}
};

class PdfFiles:public Files{
public:
	void download(){
		cout<<"Download Pdf"<<endl;
	}
};

int main() {
	Files *f = new PdfFiles();
	f->download();

	delete f;

	return 0;
}
