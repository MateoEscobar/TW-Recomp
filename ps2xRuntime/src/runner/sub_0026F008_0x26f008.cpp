#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026F008
// Address: 0x26f008 - 0x26f2c8
void sub_0026F008_0x26f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F008_0x26f008");
#endif

    switch (ctx->pc) {
        case 0x26f008u: goto label_26f008;
        case 0x26f00cu: goto label_26f00c;
        case 0x26f010u: goto label_26f010;
        case 0x26f014u: goto label_26f014;
        case 0x26f018u: goto label_26f018;
        case 0x26f01cu: goto label_26f01c;
        case 0x26f020u: goto label_26f020;
        case 0x26f024u: goto label_26f024;
        case 0x26f028u: goto label_26f028;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f030u: goto label_26f030;
        case 0x26f034u: goto label_26f034;
        case 0x26f038u: goto label_26f038;
        case 0x26f03cu: goto label_26f03c;
        case 0x26f040u: goto label_26f040;
        case 0x26f044u: goto label_26f044;
        case 0x26f048u: goto label_26f048;
        case 0x26f04cu: goto label_26f04c;
        case 0x26f050u: goto label_26f050;
        case 0x26f054u: goto label_26f054;
        case 0x26f058u: goto label_26f058;
        case 0x26f05cu: goto label_26f05c;
        case 0x26f060u: goto label_26f060;
        case 0x26f064u: goto label_26f064;
        case 0x26f068u: goto label_26f068;
        case 0x26f06cu: goto label_26f06c;
        case 0x26f070u: goto label_26f070;
        case 0x26f074u: goto label_26f074;
        case 0x26f078u: goto label_26f078;
        case 0x26f07cu: goto label_26f07c;
        case 0x26f080u: goto label_26f080;
        case 0x26f084u: goto label_26f084;
        case 0x26f088u: goto label_26f088;
        case 0x26f08cu: goto label_26f08c;
        case 0x26f090u: goto label_26f090;
        case 0x26f094u: goto label_26f094;
        case 0x26f098u: goto label_26f098;
        case 0x26f09cu: goto label_26f09c;
        case 0x26f0a0u: goto label_26f0a0;
        case 0x26f0a4u: goto label_26f0a4;
        case 0x26f0a8u: goto label_26f0a8;
        case 0x26f0acu: goto label_26f0ac;
        case 0x26f0b0u: goto label_26f0b0;
        case 0x26f0b4u: goto label_26f0b4;
        case 0x26f0b8u: goto label_26f0b8;
        case 0x26f0bcu: goto label_26f0bc;
        case 0x26f0c0u: goto label_26f0c0;
        case 0x26f0c4u: goto label_26f0c4;
        case 0x26f0c8u: goto label_26f0c8;
        case 0x26f0ccu: goto label_26f0cc;
        case 0x26f0d0u: goto label_26f0d0;
        case 0x26f0d4u: goto label_26f0d4;
        case 0x26f0d8u: goto label_26f0d8;
        case 0x26f0dcu: goto label_26f0dc;
        case 0x26f0e0u: goto label_26f0e0;
        case 0x26f0e4u: goto label_26f0e4;
        case 0x26f0e8u: goto label_26f0e8;
        case 0x26f0ecu: goto label_26f0ec;
        case 0x26f0f0u: goto label_26f0f0;
        case 0x26f0f4u: goto label_26f0f4;
        case 0x26f0f8u: goto label_26f0f8;
        case 0x26f0fcu: goto label_26f0fc;
        case 0x26f100u: goto label_26f100;
        case 0x26f104u: goto label_26f104;
        case 0x26f108u: goto label_26f108;
        case 0x26f10cu: goto label_26f10c;
        case 0x26f110u: goto label_26f110;
        case 0x26f114u: goto label_26f114;
        case 0x26f118u: goto label_26f118;
        case 0x26f11cu: goto label_26f11c;
        case 0x26f120u: goto label_26f120;
        case 0x26f124u: goto label_26f124;
        case 0x26f128u: goto label_26f128;
        case 0x26f12cu: goto label_26f12c;
        case 0x26f130u: goto label_26f130;
        case 0x26f134u: goto label_26f134;
        case 0x26f138u: goto label_26f138;
        case 0x26f13cu: goto label_26f13c;
        case 0x26f140u: goto label_26f140;
        case 0x26f144u: goto label_26f144;
        case 0x26f148u: goto label_26f148;
        case 0x26f14cu: goto label_26f14c;
        case 0x26f150u: goto label_26f150;
        case 0x26f154u: goto label_26f154;
        case 0x26f158u: goto label_26f158;
        case 0x26f15cu: goto label_26f15c;
        case 0x26f160u: goto label_26f160;
        case 0x26f164u: goto label_26f164;
        case 0x26f168u: goto label_26f168;
        case 0x26f16cu: goto label_26f16c;
        case 0x26f170u: goto label_26f170;
        case 0x26f174u: goto label_26f174;
        case 0x26f178u: goto label_26f178;
        case 0x26f17cu: goto label_26f17c;
        case 0x26f180u: goto label_26f180;
        case 0x26f184u: goto label_26f184;
        case 0x26f188u: goto label_26f188;
        case 0x26f18cu: goto label_26f18c;
        case 0x26f190u: goto label_26f190;
        case 0x26f194u: goto label_26f194;
        case 0x26f198u: goto label_26f198;
        case 0x26f19cu: goto label_26f19c;
        case 0x26f1a0u: goto label_26f1a0;
        case 0x26f1a4u: goto label_26f1a4;
        case 0x26f1a8u: goto label_26f1a8;
        case 0x26f1acu: goto label_26f1ac;
        case 0x26f1b0u: goto label_26f1b0;
        case 0x26f1b4u: goto label_26f1b4;
        case 0x26f1b8u: goto label_26f1b8;
        case 0x26f1bcu: goto label_26f1bc;
        case 0x26f1c0u: goto label_26f1c0;
        case 0x26f1c4u: goto label_26f1c4;
        case 0x26f1c8u: goto label_26f1c8;
        case 0x26f1ccu: goto label_26f1cc;
        case 0x26f1d0u: goto label_26f1d0;
        case 0x26f1d4u: goto label_26f1d4;
        case 0x26f1d8u: goto label_26f1d8;
        case 0x26f1dcu: goto label_26f1dc;
        case 0x26f1e0u: goto label_26f1e0;
        case 0x26f1e4u: goto label_26f1e4;
        case 0x26f1e8u: goto label_26f1e8;
        case 0x26f1ecu: goto label_26f1ec;
        case 0x26f1f0u: goto label_26f1f0;
        case 0x26f1f4u: goto label_26f1f4;
        case 0x26f1f8u: goto label_26f1f8;
        case 0x26f1fcu: goto label_26f1fc;
        case 0x26f200u: goto label_26f200;
        case 0x26f204u: goto label_26f204;
        case 0x26f208u: goto label_26f208;
        case 0x26f20cu: goto label_26f20c;
        case 0x26f210u: goto label_26f210;
        case 0x26f214u: goto label_26f214;
        case 0x26f218u: goto label_26f218;
        case 0x26f21cu: goto label_26f21c;
        case 0x26f220u: goto label_26f220;
        case 0x26f224u: goto label_26f224;
        case 0x26f228u: goto label_26f228;
        case 0x26f22cu: goto label_26f22c;
        case 0x26f230u: goto label_26f230;
        case 0x26f234u: goto label_26f234;
        case 0x26f238u: goto label_26f238;
        case 0x26f23cu: goto label_26f23c;
        case 0x26f240u: goto label_26f240;
        case 0x26f244u: goto label_26f244;
        case 0x26f248u: goto label_26f248;
        case 0x26f24cu: goto label_26f24c;
        case 0x26f250u: goto label_26f250;
        case 0x26f254u: goto label_26f254;
        case 0x26f258u: goto label_26f258;
        case 0x26f25cu: goto label_26f25c;
        case 0x26f260u: goto label_26f260;
        case 0x26f264u: goto label_26f264;
        case 0x26f268u: goto label_26f268;
        case 0x26f26cu: goto label_26f26c;
        case 0x26f270u: goto label_26f270;
        case 0x26f274u: goto label_26f274;
        case 0x26f278u: goto label_26f278;
        case 0x26f27cu: goto label_26f27c;
        case 0x26f280u: goto label_26f280;
        case 0x26f284u: goto label_26f284;
        case 0x26f288u: goto label_26f288;
        case 0x26f28cu: goto label_26f28c;
        case 0x26f290u: goto label_26f290;
        case 0x26f294u: goto label_26f294;
        case 0x26f298u: goto label_26f298;
        case 0x26f29cu: goto label_26f29c;
        case 0x26f2a0u: goto label_26f2a0;
        case 0x26f2a4u: goto label_26f2a4;
        case 0x26f2a8u: goto label_26f2a8;
        case 0x26f2acu: goto label_26f2ac;
        case 0x26f2b0u: goto label_26f2b0;
        case 0x26f2b4u: goto label_26f2b4;
        case 0x26f2b8u: goto label_26f2b8;
        case 0x26f2bcu: goto label_26f2bc;
        case 0x26f2c0u: goto label_26f2c0;
        case 0x26f2c4u: goto label_26f2c4;
        default: break;
    }

    ctx->pc = 0x26f008u;

