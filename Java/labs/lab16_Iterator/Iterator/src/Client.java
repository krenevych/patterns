public class Client {
    public static void main(String[] args) {

        ConcreteCollection elements = new ConcreteCollection(
                new Element("element_1"),
                new Element("element_2"),
                new Element("element_3"),
                new Element("element_4"),
                new Element("element_5")
        );

//        for (Element element : elements) {
//            System.out.println(element);
//        }

        ConcreteIterator concreteIterator = new ConcreteIterator(elements);
        while (concreteIterator.hasNext()){
            Element element = concreteIterator.next();
            System.out.println(element);
        }

    }
}
