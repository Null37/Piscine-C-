while [ 1 ]
do
	
	sleep 10
	git add .

	a=$(echo $RANDOM | md5 | head -c 20)
	b=$(read -t 20 -p "Enter your commit > ")
	if [ $? == 1 ]
	then
		git commit -m "$a"
	else
		git commit -m "$b"
	fi
	git push
done
