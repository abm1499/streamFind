import { useCallback, useState, useEffect } from "react";
import { Handle, Position } from "reactflow";
import QueryStatsIcon from "@mui/icons-material/QueryStats";
import SettingsIcon from "@mui/icons-material/Settings";
import PlayIcon from "@mui/icons-material/PlayCircle";
import axios from "axios";
import Typography from "@mui/material/Typography";
import IconButton from "@mui/material/IconButton";
import CloseIcon from "@mui/icons-material/Close";
import Modal from "@mui/material/Modal";
import Box from "@mui/material/Box";
import CheckCircleIcon from "@mui/icons-material/CheckCircle";
import ChangeParameters from "../ChangeParameters";

const handleStyle = { left: 10 };

function GroupFeatures({
  type,
  data: { label, edges, group_features, setNodes },
  isConnectable,
}) {
  const onChange = useCallback((evt) => {
    console.log(evt.target.value);
  }, []);
  console.log(group_features);

  const [groupFeatures, setGroupFeatures] = useState([]);
  const [openObj, setOpenObj] = useState(false);
  const [openModal, setOpenModal] = useState(false);

  const style = {
    position: "absolute",
    top: "50%",
    left: "50%",
    transform: "translate(-50%, -50%)",
    width: 350,
    height: 50,
    bgcolor: "white",
    border: "2px solid white",
    borderRadius: "25px",
    p: 5,
  };
  const style1 = {
    position: "absolute",
    top: "50%",
    left: "50%",
    transform: "translate(-50%, -50%)",
    width: 350,
    height: 400,
    bgcolor: "white",
    border: "2px solid white",
    borderRadius: "25px",
    p: 5,
  };

  const handleClose = () => {
    setOpenModal(false);
    setOpenObj(false);
  };

  const getFeatures = () => {
    axios
      .post("http://127.0.0.1:8000/group_features", group_features)
      .then((response) => {
        console.log("Getting group features", response);
        console.log(response.data);
        setGroupFeatures(response.data);
        console.log(groupFeatures);
        setOpenObj(true);
      })
      .catch((error) => {
        console.error("Error sending files:", error);
      });
  };

  const changeParameters = () => {
    setOpenModal(true);
    console.log("Parameters!");
  };

  return (
    <div>
      <QueryStatsIcon style={{ fontSize: "3em", cursor: "pointer" }} />
      <div
        style={{
          position: "absolute",
          top: 0,
          left: 0,
        }}
      >
        <SettingsIcon
          onClick={changeParameters}
          style={{ cursor: "pointer" }}
          fontSize="1"
        />
      </div>
      <p style={{ fontSize: "7px", position: "absolute", top: 45, left: -9 }}>
        group_features
      </p>
      <Handle
        type="target"
        style={{ background: "white" }}
        position={Position.Top}
        isConnectable={isConnectable}
      >
        <p
          style={{ fontSize: "9px", position: "absolute", top: -12, left: -9 }}
        >
          in
        </p>
        <PlayIcon
          onClick={getFeatures}
          style={{
            color: group_features.length > 0 ? "green" : "red",
            cursor: "pointer",
            fontSize: "10px",
            position: "absolute",
            top: -2,
            left: -2,
          }}
        />
      </Handle>
      <Handle
        type="source"
        style={{ background: "blue" }}
        position={Position.Right}
        id="a"
        isConnectable={isConnectable}
      >
        <p style={{ fontSize: "9px", position: "absolute", top: -12, left: 8 }}>
          out
        </p>
      </Handle>
      <Modal
        open={openObj}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
      >
        <Box sx={style}>
          <IconButton
            onClick={handleClose}
            aria-label="close"
            sx={{
              position: "absolute",
              right: 8,
              top: 8,
            }}
          >
            <CloseIcon />
          </IconButton>
          <div style={{ display: "flex" }}>
            <CheckCircleIcon />
            <Typography id="modal-modal-title" variant="h9" component="h2">
              group_features applied!
            </Typography>
          </div>
        </Box>
      </Modal>
      <Modal
        open={openModal}
        onClose={handleClose}
        aria-labelledby="modal-modal-title"
        aria-describedby="modal-modal-description"
      >
        <Box sx={style1}>
          <ChangeParameters handleClose={handleClose} />
        </Box>
      </Modal>
    </div>
  );
}

export default GroupFeatures;