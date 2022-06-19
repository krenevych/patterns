public class ConcreteSubscriber implements Subscriber {

    final private String name;

    public ConcreteSubscriber(String name) {
        this.name = name;
    }

    @Override
    public void update(Publisher publisher, String context) {
        System.out.println("subscriber = " + name
                + ", publisher = " + publisher.getName()
                + ", context = " + context);
    }
}