label_26f008:
    // 0x26f008: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x26f008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_26f00c:
    // 0x26f00c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x26f00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_26f010:
    // 0x26f010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26f010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26f014:
    // 0x26f014: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x26f014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_26f018:
    // 0x26f018: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x26f018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_26f01c:
    // 0x26f01c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x26f01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_26f020:
    // 0x26f020: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x26f020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_26f024:
    // 0x26f024: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26f024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_26f028:
    // 0x26f028: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x26f028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_26f02c:
    // 0x26f02c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x26f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_26f030:
    // 0x26f030: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x26f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_26f034:
    // 0x26f034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_26f038:
    // 0x26f038: 0xc0e409a  jal         func_390268
label_26f03c:
    if (ctx->pc == 0x26F03Cu) {
        ctx->pc = 0x26F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F038u;
        // 0x26f03c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F040u;
        goto label_26f040;
    }
    ctx->pc = 0x26F038u;
    SET_GPR_U32(ctx, 31, 0x26F040u);
    ctx->pc = 0x26F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F038u;
    // 0x26f03c: 0x262400c4  addiu       $a0, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x26F038u, 0x26F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F040u;
label_26f040:
    // 0x26f040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f044:
    // 0x26f044: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x26f044u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_26f048:
    // 0x26f048: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x26f048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26f04c:
    // 0x26f04c: 0x2610e160  addiu       $s0, $s0, -0x1EA0
    ctx->pc = 0x26f04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959456));
