#ifndef TRootMET_h
#define TRootMET_h

#include "../interface/TRootParticle.h"

#include "Rtypes.h"
#include "TObject.h"

using namespace std;

namespace TopTree
{
	class TRootMET : public TRootParticle
	{
	public:

		TRootMET() :
			TRootParticle()
		        ,METType_(0)
			,maxEtInEmTowers_(-9999.)
			,maxEtInHadTowers_(-9999.)
			,hadEtInHO_(-9999.)
			,hadEtInHB_(-9999.)
			,hadEtInHF_(-9999.)
			,hadEtInHE_(-9999.)
			,emEtInEB_(-9999.)
			,emEtInEE_(-9999.)
			,emEtInHF_(-9999.)
			,etFractionHadronic_(-9999.)
			,etFractionEm_(-9999.)
			,metSignificance_(-9999.)
			,caloMETInpHF_(-9999.)
			,caloMETInmHF_(-9999.)
			,caloSETInpHF_(-9999.)
			,caloSETInmHF_(-9999.)
			,caloMETPhiInpHF_(-9999.)
			,caloMETPhiInmHF_(-9999.)
			,sumEt_(-9999.)
			,uncorrectedPhiALL_(-9999.)
			,uncorrectedPtALL_(-9999.)
			,corExALL_(-9999.)
			,corEyALL_(-9999.)
			,corSumEtALL_(-9999.)
			,uncorrectedPhiJES_(-9999.)
			,uncorrectedPtJES_(-9999.)
			,corExJES_(-9999.)
			,corEyJES_(-9999.)
			,corSumEtJES_(-9999.)
			,uncorrectedPhiMUON_(-9999.)
			,uncorrectedPtMUON_(-9999.)
			,corExMUON_(-9999.)
			,corEyMUON_(-9999.)
			,corSumEtMUON_(-9999.)
			{;}

		TRootMET(const TRootMET& met) :
			TRootParticle(met)
			,METType_(met.METType_)
		        ,maxEtInEmTowers_(met.maxEtInEmTowers_)
			,maxEtInHadTowers_(met.maxEtInHadTowers_)
			,hadEtInHO_(met.hadEtInHO_)
			,hadEtInHB_(met.hadEtInHB_)
			,hadEtInHF_(met.hadEtInHF_)
			,hadEtInHE_(met.hadEtInHE_)
			,emEtInEB_(met.emEtInEB_)
			,emEtInEE_(met.emEtInEE_)
			,emEtInHF_(met.emEtInHF_)
			,etFractionHadronic_(met.etFractionHadronic_)
			,etFractionEm_(met.etFractionEm_)
			,metSignificance_(met.metSignificance_)
			,caloMETInpHF_(met.caloMETInpHF_)
			,caloMETInmHF_(met.caloMETInmHF_)
			,caloSETInpHF_(met.caloSETInpHF_)
			,caloSETInmHF_(met.caloSETInmHF_)
			,caloMETPhiInpHF_(met.caloMETPhiInpHF_)
			,caloMETPhiInmHF_(met.caloMETPhiInmHF_)
			,sumEt_(met.sumEt_)
			,uncorrectedPhiALL_(met.uncorrectedPhiALL_)
			,uncorrectedPtALL_(met.uncorrectedPtALL_)
			,corExALL_(met.corExALL_)
			,corEyALL_(met.corEyALL_)
			,corSumEtALL_(met.corSumEtALL_)
			,uncorrectedPhiJES_(met.uncorrectedPhiJES_)
			,uncorrectedPtJES_(met.uncorrectedPtJES_)
			,corExJES_(met.corExJES_)
			,corEyJES_(met.corEyJES_)
			,corSumEtJES_(met.corSumEtJES_)
			,uncorrectedPhiMUON_(met.uncorrectedPhiMUON_)
			,uncorrectedPtMUON_(met.uncorrectedPtMUON_)
			,corExMUON_(met.corExMUON_)
			,corEyMUON_(met.corEyMUON_)
			,corSumEtMUON_(met.corSumEtMUON_)
			{;}

