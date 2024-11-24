**In the dependency inversion principle, high-level modules should not depend on low-level modules. In other words, you must follow abstraction and ensure loose coupling**

In the given example, the Employee class depends directly on the EmailNotification class, which is a low-level module. This violates the dependency inversion principle.

```java
public interface Notification {
    void notify();
}

public class EmailNotification implements Notification {
    public void notify() {
        System.out.println("Sending notification via email");
    }
}

public class Employee {
    private EmailNotification emailNotification; 
    public Employee(EmailNotification emailNotification) {
        this.emailNotification = emailNotification;
    }
    public void notifyUser() {
        emailNotification.notify();
    }
}
```

**In the below example, we have ensured loose coupling. Employee is not dependent on any concrete implementation, rather, it depends only on the abstraction (notification interface).**

**If we need to change the notification mode, we can create a new implementation and pass it to the Employee**

```java
public interface Notification{
  public void notify();
}

public class Employee{
  private Notification notification;
  public Employee(Notification notification){
      this.notification = notification;
  }
  public void notifyUser(){
    notification.notify();
  }
 }

 public class EmailNotification implements Notification{
    public void notify(){
        //implement notification via email 
    }
 }

 public static void main(String [] args){
    Notification notification = new EmailNotification();
    Employee employee = new Employee(notification);
    employee.notifyUser();
 }
```