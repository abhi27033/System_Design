package Design_Questions.Parking_Lot_System;

import Design_Questions.Parking_Lot_System.vehicletype.Car;
import Design_Questions.Parking_Lot_System.vehicletype.Motorcycle;
import Design_Questions.Parking_Lot_System.vehicletype.Truck;
import Design_Questions.Parking_Lot_System.vehicletype.Vehicle;

public class ParkingLotSimulate {
    public static void run() {
        ParkingLot parkingLot = ParkingLot.getInstance();
        parkingLot.addLevel(new Level(1, 100));
        parkingLot.addLevel(new Level(2, 80));

        Vehicle car = new Car("ABC123");
        Vehicle truck = new Truck("XYZ789");
        Vehicle motorcycle = new Motorcycle("M1234");

        // Park vehicles
        parkingLot.parkVehicle(car);
        parkingLot.parkVehicle(truck);
        parkingLot.parkVehicle(motorcycle);

        // Display availability
        parkingLot.displayAvailability();

        // Unpark vehicle
        parkingLot.unparkVehicle(motorcycle);

        // Display updated availability
        parkingLot.displayAvailability();
    }
    public static void main(String[] args)
    {
        run();
    }
}