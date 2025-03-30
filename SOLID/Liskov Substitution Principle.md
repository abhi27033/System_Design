**The Liskov substitution principle states that you must be able to replace a superclass object with a subclass object without affecting the correctness of the program.**

In the below example, the Eagle class and the Ostrich class both extend the Bird class and override the fly() method. However, the Ostrich class is forced to provide a dummy implementation because it cannot fly, and therefore it does not behave the same way if we replace the Bird class object with it.

```java
abstract class Bird{
   abstract void fly();
}

class Eagle extends Bird {
   @Override
   public void fly() { // some implementation 
   }
}

class Ostrich extends Bird {
   @Override
   public void fly() { // dummy implementation 
   }
}
```

**This violates the Liskov substitution principle. To address this, we can create a separate class for birds that can fly and have the Eagle extend it, while other birds can extend a different class, which will not include any fly behavior.**

```java
abstract class FlyingBird{
   abstract void fly();
}

abstract class NonFlyingBird{
   abstract void doSomething();
}

class Eagle extends FlyingBird {
   @Override
   public void fly() { // some implementation 
   }
}

class Ostrich extends NonFlyingBird {
   @Override
   public void doSomething() { // some implementation 
   }
}
```