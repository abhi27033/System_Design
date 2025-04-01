package Design_Questions.Snake_And_Ladder;
import java.util.Arrays;
import java.util.List;

public class SnakeAndLadderDemo {
    public static void run() {
        GenerateGame generateGame = GenerateGame.getInstance();

        // Start game 1
        List<String> players1 = Arrays.asList("Abhishek", "Deepak", "Atharva");
        generateGame .startNewGame(players1);

        // Start game 2
        List<String> players2 = Arrays.asList("Vinay", "Aryan");
        generateGame.startNewGame(players2);
    }
    public static void main(String[]args){
        run();
    }
}