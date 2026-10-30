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

// Function: sub_00373DD0
// Address: 0x373dd0 - 0x374108
void sub_00373DD0_0x373dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373DD0_0x373dd0");
#endif

    switch (ctx->pc) {
        case 0x373e10u: goto label_373e10;
        case 0x373e18u: goto label_373e18;
        case 0x373e2cu: goto label_373e2c;
        case 0x373e40u: goto label_373e40;
        case 0x373e48u: goto label_373e48;
        case 0x373e5cu: goto label_373e5c;
        case 0x373e70u: goto label_373e70;
        case 0x373e78u: goto label_373e78;
        case 0x373e8cu: goto label_373e8c;
        case 0x373e94u: goto label_373e94;
        case 0x373ea8u: goto label_373ea8;
        case 0x373eb0u: goto label_373eb0;
        case 0x373ec4u: goto label_373ec4;
        case 0x373eccu: goto label_373ecc;
        case 0x373ee0u: goto label_373ee0;
        case 0x373ee8u: goto label_373ee8;
        case 0x373efcu: goto label_373efc;
        case 0x373f04u: goto label_373f04;
        case 0x373f18u: goto label_373f18;
        case 0x373f20u: goto label_373f20;
        case 0x373f34u: goto label_373f34;
        case 0x373f48u: goto label_373f48;
        case 0x373f50u: goto label_373f50;
        case 0x373f64u: goto label_373f64;
        case 0x373f6cu: goto label_373f6c;
        case 0x373f80u: goto label_373f80;
        case 0x373f98u: goto label_373f98;
        case 0x373fb0u: goto label_373fb0;
        case 0x373fb8u: goto label_373fb8;
        case 0x373fd0u: goto label_373fd0;
        case 0x373fe8u: goto label_373fe8;
        case 0x373ff0u: goto label_373ff0;
        case 0x37405cu: goto label_37405c;
        case 0x374068u: goto label_374068;
        case 0x374078u: goto label_374078;
        case 0x37408cu: goto label_37408c;
        case 0x3740a0u: goto label_3740a0;
        case 0x3740b0u: goto label_3740b0;
        case 0x3740c4u: goto label_3740c4;
        default: break;
    }

    ctx->pc = 0x373dd0u;

    // 0x373dd0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x373dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x373dd4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x373dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373dd8: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x373dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x373ddc: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x373ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x373de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x373de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373de4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x373de4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373de8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x373de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x373dec: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x373decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x373df0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x373df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x373df4: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x373df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x373df8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x373df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x373dfc: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x373dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x373e00: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x373e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x373e04: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x373e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x373e08: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373E08u;
    SET_GPR_U32(ctx, 31, 0x373E10u);
    ctx->pc = 0x373E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E08u;
    // 0x373e0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373E08u, 0x373E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E10u;
label_373e10:
    // 0x373e10: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373E10u;
    SET_GPR_U32(ctx, 31, 0x373E18u);
    ctx->pc = 0x373E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E10u;
    // 0x373e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373E10u, 0x373E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E18u;
label_373e18:
    // 0x373e18: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x373e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x373e1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x373e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373e24: 0xc102488  jal         func_409220
    ctx->pc = 0x373E24u;
    SET_GPR_U32(ctx, 31, 0x373E2Cu);
    ctx->pc = 0x373E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E24u;
    // 0x373e28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373E24u, 0x373E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E2Cu;
label_373e2c:
    // 0x373e2c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x373e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x373e30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e34: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x373e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x373e38: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373E38u;
    SET_GPR_U32(ctx, 31, 0x373E40u);
    ctx->pc = 0x373E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E38u;
    // 0x373e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373E38u, 0x373E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E40u;
label_373e40:
    // 0x373e40: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373E40u;
    SET_GPR_U32(ctx, 31, 0x373E48u);
    ctx->pc = 0x373E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E40u;
    // 0x373e44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373E40u, 0x373E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E48u;
