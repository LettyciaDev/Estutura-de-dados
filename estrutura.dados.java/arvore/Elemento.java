

public class Elemento<T> {
    private T value;
    private Elemento<T> leftSide;
    private Elemento<T> rightSide;

    public T getValue(){
        return this.value;
    }

    public void setValue(T value){
        this.value = value;
    }

}
