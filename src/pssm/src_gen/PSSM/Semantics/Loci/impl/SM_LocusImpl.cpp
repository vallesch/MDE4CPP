#include "PSSM/Semantics/Loci/impl/SM_LocusImpl.hpp"

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
#include <algorithm>
#include "uml/Classifier.hpp"
#include "uml/Behavior.hpp"
#include "uml/Class.hpp"
#include "fUML/FUMLFactory.hpp"
#include "fUML/ExecutionFactory.hpp"
#include "fUML/ExtensionalValue.hpp"
#include "fUML/Executor.hpp"
#include "fUML/Object.hpp"
#include "fUML/Execution.hpp"
#include "PSSM/Semantics/StructuredClassifiers/SM_Object.hpp"

using namespace PSSM::Semantics::StructuredClassifiers;


//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "uml/Class.hpp"

#include "fUML/ExecutionFactory.hpp"

#include "fUML/Executor.hpp"

#include "fUML/ExtensionalValue.hpp"

#include "fUML/Locus.hpp"

#include "fUML/Object.hpp"

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
SM_LocusImpl::SM_LocusImpl()
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

SM_LocusImpl::~SM_LocusImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_Locus "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_LocusImpl::SM_LocusImpl(const SM_LocusImpl & obj):SM_LocusImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_Locus "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)

	if(obj.getExecutor()!=nullptr)
	{
		m_executor = std::dynamic_pointer_cast<fUML::Executor>(obj.getExecutor()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_executor" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::ExtensionalValue>> _extensionalValuesList = obj.getExtensionalValues();
	for(std::shared_ptr<fUML::ExtensionalValue> _extensionalValues : *_extensionalValuesList)
	{
		this->getExtensionalValues()->add(std::shared_ptr<fUML::ExtensionalValue>(std::dynamic_pointer_cast<fUML::ExtensionalValue>(_extensionalValues->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_extensionalValues" << std::endl;
	#endif
	if(obj.getFactory()!=nullptr)
	{
		m_factory = std::dynamic_pointer_cast<fUML::ExecutionFactory>(obj.getFactory()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_factory" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  SM_LocusImpl::copy() const
{
	std::shared_ptr<SM_LocusImpl> element(new SM_LocusImpl(*this));
	element->setThisSM_LocusPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_LocusImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_Locus_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::Object> SM_LocusImpl::instantiate(std::shared_ptr<uml::Class>  type)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Behaves like in fUML except that type instance are not
// Object_ but SM_Object.
//Object_ object = null;
//if (type instanceof Behavior) {
//	object = super.instantiate(type);
//} else {
//	object = new SM_Object();
//	object.types.add(type);
//	object.createFeatureValues();
//	this.add(object);
//}
//return object;

std::shared_ptr<SM_Object> object = nullptr;
	std::shared_ptr<uml::Behavior> behavior = std::dynamic_pointer_cast<uml::Behavior>(type);
    if(behavior != nullptr)
    {
    	std::shared_ptr<SM_Object>  context = nullptr;
       object = std::dynamic_pointer_cast<SM_Object>(this->getFactory()->createExecution(behavior, nullptr));
    }
    else
    {
        object = PSSMFactory::eInstance()->createSM_Object();
        object->getTypes()->push_back(type);
        object->createFeatureValues();
        //this->add(object);
    }
    
    return object;
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_Locus> SM_LocusImpl::getThisSM_LocusPtr() const
{
	return m_thisSM_LocusPtr.lock();
}
void SM_LocusImpl::setThisSM_LocusPtr(std::weak_ptr<SM_Locus> thisSM_LocusPtr)
{
	m_thisSM_LocusPtr = thisSM_LocusPtr;
	setThisLocusPtr(thisSM_LocusPtr);
}
std::shared_ptr<ecore::EObject> SM_LocusImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_LocusImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return fUML::LocusImpl::eGet(featureID, resolve, coreType);
}
bool SM_LocusImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return fUML::LocusImpl::internalEIsSet(featureID);
}
bool SM_LocusImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return fUML::LocusImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_LocusImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SM_LocusImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	fUML::LocusImpl::loadAttributes(loadHandler, attr_list);
}

void SM_LocusImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::LocusImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void SM_LocusImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	fUML::LocusImpl::resolveReferences(featureID, references);
}

void SM_LocusImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::LocusImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SM_LocusImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

