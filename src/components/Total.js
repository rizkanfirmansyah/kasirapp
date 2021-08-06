import { faShoppingCart } from "@fortawesome/free-solid-svg-icons";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import axios from "axios";
import React, { Component } from "react";
import { Button, Col, Row } from "react-bootstrap";
import { API_URL } from "../utils/constants";
import { numberWithCommas } from "../utils/utils";

export default class Total extends Component {
  submitTotalBayar = (totalBayar) => {
    const pesanan = {
      total_bayar: totalBayar,
      menus: this.props.keranjangs,
    };

    axios.post(API_URL + "pesanans", pesanan).then((res) => {
      this.props.history.push("/success");
    });
  };

  render() {
    const totalBayar = this.props.keranjangs.reduce((result, item) => {
      return result + item.total_harga;
    }, 0);
    return (
      <div>
        {/* Web */}
        <div className="fixed-bottom d-none d-md-block">
          <Row>
            <Col md={{ span: 3, offset: 9 }}>
              <h4>
                Total :{" "}
                <strong className="me-3 float-end">
                  Rp.{numberWithCommas(totalBayar)}
                </strong>
              </h4>
              <div className="d-grid gap-2">
                <Button
                  variant={"primary"}
                  size="lg"
                  className="mt-4 me-2 mb-3"
                  onClick={() => this.submitTotalBayar(totalBayar)}
                >
                  <FontAwesomeIcon icon={faShoppingCart} /> Bayar
                </Button>
              </div>
            </Col>
          </Row>
        </div>
        {/* // Mobile */}
        <div className="d-sm-block d-md-none">
          <Row>
            <Col md={{ span: 3, offset: 9 }}>
              <h4>
                Total :{" "}
                <strong className="me-3 float-end">
                  Rp.{numberWithCommas(totalBayar)}
                </strong>
              </h4>
              <div className="d-grid gap-2">
                <Button
                  variant={"primary"}
                  size="lg"
                  className="mt-4 me-2 mb-3"
                  onClick={() => this.submitTotalBayar(totalBayar)}
                >
                  <FontAwesomeIcon icon={faShoppingCart} /> Bayar
                </Button>
              </div>
            </Col>
          </Row>
        </div>
      </div>
    );
  }
}
