public class Context {
    private Strategy strategy;

    public void setStrategy(Strategy strategy) {
        this.strategy = strategy;
    }

    void doSomething(){
        if (strategy != null){
            strategy.execute("Some data");
        } else {
            System.out.println("Strategy is not chosen!");
        }
    }

}
