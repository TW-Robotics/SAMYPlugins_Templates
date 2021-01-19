docker run       --mount type=bind,source=$(pwd),target=/model/src       --entrypoint "/app/PublishModel.sh"       sailavid/ua-modelcompiler:opcua_rocks_tested        /model/src/CRCL_OPCUA CRCL_OPCUA /model/src/Published

echo "Removing ../model folder"
rm -r ../model
echo "Creating new ../model folder"
mkdir ../model

echo "Copying the new compilated OPC UA model into ../model folder"
cp -R ./Published/CRCL_OPCUA ../model/Published
cp  ./CRCL_OPCUA.xml ../model