label_26f050:
    // 0x26f050: 0x8e3600d8  lw          $s6, 0xD8($s1)
    ctx->pc = 0x26f050u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26f054:
    // 0x26f054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f058:
    // 0x26f058: 0xc041532  jal         func_1054C8
label_26f05c:
    if (ctx->pc == 0x26F05Cu) {
        ctx->pc = 0x26F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F058u;
        // 0x26f05c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F060u;
        goto label_26f060;
    }
    ctx->pc = 0x26F058u;
    SET_GPR_U32(ctx, 31, 0x26F060u);
    ctx->pc = 0x26F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F058u;
    // 0x26f05c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F058u, 0x26F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F060u;
label_26f060:
    // 0x26f060: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26f060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f064:
    // 0x26f064: 0xc041532  jal         func_1054C8
label_26f068:
    if (ctx->pc == 0x26F068u) {
        ctx->pc = 0x26F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F064u;
        // 0x26f068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F06Cu;
        goto label_26f06c;
    }
    ctx->pc = 0x26F064u;
    SET_GPR_U32(ctx, 31, 0x26F06Cu);
    ctx->pc = 0x26F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F064u;
    // 0x26f068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F064u, 0x26F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F06Cu;
label_26f06c:
    // 0x26f06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f070:
    // 0x26f070: 0xc041532  jal         func_1054C8
label_26f074:
    if (ctx->pc == 0x26F074u) {
        ctx->pc = 0x26F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F070u;
        // 0x26f074: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F078u;
        goto label_26f078;
    }
    ctx->pc = 0x26F070u;
    SET_GPR_U32(ctx, 31, 0x26F078u);
    ctx->pc = 0x26F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F070u;
    // 0x26f074: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F070u, 0x26F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F078u;
label_26f078:
    // 0x26f078: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f07c:
    // 0x26f07c: 0xc041532  jal         func_1054C8
label_26f080:
    if (ctx->pc == 0x26F080u) {
        ctx->pc = 0x26F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F07Cu;
        // 0x26f080: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F084u;
        goto label_26f084;
    }
    ctx->pc = 0x26F07Cu;
    SET_GPR_U32(ctx, 31, 0x26F084u);
    ctx->pc = 0x26F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F07Cu;
    // 0x26f080: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F07Cu, 0x26F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F084u;
