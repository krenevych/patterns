public class Main {

    public static void main(String[] args) {
        MediaPlayer mediaPlayer = new MediaPlayer();

        mediaPlayer.addTrack("track1");
        mediaPlayer.addTrack("track2");
        mediaPlayer.addTrack("track3");
        mediaPlayer.addTrack("track4");
        mediaPlayer.addTrack("track5");
        mediaPlayer.addTrack("track6");

        mediaPlayer.play();
        mediaPlayer.pause();
        mediaPlayer.play();
        mediaPlayer.next();
        mediaPlayer.next();
        mediaPlayer.prev();
        mediaPlayer.stop();
        mediaPlayer.play();
        mediaPlayer.stop();

    }
}
