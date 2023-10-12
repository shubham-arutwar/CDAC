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
                System.out.println("Enter book name, author, id and availability");
                String title = scanner.next();
                String author = scanner.next();
                String id = scanner.next();
                boolean availability = true;
                String availabilityInput = scanner.next();
                if(availabilityInput.equals("y")){
                    availability=true;
                } else if (availabilityInput.equals("n")) {
                    availability=false;
                }
                Book book = new Book(title,author,id,availability);
                lib.addBook(book);
                break;
            case 2 :
                lib.listAllBooks();
                break;
            case 3 :
                lib.listAvailableBooks();
                break;
            case 4 :
                lib.listUnavailableBooks();
        }
    }
}