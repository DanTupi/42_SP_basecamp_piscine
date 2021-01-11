ifconfig -a | grep ether | cut -c15-
ou
ifconfig | awk '/ether/{print$2" ",$3,$4" ",$5}'