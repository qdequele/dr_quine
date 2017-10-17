import Foundation
// l
func l(){}
func main(){
	// p
	let c="import Foundation\n// l\nfunc l(){}\nfunc main(){\n\t// p\n\tlet c=%@\n\tl()\n\tprint(String(format: c, c.debugDescription))\n};main()"
	l()
	print(String(format: c, c.debugDescription))
};main()