label_26f084:
    // 0x26f084: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f088:
    // 0x26f088: 0xc041532  jal         func_1054C8
label_26f08c:
    if (ctx->pc == 0x26F08Cu) {
        ctx->pc = 0x26F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F088u;
        // 0x26f08c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F090u;
        goto label_26f090;
    }
    ctx->pc = 0x26F088u;
    SET_GPR_U32(ctx, 31, 0x26F090u);
    ctx->pc = 0x26F08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F088u;
    // 0x26f08c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F088u, 0x26F090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F090u;
label_26f090:
    // 0x26f090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f094:
    // 0x26f094: 0xc041532  jal         func_1054C8
label_26f098:
    if (ctx->pc == 0x26F098u) {
        ctx->pc = 0x26F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F094u;
        // 0x26f098: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F09Cu;
        goto label_26f09c;
    }
    ctx->pc = 0x26F094u;
    SET_GPR_U32(ctx, 31, 0x26F09Cu);
    ctx->pc = 0x26F098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F094u;
    // 0x26f098: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x26F094u, 0x26F09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F09Cu;
label_26f09c:
    // 0x26f09c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26f09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_26f0a0:
    // 0x26f0a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f0a4:
    // 0x26f0a4: 0xc0a0152  jal         func_280548
label_26f0a8:
    if (ctx->pc == 0x26F0A8u) {
        ctx->pc = 0x26F0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0A4u;
        // 0x26f0a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0ACu;
        goto label_26f0ac;
    }
    ctx->pc = 0x26F0A4u;
    SET_GPR_U32(ctx, 31, 0x26F0ACu);
    ctx->pc = 0x26F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0A4u;
    // 0x26f0a8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26F0A4u, 0x26F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0ACu;
label_26f0ac:
    // 0x26f0ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f0b0:
    // 0x26f0b0: 0xc08b2c0  jal         func_22CB00
label_26f0b4:
    if (ctx->pc == 0x26F0B4u) {
        ctx->pc = 0x26F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0B0u;
        // 0x26f0b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0B8u;
        goto label_26f0b8;
    }
    ctx->pc = 0x26F0B0u;
    SET_GPR_U32(ctx, 31, 0x26F0B8u);
    ctx->pc = 0x26F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0B0u;
    // 0x26f0b4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x26F0B0u, 0x26F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0B8u;
label_26f0b8:
    // 0x26f0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f0bc:
    // 0x26f0bc: 0xc08aff4  jal         func_22BFD0
label_26f0c0:
    if (ctx->pc == 0x26F0C0u) {
        ctx->pc = 0x26F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0BCu;
        // 0x26f0c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0C4u;
        goto label_26f0c4;
    }
    ctx->pc = 0x26F0BCu;
    SET_GPR_U32(ctx, 31, 0x26F0C4u);
    ctx->pc = 0x26F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0BCu;
    // 0x26f0c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BFD0u, 0x26F0BCu, 0x26F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0C4u;
label_26f0c4:
    // 0x26f0c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_26f0c8:
    if (ctx->pc == 0x26F0C8u) {
        ctx->pc = 0x26F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0C4u;
        // 0x26f0c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0CCu;
        goto label_26f0cc;
    }
    ctx->pc = 0x26F0C4u;
    {
        const bool branch_taken_0x26f0c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0C4u;
        // 0x26f0c8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0c4) {
            ctx->pc = 0x26F0E8u;
            goto label_26f0e8;
        }
    }
    ctx->pc = 0x26F0CCu;
label_26f0cc:
    // 0x26f0cc: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26f0d0:
    // 0x26f0d0: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f0d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f0d4:
    // 0x26f0d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26f0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f0d8:
    // 0x26f0d8: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26f0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26f0dc:
    // 0x26f0dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f0dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f0e0:
    // 0x26f0e0: 0xc04159e  jal         func_105678
label_26f0e4:
    if (ctx->pc == 0x26F0E4u) {
        ctx->pc = 0x26F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0E0u;
        // 0x26f0e4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0E8u;
        goto label_26f0e8;
    }
    ctx->pc = 0x26F0E0u;
    SET_GPR_U32(ctx, 31, 0x26F0E8u);
    ctx->pc = 0x26F0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0E0u;
    // 0x26f0e4: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26F0E0u, 0x26F0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0E8u;
