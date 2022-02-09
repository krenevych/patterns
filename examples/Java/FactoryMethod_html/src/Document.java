
public class Document {

    public HtmlElement createElement(String elementType){
        if ("div".equals(elementType)){
            return new HTMLDivElement();
        } else if ("button".equals(elementType)) {
            return new HTMLButtonElement();
        } else {
            return null;
        }
    }
}
