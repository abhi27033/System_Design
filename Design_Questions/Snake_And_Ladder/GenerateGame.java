package Design_Questions.Snake_And_Ladder;
import java.util.List;
import java.util.ArrayList;

// This is the entry point to play any game
// This class will follow Singleton Design Pattern since only one entry point from where games could be played
// This class will help in creating new games which can be played simultaneously by different Threads

public class GenerateGame {
    private static GenerateGame instance; //Thread safe Lazy Initialization Singleton Pattern
    private final List<SnakeAndLadderGame> games;

    private GenerateGame(){
        games = new ArrayList<>();
    }

    public static synchronized GenerateGame getInstance() {
        if(instance==null){
            instance = new GenerateGame();
        }
        return instance;
    }

    public void startNewGame(List<String> playerNames){
        SnakeAndLadderGame game = new SnakeAndLadderGame(playerNames);
        games.add(game);
        Runnable runnable=()->{game.play();};
        Thread thread = new Thread(runnable);
        thread.start();
    } 
}
