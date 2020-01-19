# Suricata

**Suricata** 는 오픈 소스 기반의 침입 탐지 시스템과 침입 방지 시스템이다.

Open Information Security 재단에 의해 개발되었다.

베타 버전은 2009년 12월에 출시되었으며, 2010년 7월에 이어 첫 번째 표준 릴리즈가 출시되었다.

![image](https://user-images.githubusercontent.com/41619898/76156314-22eb4f00-613c-11ea-9989-844cec46efd6.png)

```
Suricata is a free and open source, mature, fast and robust network threat detection engine.

The Suricata engine is capable of real time intrusion detection (IDS), inline intrusion prevention (IPS), network security monitoring (NSM) and offline pcap processing.

Suricata inspects the network traffic using a powerful and extensive rules and signature language, and has powerful Lua scripting support for detection of complex threats.

With standard input and output formats like YAML and JSON integrations with tools like existing SIEMs, Splunk, Logstash/Elasticsearch, Kibana, and other database become effortless.

Suricata’s fast paced community driven development focuses on security, usability and efficiency.

The Suricata project and code is owned and supported by the Open Information Security Foundation (OISF), a non-profit foundation committed to ensuring Suricata’s development and sustained success as an open source project.
```



------



## OpenWRT Suricata package

OpenWRT/LEDE Suricata package based on suricata 4.0.4. Pre-configured to support inline IPS mode.

Please do check the hardware requirements, http://suricata.readthedocs.io/en/latest/

Currently, you will need to manually enable the "compile with full language support" option.



**How to build custom packages**

- https://wiki.openwrt.org/doc/devel/packages
- https://wiki.openwrt.org/doc/howtobuild/single.package
- https://wiki.openwrt.org/doc/devel/feeds



-------



## Suricata Download

**Suricata (Stable) version is 5.0.2; released February 13, 2020.**

- Linux/Mac/FreeBSD/UNIX/Windows Source: [suricata-5.0.2.tar.gz](https://www.openinfosecfoundation.org/download/suricata-5.0.2.tar.gz)
- PGP Signature: [suricata-5.0.2.tar.gz.sig](https://www.openinfosecfoundation.org/download/suricata-5.0.2.tar.gz.sig)
- Windows 64-bit installer: [Suricata-5.0.1-1-64bit.msi](https://www.openinfosecfoundation.org/download/windows/Suricata-5.0.1-1-64bit.msi)
- Ubuntu [PPA for Suricata 5](https://redmine.openinfosecfoundation.org/projects/suricata/wiki/Ubuntu_Installation_-_Personal_Package_Archives_(PPA))



**Suricata (Old Stable) version is 4.1.7; released February 13, 2020.**

- Linux/Mac/FreeBSD/UNIX/Windows Source: [suricata-4.1.7.tar.gz](https://www.openinfosecfoundation.org/download/suricata-4.1.7.tar.gz)
- PGP Signature: [suricata-4.1.7.tar.gz.sig](https://www.openinfosecfoundation.org/download/suricata-4.1.7.tar.gz.sig)
- Windows 64-bit installer: [Suricata-4.1.6-1-64bit.msi](https://www.openinfosecfoundation.org/download/windows/Suricata-4.1.6-1-64bit.msi)



**Older releases** can be found here https://www.openinfosecfoundation.org/downloads/

Suricata bundles the latest libhtp. See https://github.com/OISF/libhtp/releases

The source code is available at our server and github. Both are kept in sync:

- git://phalanx.openinfosecfoundation.org/oisf.git

- https://github.com/OISF/suricata