label_26f0e8:
    // 0x26f0e8: 0x12800010  beqz        $s4, . + 4 + (0x10 << 2)
label_26f0ec:
    if (ctx->pc == 0x26F0ECu) {
        ctx->pc = 0x26F0F0u;
        goto label_26f0f0;
    }
    ctx->pc = 0x26F0E8u;
    {
        const bool branch_taken_0x26f0e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f0e8) {
            ctx->pc = 0x26F12Cu;
            goto label_26f12c;
        }
    }
    ctx->pc = 0x26F0F0u;
label_26f0f0:
    // 0x26f0f0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26f0f4:
    // 0x26f0f4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f0f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f0f8:
    // 0x26f0f8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f0fc:
    // 0x26f0fc: 0x40f809  jalr        $v0
label_26f100:
    if (ctx->pc == 0x26F100u) {
        ctx->pc = 0x26F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0FCu;
        // 0x26f100: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F104u;
        goto label_26f104;
    }
    ctx->pc = 0x26F0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F104u);
        ctx->pc = 0x26F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0FCu;
        // 0x26f100: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F0FCu, 0x26F104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F104u;
label_26f104:
    // 0x26f104: 0x3c0a0027  lui         $t2, 0x27
    ctx->pc = 0x26f104u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)39 << 16));
label_26f108:
    // 0x26f108: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f10c:
    // 0x26f10c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x26f10cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_26f110:
    // 0x26f110: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26f110u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f114:
    // 0x26f114: 0x254aef68  addiu       $t2, $t2, -0x1098
    ctx->pc = 0x26f114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294963048));
label_26f118:
    // 0x26f118: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f11c:
    // 0x26f11c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26f11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26f120:
    // 0x26f120: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x26f120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_26f124:
    // 0x26f124: 0xc041664  jal         func_105990
label_26f128:
    if (ctx->pc == 0x26F128u) {
        ctx->pc = 0x26F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F124u;
        // 0x26f128: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F12Cu;
        goto label_26f12c;
    }
    ctx->pc = 0x26F124u;
    SET_GPR_U32(ctx, 31, 0x26F12Cu);
    ctx->pc = 0x26F128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F124u;
    // 0x26f128: 0x24082000  addiu       $t0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x26F124u, 0x26F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F12Cu;
label_26f12c:
    // 0x26f12c: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
label_26f130:
    if (ctx->pc == 0x26F130u) {
        ctx->pc = 0x26F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F12Cu;
        // 0x26f130: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F134u;
        goto label_26f134;
    }
    ctx->pc = 0x26F12Cu;
    {
        const bool branch_taken_0x26f12c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F12Cu;
        // 0x26f130: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f12c) {
            ctx->pc = 0x26F154u;
            goto label_26f154;
        }
    }
    ctx->pc = 0x26F134u;
label_26f134:
    // 0x26f134: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x26f134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_26f138:
    // 0x26f138: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f13c:
    // 0x26f13c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26f13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26f140:
    // 0x26f140: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26f140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26f144:
    // 0x26f144: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26f144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26f148:
    // 0x26f148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26f148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f14c:
    // 0x26f14c: 0xc041b20  jal         func_106C80
label_26f150:
    if (ctx->pc == 0x26F150u) {
        ctx->pc = 0x26F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F14Cu;
        // 0x26f150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F154u;
        goto label_26f154;
    }
    ctx->pc = 0x26F14Cu;
    SET_GPR_U32(ctx, 31, 0x26F154u);
    ctx->pc = 0x26F150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F14Cu;
    // 0x26f150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26F14Cu, 0x26F154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F154u;
label_26f154:
    // 0x26f154: 0xc05d484  jal         func_175210
label_26f158:
    if (ctx->pc == 0x26F158u) {
        ctx->pc = 0x26F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F154u;
        // 0x26f158: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F15Cu;
        goto label_26f15c;
    }
    ctx->pc = 0x26F154u;
    SET_GPR_U32(ctx, 31, 0x26F15Cu);
    ctx->pc = 0x26F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F154u;
    // 0x26f158: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26F154u, 0x26F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F15Cu;
