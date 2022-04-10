public class Car implements Vehicle {

  private int latitude;
  private int longitude;

  public String getType() {
    return "Car";
  }

  public void target(int latitude, int longitude) {
    this.latitude = latitude;
    this.longitude = latitude;
  }

  @Override
  public String getTask() {
    return "Transportation of passengers to the destination: (" + latitude + ", " + longitude + ")";
  }


}
