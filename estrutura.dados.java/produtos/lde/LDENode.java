class LDENode{
     private Produto info;
     private LDENode prox;
     private LDENode anter;

     LDENode(Produto info){
        this.info = info;
     }
    
     Produto getInfo(){
        return this.info;
     }

     void setInfo(Produto info){
        this.info = info;
     }

     LDENode getProx(){
        return this.prox;
     }

     void setProx(LDENode prox){
        this.prox = prox;
     }

     LDENode getAnter(){
        return this.anter;
     }

     void setAnter(LDENode anter){
        this.anter = anter;
     }
    
}
