public class CarBuilder {

    private Car.Type carType;
    private Engine engine;
    private Wheel wheel;
    private Car.CarColor carColor;

    public CarBuilder() {
        reset();
    }

    public CarBuilder reset() {
        carType = Car.Type.Sedan;
        engine = new Engine(Engine.Type.petrol, 120, 2400, 1.2f);
        wheel = new Wheel(Wheel.DiskMaterial.steel, 14);
        carColor = Car.CarColor.White;
        return this;
    }

    public CarBuilder setCarType(Car.Type carType) {
        this.carType = carType;
        return this;
    }

    public CarBuilder setEngine(Engine engine) {
        this.engine = engine;
        return this;
    }

    public CarBuilder setWheel(Wheel wheel) {
        this.wheel = wheel;
        return this;
    }

    public CarBuilder setCarColor(Car.CarColor carColor) {
        this.carColor = carColor;
        return this;
    }

    public Car build() {
        return new Car(carType, engine, wheel, carColor);
    }
}
