module ConfigProps = {
  [@bs.deriving abstract]
  type t = {
    message: string,
    [@bs.optional]
    description: string,
  };
};

let makeConfigProps = ConfigProps.t;

[@bs.scope "Notification"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external success: ConfigProps.t => unit = "success";

[@bs.scope "Notification"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external info: ConfigProps.t => unit = "info";

[@bs.scope "Notification"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external warning: ConfigProps.t => unit = "warning";

[@bs.scope "Notification"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external error: ConfigProps.t => unit = "error";
