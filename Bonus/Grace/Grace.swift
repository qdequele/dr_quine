import Foundation
//l
func m(){
	let c="import Foundation\n//l\nfunc m(){\n\tlet c=%@\n\tdo{try String(format:c,c.debugDescription).write(toFile:FileManager().currentDirectoryPath+\"/Grace_kid.swift\",atomically:false,encoding:.utf8)}catch{}\n};m()\n"
	do{try String(format:c,c.debugDescription).write(toFile:FileManager().currentDirectoryPath+"/Grace_kid.swift",atomically:false,encoding:.utf8)}catch{}
};m()
