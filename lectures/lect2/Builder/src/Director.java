public class Director {

    final private CarBuilder carBuilder = new CarBuilder();

    public Car makeDefault() {
        return carBuilder
                .reset()
                .build();
    }

    public Car makeSUV() {
        return carBuilder
                .reset()
                .setCarType(Car.Type.SUV)
                .setEngine(new Engine(Engine.Type.diesel, 198, 420, 2.2f))
                .setWheel(new Wheel(Wheel.DiskMaterial.forged, 19))
                .setCarColor(Car.CarColor.Black)
                .build();
    }

    public Car makeSportCar() {
        return carBuilder
                .reset()
                .setCarType(Car.Type.Hatchback)
                .setEngine(new Engine(Engine.Type.petrol, 385, 540, 4.5f))
                .setWheel(new Wheel(Wheel.DiskMaterial.forged, 22))
                .setCarColor(Car.CarColor.Red)
                .build();
    }

}