		TRootMET(Double_t px, Double_t py, Double_t pz, Double_t e) :
			TRootParticle(px,py,pz,e)
			,METType_(0)
		        ,maxEtInEmTowers_(-9999.)
			,maxEtInHadTowers_(-9999.)
			,hadEtInHO_(-9999.)
			,hadEtInHB_(-9999.)
			,hadEtInHF_(-9999.)
			,hadEtInHE_(-9999.)
			,emEtInEB_(-9999.)
			,emEtInEE_(-9999.)
			,emEtInHF_(-9999.)
			,etFractionHadronic_(-9999.)
			,etFractionEm_(-9999.)
			,metSignificance_(-9999.)
			,caloMETInpHF_(-9999.)
			,caloMETInmHF_(-9999.)
			,caloSETInpHF_(-9999.)
			,caloSETInmHF_(-9999.)
			,caloMETPhiInpHF_(-9999.)
			,caloMETPhiInmHF_(-9999.)
			,sumEt_(-9999.)
			,uncorrectedPhiALL_(-9999.)
			,uncorrectedPtALL_(-9999.)
			,corExALL_(-9999.)
			,corEyALL_(-9999.)
			,corSumEtALL_(-9999.)
			,uncorrectedPhiJES_(-9999.)
			,uncorrectedPtJES_(-9999.)
			,corExJES_(-9999.)
			,corEyJES_(-9999.)
			,corSumEtJES_(-9999.)
			,uncorrectedPhiMUON_(-9999.)
			,uncorrectedPtMUON_(-9999.)
			,corExMUON_(-9999.)
			,corEyMUON_(-9999.)
			,corSumEtMUON_(-9999.)
			{;}
	
		TRootMET(Double_t px, Double_t py, Double_t pz, Double_t e, Double_t vtx_x, Double_t vtx_y, Double_t vtx_z) :
			TRootParticle(px,py,pz,e,vtx_x,vtx_y,vtx_z)
			,METType_(0)
		        ,maxEtInEmTowers_(-9999.)
			,maxEtInHadTowers_(-9999.)
			,hadEtInHO_(-9999.)
			,hadEtInHB_(-9999.)
			,hadEtInHF_(-9999.)
			,hadEtInHE_(-9999.)
			,emEtInEB_(-9999.)
			,emEtInEE_(-9999.)
			,emEtInHF_(-9999.)
			,etFractionHadronic_(-9999.)
			,etFractionEm_(-9999.)
			,metSignificance_(-9999.)
			,caloMETInpHF_(-9999.)
			,caloMETInmHF_(-9999.)
			,caloSETInpHF_(-9999.)
			,caloSETInmHF_(-9999.)
			,caloMETPhiInpHF_(-9999.)
			,caloMETPhiInmHF_(-9999.)
			,sumEt_(-9999.)
			,uncorrectedPhiALL_(-9999.)
			,uncorrectedPtALL_(-9999.)
			,corExALL_(-9999.)
			,corEyALL_(-9999.)
			,corSumEtALL_(-9999.)
			,uncorrectedPhiJES_(-9999.)
			,uncorrectedPtJES_(-9999.)
			,corExJES_(-9999.)
			,corEyJES_(-9999.)
			,corSumEtJES_(-9999.)
			,uncorrectedPhiMUON_(-9999.)
			,uncorrectedPtMUON_(-9999.)
			,corExMUON_(-9999.)
			,corEyMUON_(-9999.)
			,corSumEtMUON_(-9999.)
			{;}

