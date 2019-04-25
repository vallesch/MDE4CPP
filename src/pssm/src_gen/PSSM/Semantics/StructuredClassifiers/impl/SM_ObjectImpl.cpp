#include "PSSM/Semantics/StructuredClassifiers/impl/SM_ObjectImpl.hpp"

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
#include "PSSM/Semantics/CommonBehavior/SM_ObjectActivation.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "uml/Class.hpp"

#include "uml/Classifier.hpp"

#include "fUML/FeatureValue.hpp"

#include "fUML/Locus.hpp"

#include "fUML/Object.hpp"

#include "fUML/ObjectActivation.hpp"

#include "fUML/ParameterValue.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::StructuredClassifiers;

//*********************************
// Constructor / Destructor
//*********************************
SM_ObjectImpl::SM_ObjectImpl()
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

SM_ObjectImpl::~SM_ObjectImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_Object "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_ObjectImpl::SM_ObjectImpl(const SM_ObjectImpl & obj):SM_ObjectImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_Object "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_locus  = obj.getLocus();

	std::shared_ptr<Bag<uml::Classifier>> _types = obj.getTypes();
	m_types.reset(new Bag<uml::Classifier>(*(obj.getTypes().get())));


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<fUML::FeatureValue>> _featureValuesList = obj.getFeatureValues();
	for(std::shared_ptr<fUML::FeatureValue> _featureValues : *_featureValuesList)
	{
		this->getFeatureValues()->add(std::shared_ptr<fUML::FeatureValue>(std::dynamic_pointer_cast<fUML::FeatureValue>(_featureValues->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_featureValues" << std::endl;
	#endif
	if(obj.getObjectActivation()!=nullptr)
	{
		m_objectActivation = std::dynamic_pointer_cast<fUML::ObjectActivation>(obj.getObjectActivation()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_objectActivation" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  SM_ObjectImpl::copy() const
{
	std::shared_ptr<SM_ObjectImpl> element(new SM_ObjectImpl(*this));
	element->setThisSM_ObjectPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_ObjectImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_Object_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void SM_ObjectImpl::destroy()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// In addition to realize the normal process of stopping the object activation
// as well as removing the current object from the locus, this destruction phase
// also implies removal of all events remaining in the pool. This prevents the
// dispatch loop to actually get the next event (even if at this step there is no
// chance to match an accepter) whereas the current object is not anymore registered.
// in the Locus.
if(this->getObjectActivation() != nullptr)
    {
    	this->getObjectActivation()->stop();
    	this->getObjectActivation()->getEventPool()->clear();
    	this->setObjectActivation(nullptr);
    }

    this->getTypes()->clear();
    ExtensionalValueImpl::destroy();
	//end of body
}

void SM_ObjectImpl::startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// The behavior captured here is almost identical to the one provide by Object_.
// Instead of using a simple ObjectActivation we use a StateMachineObjectActivation.
// This specialized kind of ObjectActivation allows the registering of completion events.
//if (this.objectActivation == null) {
//	this.objectActivation = new SM_ObjectActivation();
//	this.objectActivation.object = this;
//}
//this.objectActivation.startBehavior(classifier, inputs);

if(this->getObjectActivation() == nullptr)
    {
        this->setObjectActivation(std::dynamic_pointer_cast<fUML::ObjectActivation>(PSSM::PSSMFactory::eInstance()->createSM_ObjectActivation()));
        this->getObjectActivation()->setObject(getThisObjectPtr());
    }

    this->getObjectActivation()->startBehavior(classifier, inputs);
	//end of body
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_Object> SM_ObjectImpl::getThisSM_ObjectPtr() const
{
	return m_thisSM_ObjectPtr.lock();
}
void SM_ObjectImpl::setThisSM_ObjectPtr(std::weak_ptr<SM_Object> thisSM_ObjectPtr)
{
	m_thisSM_ObjectPtr = thisSM_ObjectPtr;
	setThisObjectPtr(thisSM_ObjectPtr);
}
std::shared_ptr<ecore::EObject> SM_ObjectImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_ObjectImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return fUML::ObjectImpl::eGet(featureID, resolve, coreType);
}
bool SM_ObjectImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return fUML::ObjectImpl::internalEIsSet(featureID);
}
bool SM_ObjectImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return fUML::ObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_ObjectImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SM_ObjectImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	fUML::ObjectImpl::loadAttributes(loadHandler, attr_list);
}

void SM_ObjectImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::ObjectImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void SM_ObjectImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	fUML::ObjectImpl::resolveReferences(featureID, references);
}

void SM_ObjectImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::ObjectImpl::saveContent(saveHandler);
	
	fUML::ExtensionalValueImpl::saveContent(saveHandler);
	
	fUML::CompoundValueImpl::saveContent(saveHandler);
	
	fUML::StructuredValueImpl::saveContent(saveHandler);
	
	fUML::ValueImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
	
}

void SM_ObjectImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

