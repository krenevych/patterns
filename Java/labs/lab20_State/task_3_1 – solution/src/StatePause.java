public class StatePause implements State {
    @Override
    public void play(MediaPlayer mediaPlayer) {
        mediaPlayer.setState(new StatePlaying());
        System.out.println("Track " + mediaPlayer.getCurrentTrack() + " continue playing");
    }

    @Override
    public void pause(MediaPlayer mediaPlayer) {

    }

    @Override
    public void stop(MediaPlayer mediaPlayer) {
        mediaPlayer.setState(new StateStopped());
        System.out.println("Track " + mediaPlayer.getCurrentTrack() + " stopped");
    }

    @Override
    public void next(MediaPlayer mediaPlayer) {
        int trackNum = mediaPlayer.getCurrentTrackNum();
        int size = mediaPlayer.getTracks().size();
        if (trackNum >= size){
            return;
        }

        mediaPlayer.setState(new StatePlaying());
        mediaPlayer.setTrackNum(trackNum + 1);
        System.out.println("Next track " + mediaPlayer.getCurrentTrack() + " playing");

    }

    @Override
    public void prev(MediaPlayer mediaPlayer) {
        int trackNum = mediaPlayer.getCurrentTrackNum();
        if (trackNum == 0){
            return;
        }

        mediaPlayer.setState(new StatePlaying());
        mediaPlayer.setTrackNum(trackNum - 1);
        System.out.println("Previous track " + mediaPlayer.getCurrentTrack() + " playing");
    }
}