label_373e48:
    // 0x373e48: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x373e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
    // 0x373e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x373e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x373e54: 0xc102488  jal         func_409220
    ctx->pc = 0x373E54u;
    SET_GPR_U32(ctx, 31, 0x373E5Cu);
    ctx->pc = 0x373E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E54u;
    // 0x373e58: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373E54u, 0x373E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E5Cu;
label_373e5c:
    // 0x373e5c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x373e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
    // 0x373e60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e64: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x373e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x373e68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373E68u;
    SET_GPR_U32(ctx, 31, 0x373E70u);
    ctx->pc = 0x373E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E68u;
    // 0x373e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373E68u, 0x373E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E70u;
label_373e70:
    // 0x373e70: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373E70u;
    SET_GPR_U32(ctx, 31, 0x373E78u);
    ctx->pc = 0x373E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E70u;
    // 0x373e74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373E70u, 0x373E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E78u;
label_373e78:
    // 0x373e78: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x373e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x373e7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e80: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x373e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x373e84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373E84u;
    SET_GPR_U32(ctx, 31, 0x373E8Cu);
    ctx->pc = 0x373E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E84u;
    // 0x373e88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373E84u, 0x373E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E8Cu;
label_373e8c:
    // 0x373e8c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373E8Cu;
    SET_GPR_U32(ctx, 31, 0x373E94u);
    ctx->pc = 0x373E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373E8Cu;
    // 0x373e90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373E8Cu, 0x373E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373E94u;
label_373e94:
    // 0x373e94: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x373e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x373e98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x373e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x373ea0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373EA0u;
    SET_GPR_U32(ctx, 31, 0x373EA8u);
    ctx->pc = 0x373EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EA0u;
    // 0x373ea4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373EA0u, 0x373EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EA8u;
label_373ea8:
    // 0x373ea8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373EA8u;
    SET_GPR_U32(ctx, 31, 0x373EB0u);
    ctx->pc = 0x373EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EA8u;
    // 0x373eac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373EA8u, 0x373EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EB0u;
label_373eb0:
    // 0x373eb0: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x373eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x373eb4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373eb8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x373eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x373ebc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373EBCu;
    SET_GPR_U32(ctx, 31, 0x373EC4u);
    ctx->pc = 0x373EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EBCu;
    // 0x373ec0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373EBCu, 0x373EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EC4u;
label_373ec4:
    // 0x373ec4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373EC4u;
    SET_GPR_U32(ctx, 31, 0x373ECCu);
    ctx->pc = 0x373EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EC4u;
    // 0x373ec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373EC4u, 0x373ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ECCu;
label_373ecc:
    // 0x373ecc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x373eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x373ed0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ed4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x373ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x373ed8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373ED8u;
    SET_GPR_U32(ctx, 31, 0x373EE0u);
    ctx->pc = 0x373EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373ED8u;
    // 0x373edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373ED8u, 0x373EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EE0u;
label_373ee0:
    // 0x373ee0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373EE0u;
    SET_GPR_U32(ctx, 31, 0x373EE8u);
    ctx->pc = 0x373EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EE0u;
    // 0x373ee4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373EE0u, 0x373EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EE8u;
label_373ee8:
    // 0x373ee8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x373ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x373eec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ef0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x373ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x373ef4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373EF4u;
    SET_GPR_U32(ctx, 31, 0x373EFCu);
    ctx->pc = 0x373EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EF4u;
    // 0x373ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373EF4u, 0x373EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EFCu;
label_373efc:
    // 0x373efc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373EFCu;
    SET_GPR_U32(ctx, 31, 0x373F04u);
    ctx->pc = 0x373F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EFCu;
    // 0x373f00: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373EFCu, 0x373F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F04u;
label_373f04:
    // 0x373f04: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x373f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x373f08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373f08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f0c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x373f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x373f10: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373F10u;
    SET_GPR_U32(ctx, 31, 0x373F18u);
    ctx->pc = 0x373F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F10u;
    // 0x373f14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373F10u, 0x373F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F18u;
