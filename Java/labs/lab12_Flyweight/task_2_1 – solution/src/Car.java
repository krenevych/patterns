public class Car implements Vehicle {

  public String getType() {
    return "Car";
  }


  @Override
  public String runTask(int latitude, int longitude) {
    return "Transportation of passengers to the destination: (" + latitude + ", " + longitude + ")";
  }


}
