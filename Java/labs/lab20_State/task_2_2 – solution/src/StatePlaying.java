public class StatePlaying implements State {
    @Override
    public void play(MediaPlayer mediaPlayer) {

    }

    @Override
    public void pause(MediaPlayer mediaPlayer) {
        mediaPlayer.setState(new StatePause());
        mediaPlayer.setIcon("play button");
        System.out.println("Video paused, icon set to " + mediaPlayer.getIcon());
    }
}
