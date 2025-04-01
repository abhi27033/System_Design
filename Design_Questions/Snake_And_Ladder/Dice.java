package Design_Questions.Snake_And_Ladder;
public class Dice {
    private final int MIN_VALUE = 1;
    private final int MAX_VALUE = 6;
    public int rollDice(){
        return (int)(Math.random()*(MAX_VALUE-MIN_VALUE)+MIN_VALUE);
    }
}
