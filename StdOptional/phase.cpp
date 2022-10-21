// Phase 1 : value
/*
std::map<int, std::string> data = {
    {1, "hi"},
    {2, "hello"},
    {3, "hiroo"}
  };
  auto opt = GetValueFromMap(data, 2);
  if (opt.has_value()) {
    std::cout << " value:" << opt.value() << '\n';
  }

  auto opt2 = GetValueFromMap(data, 4);
  if (opt2.has_value()) {
    std::cout << " value:" << opt2.value() << '\n';
  }
*/


// Phase 2 : reference
/*
A a;
  a.data = 5;

  std::optional<std::reference_wrapper<A>> maybe_a = std::ref(a);
  maybe_a->get().data = 3;  // get reference object
                            // == maybe_a.value().get().data = 3;

  std::cout << "a.data : " << a.data << std::endl;
*/