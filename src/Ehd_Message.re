type externalCall =
  (React.element, option(float), option(unit => unit)) => Js.Promise.t(unit);

[@bs.scope "Message"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external open_: externalCall = "open";

[@bs.scope "Message"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external loading: externalCall = "loading";

[@bs.scope "Message"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external info: externalCall = "info";

[@bs.scope "Message"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external success: externalCall = "success";

[@bs.scope "Message"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external warning: externalCall = "warning";

[@bs.scope "Message"] [@bs.module "@ehrocks/eh-ant-design/lib"]
external error: externalCall = "error";

type messageType = [
  | `default
  | `info
  | `success
  | `warning
  | `error
  | `loading
];

type t('a) =
  | Uncontrolled(messageType, React.element, option(unit => unit)): t(unit)
  | Controlled(messageType, React.element, float, option(unit => unit))
    : t(Js.Promise.t(unit));

let call: type a. t(a) => a =
  fun
  | Uncontrolled(messageType, message, onClose) => {
      let _ =
        switch (messageType) {
        | `default => open_(message, None, onClose)
        | `info => info(message, None, onClose)
        | `success => success(message, None, onClose)
        | `warning => warning(message, None, onClose)
        | `error => error(message, None, onClose)
        | `loading => loading(message, None, onClose)
        };
      ();
    }
  | Controlled(messageType, message, duration, onClose) => {
      switch (messageType) {
      | `default => open_(message, Some(duration), onClose)
      | `info => info(message, Some(duration), onClose)
      | `success => success(message, Some(duration), onClose)
      | `warning => warning(message, Some(duration), onClose)
      | `error => error(message, Some(duration), onClose)
      | `loading => loading(message, Some(duration), onClose)
      };
    };
