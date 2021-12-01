#include "Stock_service.h"
#include "CAD.h"
#include "Stock_mapTB.h"

using namespace NS_Comp_Data;
using namespace NS_Comp_Mappage;

namespace NS_Comp_Svc {
	Stock_service::Stock_service(void) {
		this->Cad = gcnew CAD();
		this->StockMappTB = gcnew Stock_mapTB();
	}
	DataSet^ Stock_service::Stocks(String^ dataTableName){
		return this->Cad->getRows(this->StockMappTB->Select(), dataTableName);
	}
	DataSet^ Stock_service::SelectArticle(int id, String^ dataTableName) {
		StockMappTB->setId_Stock(id);
		return this->Cad->getRows(this->StockMappTB->SelectParticulier(), dataTableName);
	}
	void Stock_service::AddArticle(String^ nom, String^ nature, String^ couleur, int nbr_exemplaire, float prixHT, float prixTTC, int TVA, int seuil){
		StockMappTB->setNom(nom);
		StockMappTB->setNature(nature);
		StockMappTB->setCouleur(couleur);
		StockMappTB->setNbr_exemplaire(nbr_exemplaire);
		StockMappTB->setPrixHT(prixHT);
		StockMappTB->setPrixTTC(prixTTC);
		StockMappTB->setTVA(TVA);
		StockMappTB->setSeuil(seuil);

		this->Cad->actionRows(this->StockMappTB->Insert());
	}
	void Stock_service::DeleteArticle(int id){
		StockMappTB->setId_Stock(id);
		this->Cad->actionRows(this->StockMappTB->Delete());
	}
	void Stock_service::UpdateArticle(int id, String^ nom, String^ nature, String^ couleur, int nbr_exemplaire, float prixHT, float prixTTC, int TVA, int seuil){
		StockMappTB->setId_Stock(id);
		StockMappTB->setNom(nom);
		StockMappTB->setNature(nature);
		StockMappTB->setCouleur(couleur);
		StockMappTB->setNbr_exemplaire(nbr_exemplaire);
		StockMappTB->setPrixHT(prixHT);
		StockMappTB->setPrixTTC(prixTTC);
		StockMappTB->setTVA(TVA);
		StockMappTB->setSeuil(seuil);

		this->Cad->actionRows(this->StockMappTB->Update());
	}
}