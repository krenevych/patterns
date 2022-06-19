public class CarDirector {

    private CarBuilder carBuilder;

    public void setCarBuilder(CarBuilder carBuilder) {
        this.carBuilder = carBuilder;
    }

    public Car makeDefaultCar(){
        if (carBuilder == null){
            throw new IllegalArgumentException();
        }
        return carBuilder
                .reset()
                .build();

    }

    public Car makeSportCar(){
        return carBuilder
                .reset()
                .setCarColor(Car.CarColor.Red)
                .setEngine(new Engine(450, 605, Engine.Fuel.Diesel, 3.5f))
                .setWheel(new Wheel(Wheel.Material.Alloy, 21))
                .build();
    }
}
