public class Client {
    public static void main(String[] args) {
        Publisher publisher = new Publisher("Publisher 1");
        System.out.println(publisher);

        Subscriber[] subscribers = {
                new ConcreteSubscriber("Subscriber 0"),
                new ConcreteSubscriber("Subscriber 1"),
                new ConcreteSubscriber("Subscriber 2"),
                new ConcreteSubscriber("Subscriber 3"),
                new ConcreteSubscriber("Subscriber 4"),
        };

        for (Subscriber subscriber : subscribers) {
            publisher.subsctirbe(subscriber);
        }

        publisher.setMainState("State 1");

        publisher.unsubsctirbe(subscribers[3]);
        publisher.unsubsctirbe(subscribers[4]);

        System.out.println("================");
        publisher.setMainState("State 2");

        Publisher publisher2 = new Publisher("Publisher 2");
        publisher2.subsctirbe(subscribers[3]);

        System.out.println("================");
        publisher2.setMainState("State 1");
    }
}
