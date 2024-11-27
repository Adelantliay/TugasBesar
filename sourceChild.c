#include "header.h"

AddressChild alokasiChild(DataChild data){
	AddressChild ac;
	
	ac= (AddressChild)malloc(sizeof(NodeChild));
	
	ac->next=NULL;
	ac->dataChild = data;
	
	return ac;
}

DataChild makeDataChild(string namaMakanan, string namaMinuman, int jumlah, float hargaSatuan){
    DataChild data;
    strcpy(data.namaMakanan, namaMakanan);
    strcpy(data.namaMinuman, namaMinuman);
    data.jumlah = jumlah;
    data.hargaSatuan = hargaSatuan;  

    return data;
}


