ifconfig -a | awk '/..:..:..:..:..:../' | sed 's/ether //' | awk '{$1=$1};1'
