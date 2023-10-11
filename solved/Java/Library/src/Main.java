import library.Book.*;
import library.Library.*;

import java.util.Scanner;

public class Main {
    private int choice = 0;

    public void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Choose a option : ");
        this.choice = scanner.nextInt();
        switch (this.choice){
            case 1 :
                addBook()
        }
    }
}