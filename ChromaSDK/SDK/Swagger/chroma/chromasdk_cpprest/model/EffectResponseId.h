/**
 * Chroma Rest API
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.0.1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * EffectResponseId.h
 *
 * 
 */

#ifndef EffectResponseId_H_
#define EffectResponseId_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace ChromaPackage {
namespace Model {

/// <summary>
/// 
/// </summary>
class  EffectResponseId
    : public ModelBase
{
public:
    EffectResponseId();
    virtual ~EffectResponseId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EffectResponseId members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    void setId(utility::string_t value);
    bool idIsSet() const;
    void unsetId();
    /// <summary>
    /// 
    /// </summary>
    int32_t getResult() const;
    void setResult(int32_t value);
    
protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
int32_t m_Result;
    };

}
}

#endif /* EffectResponseId_H_ */