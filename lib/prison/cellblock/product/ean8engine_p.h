 
#ifndef EAN8ENGINE_PRIVATE
#define EAN8ENGINE_PRIVATE

#include "productengine_p.h"
#include "ean8engine.h"

namespace ean8{

  class Ean8EnginePrivate : public product::ProductEnginePrivate
  {
  public:
    Ean8EnginePrivate(){
      qDebug("Ean8EnginePrivate default constructor");  
      setProductCode(upc_common::PS__EAN_8);
    }
    
    /** 
     * destructor 
     */
    virtual ~Ean8EnginePrivate()
    {  
      qDebug("Ean8EnginePrivate destructor");
    }
  };

};
#endif // EAN8ENGINE_PRIVATE