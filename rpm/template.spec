Name:           ros-indigo-naoqi-rosbridge
Version:        0.0.6
Release:        0%{?dist}
Summary:        ROS naoqi_rosbridge package

Group:          Development/Libraries
License:        BSD
Source0:        %{name}-%{version}.tar.gz

Requires:       boost-devel
Requires:       ros-indigo-cv-bridge
Requires:       ros-indigo-image-transport
Requires:       ros-indigo-kdl-parser
Requires:       ros-indigo-naoqi-bridge-msgs
Requires:       ros-indigo-naoqi-libqi
Requires:       ros-indigo-naoqi-libqicore
Requires:       ros-indigo-orocos-kdl
Requires:       ros-indigo-robot-state-publisher
Requires:       ros-indigo-rosbag-storage
Requires:       ros-indigo-tf2-ros
BuildRequires:  boost-devel
BuildRequires:  ros-indigo-catkin
BuildRequires:  ros-indigo-cv-bridge
BuildRequires:  ros-indigo-diagnostic-msgs
BuildRequires:  ros-indigo-diagnostic-updater
BuildRequires:  ros-indigo-geometry-msgs
BuildRequires:  ros-indigo-image-transport
BuildRequires:  ros-indigo-kdl-parser
BuildRequires:  ros-indigo-naoqi-bridge-msgs
BuildRequires:  ros-indigo-naoqi-libqi
BuildRequires:  ros-indigo-naoqi-libqicore
BuildRequires:  ros-indigo-orocos-kdl
BuildRequires:  ros-indigo-robot-state-publisher
BuildRequires:  ros-indigo-rosbag-storage
BuildRequires:  ros-indigo-rosgraph-msgs
BuildRequires:  ros-indigo-sensor-msgs
BuildRequires:  ros-indigo-tf2-geometry-msgs
BuildRequires:  ros-indigo-tf2-msgs
BuildRequires:  ros-indigo-tf2-ros

%description
Bridge between Aldebaran's NAOqiOS and ROS

%prep
%setup -q

%build
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree that was dropped by catkin, and source it.  It will
# set things like CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/indigo/setup.sh" ]; then . "/opt/ros/indigo/setup.sh"; fi
mkdir -p obj-%{_target_platform} && cd obj-%{_target_platform}
%cmake .. \
        -UINCLUDE_INSTALL_DIR \
        -ULIB_INSTALL_DIR \
        -USYSCONF_INSTALL_DIR \
        -USHARE_INSTALL_PREFIX \
        -ULIB_SUFFIX \
        -DCMAKE_INSTALL_PREFIX="/opt/ros/indigo" \
        -DCMAKE_PREFIX_PATH="/opt/ros/indigo" \
        -DSETUPTOOLS_DEB_LAYOUT=OFF \
        -DCATKIN_BUILD_BINARY_PACKAGE="1" \

make %{?_smp_mflags}

%install
# In case we're installing to a non-standard location, look for a setup.sh
# in the install tree that was dropped by catkin, and source it.  It will
# set things like CMAKE_PREFIX_PATH, PKG_CONFIG_PATH, and PYTHONPATH.
if [ -f "/opt/ros/indigo/setup.sh" ]; then . "/opt/ros/indigo/setup.sh"; fi
cd obj-%{_target_platform}
make %{?_smp_mflags} install DESTDIR=%{buildroot}

%files
/opt/ros/indigo

%changelog
* Thu May 28 2015 Vincent Rabaud <vincent.rabaud@gmail.com> - 0.0.6-0
- Autogenerated by Bloom

* Sun May 24 2015 Vincent Rabaud <vincent.rabaud@gmail.com> - 0.0.5-0
- Autogenerated by Bloom

* Sun May 17 2015 Vincent Rabaud <vincent.rabaud@gmail.com> - 0.0.4-0
- Autogenerated by Bloom

* Sun May 17 2015 Vincent Rabaud <vincent.rabaud@gmail.com> - 0.0.3-0
- Autogenerated by Bloom

* Sun May 17 2015 Vincent Rabaud <vincent.rabaud@gmail.com> - 0.0.2-0
- Autogenerated by Bloom

* Sat May 16 2015 Vincent Rabaud <vincent.rabaud@gmail.com> - 0.0.1-0
- Autogenerated by Bloom

