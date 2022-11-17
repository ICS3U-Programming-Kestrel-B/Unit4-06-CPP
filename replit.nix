{ pkgs }: {
	deps = [
		pkgs.cpplint
  pkgs.python39Packages.black
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}