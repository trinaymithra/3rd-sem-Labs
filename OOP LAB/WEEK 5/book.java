class book
{
  String title,author;
  int edition;
  book()
  {
    title="Title";
    author="Author";
    edition=1600;
  }
  void data(String name, String writer, int year)
  {
    title=name;
    author=writer;
    edition=year;
  }
  void display()
  {
     System.out.println("Title: "+title+"\nAuthor: "+author+"\nEdition: "+edition+"\n");
  }
}
