import { faSync, faSyncAlt } from "@fortawesome/free-solid-svg-icons";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import React from "react";
import { Alert, Button, ListGroup } from "react-bootstrap";

const ListPesanan = ({
  pesananDiproses,
  listPesanan,
  pesananDireject,
  pesanans,
  proccess,
  rejects,
  success,
  pesananSuccess,
  refresh
}) => {
  const style = {
    height: "20px",
    fontSize: "10px",
    paddingBottom: "20px",
    width: "8px",
  };
  return (
    <div className="mt-5">
      <div className="d-grid gap-2 my-1" onClick={() => refresh()}>
        <Button variant="secondary" size="md">
          <FontAwesomeIcon icon={faSyncAlt}/> {' '}
          Refresh Cuyy
        </Button>
      </div>
      <ListGroup>
        <ListGroup.Item
          style={{ cursor: "pointer" }}
          onClick={() => listPesanan()}
        >
          Pesanan{" "}
          <Button style={style} className="float-end">
            {pesanans !== undefined
              ? pesanans.reduce((previous, val) => {
                  return (previous += 1);
                }, 0)
              : 0}
          </Button>
        </ListGroup.Item>
        <ListGroup.Item
          style={{ cursor: "pointer" }}
          onClick={() => pesananDiproses()}
        >
          Diproses{" "}
          <Button style={style} variant="info " className="float-end">
            {proccess !== undefined
              ? proccess.reduce((previous, val) => {
                  return (previous += 1);
                }, 0)
              : 0}
          </Button>
        </ListGroup.Item>
        <ListGroup.Item
          style={{ cursor: "pointer" }}
          onClick={() => pesananSuccess()}
        >
          Selesai{" "}
          <Button style={style} variant="success" className="float-end">
            {success !== undefined
              ? success.reduce((previous, val) => {
                  return (previous += 1);
                }, 0)
              : 0}
          </Button>
        </ListGroup.Item>
        <ListGroup.Item
          style={{ cursor: "pointer" }}
          onClick={() => pesananDireject()}
        >
          Dibatalkan{" "}
          <Button style={style} variant="danger" className="float-end">
            {rejects !== undefined
              ? rejects.reduce((previous, val) => {
                  return (previous += 1);
                }, 0)
              : 0}
          </Button>
        </ListGroup.Item>
      </ListGroup>
    </div>
  );
};

export default ListPesanan;
