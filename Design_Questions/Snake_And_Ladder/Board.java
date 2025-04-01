package Design_Questions.Snake_And_Ladder;
import java.util.List;
import java.util.ArrayList;

public class Board {
    private final int MAX_SIZE=100;
    private final List<Snake> snakes;
    private final List<Ladder> ladders;
    public Board(){
        snakes=new ArrayList<>();
        ladders=new ArrayList<>();
        initializeBoard();
    }
    private void initializeBoard(){
        // Initialize snakes
        snakes.add(new Snake(16, 6));
        snakes.add(new Snake(48, 26));
        snakes.add(new Snake(64, 60));
        snakes.add(new Snake(93, 73));

        // Initialize ladders
        ladders.add(new Ladder(1, 38));
        ladders.add(new Ladder(4, 14));
        ladders.add(new Ladder(9, 31));
        ladders.add(new Ladder(21, 42));
        ladders.add(new Ladder(28, 84));
        ladders.add(new Ladder(51, 67));
        ladders.add(new Ladder(80, 99));
    }
    public int getBoardSize(){
        return MAX_SIZE;
    }
    public int postionAfterSnakeOrLadder(int currentPosition){
        for(Snake snake:snakes){
            if(snake.getStart()==currentPosition){
                return snake.getEnd();
            }
        }
        for(Ladder ladder:ladders){
            if(ladder.getStart()==currentPosition){
                return ladder.getEnd();
            }
        }
        return currentPosition;
    }
    
}
