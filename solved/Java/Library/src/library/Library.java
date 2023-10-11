package library;

public class Library {

    private Book[] books;
    private int bookCount;

    public Library(){
        books = new Book[25];
    }

    public void addBook(Book book){
        if(bookCount<25){
            books[bookCount]= book;
        }
        else {
            System.out.println("Library cant hold more books");
        }
    }

    public void listAvailableBooks(){
        System.out.println("Available books in library are : ");
        for (Book book: books) {
            System.out.println(book);
        }
    }
}
