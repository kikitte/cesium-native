# Do not edit this file! It is created by running "tools/automate.py create-recipes"

from conan import ConanFile
from conans import tools
from conan.tools.cmake import CMake, CMakeToolchain, CMakeDeps

class CesiumUtilityConan(ConanFile):
    name = "CesiumIonClient"
    version = "0.12.0"
    user = "user"
    channel = "dev"
    license = "Apache-2.0"
    author = "CesiumGS, Inc. and Contributors"
    url = "https://github.com/CesiumGS/cesium-native"
    description = "Functions to access [Cesium ion](https://cesium.com/cesium-ion/) accounts and 3D tilesets using ion's REST API."
    topics = () # TODO
    settings = "os", "compiler", "build_type", "arch"
    options = {"shared": [True, False], "fPIC": [True, False]}
    default_options = {"shared": False, "fPIC": True}
    requires = [
      "CesiumAsync/0.12.0@user/dev",
      "CesiumUtility/0.12.0@user/dev",
      "ms-gsl/4.0.0",
      "base64/0.4.0",
      "cpp-httplib/0.10.1",
    ]

    exports_sources = [
      "include/*",
      "generated/*",
      "src/*",
      "test/*",
      "CMakeLists.txt",
      "../tools/cmake/cesium.cmake"
    ]

    def config_options(self):
      if self.settings.os == "Windows":
          del self.options.fPIC

    def generate(self):
      tc = CMakeToolchain(self)
      tc.variables["CESIUM_USE_CONAN_PACKAGES"] = True
      tc.variables["CESIUM_TESTS_ENABLED"] = False
      tc.generate()

      deps = CMakeDeps(self)
      deps.generate()

    def build(self):
      cmake = CMake(self)
      cmake.configure()
      cmake.build()
      # if self.develop:
      #   cmake.test()

    def package(self):
      cmake = CMake(self)
      cmake.install()

    def package_info(self):
      self.cpp_info.libs = tools.collect_libs(self)