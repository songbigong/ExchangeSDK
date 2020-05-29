Pod::Spec.new do |spec|

  spec.name         = "ExchangeSDK"
  spec.version      = "0.0.1"
  spec.summary      = "A short description of ExchangeSDK"
  spec.description  = <<-DESCRIPTION
                      pod spec create xx
                      DESCRIPTION

  spec.homepage     = "https://github.com/songbigong"
  spec.license      = "None"
  spec.author       = { "LeonSoong" => "460715538@qq.com" }
  spec.source       = { :git => "https://github.com/songbigong/ExchangeSDK.git", :tag => spec.version }

  spec.static_framework = true
  spec.requires_arc = true
  spec.platform     = :ios, '9.0'
  spec.ios.vendored_frameworks = ['ExchangeSDK.framework']
  spec.resources  = []
  spec.frameworks = 'UIKit'
  
  spec.dependency 'AFNetworking'

end
