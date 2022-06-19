public class Client {

    public static void main(String[] args) {

        Publisher publisher = new Publisher("Publisher1");

        Subscriber[] subscribers = {
                new ConcreteSubscriber("subscriber0"),
                new ConcreteSubscriber("subscriber1"),
                new ConcreteSubscriber("subscriber2"),
                new ConcreteSubscriber("subscriber3"),
        };

        for (Subscriber subscriber : subscribers) {
            publisher.subscribe(subscriber);
        }


        System.out.println("\n========= state1 ============\n");
        publisher.setMainState("state1");
        System.out.println("\n========= state2 ============\n");
        publisher.setMainState("state2");

        publisher.unsubscribe(subscribers[1]);
        publisher.unsubscribe(subscribers[2]);
        System.out.println("\n========= state3 ============\n");
        publisher.setMainState("state3");

    }

}
