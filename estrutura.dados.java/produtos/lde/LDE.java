import Models.Produto;
public class LDE{
    private LDENode primeiro;
    private LDENode ultimo;
    private int qtd;

    public void inserir(Produto p) {
        if (isEmpty()) {
            primeiro = ultimo = new LDENode(p);
            qtd++;
            System.out.println("Produto cadastrado com sucesso!");
            return;
        }

        LDENode atual = primeiro;
        while (atual != null && atual.getInfo().compareTo(p) < 0) {
            atual = atual.getProx();
        }

        if (atual != null && atual.getInfo().compareTo(p) == 0) {
            System.out.println("Código já existente! Produto não cadastrado.");
            return;
        }

        LDENode novo = new LDENode(p);

        if (atual == primeiro) { 
            novo.setProx(primeiro);
            primeiro.setAnter(novo);
            primeiro = novo;
        } else if (atual == null) { 
            ultimo.setProx(novo);
            novo.setAnter(ultimo);
            ultimo = novo;
        } else { 
            LDENode anterior = atual.getAnter();
            anterior.setProx(novo);
            novo.setAnter(anterior);
            novo.setProx(atual);
            atual.setAnter(novo);
        }

        qtd++;
        System.out.println("Produto cadastrado com sucesso!");
    }

    public LDENode buscar(String codigo) {
        /*Produto pAux = new Produto(C);
        LDENode aux = this.primeiro;*/ 
        LDENode atual = primeiro;
        while (atual != null) {
            if (atual.getInfo().getCodigo().equals(codigo)) {
                return atual;
            }
            if (atual.getInfo().getCodigo().compareTo(codigo) > 0) {
                break; 
            }
            atual = atual.getProx();
        }
        return null;
    }

    public void remover(String codigo) {
        LDENode alvo = buscar(codigo);
        if (alvo == null) {
            System.out.println("Produto não encontrado.");
            return;
        }

        if (alvo == primeiro && alvo == ultimo) { 
            primeiro = ultimo = null;
        } else if (alvo == primeiro) {
            primeiro = primeiro.getProx();
            primeiro.setAnter(null);
        } else if (alvo == ultimo) {
            ultimo = ultimo.getAnter();
            ultimo.setProx(null);
        } else {
            alvo.getAnter().setProx(alvo.getProx());
            alvo.getProx().setAnter(alvo.getAnter());
        }

        qtd--;
        System.out.println("Produto removido com sucesso!");
    }

    public void exibirTodos() {
        if (isEmpty()) {
            System.out.println("Nenhum produto cadastrado.");
            return;
        }
        LDENode atual = primeiro;
        while (atual != null) {
            System.out.println(atual.getInfo());
            atual = atual.getProx();
        }
    }

    public void alterar(String codigo, double novoPreco, int novoEstoque) {
        LDENode alvo = buscar(codigo);
        if (alvo == null) {
            System.out.println("Produto não encontrado.");
            return;
        }
        Produto p = alvo.getInfo();
        p.setPreco(novoPreco);
        p.setEstoque(novoEstoque);
        System.out.println("Dados alterados com sucesso!");
    }

    public void consultar(String codigo) {
        LDENode alvo = buscar(codigo);
        if (alvo == null) {
            System.out.println("Produto não encontrado.");
            return;
        }
        Produto p = alvo.getInfo();
        System.out.printf("Preço: %.2f | Estoque: %d%n", p.getPreco(), p.getEstoque());
    }

    public void vender(String codigo, int quantidade) {
        LDENode alvo = buscar(codigo);
        if (alvo == null) {
            System.out.println("Produto não encontrado.");
            return;
        }
        Produto p = alvo.getInfo();
        if (quantidade <= p.getEstoque()) {
            double total = quantidade * p.getPreco();
            p.setEstoque(p.getEstoque() - quantidade);
            System.out.printf("Venda realizada! Total: R$ %.2f%n", total);
        } else {
            System.out.println("Estoque insuficiente para a venda.");
        }
    }
}
