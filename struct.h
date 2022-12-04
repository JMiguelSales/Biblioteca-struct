//A bilioteca "struct.h" usa struct como parâmetros, será necessário adiconar a struct usada e mudar o tipo da struct nas funções


/*Sintaxes
	StcDeletar: StcDeletar(Struct usada,tamanho, posição da struct para deletar)
		Deleta uma struct de uma posição, retornando o novo tamanho da struct.
*/

int StcDeletar(/*Tipo da struct*/ *Struct, int tamanho, int deletar){
	for(int i=deletar;i<=tamanho;i++){
		Struct[i]=Struct[i+1];
	}
	tamanho--;
	return tamanho;
}
