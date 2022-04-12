public class ImageProxy implements DisplayObject {
    DisplayObject displayObject;
    final String path;

    public ImageProxy(String path) {
        this.path = path;
    }

    @Override
    public void display() {
        if (displayObject == null){
            displayObject = new ImageFile(path);
        }
        displayObject.display();
    }
}
