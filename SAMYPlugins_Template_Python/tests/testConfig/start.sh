#!/bin/bash

cd /usr/src/samy/configFiles/Skills/MoveToSkill/ && cd build && cmake .. && make -j7 &&  mv libmoveToSkill.so.1.0 ../libmoveToSkill.so && \
cd /usr/src/samy/configFiles/Skills/PickAndPlaceSkill/ && cd build && cmake .. && make -j7 &&  mv libpickAndPlaceSkill.so.1.0 ../libpickAndPlaceSkill.so && \
cd /usr/src/samy/configFiles/Skills/Skill_1/ && cd build && cmake .. && make -j7 &&  mv libtestFunction2.so.1.0 ../libtestFunction2.so && \
/usr/src/samy/build/SAMYCore /usr/src/samy/configFiles/SAMYCoreConfig.yaml