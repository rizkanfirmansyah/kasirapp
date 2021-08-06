import React, { Component } from "react";
import { Button, Col, ListGroup, Row, Modal, Card } from "react-bootstrap";
import { numberWithCommas } from "../utils/utils";
import ModalKeranjang from "./ModalKeranjang";
import Total from "./Total";
import { API_URL } from "../utils/constants";
import axios from "axios";
import swal from "sweetalert";

export default class Hasil extends Component {
  constructor(props) {
    super(props);

    this.state = {
      showModal: false,
      keranjangDetail: false,
      jumlah: 0,
      keterangan: "",
      totalHarga: 0,
    };
  }

  handleShow = (keranjang) => {
    this.setState({
      showModal: true,
      keranjangDetail: keranjang,
      jumlah: keranjang.jumlah,
      keterangan: keranjang.keterangan,
      totalHarga: keranjang.total_harga,
    });
  };

  handleClose = () => {
    this.setState({
      showModal: false,
    });
  };

  tambah = () => {
    this.setState({
      jumlah: this.state.jumlah + 1,
      totalHarga:
        this.state.keranjangDetail.product.harga * (this.state.jumlah + 1),
    });
  };

  kurang = () => {
    if (this.state.jumlah !== 1) {
      this.setState({
        jumlah: this.state.jumlah - 1,
        totalHarga:
          this.state.keranjangDetail.product.harga * (this.state.jumlah - 1),
      });
    }
  };

  handlerChange = (event) => {
    this.setState({
      keterangan: event.target.value,
    });
  };

  handlerSubmit = (e) => {
    e.preventDefault();

    this.handleClose();

    const data = {
      jumlah: this.state.jumlah,
      total_harga: this.state.totalHarga,
      product: this.state.keranjangDetail.product,
      keterangan: this.state.keterangan,
    };

    axios
      .put(API_URL + "keranjangs/" + this.state.keranjangDetail.id, data)
      .then((res) => {
        this.props.getListKeranjang()
        swal({
          title: "Berhasil di Update",
          text: data.product.nama + " berhasil diperbaharui ",
          icon: "success",
          button: false,
          timer: 1000,
        });
      })
      .catch((error) => {
        // handle error
        console.log(error);
      });
  };
  
  hapusPesanan = (id) => {
    this.handleClose();

    axios
    .delete(API_URL + "keranjangs/" + id)
    .then((res) => {
      this.props.getListKeranjang()
      swal({
        title: "Berhasil di Hapus",
          text: this.state.keranjangDetail.product.nama + " berhasil dihapus ",
          icon: "error",
          button: false,
          timer: 1000,
        });
      })
      .catch((error) => {
        // handle error
        console.log(error);
      });
  };

  render() {
    const { keranjangs } = this.props;
    return (
      <Col md={3} className="mt-3">
        <h4>
          <strong>Hasil</strong>
        </h4>
        <hr />
        <Card className="overflow-auto hasil">
          <ListGroup variant="flush">
            {keranjangs.map((keranjang) => (
              <ListGroup.Item
                key={keranjang.product.id}
                onClick={() => this.handleShow(keranjang)}
              >
                <Row>
                  <Col xs={2}>
                    <h4>
                      <Button size="sm" variant="success">
                        {keranjang.jumlah}
                      </Button>
                    </h4>
                  </Col>
                  <Col>
                    <h5>{keranjang.product.nama}</h5>
                    <p>Rp. {numberWithCommas(keranjang.product.harga)}</p>
                  </Col>
                  <Col>
                    <strong className="float-right">
                      Rp. {numberWithCommas(keranjang.total_harga)}
                    </strong>
                  </Col>
                  {keranjang.keterangan ? (
                    <a>Keterangan : {keranjang.keterangan}</a>
                  ) : null}
                </Row>
              </ListGroup.Item>
            ))}

            <ModalKeranjang
              handleClose={this.handleClose}
              tambah={this.tambah}
              kurang={this.kurang}
              handlerChange={this.handlerChange}
              handlerSubmit={this.handlerSubmit}
              hapusPesanan={this.hapusPesanan}
              {...this.state}
            />
          </ListGroup>
        </Card>

        <Total keranjangs={keranjangs} {...this.props} />
      </Col>
    );
  }
}