		TRootMET(Double_t px, Double_t py, Double_t pz, Double_t e, Double_t vtx_x, Double_t vtx_y, Double_t vtx_z, Int_t type, Float_t charge) :
			TRootParticle(px,py,pz,e,vtx_x,vtx_y,vtx_z,type,charge)
			,METType_(0)
		        ,maxEtInEmTowers_(-9999.)
			,maxEtInHadTowers_(-9999.)
			,hadEtInHO_(-9999.)
			,hadEtInHB_(-9999.)
			,hadEtInHF_(-9999.)
			,hadEtInHE_(-9999.)
			,emEtInEB_(-9999.)
			,emEtInEE_(-9999.)
			,emEtInHF_(-9999.)
			,etFractionHadronic_(-9999.)
			,etFractionEm_(-9999.)
			,metSignificance_(-9999.)
			,caloMETInpHF_(-9999.)
			,caloMETInmHF_(-9999.)
			,caloSETInpHF_(-9999.)
			,caloSETInmHF_(-9999.)
			,caloMETPhiInpHF_(-9999.)
			,caloMETPhiInmHF_(-9999.)
			,sumEt_(-9999.)
			,uncorrectedPhiALL_(-9999.)
			,uncorrectedPtALL_(-9999.)
			,corExALL_(-9999.)
			,corEyALL_(-9999.)
			,corSumEtALL_(-9999.)
			,uncorrectedPhiJES_(-9999.)
			,uncorrectedPtJES_(-9999.)
			,corExJES_(-9999.)
			,corEyJES_(-9999.)
			,corSumEtJES_(-9999.)
			,uncorrectedPhiMUON_(-9999.)
			,uncorrectedPtMUON_(-9999.)
			,corExMUON_(-9999.)
			,corEyMUON_(-9999.)
			,corSumEtMUON_(-9999.)
			{;}

		TRootMET(const TLorentzVector &momentum) :
			TRootParticle(momentum)
			,METType_(0)
		        ,maxEtInEmTowers_(-9999.)
			,maxEtInHadTowers_(-9999.)
			,hadEtInHO_(-9999.)
			,hadEtInHB_(-9999.)
			,hadEtInHF_(-9999.)
			,hadEtInHE_(-9999.)
			,emEtInEB_(-9999.)
			,emEtInEE_(-9999.)
			,emEtInHF_(-9999.)
			,etFractionHadronic_(-9999.)
			,etFractionEm_(-9999.)
			,metSignificance_(-9999.)
			,caloMETInpHF_(-9999.)
			,caloMETInmHF_(-9999.)
			,caloSETInpHF_(-9999.)
			,caloSETInmHF_(-9999.)
			,caloMETPhiInpHF_(-9999.)
			,caloMETPhiInmHF_(-9999.)
			,sumEt_(-9999.)
			,uncorrectedPhiALL_(-9999.)
			,uncorrectedPtALL_(-9999.)
			,corExALL_(-9999.)
			,corEyALL_(-9999.)
			,corSumEtALL_(-9999.)
			,uncorrectedPhiJES_(-9999.)
			,uncorrectedPtJES_(-9999.)
			,corExJES_(-9999.)
			,corEyJES_(-9999.)
			,corSumEtJES_(-9999.)
			,uncorrectedPhiMUON_(-9999.)
			,uncorrectedPtMUON_(-9999.)
			,corExMUON_(-9999.)
			,corEyMUON_(-9999.)
			,corSumEtMUON_(-9999.)
			{;}

		TRootMET(const TLorentzVector &momentum, const TVector3 &vertex, Int_t type, Float_t charge) :
			TRootParticle(momentum, vertex, type, charge)
			,METType_(0)
		        ,maxEtInEmTowers_(-9999.)
			,maxEtInHadTowers_(-9999.)
			,hadEtInHO_(-9999.)
			,hadEtInHB_(-9999.)
			,hadEtInHF_(-9999.)
			,hadEtInHE_(-9999.)
			,emEtInEB_(-9999.)
			,emEtInEE_(-9999.)
			,emEtInHF_(-9999.)
			,etFractionHadronic_(-9999.)
			,etFractionEm_(-9999.)
			,metSignificance_(-9999.)
			,caloMETInpHF_(-9999.)
			,caloMETInmHF_(-9999.)
			,caloSETInpHF_(-9999.)
			,caloSETInmHF_(-9999.)
			,caloMETPhiInpHF_(-9999.)
			,caloMETPhiInmHF_(-9999.)
			,sumEt_(-9999.)
			,uncorrectedPhiALL_(-9999.)
			,uncorrectedPtALL_(-9999.)
			,corExALL_(-9999.)
			,corEyALL_(-9999.)
			,corSumEtALL_(-9999.)
			,uncorrectedPhiJES_(-9999.)
			,uncorrectedPtJES_(-9999.)
			,corExJES_(-9999.)
			,corEyJES_(-9999.)
			,corSumEtJES_(-9999.)
			,uncorrectedPhiMUON_(-9999.)
			,uncorrectedPtMUON_(-9999.)
			,corExMUON_(-9999.)
			,corEyMUON_(-9999.)
			,corSumEtMUON_(-9999.)
			{;}

