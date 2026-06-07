import java.util.Scanner;

interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class AdultUser implements LibraryUser{
    int age;
    String bookType;

    public void registerAccount(){
        if(age>=12)
            System.out.println("You have successfully registered under an Adult Account");
        else
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
    }

    public void requestBook(){
        if(bookType.equals("Fiction"))
            System.out.println("Book Issued successfully, please return the book within 7 days");
        else
            System.out.println("Oops, you are allowed to take only Fiction books");
    }
}

class KidUser implements LibraryUser{
    int age;
    String bookType;

    public void registerAccount(){
        if(age<12)
            System.out.println("You have successfully registered under a Kids Account");
        else
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
    }

    public void requestBook(){
        if(bookType.equals("Kids"))
            System.out.println("Book Issued successfully, please return the book within 10 days");
        else
            System.out.println("Oops, you are allowed to take only kids books");
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        KidUser kid = new KidUser();
        AdultUser adult = new AdultUser();
        System.out.println("Enter your age: ");
        kid.age=sc.nextInt();
        System.out.println("Enter book type: ");
        kid.bookType=sc.next();
        kid.registerAccount();
        kid.requestBook();
        System.out.println("Enter your age: ");
        adult.age=sc.nextInt();
        System.out.println("Enter book type: ");
        adult.bookType=sc.next();
        adult.registerAccount();
        adult.requestBook();
    }
}
