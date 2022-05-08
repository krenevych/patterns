import java.util.ArrayList;
import java.util.List;

public class MediaPlayer {

    private final List<String> tracks = new ArrayList<>();
    private State state = new StateStopped();
    private int currentTrackNum = 0;


    public String getCurrentTrack() {
        return tracks.get(currentTrackNum);
    }

    public void setTrackNum(int trackNum) {
        if (trackNum < 0 || trackNum >= tracks.size()){
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

    public void addTrack(String track){
        tracks.add(track);
    }

    public void setState(State state) {
        this.state = state;
    }

    public State getState() {
        return state;
    }

    public void play() {
        state.play(this);
    }

    public void pause() {
        state.pause(this);
    }

    public void next(){
        state.next(this);
    }

    public void prev(){
        state.prev(this);
    }

    public void stop() {
        state.stop(this);
    }

}
