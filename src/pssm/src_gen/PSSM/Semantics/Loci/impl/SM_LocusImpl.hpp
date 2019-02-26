//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_LOCI_SM_LOCUSSM_LOCUSIMPL_HPP
#define PSSM_SEMANTICS_LOCI_SM_LOCUSSM_LOCUSIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SM_Locus.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSSM::Semantics::Loci 
{
	class SM_LocusImpl :virtual public ecore::EObjectImpl,
virtual public SM_Locus 
	{
		public: 
			SM_LocusImpl(const SM_LocusImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SM_LocusImpl& operator=(SM_LocusImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			SM_LocusImpl();
			virtual std::shared_ptr<SM_Locus> getThisSM_LocusPtr() const;
			virtual void setThisSM_LocusPtr(std::weak_ptr<SM_Locus> thisSM_LocusPtr);



		public:
			//destructor
			virtual ~SM_LocusImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<PSSM::Semantics::StructuredClassifiers::SM_Object> instantiate(std::shared_ptr<uml::Class>  type) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::Executor > getExecutor() const ;
			
			/*!
			 */
			virtual void setExecutor(std::shared_ptr<fUML::Executor> _executor_executor) ;
			/*!
			 */
			virtual std::shared_ptr<fUML::ExecutionFactory > getFactory() const ;
			
			/*!
			 */
			virtual void setFactory(std::shared_ptr<fUML::ExecutionFactory> _factory_factory) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<SM_Locus> m_thisSM_LocusPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_LOCI_SM_LOCUSSM_LOCUSIMPL_HPP */
