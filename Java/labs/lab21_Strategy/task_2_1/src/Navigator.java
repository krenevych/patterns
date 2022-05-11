public class Navigator {
    private RouteStrategy strategy;

    public void setStrategy(RouteStrategy strategy) {
        this.strategy = strategy;
    }

    public void buildRoute(String A, String B){
        if (strategy == null){
            System.out.println("Стратегія не вибрана");
            return;
        }

        String route = strategy.buildRoute(A, B);
        System.out.println("Маршрут побудовано: " + route);
    }
}
