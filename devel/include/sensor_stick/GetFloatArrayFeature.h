// Generated by gencpp from file sensor_stick/GetFloatArrayFeature.msg
// DO NOT EDIT!


#ifndef SENSOR_STICK_MESSAGE_GETFLOATARRAYFEATURE_H
#define SENSOR_STICK_MESSAGE_GETFLOATARRAYFEATURE_H

#include <ros/service_traits.h>


#include <sensor_stick/GetFloatArrayFeatureRequest.h>
#include <sensor_stick/GetFloatArrayFeatureResponse.h>


namespace sensor_stick
{

struct GetFloatArrayFeature
{

typedef GetFloatArrayFeatureRequest Request;
typedef GetFloatArrayFeatureResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetFloatArrayFeature
} // namespace sensor_stick


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sensor_stick::GetFloatArrayFeature > {
  static const char* value()
  {
    return "c90ae3a91de76e55487209150231b931";
  }

  static const char* value(const ::sensor_stick::GetFloatArrayFeature&) { return value(); }
};

template<>
struct DataType< ::sensor_stick::GetFloatArrayFeature > {
  static const char* value()
  {
    return "sensor_stick/GetFloatArrayFeature";
  }

  static const char* value(const ::sensor_stick::GetFloatArrayFeature&) { return value(); }
};


// service_traits::MD5Sum< ::sensor_stick::GetFloatArrayFeatureRequest> should match 
// service_traits::MD5Sum< ::sensor_stick::GetFloatArrayFeature > 
template<>
struct MD5Sum< ::sensor_stick::GetFloatArrayFeatureRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_stick::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::sensor_stick::GetFloatArrayFeatureRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_stick::GetFloatArrayFeatureRequest> should match 
// service_traits::DataType< ::sensor_stick::GetFloatArrayFeature > 
template<>
struct DataType< ::sensor_stick::GetFloatArrayFeatureRequest>
{
  static const char* value()
  {
    return DataType< ::sensor_stick::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::sensor_stick::GetFloatArrayFeatureRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sensor_stick::GetFloatArrayFeatureResponse> should match 
// service_traits::MD5Sum< ::sensor_stick::GetFloatArrayFeature > 
template<>
struct MD5Sum< ::sensor_stick::GetFloatArrayFeatureResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sensor_stick::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::sensor_stick::GetFloatArrayFeatureResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sensor_stick::GetFloatArrayFeatureResponse> should match 
// service_traits::DataType< ::sensor_stick::GetFloatArrayFeature > 
template<>
struct DataType< ::sensor_stick::GetFloatArrayFeatureResponse>
{
  static const char* value()
  {
    return DataType< ::sensor_stick::GetFloatArrayFeature >::value();
  }
  static const char* value(const ::sensor_stick::GetFloatArrayFeatureResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SENSOR_STICK_MESSAGE_GETFLOATARRAYFEATURE_H