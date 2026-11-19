#include <iostream>
#include <string>
using namespace std;

struct Book {
	int book_id;
	string title;
	string author_name;
	int price;
};

void DisplayBookDetails(Book book){
	cout<<"Book Id: "<< book.book_id << " Title: "<< book.title << " Author Name: "<< book.author_name<< " Price " << book.price<<endl;
}

int main(){
	
	Book book;
	book.book_id = 1;
	book.title = "Last Day of life";
	book.author_name = "Zaid";
	book.price = 1000;
	
	DisplayBookDetails(book);
	return 0;
}
