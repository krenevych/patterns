import java.util.ArrayList;
import java.util.List;

public class MediaPlayer {

    final private List<String> tracks = new ArrayList<>();
    private State state;
    private int currentTrackNum = 0;


    public String getCurrentTrack() {
        return tracks.get(currentTrackNum);
    }

    public void setTrackNum(int trackNum) {
        if (trackNum < 0 || trackNum >= tracks.size()) {
            return;
        }

        this.currentTrackNum = trackNum;
    }

    public int getCurrentTrackNum() {
        return currentTrackNum;
    }

    public List<String> getTracks() {
        return tracks;
    }

    public void addTrack(String track) {
        tracks.add(track);
    }

    public void setState(State state) {
        this.state = state;
    }

    public State getState() {
        return state;
    }

    public void play() {

    }

    public void pause() {

    }

    public void next() {

    }

    public void prev() {

    }

    public void stop() {

    }

}
