public class ImageGallery {

    public static void main(String[] args) {

        DisplayObject[] images = {
                new ImageFile("resources/image1.jpeg"),
                new ImageFile("resources/image2.jpeg"),
                new ImageFile("resources/image3.jpeg"),
                new ImageFile("resources/image4.jpeg"),
                new ImageFile("resources/image5.jpeg"),
                new ImageFile("resources/image6.jpeg"),
                new ImageFile("resources/image7.jpeg"),
                new ImageFile("resources/image8.jpeg"),
                new ImageFile("resources/image9.jpeg"),
                new ImageFile("resources/image10.jpeg"),
        };

        for (DisplayObject image : images) {
            image.display();
        }

    }

}
