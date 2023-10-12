import library.Library;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Menu menu = new Menu();
        Scanner scanner = new Scanner(System.in);
        Library lib = new Library();
        int choice = 0;
        System.out.println("Available options :");
        System.out.println("    1 > Add a book");
        System.out.println("    2 > List all books");
        System.out.println("    3 > List all available books");
        System.out.println("    3 > List all unavailable books");
        do {
            menu.menu(lib, scanner);
        }while (choice==0);
        scanner.close();
    }
}