public class ImageGallery {

    public static void main(String[] args) {

        DisplayObject[] images = {
                new ImageProxy("resources/image1.jpeg"),
                new ImageProxy("resources/image2.jpeg"),
                new ImageProxy("resources/image3.jpeg"),
                new ImageProxy("resources/image4.jpeg"),
                new ImageProxy("resources/image5.jpeg"),
                new ImageProxy("resources/image6.jpeg"),
                new ImageProxy("resources/image7.jpeg"),
                new ImageProxy("resources/image8.jpeg"),
                new ImageProxy("resources/image9.jpeg"),
                new ImageProxy("resources/image10.jpeg"),
        };

        for (DisplayObject image : images) {
            image.display();
        }

    }

}
