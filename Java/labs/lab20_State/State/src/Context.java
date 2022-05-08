public class Context {
    private State state;

    public Context(State initialState) {
        this.state = initialState;
//        state.
    }

    public void chandeState(State state){

    }

    public void doThis(){
        state.doThis();
    }

    public void doThat(){
        state.doThat();
    }


}
