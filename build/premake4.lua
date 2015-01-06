function getAbsoluteFromSolution(p)
	local sol = solution()
	return path.getabsolute(path.join(sol.basedir, p))
end

solution "CLI"
	configurations { "Debug", "Release" }
	platforms { "x32", "x64" }
	flags { "Symbols", "Unicode" }
	location "projects"

	project "Client"
		kind "ConsoleApp"
		language "C++"
		location "projects"
		local stargetdir = targetdir "../bin"
		files { "../src/**" }
		includedirs { "../src" }

		-- Enable C++11 on Linux
		configuration { "linux or bsd or solaris" }
			buildoptions { "-std=c++11" }

		-- Enable C++/gnu++11 on Mac OS X
		configuration "macosx"
			buildoptions { "-std=gnu++11" }