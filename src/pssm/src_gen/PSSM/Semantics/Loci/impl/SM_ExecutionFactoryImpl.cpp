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
#include "uml/StateMachine.hpp"
#include "uml/Pseudostate.hpp"
#include "PSSM/Semantics/StateMachines/StateMachineExecution.hpp"
#include "uml/State.hpp"
#include "uml/FinalState.hpp"
#include "uml/OpaqueExpression.hpp"
#include "uml/ReadSelfAction.hpp"
#include "uml/Transition.hpp"
#include "uml/Region.hpp"

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
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	std::shared_ptr<fUML::SemanticVisitor> visitor = nullptr;

	std::shared_ptr<uml::StateMachine> is_sm = std::dynamic_pointer_cast<uml::StateMachine>(element);
	std::shared_ptr<uml::Pseudostate> is_pseudoState = std::dynamic_pointer_cast<uml::Pseudostate>(element);
	std::shared_ptr<uml::State> is_state = std::dynamic_pointer_cast<uml::State>(element);
	std::shared_ptr<uml::FinalState> is_final_state = std::dynamic_pointer_cast<uml::FinalState>(element);
	std::shared_ptr<uml::Transition> is_transition = std::dynamic_pointer_cast<uml::Transition>(element);
	std::shared_ptr<uml::Region> is_region = std::dynamic_pointer_cast<uml::Region>(element);
	std::shared_ptr<uml::OpaqueExpression> is_opaque_expression = std::dynamic_pointer_cast<uml::OpaqueExpression>(element);
	std::shared_ptr<uml::ReadSelfAction> is_read_self_action = std::dynamic_pointer_cast <uml::ReadSelfAction>(element);

	if(is_sm != nullptr) {
		//visitor = new PSSM::Semantics::StateMachines::StateMachineExecution()
	}
	else if(is_pseudoState != nullptr) {
		std::shared_ptr<uml::Pseudostate> pseudostate = is_pseudoState;
//		switch(pseudostate->getKind()){
//			case uml::PseudostateKind::INITIAL: visitor = new PSSM::Semantics::StateMachines::InitialPseudostateActivation(); break;
//			case uml::PseudostateKind::ENTRYPOINT:
//			case uml::PseudostateKind::EXITPOINT:
//			case uml::PseudostateKind::CHOICE:
//			case uml::PseudostateKind::FORK:
//			case uml::PseudostateKind::JOIN:
//			case uml::PseudostateKind::TERMINATE:
//			case uml::PseudostateKind::DEEPHISTORY:
//			case uml::PseudostateKind::SHALLOWHISTORY:
//			case uml::PseudostateKind::JUNCTION:
//		}
	} else if(is_state != nullptr) {
//		if(is_final_state != nullptr){
//			visitor = new PSSM::Semantics::StateMachines::FinalStateActivation();
//		} else {
//			visitor = new PSSM::Semantics::StateMachines::StateActivation();
//		}
	} else if (is_transition != nullptr) {
		std::shared_ptr<uml::Transition> transition = is_transition;
//		switch(transition->getKind()){
//			case uml::TransitionKind::EXTERNAL:
//			case uml::TransitionKind::INTERNAL:
//			case uml::TransitionKind::LOCAL:
//		}
	} else if(is_region != nullptr) {
		//visitor = new PSSM::Semantics::StateMachines::RegionActivation();
	} else if(is_opaque_expression != nullptr) {
		//visitor = new PSSM::Semantics::Values::SM_OpaqueExpressionEvaluation();
	} else if(is_read_self_action) {
		//visitor = new PSSM::Semantics::Actions::SM_ReadSelfActionActivation();
	} else {
		visitor = this->instantiateVisitor(element);
	}

	return visitor;
//SemanticVisitor visitor = null ;
//if(element instanceof StateMachine){
//	visitor = new StateMachineExecution();
//}else if (element instanceof Pseudostate) {
//	Pseudostate pseudostate = (Pseudostate) element;
//	switch(pseudostate.getKind()){
//		case INITIAL_LITERAL: visitor = new InitialPseudostateActivation(); break;
//		case ENTRY_POINT_LITERAL: visitor = new EntryPointPseudostateActivation(); break;
//		case EXIT_POINT_LITERAL: visitor = new ExitPointPseudostateActivation(); break;
//		case CHOICE_LITERAL: visitor = new ChoicePseudostateActivation(); break;
//		case FORK_LITERAL: visitor = new ForkPseudostateActivation(); break;
//		case JOIN_LITERAL: visitor = new JoinPseudostateActivation(); break;
//		case TERMINATE_LITERAL: visitor = new TerminatePseudostateActivation(); break;
//		case DEEP_HISTORY_LITERAL: visitor = new DeepHistoryPseudostateActivation(); break;
//		case SHALLOW_HISTORY_LITERAL: visitor = new ShallowHistoryPseudostateActivation(); break;
//		case JUNCTION_LITERAL: visitor = new JunctionPseudostateActivation(); break;
//	}
//}else if (element instanceof State) {
//	if(element instanceof FinalState){
//		visitor = new FinalStateActivation();
//	}else{
//		visitor = new StateActivation() ;
//	}
//}else if (element instanceof Transition) {
//	Transition transition = (Transition) element;
//	switch(transition.getKind()){
//		case EXTERNAL_LITERAL: visitor = new ExternalTransitionActivation(); break;
//		case INTERNAL_LITERAL: visitor = new InternalTransitionActivation(); break;
//		case LOCAL_LITERAL: visitor = new LocalTransitionActivation(); break;
//	}
//}else if (element instanceof Region) {
//	visitor = new RegionActivation();
//}else if(element instanceof OpaqueExpression) {
//	visitor = new SM_OpaqueExpressionEvaluation();
//}else if(element instanceof ReadSelfAction){
//	visitor = new SM_ReadSelfActionActivation();
//}else {
//	visitor = super.instantiateVisitor(element);
//}
//return visitor;
	//end of body
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