		~TRootMET() {;}
		
		Int_t METType() const { return METType_; }
		Float_t maxEtInEmTowers() const { return maxEtInEmTowers_; }
		Float_t maxEtInHadTowers() const { return maxEtInHadTowers_; }
		Float_t hadEtInHO() const { return hadEtInHO_; }
		Float_t hadEtInHB() const { return hadEtInHB_; }
		Float_t hadEtInHF() const { return hadEtInHF_; }
		Float_t hadEtInHE() const { return hadEtInHE_; }
		Float_t emEtInEB() const { return emEtInEB_; }
		Float_t emEtInEE() const { return emEtInEE_; }
		Float_t emEtInHF() const { return emEtInHF_; }
		Float_t etFractionHadronic() const { return etFractionHadronic_; }
		Float_t etFractionEm() const { return etFractionEm_; }
		Float_t metSignificance() const { return metSignificance_; }
		Float_t caloMETInpHF() const { return caloMETInpHF_; }
		Float_t caloMETInmHF() const { return caloMETInmHF_; }
		Float_t caloSETInpHF() const { return caloSETInpHF_; }
		Float_t caloSETInmHF() const { return caloSETInmHF_; }
		Float_t caloMETPhiInpHF() const { return caloMETPhiInpHF_; }
		Float_t caloMETPhiInmHF() const { return caloMETPhiInmHF_; }
		Float_t sumEt() const { return sumEt_; }
		Float_t uncorrectedPhiALL() const {return uncorrectedPhiALL_; }     
		Float_t uncorrectedPtALL()const {return uncorrectedPtALL_; } 
		Float_t corExALL()const {return corExALL_; }
		Float_t corEyALL()const {return corEyALL_; }	
		Float_t corSumEtALL()const {return corSumEtALL_; }
		Float_t uncorrectedPhiJES() const {return uncorrectedPhiJES_; }     
		Float_t uncorrectedPtJES()const {return uncorrectedPtJES_; } 
		Float_t corExJES()const {return corExJES_; }
		Float_t corEyJES()const {return corEyJES_; }	
		Float_t corSumEtJES()const {return corSumEtJES_; }
		Float_t uncorrectedPhiMUON() const {return uncorrectedPhiMUON_; }     
		Float_t uncorrectedPtMUON()const {return uncorrectedPtMUON_; } 
		Float_t corExMUON()const {return corExMUON_; }
		Float_t corEyMUON()const {return corEyMUON_; }	
		Float_t corSumEtMUON()const {return corSumEtMUON_; }
		//TObject* genMET() const { return genMET_.GetObject(); }
		virtual TString typeName() const { return "TRootMET"; }

