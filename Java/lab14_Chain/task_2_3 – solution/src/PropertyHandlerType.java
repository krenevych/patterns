public class PropertyHandlerType extends PropertyHandler {

    final private Image.Type type;

    public PropertyHandlerType(Image.Type type) {
        this.type = type;
    }

    @Override
    public void setProperty(Image image) {
        image.setType(type);
        super.setProperty(image);
    }
}
