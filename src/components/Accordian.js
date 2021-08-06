import {
  faCheck,
  faRecycle,
  faTimesCircle,
} from "@fortawesome/free-solid-svg-icons";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import React from "react";
import { Alert, Button, Card, Row, Table } from "react-bootstrap";
import { numberWithCommas } from "../utils/utils";

const Accordian = ({
  list,
  title,
  buttonProccess,
  buttonDone,
  buttonReject,
  id,
  color,
}) => {
  const coba = [1, 2];
  return (
    <div>
      <Alert key={"pesanan"} variant={color}>
        <h4>{title}</h4>
      </Alert>
      <Card className="shadow mb-5">
        <Table striped bordered hover>
          <thead>
            <tr>
              <th>#</th>
              <th>Rincian</th>
              <th>Total Harga</th>
              <th>Action</th>
            </tr>
          </thead>
          <tbody>
            {list.map((pesanan) => (
              <tr key={pesanan.id}>
                <td>NP{pesanan.id}</td>
                <td>
                  <Row>
                    {pesanan.menus.map((menu) => (
                      <Card
                        style={{ width: "200px" }}
                        className="mx-2 p-2 my-2"
                        key={menu.id}
                      >
                        <Card.Img
                          variant="top"
                          src={
                            "assets/images/" +
                            menu.product.category.nama.toLowerCase() +
                            "/" +
                            menu.product.gambar
                          }
                        />
                        <Card.Body>
                          <Card.Title>
                            <h6>
                              <strong>{menu.product.nama}</strong>
                            </h6>
                          </Card.Title>
                          <Card.Text>
                            Harga :{" "}
                            <strong>
                              Rp. {numberWithCommas(menu.product.harga)}
                            </strong>{" "}
                            <br />
                            QTY : <strong>{menu.jumlah}</strong> <br />
                            Total :{" "}
                            <strong>
                              Rp. {numberWithCommas(menu.total_harga)}
                            </strong>{" "}
                            <br />
                          </Card.Text>
                          {/* <Button v ariant="primary">Go somewhere</Button> */}
                        </Card.Body>
                      </Card>
                    ))}
                  </Row>
                </td>
                <td>Rp. {numberWithCommas(pesanan.total_bayar)}</td>
                <td>
                  {id == 1 ? (
                    <Button
                      variant="info"
                      size={"sm"}
                      className="m-1"
                      onClick={() => buttonProccess(pesanan.id)}
                    >
                      <FontAwesomeIcon icon={faRecycle} /> Proccess
                    </Button>
                  ) : (
                    <Button className="d-none"></Button>
                  )}
                  <br />
                  {id == 2 ? (
                    <Button
                      variant="success"
                      size={"sm"}
                      className="m-1"
                      onClick={() => buttonDone(pesanan.id)}
                    >
                      <FontAwesomeIcon icon={faCheck} /> Done
                    </Button>
                  ) : (
                    <Button className="d-none"></Button>
                  )}
                  {coba.filter((val) => val == id) > 0 ? (
                    <Button
                      variant="danger"
                      size={"sm"}
                      className="m-1"
                      onClick={() => buttonReject(pesanan.id, id)}
                    >
                      <FontAwesomeIcon icon={faTimesCircle} /> Reject
                    </Button>
                  ) : (
                    <Button className="d-none"></Button>
                  )}
                </td>
              </tr>
            ))}
          </tbody>
        </Table>
      </Card>
    </div>
  );
};

export default Accordian;
