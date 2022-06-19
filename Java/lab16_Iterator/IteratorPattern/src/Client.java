public class Client {

    public static void main(String[] args) {

        CollectionElements elements = new CollectionElements(
                new Element("element1"),
                new Element("element2"),
                new Element("element3"),
                new Element("element4"),
                new Element("element5"),
                new Element("element6"));

//        for (Element element : elements) {
//            System.out.println(element);
//        }

        Iterator iterator = elements.createIterator();
        while (iterator.hasMore()){
            System.out.println(iterator.getNext());
        }

    }

}
