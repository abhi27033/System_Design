package Design_Questions.Snake_And_Ladder;
public class Player {
    private final String name;
    private int currentPosition;
    public Player(String name){
        this.name=name;
        currentPosition=0;
    }
    public String getName(){
        return name;
    }
    public int getPostion(){
        return currentPosition;
    }
    public void setPosition(int newPosition){
        this.currentPosition=newPosition;
    }
}
