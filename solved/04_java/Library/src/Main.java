import library.Library;

import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Menu menu = new Menu();
        Scanner scanner = new Scanner(System.in);
        Library lib = new Library();
        int choice = 0;
        do {
            menu.menu(lib, scanner);
            System.out.println("Enter 0 to stay else enter 1 to exit");
            choice = scanner.nextInt();
        }while (choice==0);
        scanner.close();
    }
}