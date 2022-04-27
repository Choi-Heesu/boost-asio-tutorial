#include <boost/asio.hpp>
#include <boost/date_time/posix_time/posix_time.hpp>
#include <iostream>

int main() {
  boost::asio::io_context io;
  boost::asio::deadline_timer t(io, boost::posix_time::seconds(5));

  std::cout << "Hello, world!" << std::endl;

  t.wait();

  std::cout << "Bye, world!" << std::endl;

  return 0;
}
