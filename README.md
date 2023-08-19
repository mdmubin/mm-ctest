# mm-ctest

This is a very minimal testing "framework" (if you can even call it that).

It only contains two macros:
  - an assert macro, `MM_ASSERT` which accepts a failure `message` and a `condition` being verified.
  - an runner macro, `MM_RUN_TEST` which runs a given test-case, i.e. a `test` function using the assert macro

See [`example.c`](https://github.com/mdmubin/mm-ctest/blob/main/example.c) for usage.