label_26f15c:
    // 0x26f15c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f160:
    // 0x26f160: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26f160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26f164:
    // 0x26f164: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26f164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26f168:
    // 0x26f168: 0xa0f809  jalr        $a1
label_26f16c:
    if (ctx->pc == 0x26F16Cu) {
        ctx->pc = 0x26F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F168u;
        // 0x26f16c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F170u;
        goto label_26f170;
    }
    ctx->pc = 0x26F168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26F170u);
        ctx->pc = 0x26F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F168u;
        // 0x26f16c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F168u, 0x26F170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F170u;
label_26f170:
    // 0x26f170: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f174:
    // 0x26f174: 0xc087016  jal         func_21C058
label_26f178:
    if (ctx->pc == 0x26F178u) {
        ctx->pc = 0x26F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F174u;
        // 0x26f178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F17Cu;
        goto label_26f17c;
    }
    ctx->pc = 0x26F174u;
    SET_GPR_U32(ctx, 31, 0x26F17Cu);
    ctx->pc = 0x26F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F174u;
    // 0x26f178: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26F174u, 0x26F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F17Cu;
label_26f17c:
    // 0x26f17c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26f17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f180:
    // 0x26f180: 0xc05d53a  jal         func_1754E8
label_26f184:
    if (ctx->pc == 0x26F184u) {
        ctx->pc = 0x26F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F180u;
        // 0x26f184: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F188u;
        goto label_26f188;
    }
    ctx->pc = 0x26F180u;
    SET_GPR_U32(ctx, 31, 0x26F188u);
    ctx->pc = 0x26F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F180u;
    // 0x26f184: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26F180u, 0x26F188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F188u;
label_26f188:
    // 0x26f188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_26f18c:
    // 0x26f18c: 0xc05d4f6  jal         func_1753D8
label_26f190:
    if (ctx->pc == 0x26F190u) {
        ctx->pc = 0x26F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F18Cu;
        // 0x26f190: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F194u;
        goto label_26f194;
    }
    ctx->pc = 0x26F18Cu;
    SET_GPR_U32(ctx, 31, 0x26F194u);
    ctx->pc = 0x26F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F18Cu;
    // 0x26f190: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26F18Cu, 0x26F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F194u;
label_26f194:
    // 0x26f194: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26f194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26f198:
    // 0x26f198: 0xc089990  jal         func_226640
label_26f19c:
    if (ctx->pc == 0x26F19Cu) {
        ctx->pc = 0x26F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F198u;
        // 0x26f19c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1A0u;
        goto label_26f1a0;
    }
    ctx->pc = 0x26F198u;
    SET_GPR_U32(ctx, 31, 0x26F1A0u);
    ctx->pc = 0x26F19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F198u;
    // 0x26f19c: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26F198u, 0x26F1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1A0u;
label_26f1a0:
    // 0x26f1a0: 0x12e00008  beqz        $s7, . + 4 + (0x8 << 2)
label_26f1a4:
    if (ctx->pc == 0x26F1A4u) {
        ctx->pc = 0x26F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1A0u;
        // 0x26f1a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1A8u;
        goto label_26f1a8;
    }
    ctx->pc = 0x26F1A0u;
    {
        const bool branch_taken_0x26f1a0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1A0u;
        // 0x26f1a4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1a0) {
            ctx->pc = 0x26F1C4u;
            goto label_26f1c4;
        }
    }
    ctx->pc = 0x26F1A8u;
label_26f1a8:
    // 0x26f1a8: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x26f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_26f1ac:
    // 0x26f1ac: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f1acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f1b0:
    // 0x26f1b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26f1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26f1b4:
    // 0x26f1b4: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x26f1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26f1b8:
    // 0x26f1b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26f1b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f1bc:
    // 0x26f1bc: 0xc04159e  jal         func_105678
label_26f1c0:
    if (ctx->pc == 0x26F1C0u) {
        ctx->pc = 0x26F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1BCu;
        // 0x26f1c0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1C4u;
        goto label_26f1c4;
    }
    ctx->pc = 0x26F1BCu;
    SET_GPR_U32(ctx, 31, 0x26F1C4u);
    ctx->pc = 0x26F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F1BCu;
    // 0x26f1c0: 0x8e4500d8  lw          $a1, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x26F1BCu, 0x26F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1C4u;
label_26f1c4:
    // 0x26f1c4: 0x13c00017  beqz        $fp, . + 4 + (0x17 << 2)
