public class Produto implements Comparable<Produto>{
    private String codigo;
    private String descr;
    private double preco;
    private int estoque;

    public Produto(String codigo, String descr, double preco, int estoque){
        this.codigo = codigo;
        this.descr = descr;
        this.preco = preco;
        this.estoque = estoque;
    }

    public String getCodigo(){
        return this.codigo;
    }

    public String getDescr(){
        return this.descr;
    }

    public void setDescr(String descr){
        this.descr = descr;
    }

    public Double getPreco(){
        return this.preco;
    }

    public void setPreco(double preco){
        this.preco = preco;
    }

    public int getEstoque(){
        return this.estoque;
    }

    public void setEstoque(int estoque){
        this.estoque = estoque;
    }

    @Override
    public String toString(){
        return "Produto{" + "código= " + codigo + ", descrição= " + descr + ", preço= " + preco + ", estoque= " + estoque + "}";
    }

    @Override
    public int compareTo(Produto outro) {
        return this.codigo.compareTo(outro.codigo);
    }
}