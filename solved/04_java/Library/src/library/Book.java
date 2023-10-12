package library;

public class Book {
    private String title;
    private String author;
    private String id;
    private boolean availability;

    public Book(String title, String author, String id){
        this.title = title;
        this.author = author;
        this.id = id;
        this.availability = true;
    }
    public Book(String title, String author, String id, boolean availability){
        this.title = title;
        this.author = author;
        this.id = id;
        this.availability = availability;
    }

    public String getTitle() {
        return title;
    }

    public void setTitle(String title) {
        this.title = title;
    }

    public String getAuthor() {
        return author;
    }

    public void setAuthor(String author) {
        this.author = author;
    }

    public String getId() {
        return id;
    }

    public void setISBN(String id) {
        this.id = id;
    }

    public boolean isAvailable() {
        return availability;
    }

    public void setAvailable(boolean availability) {
        this.availability = availability;
    }
}
