public class Truck implements Vehicle {

  private int latitude;
  private int longitude;

  public String getType() {
    return "Truck";
  }

  public void target(int latitude, int longitude) {
    this.latitude = latitude;
    this.longitude = latitude;
  }

  @Override
  public String runTask(int latitude, int longitude) {
    return "Transportation of goods to the destination: (" + latitude + ", " + longitude + ")";
  }


}
