package library;

public class Library {

    private Book[] books;
    private int bookCount;

    public Library(){
        books = new Book[25];
    }

    public void addBook(Book book){
        if(bookCount<25){
            books[bookCount++]= book;
        }
        else {
            System.out.println("Library cant hold more books");
        }
    }

    public void listAllBooks(){
        System.out.println("All books in library are : ");
        for (Book book: books) {
            if (book != null) {
                System.out.println("----------------------------------");
                System.out.println("book id : " + book.getId() + " ");
                System.out.println("book title : " + book.getTitle() + " ");
                System.out.println("book author : " + book.getAuthor());
            }
        }
    }

    public void listAvailableBooks(){
        System.out.println("Available books in library are : ");
        for (Book book: books) {
            if (book != null && book.isAvailable()) {
                System.out.println("----------------------------------");
                System.out.println("book id : " + book.getId() + " ");
                System.out.println("book title : " + book.getTitle() + " ");
                System.out.println("book author : " + book.getAuthor());
                System.out.println("Availibility : " + book.isAvailable());
            }
        }
    }

    public void listUnavailableBooks(){
        System.out.println("Books that are not available in library are : ");
        for (Book book: books) {
            if (book != null && !book.isAvailable()) {
                System.out.println("----------------------------------");
                System.out.println("book id : " + book.getId() + " ");
                System.out.println("book title : " + book.getTitle() + " ");
                System.out.println("book author : " + book.getAuthor());
            }
        }
    }
}
