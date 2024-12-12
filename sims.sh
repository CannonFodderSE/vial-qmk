cd ~/vial-qmk
source ~/.qmk-venv/bin/activate
clear
echo "1 = default for sims/ah64cyclic"
echo "2 = vial for sims/ah64cyclic"
read -p "Choose build: " choice
if (($choice == 1)); then echo "default is being built";rm -R ./.build;qmk compile -kb sims/ah64cyclic -km default
elif (($choice == 2)); then echo "vial is being built";rm -R ./.build;make sims/ah64cyclic:vial
elif (($choice < 1)) || (($choice > 2)); then build="Invalid choice, nothing"
fi
echo "Done!"


