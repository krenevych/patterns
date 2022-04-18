public class PropertyHandlerCamera extends PropertyHandler{
    final String cameraName;

    public PropertyHandlerCamera(String cameraName) {
        this.cameraName = cameraName;
    }

    @Override
    public void setProperty(Image image) {
        image.setCamera(cameraName);
        super.setProperty(image);
    }
}