label_26f1c8:
    if (ctx->pc == 0x26F1C8u) {
        ctx->pc = 0x26F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1C4u;
        // 0x26f1c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1CCu;
        goto label_26f1cc;
    }
    ctx->pc = 0x26F1C4u;
    {
        const bool branch_taken_0x26f1c4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1C4u;
        // 0x26f1c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1c4) {
            ctx->pc = 0x26F224u;
            goto label_26f224;
        }
    }
    ctx->pc = 0x26F1CCu;
label_26f1cc:
    // 0x26f1cc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x26f1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26f1d0:
    // 0x26f1d0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f1d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f1d4:
    // 0x26f1d4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f1d8:
    // 0x26f1d8: 0x40f809  jalr        $v0
label_26f1dc:
    if (ctx->pc == 0x26F1DCu) {
        ctx->pc = 0x26F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1D8u;
        // 0x26f1dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1E0u;
        goto label_26f1e0;
    }
    ctx->pc = 0x26F1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F1E0u);
        ctx->pc = 0x26F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1D8u;
        // 0x26f1dc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1D8u, 0x26F1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F1E0u;
label_26f1e0:
    // 0x26f1e0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x26f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_26f1e4:
    // 0x26f1e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f1e8:
    // 0x26f1e8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26f1e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_26f1ec:
    // 0x26f1ec: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x26f1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_26f1f0:
    // 0x26f1f0: 0x40f809  jalr        $v0
label_26f1f4:
    if (ctx->pc == 0x26F1F4u) {
        ctx->pc = 0x26F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1F0u;
        // 0x26f1f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1F8u;
        goto label_26f1f8;
    }
    ctx->pc = 0x26F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F1F8u);
        ctx->pc = 0x26F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1F0u;
        // 0x26f1f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1F0u, 0x26F1F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F1F8u;
label_26f1f8:
    // 0x26f1f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26f1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f1fc:
    // 0x26f1fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x26f1fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f200:
    // 0x26f200: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x26f200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26f204:
    // 0x26f204: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x26f204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_26f208:
    // 0x26f208: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x26f208u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f20c:
    // 0x26f20c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26f210:
    // 0x26f210: 0x24070077  addiu       $a3, $zero, 0x77
    ctx->pc = 0x26f210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_26f214:
    // 0x26f214: 0x24092000  addiu       $t1, $zero, 0x2000
    ctx->pc = 0x26f214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_26f218:
    // 0x26f218: 0xc04229e  jal         func_108A78
label_26f21c:
    if (ctx->pc == 0x26F21Cu) {
        ctx->pc = 0x26F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F218u;
        // 0x26f21c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F220u;
        goto label_26f220;
    }
    ctx->pc = 0x26F218u;
    SET_GPR_U32(ctx, 31, 0x26F220u);
    ctx->pc = 0x26F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F218u;
    // 0x26f21c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A78u, 0x26F218u, 0x26F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F220u;
label_26f220:
    // 0x26f220: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26f224:
    // 0x26f224: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26f228:
    if (ctx->pc == 0x26F228u) {
        ctx->pc = 0x26F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F224u;
        // 0x26f228: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F22Cu;
        goto label_26f22c;
    }
    ctx->pc = 0x26F224u;
    {
        const bool branch_taken_0x26f224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F224u;
        // 0x26f228: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f224) {
            ctx->pc = 0x26F24Cu;
            goto label_26f24c;
        }
    }
    ctx->pc = 0x26F22Cu;
label_26f22c:
    // 0x26f22c: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x26f22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_26f230:
    // 0x26f230: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_26f234:
    // 0x26f234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f238:
    // 0x26f238: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26f238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26f23c:
    // 0x26f23c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26f23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26f240:
    // 0x26f240: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26f240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f244:
    // 0x26f244: 0xc041b20  jal         func_106C80
label_26f248:
    if (ctx->pc == 0x26F248u) {
        ctx->pc = 0x26F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F244u;
        // 0x26f248: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F24Cu;
        goto label_26f24c;
    }
    ctx->pc = 0x26F244u;
    SET_GPR_U32(ctx, 31, 0x26F24Cu);
    ctx->pc = 0x26F248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F244u;
    // 0x26f248: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x26F244u, 0x26F24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F24Cu;
