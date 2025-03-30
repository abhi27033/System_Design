**According to the interface segregation principle, you should build small, focused interfaces that do not force the client to implement behavior they do not need.**

A straightforward example would be to have an interface that calculates both the area and volume of a shape.

```java
interface IShapeAreaCalculator(){
  double calculateArea();
  double calculateVolume();
}

class Square implements IShapeAreaCalculator{
  double calculateArea(){ // calculate the area 
  }
  double calculateVolume(){ // dummy implementation 
  }
}
```
The issue with this is that if a Square shape implements this, then it is forced to implement the calculateVolume() method, which it does not need.

**On the other hand, a Cube can implement both. To overcome this, we can segregate the interface and have two separate interfaces: one for calculating the area and another for calculating the volume. This will allow individual shapes to decide what to implement.**

```java
interface IAreaCalculator {
    double calculateArea();
}

interface IVolumeCalculator {
    double calculateVolume();
}

class Square implements IAreaCalculator {
    @Override
    public double calculateArea() { // calculate the area 
    }
}

class Cube implements IAreaCalculator, IVolumeCalculator {
    @Override
    public double calculateArea() { // calculate the area 
    }

    @Override
    public double calculateVolume() {// calculate the volume 
    }
}
```