package Design_Questions.Snake_And_Ladder;
import java.util.List;
import java.util.ArrayList;

public class SnakeAndLadderGame {
    private List<Player> players;
    private final Board board;
    private final Dice dice;
    private int currentPlayerIndex;

    public SnakeAndLadderGame(List<String> playerNames){
        board = new Board();
        dice = new Dice();
        players = new ArrayList<>();
        currentPlayerIndex = 0;
        for(String playerName:playerNames){
            Player player = new Player(playerName);
            players.add(player);
        }
    }

    public void play(){
        while(!isGameOver()){
            Player player = players.get(currentPlayerIndex);
            int diceRoll = dice.rollDice();
            int newPosition = player.getPostion()+diceRoll;
            if(newPosition<=board.getBoardSize()){
                int postionAfterSnakeOrLadder = board.postionAfterSnakeOrLadder(newPosition);
                player.setPosition(postionAfterSnakeOrLadder);
                System.out.println(player.getName()+" rolled a "+diceRoll+" and moved to position "+player.getPostion());
            }
            if(newPosition == board.getBoardSize()){
                System.out.println("Player "+player.getName()+" Wins!");
                break;
            }
            currentPlayerIndex = (currentPlayerIndex+1) % players.size();
        }
    }
    
    private boolean isGameOver(){
        for(Player player:players){
            if(player.getPostion()==board.getBoardSize())
            return true;
        }
        return false;
    }
}
