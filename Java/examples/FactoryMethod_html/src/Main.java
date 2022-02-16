public class Main {
    public static void main(String[] args) {

        Document document = new Document();
        HtmlElement div = document.createElement("div");
        HtmlElement button = document.createElement("button");

        div.registerListener(element -> System.out.println("Div element clicked"));
        button.registerListener(element -> System.out.println("Button element clicked"));

        div.click();
        button.click();
    }
}
