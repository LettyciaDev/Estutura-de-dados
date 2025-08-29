public class Arvore{
	private Folha folha;
	private Arvore esquerda;
	private Arvore direita;
	
	public Arvore(){
		this.folha = null;
		this.esquerda = null;
		this.direita = null;
	}

	public Arvore(Folha folha){
		this.folha = folha;
		this.esquerda = null;
		this.direita = null;
	}
	
	public Folha getFolha(){
		return this.folha;
	}
	
	public void setFolha(Folha folha){
		this.folha = folha;
	}
	
	public Arvore getEsquerda(){
		return this.esquerda;
	}
	
	public void setEsquerda(Arvore esquerda){
		this.esquerda = esquerda;
	}
	
	public Arvore getDireita(Arvore direita){
		this.direita = direita;
	}
	
	public boolean isEmpty(){
		return this.folha == null;
	}
	
	
	public void inserir(Folha novo){
		if(isEmpty){
			this.folha = novo;
		} else {
			Arvore novaArvore = new Arvore(novo);
			if(novo.getValue < folha.getValue){
				if(esquerda == null){
					esquerda = novaArvore;
				} else {
					esquerda = inserir(novo);
				}
			} else if(novo.getValue > folha.getValue) {
				if(direita == null) {
					direita = novaArvore;
				} else {
					direita = inserir(novo);
				}
			}
		}
	}
	

	public void remover(Arvore delArvore){
		if(!isEmpty()){
			if(delArvore.esquerda == null && delArvore.direita == null){
			delArvore.delete
			}
		}
	}
}
//caso 1: o no ser folha
//caso 2: o no ter um filho
//caso 3: o no ter dois filhos
