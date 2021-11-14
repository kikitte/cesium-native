// This file was generated by generate-classes.
// DO NOT EDIT THIS FILE!
#pragma once

#include "CesiumGltfReader/ClassStatisticsJsonHandler.h"
#include <CesiumGltf/Statistics.h>
#include <CesiumJsonReader/DictionaryJsonHandler.h>
#include <CesiumJsonReader/ExtensibleObjectJsonHandler.h>

namespace CesiumJsonReader {
  class ExtensionReaderContext;
}

namespace CesiumGltfReader {
  class StatisticsJsonHandler : public CesiumJsonReader::ExtensibleObjectJsonHandler {
  public:
    using ValueType = CesiumGltf::Statistics;

    static void populateExtensions(CesiumJsonReader::ExtensionReaderContext& context);

    StatisticsJsonHandler(const CesiumJsonReader::ExtensionReaderContext& context) noexcept;
    void reset(IJsonHandler* pParentHandler, CesiumGltf::Statistics* pObject);

    virtual IJsonHandler* readObjectKey(const std::string_view& str) override;

  protected:
    IJsonHandler* readObjectKeyStatistics(const std::string& objectType, const std::string_view& str, CesiumGltf::Statistics& o);

  private:

    CesiumGltf::Statistics* _pObject = nullptr;
    CesiumJsonReader::DictionaryJsonHandler<CesiumGltf::ClassStatistics, ClassStatisticsJsonHandler> _classes;
  };
}