label_373f18:
    // 0x373f18: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373F18u;
    SET_GPR_U32(ctx, 31, 0x373F20u);
    ctx->pc = 0x373F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F18u;
    // 0x373f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373F18u, 0x373F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F20u;
label_373f20:
    // 0x373f20: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x373f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x373f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f28: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x373f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x373f2c: 0xc102488  jal         func_409220
    ctx->pc = 0x373F2Cu;
    SET_GPR_U32(ctx, 31, 0x373F34u);
    ctx->pc = 0x373F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F2Cu;
    // 0x373f30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373F2Cu, 0x373F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F34u;
label_373f34:
    // 0x373f34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f38: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x373f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x373f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f40: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373F40u;
    SET_GPR_U32(ctx, 31, 0x373F48u);
    ctx->pc = 0x373F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F40u;
    // 0x373f44: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373F40u, 0x373F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F48u;
label_373f48:
    // 0x373f48: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373F48u;
    SET_GPR_U32(ctx, 31, 0x373F50u);
    ctx->pc = 0x373F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F48u;
    // 0x373f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373F48u, 0x373F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F50u;
label_373f50:
    // 0x373f50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f54: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x373f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x373f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f5c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373F5Cu;
    SET_GPR_U32(ctx, 31, 0x373F64u);
    ctx->pc = 0x373F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F5Cu;
    // 0x373f60: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373F5Cu, 0x373F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F64u;
label_373f64:
    // 0x373f64: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373F64u;
    SET_GPR_U32(ctx, 31, 0x373F6Cu);
    ctx->pc = 0x373F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F64u;
    // 0x373f68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373F64u, 0x373F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F6Cu;
label_373f6c:
    // 0x373f6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x373f6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f74: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x373f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x373f78: 0xc102488  jal         func_409220
    ctx->pc = 0x373F78u;
    SET_GPR_U32(ctx, 31, 0x373F80u);
    ctx->pc = 0x373F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F78u;
    // 0x373f7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x373F78u, 0x373F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F80u;
label_373f80:
    // 0x373f80: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x373f80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x373f84: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x373f84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f88: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x373f88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373f8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x373f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f90: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x373f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373f94: 0x0  nop
    ctx->pc = 0x373f94u;
    // NOP
label_373f98:
    // 0x373f98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373f9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fa0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x373fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x373fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fa8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x373FA8u;
    SET_GPR_U32(ctx, 31, 0x373FB0u);
    ctx->pc = 0x373FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FA8u;
    // 0x373fac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x373FA8u, 0x373FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FB0u;
label_373fb0:
    // 0x373fb0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373FB0u;
    SET_GPR_U32(ctx, 31, 0x373FB8u);
    ctx->pc = 0x373FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FB0u;
    // 0x373fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373FB0u, 0x373FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FB8u;
label_373fb8:
    // 0x373fb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x373fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x373fbc: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x373fbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x373fc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x373FC0u;
    {
        const bool branch_taken_0x373fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FC0u;
        // 0x373fc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373fc0) {
            ctx->pc = 0x373F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373f98;
        }
    }
    ctx->pc = 0x373FC8u;
    // 0x373fc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x373fc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fcc: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x373fccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_373fd0:
    // 0x373fd0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x373fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x373fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fd8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x373fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x373fdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x373fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373fe0: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x373FE0u;
    SET_GPR_U32(ctx, 31, 0x373FE8u);
    ctx->pc = 0x373FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FE0u;
    // 0x373fe4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x373FE0u, 0x373FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FE8u;
label_373fe8:
    // 0x373fe8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x373FE8u;
    SET_GPR_U32(ctx, 31, 0x373FF0u);
    ctx->pc = 0x373FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373FE8u;
    // 0x373fec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x373FE8u, 0x373FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373FF0u;
