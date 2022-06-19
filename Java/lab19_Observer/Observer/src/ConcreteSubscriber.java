public class ConcreteSubscriber implements Subscriber {

    final private String subscriberName;

    public ConcreteSubscriber(String subscriberName) {
        this.subscriberName = subscriberName;
    }

    @Override
    public void update(Publisher publisher, String context) {
        System.out.println(" ========================== ");
        System.out.println("Публікація: " + context);
        System.out.println("Виданн:     " + publisher.getPublisherName());
        System.out.println("Підписник:  " + subscriberName);
    }
}
