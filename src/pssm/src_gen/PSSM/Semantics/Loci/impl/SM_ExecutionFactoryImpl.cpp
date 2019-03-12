#include "PSSM/Semantics/Loci/impl/SM_ExecutionFactoryImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>
#include <sstream>

#include "abstractDataTypes/Bag.hpp"

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "PSSM/impl/PSSMPackageImpl.hpp"

#include "fUML/FUMLFactory.hpp"


//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "uml/Element.hpp"

#include "fUML/ExecutionFactoryL3.hpp"

#include "fUML/Locus.hpp"

#include "fUML/OpaqueBehaviorExecution.hpp"

#include "uml/PrimitiveType.hpp"

#include "fUML/SemanticStrategy.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::Loci;

//*********************************
// Constructor / Destructor
//*********************************
SM_ExecutionFactoryImpl::SM_ExecutionFactoryImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References

	//Init references
}

SM_ExecutionFactoryImpl::~SM_ExecutionFactoryImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_ExecutionFactory "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			SM_ExecutionFactoryImpl::SM_ExecutionFactoryImpl(std::weak_ptr<fUML::Locus > par_locus)
			:SM_ExecutionFactoryImpl()
			{
			    m_locus = par_locus;
			}






SM_ExecutionFactoryImpl::SM_ExecutionFactoryImpl(const SM_ExecutionFactoryImpl & obj):SM_ExecutionFactoryImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_ExecutionFactory "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<uml::PrimitiveType>> _builtInTypes = obj.getBuiltInTypes();
	m_builtInTypes.reset(new Bag<uml::PrimitiveType>(*(obj.getBuiltInTypes().get())));

	m_locus  = obj.getLocus();

	std::shared_ptr<Bag<fUML::OpaqueBehaviorExecution>> _primitiveBehaviorPrototypes = obj.getPrimitiveBehaviorPrototypes();
	m_primitiveBehaviorPrototypes.reset(new Bag<fUML::OpaqueBehaviorExecution>(*(obj.getPrimitiveBehaviorPrototypes().get())));

	std::shared_ptr<Bag<fUML::SemanticStrategy>> _strategies = obj.getStrategies();
	m_strategies.reset(new Bag<fUML::SemanticStrategy>(*(obj.getStrategies().get())));


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SM_ExecutionFactoryImpl::copy() const
{
	std::shared_ptr<SM_ExecutionFactoryImpl> element(new SM_ExecutionFactoryImpl(*this));
	element->setThisSM_ExecutionFactoryPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_ExecutionFactoryImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_ExecutionFactory_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::SemanticVisitor> SM_ExecutionFactoryImpl::instantiateVisitor(std::shared_ptr<uml::Element>  element)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_ExecutionFactory> SM_ExecutionFactoryImpl::getThisSM_ExecutionFactoryPtr() const
{
	return m_thisSM_ExecutionFactoryPtr.lock();
}
void SM_ExecutionFactoryImpl::setThisSM_ExecutionFactoryPtr(std::weak_ptr<SM_ExecutionFactory> thisSM_ExecutionFactoryPtr)
{
	m_thisSM_ExecutionFactoryPtr = thisSM_ExecutionFactoryPtr;
	setThisExecutionFactoryL3Ptr(thisSM_ExecutionFactoryPtr);
}
std::shared_ptr<ecore::EObject> SM_ExecutionFactoryImpl::eContainer() const
{
	if(auto wp = m_locus.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_ExecutionFactoryImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return fUML::ExecutionFactoryL3Impl::eGet(featureID, resolve, coreType);
}
bool SM_ExecutionFactoryImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return fUML::ExecutionFactoryL3Impl::internalEIsSet(featureID);
}
bool SM_ExecutionFactoryImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return fUML::ExecutionFactoryL3Impl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_ExecutionFactoryImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get PSSMFactory
	std::shared_ptr<PSSM::PSSMFactory> modelFactory = PSSM::PSSMFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void SM_ExecutionFactoryImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	fUML::ExecutionFactoryL3Impl::loadAttributes(loadHandler, attr_list);
}

void SM_ExecutionFactoryImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::ExecutionFactoryL3Impl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void SM_ExecutionFactoryImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	fUML::ExecutionFactoryL3Impl::resolveReferences(featureID, references);
}

void SM_ExecutionFactoryImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::ExecutionFactoryL3Impl::saveContent(saveHandler);
	
	fUML::ExecutionFactoryL2Impl::saveContent(saveHandler);
	
	fUML::ExecutionFactoryL1Impl::saveContent(saveHandler);
	
	fUML::ExecutionFactoryImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void SM_ExecutionFactoryImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

