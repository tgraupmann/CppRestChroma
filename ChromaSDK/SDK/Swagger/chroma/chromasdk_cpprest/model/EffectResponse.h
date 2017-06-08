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
 * EffectResponse.h
 *
 * 
 */

#ifndef EffectResponse_H_
#define EffectResponse_H_


#include "ModelBase.h"


namespace ChromaPackage {
namespace Model {

/// <summary>
/// 
/// </summary>
class  EffectResponse
    : public ModelBase
{
public:
    EffectResponse();
    virtual ~EffectResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// EffectResponse members

    /// <summary>
    /// 
    /// </summary>
    int32_t getResult() const;
    void setResult(int32_t value);
    
protected:
    int32_t m_Result;
    };

}
}

#endif /* EffectResponse_H_ */