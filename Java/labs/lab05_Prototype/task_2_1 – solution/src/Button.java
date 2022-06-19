public class Button {

    final private ControlSize controlSize;

    public Button(ControlSize controlSize) {
        this.controlSize = controlSize;
    }

    public void draw(){
        controlSize.applySize();
    }

}