		void setMETType(Int_t METType) { METType_ = METType; }
		void setMaxEtInEmTowers(Float_t maxEtInEmTowers) { maxEtInEmTowers_ = maxEtInEmTowers; }
		void setMaxEtInHadTowers(Float_t maxEtInHadTowers) { maxEtInHadTowers_ = maxEtInHadTowers; }
		void setHadEtInHO(Float_t hadEtInHO) { hadEtInHO_ = hadEtInHO; }
		void setHadEtInHB(Float_t hadEtInHB) { hadEtInHB_ = hadEtInHB; }
		void setHadEtInHF(Float_t hadEtInHF) { hadEtInHF_ = hadEtInHF; }
		void setHadEtInHE(Float_t hadEtInHE) { hadEtInHE_ = hadEtInHE; }
		void setEmEtInEB(Float_t emEtInEB) { emEtInEB_ = emEtInEB; }
		void setEmEtInEE(Float_t emEtInEE) { emEtInEE_ = emEtInEE; }
		void setEmEtInHF(Float_t emEtInHF) { emEtInHF_ = emEtInHF; }
		void setEtFractionHadronic(Float_t etFractionHadronic) { etFractionHadronic_ = etFractionHadronic; }
		void setEtFractionEm(Float_t etFractionEm) { etFractionEm_ = etFractionEm; }
		void setMETSignificance(Float_t metSignificance) { metSignificance_ = metSignificance; }
		void setCaloMETInpHF(Float_t caloMETInpHF) { caloMETInpHF_ = caloMETInpHF; }
		void setCaloMETInmHF(Float_t caloMETInmHF) { caloMETInmHF_ = caloMETInmHF; }
		void setCaloSETInpHF(Float_t caloSETInpHF) { caloSETInpHF_ = caloSETInpHF; }
		void setCaloSETInmHF(Float_t caloSETInmHF) { caloSETInmHF_ = caloSETInmHF; }
		void setCaloMETPhiInpHF(Float_t caloMETPhiInpHF) { caloMETPhiInpHF_ = caloMETPhiInpHF; }
		void setCaloMETPhiInmHF(Float_t caloMETPhiInmHF) { caloMETPhiInmHF_ = caloMETPhiInmHF; }
		void setSumEt(Float_t sumEt) { sumEt_ = sumEt; }

		void setCaloMETFraction(
			Float_t maxEtInEmTowers
			,Float_t maxEtInHadTowers
			,Float_t hadEtInHO
			,Float_t hadEtInHB
			,Float_t hadEtInHF
			,Float_t hadEtInHE
			,Float_t emEtInEB
			,Float_t emEtInEE
			,Float_t emEtInHF
			,Float_t etFractionHadronic
			,Float_t etFractionEm
			,Float_t metSignificance
			,Float_t caloMETInpHF
			,Float_t caloMETInmHF
			,Float_t caloSETInpHF
			,Float_t caloSETInmHF
			,Float_t caloMETPhiInpHF
			,Float_t caloMETPhiInmHF)
		{
			maxEtInEmTowers_ = maxEtInEmTowers;
			maxEtInEmTowers_ = maxEtInEmTowers;
			maxEtInHadTowers_ = maxEtInHadTowers;
			hadEtInHO_ = hadEtInHO;
			hadEtInHB_ = hadEtInHB;
			hadEtInHF_ = hadEtInHF;
			hadEtInHE_ = hadEtInHE;
			emEtInEB_ = emEtInEB;
			emEtInEE_ = emEtInEE;
			emEtInHF_ = emEtInHF;
			etFractionHadronic_ = etFractionHadronic;
			etFractionEm_ = etFractionEm;
			metSignificance_ = metSignificance;
			caloMETInpHF_ = caloMETInpHF;
			caloMETInmHF_ = caloMETInmHF;
			caloSETInpHF_ = caloSETInpHF;
			caloSETInmHF_ = caloSETInmHF;
			caloMETPhiInpHF_ = caloMETPhiInpHF;
			caloMETPhiInmHF_ = caloMETPhiInmHF;
		}

