[@bs.deriving jsConverter]
type t = [
  | [@bs.as "pencil-circle"] `pencilCircle
  | [@bs.as "checkmark"] `checkmark
  | [@bs.as "teams"] `teams
  | [@bs.as "announcement"] `announcement
  | [@bs.as "multiple-stars"] `multipleStars
  | [@bs.as "share-globe"] `shareGlobe
  | [@bs.as "thank-a-hero"] `thankAHero
  | [@bs.as "touch-id"] `touchId
  | [@bs.as "alignment"] `alignment
  | [@bs.as "bell"] `bell
  | [@bs.as "billing"] `billing
  | [@bs.as "bookmark"] `bookmark
  | [@bs.as "box"] `box
  | [@bs.as "buildings"] `buildings
  | [@bs.as "calendar"] `calendar
  | [@bs.as "cancel-circle"] `cancelCircle
  | [@bs.as "carat-down"] `caratDown
  | [@bs.as "carat-left"] `caratLeft
  | [@bs.as "carat-right"] `caratRight
  | [@bs.as "carat-up"] `caratUp
  | [@bs.as "checked-box"] `checkedBox
  | [@bs.as "checked-circle"] `checkedCircle
  | [@bs.as "clock-circle"] `clockCircle
  | [@bs.as "cog"] `cog
  | [@bs.as "coin"] `coin
  | [@bs.as "contacts"] `contacts
  | [@bs.as "content-management"] `contentManagement
  | [@bs.as "copy"] `copy
  | [@bs.as "credit-card"] `creditCard
  | [@bs.as "customization"] `customization
  | [@bs.as "diamond"] `diamond
  | [@bs.as "document"] `document
  | [@bs.as "download-from-cloud"] `downloadFromCloud
  | [@bs.as "edit"] `edit
  | [@bs.as "email"] `email
  | [@bs.as "eye-invisible"] `eyeInvisible
  | [@bs.as "eye"] `eye
  | [@bs.as "face-meh"] `faceMeh
  | [@bs.as "face-sad"] `faceSad
  | [@bs.as "face-smiley"] `faceSmiley
  | [@bs.as "file"] `file
  | [@bs.as "folder"] `folder
  | [@bs.as "graph"] `graph
  | [@bs.as "heart"] `heart
  | [@bs.as "home"] `home
  | [@bs.as "image"] `image
  | [@bs.as "info-circle"] `infoCircle
  | [@bs.as "leave"] `leave
  | [@bs.as "list"] `list
  | [@bs.as "loading"] `loading
  | [@bs.as "lock"] `lock
  | [@bs.as "menu"] `menu
  | [@bs.as "more-horizontal"] `moreHorizontal
  | [@bs.as "more-vertical"] `moreVertical
  | [@bs.as "ok-circle"] `okCircle
  | [@bs.as "open-folder"] `openFolder
  | [@bs.as "paperclip"] `paperclip
  | [@bs.as "personnel"] `personnel
  | [@bs.as "phone"] `phone
  | [@bs.as "plus-circle"] `plusCircle
  | [@bs.as "print"] `print
  | [@bs.as "question-circle"] `questionCircle
  | [@bs.as "safety"] `safety
  | [@bs.as "search"] `search
  | [@bs.as "share"] `share
  | [@bs.as "star"] `star
  | [@bs.as "stopwatch"] `stopwatch
  | [@bs.as "target"] `target
  | [@bs.as "trash-bin"] `trashBin
  | [@bs.as "unlock"] `unlock
  | [@bs.as "upload-to-cloud"] `uploadToCloud
  | [@bs.as "user"] `user
  | [@bs.as "alignment"] `alignment
  | [@bs.as "arrow-down"] `arrowDown
  | [@bs.as "arrow-left"] `arrowLeft
  | [@bs.as "arrow-right"] `arrowRight
  | [@bs.as "arrow-up"] `arrowUp
  | [@bs.as "bell"] `bell
  | [@bs.as "billing"] `billing
  | [@bs.as "bookmark"] `bookmark
  | [@bs.as "box"] `box
  | [@bs.as "cancel-circle"] `cancelCircle
  | [@bs.as "cancel"] `cancel
  | [@bs.as "clock-circle"] `clockCircle
  | [@bs.as "cog"] `cog
  | [@bs.as "coin"] `coin
  | [@bs.as "comment"] `comment
  | [@bs.as "contacts"] `contacts
  | [@bs.as "content-management"] `contentManagement
  | [@bs.as "copy"] `copy
  | [@bs.as "credit-card"] `creditCard
  | [@bs.as "customization"] `customization
  | [@bs.as "document"] `document
  | [@bs.as "dollar-sign"] `dollarSign
  | [@bs.as "double-left"] `doubleLeft
  | [@bs.as "double-right"] `doubleRight
  | [@bs.as "down-circle"] `downCircle
  | [@bs.as "download"] `download
  | [@bs.as "edit"] `edit
  | [@bs.as "email"] `email
  | [@bs.as "external-link"] `externalLink
  | [@bs.as "eye-invisible"] `eyeInvisible
  | [@bs.as "eye"] `eye
  | [@bs.as "face-meh"] `faceMeh
  | [@bs.as "face-open-smiley"] `faceOpenSmiley
  | [@bs.as "face-sad"] `faceSad
  | [@bs.as "face-smiley"] `faceSmiley
  | [@bs.as "file"] `file
  | [@bs.as "folder"] `folder
  | [@bs.as "graph"] `graph
  | [@bs.as "heart"] `heart
  | [@bs.as "home"] `home
  | [@bs.as "image"] `image
  | [@bs.as "info-circle"] `infoCircle
  | [@bs.as "leave"] `leave
  | [@bs.as "left-circle"] `leftCircle
  | [@bs.as "lock"] `lock
  | [@bs.as "menu-fold"] `menuFold
  | [@bs.as "menu-unfold"] `menuUnfold
  | [@bs.as "number"] `number
  | [@bs.as "ok-circle"] `okCircle
  | [@bs.as "personnel"] `personnel
  | [@bs.as "phone"] `phone
  | [@bs.as "plus-circle"] `plusCircle
  | [@bs.as "plus"] `plus
  | [@bs.as "print"] `print
  | [@bs.as "qr-code"] `qrCode
  | [@bs.as "question-circle"] `questionCircle
  | [@bs.as "refresh"] `refresh
  | [@bs.as "restart"] `restart
  | [@bs.as "right-circle"] `rightCircle
  | [@bs.as "safety"] `safety
  | [@bs.as "share"] `share
  | [@bs.as "single-left"] `singleLeft
  | [@bs.as "single-right"] `singleRight
  | [@bs.as "star"] `star
  | [@bs.as "stopwatch"] `stopwatch
  | [@bs.as "sync"] `sync
  | [@bs.as "target"] `target
  | [@bs.as "trash-bin"] `trashBin
  | [@bs.as "unavailable"] `unavailable
  | [@bs.as "unlock"] `unlock
  | [@bs.as "up-circle"] `upCircle
  | [@bs.as "upload"] `upload
  | [@bs.as "user"] `user
];
