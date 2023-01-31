load("@build_bazel_rules_swift//swift:swift.bzl", "swift_binary")

cc_library(
    name = "greeter",
    srcs = ["greeter.cc"],
    hdrs = ["greeter.h"],
    deps = [
        "@com_google_absl//absl/strings",
    ],
)

objc_library(
    name = "REPGreeter",
    srcs = ["REPGreeter.mm"],
    hdrs = ["REPGreeter.h"],
    deps = [
        ":greeter",
    ],
    copts = ["-std=gnu++14"],
    target_compatible_with = ["@platforms//os:macos"],
)

swift_binary(
    name = "main",
    srcs = ["main.swift"],
    module_name = "main",
    deps = [":REPGreeter"],
)
