import library.Book;
import library.Library;

import java.util.Scanner;

public class Menu {
    public void menu(Library lib, Scanner scanner){
        int choice = 0;
        System.out.print("Choose a option : ");
        choice = scanner.nextInt();
        switch (choice){
            case 1 :
                System.out.println("Enter book name, author, id");
                String title = scanner.next();
                String author = scanner.next();
                String id = scanner.next();
                Book book = new Book(title,author,id);
                lib.addBook(book);
                lib.listAvailableBooks();
                break;
            case 2 :
                lib.listAvailableBooks();
                break;
        }
    }
}