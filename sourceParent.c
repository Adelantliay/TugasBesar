#include "header.h"

void createEmpty(Multilist *L){
	L->firstParent=NULL;
}
bool isEmpty(Multilist L){
	return L.firstParent==NULL;
}

bool haveChild(AddressParent addressParent){
	return addressParent->firstChild!=NULL;
}

AddressParent alokasiParent(DataParent data){
	AddressParent ap;
	
	ap=(AddressParent) malloc(sizeof(NodeParent));
	
	ap->next=NULL;
	ap->firstChild = NULL;
	ap->dataParent = data;
	
	return ap;
}

DataParent makeDataParent(int nomorNota, int nomorMeja, float totalPembelanjaan, string tanggalNota, string status){
	DataParent data;
	data.nomorMeja=nomorMeja;
	data.nomorNota = nomorMeja;
    data.totalPembelanjaan = totalPembelanjaan;
    strcpy(data.tanggalNota, tanggalNota);
    strcpy(data.status, status);
    
	return data;
}