label_373ff0:
    // 0x373ff0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x373ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x373ff4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x373ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x373ff8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x373FF8u;
    {
        const bool branch_taken_0x373ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373FF8u;
        // 0x373ffc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ff8) {
            ctx->pc = 0x373FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373fd0;
        }
    }
    ctx->pc = 0x374000u;
    // 0x374000: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x374000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x374004: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x374004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x374008: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x374008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37400c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x37400cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374010: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x374010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x374014: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x374014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x374018: 0x8fa50094  lw          $a1, 0x94($sp)
    ctx->pc = 0x374018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x37401c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x37401cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x374020: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x374020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x374024: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x374024u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x374028: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x374028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x37402c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x37402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x374030: 0x8fa8009c  lw          $t0, 0x9C($sp)
    ctx->pc = 0x374030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x374034: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x374034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x374038: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x374038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x37403c: 0x8faa00a0  lw          $t2, 0xA0($sp)
    ctx->pc = 0x37403cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x374040: 0x8fab00a4  lw          $t3, 0xA4($sp)
    ctx->pc = 0x374040u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x374044: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x374044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x374048: 0xafbe0028  sw          $fp, 0x28($sp)
    ctx->pc = 0x374048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
    // 0x37404c: 0xafb70030  sw          $s7, 0x30($sp)
    ctx->pc = 0x37404cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 23));
    // 0x374050: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x374050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x374054: 0xc05abb0  jal         func_16AEC0
    ctx->pc = 0x374054u;
    SET_GPR_U32(ctx, 31, 0x37405Cu);
    ctx->pc = 0x374058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374054u;
    // 0x374058: 0xafb50040  sw          $s5, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AEC0u, 0x374054u, 0x37405Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37405Cu;
label_37405c:
    // 0x37405c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37405cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374060: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x374060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x374064: 0x0  nop
    ctx->pc = 0x374064u;
    // NOP
label_374068:
    // 0x374068: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x374068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37406c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37406cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x374070: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x374070u;
    SET_GPR_U32(ctx, 31, 0x374078u);
    ctx->pc = 0x374074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374070u;
    // 0x374074: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x374070u, 0x374078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374078u;
label_374078:
    // 0x374078: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x374078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37407c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374080: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x374080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x374084: 0xc102576  jal         func_4095D8
    ctx->pc = 0x374084u;
    SET_GPR_U32(ctx, 31, 0x37408Cu);
    ctx->pc = 0x374088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374084u;
    // 0x374088: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x374084u, 0x37408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37408Cu;
label_37408c:
    // 0x37408c: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x37408cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x374090: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x374090u;
    {
        const bool branch_taken_0x374090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374090u;
        // 0x374094: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374090) {
            ctx->pc = 0x374068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374068;
        }
    }
    ctx->pc = 0x374098u;
    // 0x374098: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x374098u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37409c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x37409cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3740a0:
    // 0x3740a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x3740a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3740a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3740a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3740a8: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x3740A8u;
    SET_GPR_U32(ctx, 31, 0x3740B0u);
    ctx->pc = 0x3740ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740A8u;
    // 0x3740ac: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x3740A8u, 0x3740B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740B0u;
label_3740b0:
    // 0x3740b0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3740b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3740b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740b8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3740b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3740bc: 0xc102576  jal         func_4095D8
    ctx->pc = 0x3740BCu;
    SET_GPR_U32(ctx, 31, 0x3740C4u);
    ctx->pc = 0x3740C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3740BCu;
    // 0x3740c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x3740BCu, 0x3740C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3740C4u;
label_3740c4:
    // 0x3740c4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x3740c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3740c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3740C8u;
    {
        const bool branch_taken_0x3740c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3740CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740C8u;
        // 0x3740cc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3740c8) {
            ctx->pc = 0x3740A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3740a0;
        }
    }
    ctx->pc = 0x3740D0u;
    // 0x3740d0: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x3740d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3740d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3740d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3740d8: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x3740d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3740dc: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x3740dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3740e0: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x3740e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3740e4: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x3740e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3740e8: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x3740e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3740ec: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x3740ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3740f0: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x3740f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3740f4: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x3740f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3740f8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3740f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3740fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3740FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3740FCu;
        // 0x374100: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3740FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374104u;
    // 0x374104: 0x0  nop
    ctx->pc = 0x374104u;
    // NOP
    ctx->pc = 0x374108u;
}
