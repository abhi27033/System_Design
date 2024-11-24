The single responsibilty principle states that every class must have a single, focused responsibility, a single reason to change.

```java
public class Employee{
  public String getDesignation(int employeeID){ // }
  public void updateSalary(int employeeID){ // }
  public void sendMail(){ // }
}
```
**In the above example, the Employee class has a few employee class-specific behaviors like getDesignation & updateSalary.**

**Additionally, it also has another method named sendMail which deviates from the responsibility of the Employee class.**

This behavior is not specific to this class, and having it violates the single responsibility principle. To overcome this, you can move the sendMail method to a separate class.

Here's how:

```java
public class Employee{
  public String getDesignation(int employeeID){ // }
  public void updateSalary(int employeeID){ // }
}

public class NotificationService {
    public void sendMail() { // }
}
```