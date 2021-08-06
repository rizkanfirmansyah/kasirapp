import axios from "axios";
import React, { Component } from "react";
import { Col, Container, Row } from "react-bootstrap";
import swal from "sweetalert";
import { Accordian, ListPesanan } from "../components";
import { API_URL } from "../utils/constants";

export default class Dashboard extends Component {
  constructor(props) {
    super(props);

    this.state = {
      pesanans: [],
      list: [],
      process: [],
      rejects: [],
      success: [],
      title: " ",
    };
  }

  componentDidMount() {
    this.listPesanan();
    this.countPesanans();
    this.countRejects();
    this.countProccess();
    this.countSuccess();
  }

  countPesanans = () => {
    axios
      .get(API_URL + "pesanans")
      .then((res) => {
        const pesanans = res.data;
        this.setState({ pesanans });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  countRejects = () => {
    axios
      .get(API_URL + "rejects")
      .then((res) => {
        const rejects = res.data;
        this.setState({ rejects });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  countSuccess = () => {
    axios
      .get(API_URL + "success")
      .then((res) => {
        const success = res.data;
        this.setState({ success });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  countProccess = () => {
    axios
      .get(API_URL + "proccess")
      .then((res) => {
        const proccess = res.data;
        this.setState({ proccess });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  listPesanan = () => {
    axios
      .get(API_URL + "pesanans")
      .then((res) => {
        const list = res.data;
        this.setState({
          list,
          color: "primary",
          id: 1,
          title: "Dashboard Pesanan",
        });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  pesananDiproses = () => {
    axios
      .get(API_URL + "proccess")
      .then((res) => {
        const list = res.data;
        this.setState({
          list,
          color: "info",
          id: 2,
          title: "Pesanan Diproses",
        });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  pesananDireject = () => {
    axios
      .get(API_URL + "rejects")
      .then((res) => {
        const list = res.data;
        this.setState({
          list,
          color: "danger",
          id: 3,
          title: "Pesanan Dibatalkan",
        });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  pesananSuccess = () => {
    axios
      .get(API_URL + "success")
      .then((res) => {
        const list = res.data;
        this.setState({
          list,
          color: "success",
          id: 4,
          title: "Pesanan Berhasil",
        });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  buttonProccess = (id) => {
    axios
      .get(API_URL + "pesanans?id=" + id)
      .then((res) => {
        const list = res.data[0];
        list.id = this.state.proccess + 1;
        axios
          .post(API_URL + "proccess", list)
          .then((res) => {
            swal({
              title: "Pesanan Diproses",
              text: "Pesanan berhasil di proses",
              icon: "info",
              button: false,
              timer: 1000,
            });
            axios
              .delete(API_URL + "pesanans/" + id)
              .then((res) => {
                this.listPesanan();
                this.countPesanans();
                this.countProccess();
                this.countPesanans();
              })
              .catch((error) => console.log(error));
          })
          .catch((error) => {
            console.log(error);
          });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  buttonReject = (id, type) => {
    if (type == 1) {
      axios
        .get(API_URL + "pesanans?id=" + id)
        .then((res) => {
          const list = res.data[0];
          list.id = this.state.rejects + 1 + type.toString();
          axios
            .post(API_URL + "rejects", list)
            .then((res) => {
              swal({
                title: "Pesanan Dibatalakn",
                text: "Pesanan berhasil di batalkan",
                icon: "error",
                button: false,
                timer: 1000,
              });
              axios
                .delete(API_URL + "pesanans/" + id)
                .then((res) => {
                  this.listPesanan();
                  this.countPesanans();
                  this.countProccess();
                  this.countSuccess();
                  this.countRejects();
                })
                .catch((error) => console.log(error));
            })
            .catch((error) => {
              console.log(error);
            });
        })
        .catch((error) => {
          console.log(error);
        });
    } else {
      axios
        .get(API_URL + "proccess?id=" + id)
        .then((res) => {
          const list = res.data[0];
          list.id = this.state.rejects + 1 + type.toString();
          axios
            .post(API_URL + "rejects", list)
            .then((res) => {
              swal({
                title: "Pesanan Dibatalakn",
                text: "Pesanan berhasil di batalkan",
                icon: "error",
                button: false,
                timer: 1000,
              });
              axios
                .delete(API_URL + "proccess/" + id)
                .then((res) => {
                  this.pesananDiproses();
                  this.countPesanans();
                  this.countProccess();
                  this.countSuccess();
                  this.countRejects();
                })
                .catch((error) => console.log(error));
            })
            .catch((error) => {
              console.log(error);
            });
        })
        .catch((error) => {
          console.log(error);
        });
    }
  };

  buttonDone = (id) => {
    axios
      .get(API_URL + "proccess?id=" + id)
      .then((res) => {
        const list = res.data[0];
        list.id = this.state.success + 1;
        axios
          .post(API_URL + "success", list)
          .then((res) => {
            swal({
              title: "Pesanan Sukses",
              text: "Pesanan berhasil",
              icon: "success",
              button: false,
              timer: 1000,
            });
            axios
              .delete(API_URL + "proccess/" + id)
              .then((res) => {
                this.pesananDiproses();
                this.countPesanans();
                this.countProccess();
                this.countSuccess();
                this.countRejects();
              })
              .catch((error) => console.log(error));
          })
          .catch((error) => {
            console.log(error);
          });
      })
      .catch((error) => {
        console.log(error);
      });
  };

  refresh = () => {
    this.listPesanan();
    this.countPesanans();
    this.countRejects();
    this.countProccess();
    this.countSuccess();
  };

  render() {
    console.log(this.state);
    return (
      <div className="mt-4">
        <Container>
          <Row>
            <Col md={10}>
              <Accordian
                {...this.state}
                buttonProccess={this.buttonProccess}
                buttonReject={this.buttonReject}
                buttonDone={this.buttonDone}
              />
            </Col>
            <Col md={2}>
              <ListPesanan
                listPesanan={this.listPesanan}
                pesananDiproses={this.pesananDiproses}
                pesananDireject={this.pesananDireject}
                pesananSuccess={this.pesananSuccess}
                refresh={this.refresh}
                {...this.state}
              />
            </Col>
          </Row>
        </Container>
      </div>
    );
  }
}