		void setUncorrectedPhiALL(Float_t uncorrectedPhiALL) { uncorrectedPhiALL_ = uncorrectedPhiALL;}
		void setUncorrectedPtALL(Float_t uncorrectedPtALL) { uncorrectedPtALL_ = uncorrectedPtALL;}
		void setCorExALL(Float_t corExALL) { corExALL_ = corExALL;}
		void setCorEyALL(Float_t corEyALL) { corEyALL_ = corEyALL;}
		void setCorSumEtALL(Float_t corSumEtALL) { corSumEtALL_ = corSumEtALL;}
		void setUncorrectedPhiJES(Float_t uncorrectedPhiJES) { uncorrectedPhiJES_ = uncorrectedPhiJES;}
		void setUncorrectedPtJES(Float_t uncorrectedPtJES) { uncorrectedPtJES_ = uncorrectedPtJES;}
		void setCorExJES(Float_t corExJES) { corExJES_ = corExJES;}
		void setCorEyJES(Float_t corEyJES) { corEyJES_ = corEyJES;}
		void setCorSumEtJES(Float_t corSumEtJES) { corSumEtJES_ = corSumEtJES;}
		void setUncorrectedPhiMUON(Float_t uncorrectedPhiMUON) { uncorrectedPhiMUON_ = uncorrectedPhiMUON;}
		void setUncorrectedPtMUON(Float_t uncorrectedPtMUON) { uncorrectedPtMUON_ = uncorrectedPtMUON;}
		void setCorExMUON(Float_t corExMUON) { corExMUON_ = corExMUON;}
		void setCorEyMUON(Float_t corEyMUON) { corEyMUON_ = corEyMUON;}
		void setCorSumEtMUON(Float_t corSumEtMUON) { corSumEtMUON_ = corSumEtMUON;}
		//void setGenMET(TObject* genMET) { genMET_ = genMET; }


		friend std::ostream& operator<< (std::ostream& stream, const TRootMET& met)
		{
			stream << "TRootMET  (Pt,Px,Py)=("<< met.Pt() <<","<< met.Px() <<","<< met.Py() << ")"
				<< "  hadEt in (HO,HB,HF,HE)=("<< met.hadEtInHO() <<","<< met.hadEtInHB() <<","<< met.hadEtInHF() <<","<< met.hadEtInHE() << ")"
				<< "  emEt in (EB,EF,HF)=("<< met.emEtInEB() <<","<< met.emEtInEE() <<","<< met.emEtInHF() << ")";
			return stream;
		};


	private:

		Int_t METType_;

		Float_t maxEtInEmTowers_;    // Maximum ET in EM towers
		Float_t maxEtInHadTowers_;   // Maximum ET in HCAL towers
		Float_t hadEtInHO_;          // Hadronic ET fraction in HO
		Float_t hadEtInHB_;          // Hadronic ET in HB
		Float_t hadEtInHF_;          // Hadronic ET in HF
		Float_t hadEtInHE_;          // Hadronic ET in HE
		Float_t emEtInEB_;           // Em ET in EB
		Float_t emEtInEE_;           // Em ET in EE
		Float_t emEtInHF_;           // Em ET in HF
		Float_t etFractionHadronic_; // Hadronic ET fraction
		Float_t etFractionEm_;       // Em ET fraction
		Float_t metSignificance_;    // Em ET fraction
		Float_t caloMETInpHF_;       // CaloMET in HF+
		Float_t caloMETInmHF_;       // CaloMET in HF-
		Float_t caloSETInpHF_;       // CaloSET in HF+
		Float_t caloSETInmHF_;       // CaloSET in HF-
		Float_t caloMETPhiInpHF_;    // CaloMET-phi in HF+
		Float_t caloMETPhiInmHF_;    // CaloMET-phi in HF-

		Float_t sumEt_;

		// uncorrected stuff
		Float_t uncorrectedPhiALL_;
		Float_t uncorrectedPtALL_;
		Float_t corExALL_;
		Float_t corEyALL_;
		Float_t corSumEtALL_;
		Float_t uncorrectedPhiJES_;
		Float_t uncorrectedPtJES_;
		Float_t corExJES_;
		Float_t corEyJES_;
		Float_t corSumEtJES_;
		Float_t uncorrectedPhiMUON_;
		Float_t uncorrectedPtMUON_;
		Float_t corExMUON_;
		Float_t corEyMUON_;
		Float_t corSumEtMUON_;

		ClassDef (TRootMET,1);
	};
}

#endif