label_26f24c:
    // 0x26f24c: 0xc05d484  jal         func_175210
label_26f250:
    if (ctx->pc == 0x26F250u) {
        ctx->pc = 0x26F250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F24Cu;
        // 0x26f250: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F254u;
        goto label_26f254;
    }
    ctx->pc = 0x26F24Cu;
    SET_GPR_U32(ctx, 31, 0x26F254u);
    ctx->pc = 0x26F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F24Cu;
    // 0x26f250: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x26F24Cu, 0x26F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F254u;
label_26f254:
    // 0x26f254: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f258:
    // 0x26f258: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x26f258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_26f25c:
    // 0x26f25c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x26f25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_26f260:
    // 0x26f260: 0xa0f809  jalr        $a1
label_26f264:
    if (ctx->pc == 0x26F264u) {
        ctx->pc = 0x26F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F260u;
        // 0x26f264: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F268u;
        goto label_26f268;
    }
    ctx->pc = 0x26F260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x26F268u);
        ctx->pc = 0x26F264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F260u;
        // 0x26f264: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F260u, 0x26F268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F268u;
label_26f268:
    // 0x26f268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f26c:
    // 0x26f26c: 0xc087016  jal         func_21C058
label_26f270:
    if (ctx->pc == 0x26F270u) {
        ctx->pc = 0x26F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F26Cu;
        // 0x26f270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F274u;
        goto label_26f274;
    }
    ctx->pc = 0x26F26Cu;
    SET_GPR_U32(ctx, 31, 0x26F274u);
    ctx->pc = 0x26F270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F26Cu;
    // 0x26f270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x26F26Cu, 0x26F274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F274u;
label_26f274:
    // 0x26f274: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26f274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26f278:
    // 0x26f278: 0xc05d53a  jal         func_1754E8
label_26f27c:
    if (ctx->pc == 0x26F27Cu) {
        ctx->pc = 0x26F27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F278u;
        // 0x26f27c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F280u;
        goto label_26f280;
    }
    ctx->pc = 0x26F278u;
    SET_GPR_U32(ctx, 31, 0x26F280u);
    ctx->pc = 0x26F27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F278u;
    // 0x26f27c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x26F278u, 0x26F280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F280u;
label_26f280:
    // 0x26f280: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x26f280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26f284:
    // 0x26f284: 0xc05d4f6  jal         func_1753D8
label_26f288:
    if (ctx->pc == 0x26F288u) {
        ctx->pc = 0x26F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F284u;
        // 0x26f288: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F28Cu;
        goto label_26f28c;
    }
    ctx->pc = 0x26F284u;
    SET_GPR_U32(ctx, 31, 0x26F28Cu);
    ctx->pc = 0x26F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F284u;
    // 0x26f288: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x26F284u, 0x26F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F28Cu;
label_26f28c:
    // 0x26f28c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f290:
    // 0x26f290: 0xc089990  jal         func_226640
label_26f294:
    if (ctx->pc == 0x26F294u) {
        ctx->pc = 0x26F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F290u;
        // 0x26f294: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F298u;
        goto label_26f298;
    }
    ctx->pc = 0x26F290u;
    SET_GPR_U32(ctx, 31, 0x26F298u);
    ctx->pc = 0x26F294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F290u;
    // 0x26f294: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x26F290u, 0x26F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F298u;
label_26f298:
    // 0x26f298: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x26f298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_26f29c:
    // 0x26f29c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x26f29cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_26f2a0:
    // 0x26f2a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x26f2a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_26f2a4:
    // 0x26f2a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x26f2a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_26f2a8:
    // 0x26f2a8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x26f2a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26f2ac:
    // 0x26f2ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26f2acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_26f2b0:
    // 0x26f2b0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x26f2b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_26f2b4:
    // 0x26f2b4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x26f2b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26f2b8:
    // 0x26f2b8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x26f2b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_26f2bc:
    // 0x26f2bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26f2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26f2c0:
    // 0x26f2c0: 0x3e00008  jr          $ra
label_26f2c4:
    if (ctx->pc == 0x26F2C4u) {
        ctx->pc = 0x26F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2C0u;
        // 0x26f2c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F2C8u;
        goto label_fallthrough_0x26f2c0;
    }
    ctx->pc = 0x26F2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2C0u;
        // 0x26f2c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26f2c0:
    ctx->pc = 0x26F2C8u;
}
