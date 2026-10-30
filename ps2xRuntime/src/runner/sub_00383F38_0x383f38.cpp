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

// Function: sub_00383F38
// Address: 0x383f38 - 0x3842c0
void sub_00383F38_0x383f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383F38_0x383f38");
#endif

    switch (ctx->pc) {
        case 0x383f7cu: goto label_383f7c;
        case 0x383f84u: goto label_383f84;
        case 0x383f98u: goto label_383f98;
        case 0x383fa0u: goto label_383fa0;
        case 0x383fb4u: goto label_383fb4;
        case 0x383fbcu: goto label_383fbc;
        case 0x383fd0u: goto label_383fd0;
        case 0x383fd8u: goto label_383fd8;
        case 0x383fecu: goto label_383fec;
        case 0x383ff4u: goto label_383ff4;
        case 0x384008u: goto label_384008;
        case 0x384010u: goto label_384010;
        case 0x384024u: goto label_384024;
        case 0x38402cu: goto label_38402c;
        case 0x384040u: goto label_384040;
        case 0x384054u: goto label_384054;
        case 0x384068u: goto label_384068;
        case 0x384070u: goto label_384070;
        case 0x384084u: goto label_384084;
        case 0x38408cu: goto label_38408c;
        case 0x3840a0u: goto label_3840a0;
        case 0x3840b4u: goto label_3840b4;
        case 0x3840bcu: goto label_3840bc;
        case 0x3840d0u: goto label_3840d0;
        case 0x3840e8u: goto label_3840e8;
        case 0x384100u: goto label_384100;
        case 0x384108u: goto label_384108;
        case 0x384120u: goto label_384120;
        case 0x384138u: goto label_384138;
        case 0x384140u: goto label_384140;
        case 0x384158u: goto label_384158;
        case 0x384170u: goto label_384170;
        case 0x384178u: goto label_384178;
        case 0x3841e0u: goto label_3841e0;
        case 0x3841e8u: goto label_3841e8;
        case 0x3841f8u: goto label_3841f8;
        case 0x38420cu: goto label_38420c;
        case 0x384220u: goto label_384220;
        case 0x384230u: goto label_384230;
        case 0x384244u: goto label_384244;
        case 0x384258u: goto label_384258;
        case 0x384268u: goto label_384268;
        case 0x38427cu: goto label_38427c;
        default: break;
    }

    ctx->pc = 0x383f38u;

    // 0x383f38: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x383f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
    // 0x383f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x383f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383f40: 0x7fb00340  sq          $s0, 0x340($sp)
    ctx->pc = 0x383f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 16));
    // 0x383f44: 0x7fb20320  sq          $s2, 0x320($sp)
    ctx->pc = 0x383f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 18));
    // 0x383f48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x383f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x383f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f50: 0x7fb10330  sq          $s1, 0x330($sp)
    ctx->pc = 0x383f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 17));
    // 0x383f54: 0x7fb30310  sq          $s3, 0x310($sp)
    ctx->pc = 0x383f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 19));
    // 0x383f58: 0x7fb40300  sq          $s4, 0x300($sp)
    ctx->pc = 0x383f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 20));
    // 0x383f5c: 0x7fb502f0  sq          $s5, 0x2F0($sp)
    ctx->pc = 0x383f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 21));
    // 0x383f60: 0x7fb602e0  sq          $s6, 0x2E0($sp)
    ctx->pc = 0x383f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 22));
    // 0x383f64: 0x7fb702d0  sq          $s7, 0x2D0($sp)
    ctx->pc = 0x383f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 23));
    // 0x383f68: 0x7fbe02c0  sq          $fp, 0x2C0($sp)
    ctx->pc = 0x383f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 30));
    // 0x383f6c: 0xe7b40350  swc1        $f20, 0x350($sp)
    ctx->pc = 0x383f6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
    // 0x383f70: 0xffbf02b0  sd          $ra, 0x2B0($sp)
    ctx->pc = 0x383f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 31));
    // 0x383f74: 0xc102472  jal         func_4091C8
    ctx->pc = 0x383F74u;
    SET_GPR_U32(ctx, 31, 0x383F7Cu);
    ctx->pc = 0x383F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F74u;
    // 0x383f78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x383F74u, 0x383F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F7Cu;
label_383f7c:
    // 0x383f7c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x383F7Cu;
    SET_GPR_U32(ctx, 31, 0x383F84u);
    ctx->pc = 0x383F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F7Cu;
    // 0x383f80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x383F7Cu, 0x383F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F84u;
label_383f84:
    // 0x383f84: 0xafa20280  sw          $v0, 0x280($sp)
    ctx->pc = 0x383f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 2));
    // 0x383f88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383f8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x383f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x383f90: 0xc102472  jal         func_4091C8
    ctx->pc = 0x383F90u;
    SET_GPR_U32(ctx, 31, 0x383F98u);
    ctx->pc = 0x383F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F90u;
    // 0x383f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x383F90u, 0x383F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F98u;
label_383f98:
    // 0x383f98: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x383F98u;
    SET_GPR_U32(ctx, 31, 0x383FA0u);
    ctx->pc = 0x383F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F98u;
    // 0x383f9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x383F98u, 0x383FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FA0u;
label_383fa0:
    // 0x383fa0: 0xafa20284  sw          $v0, 0x284($sp)
    ctx->pc = 0x383fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 2));
    // 0x383fa4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fa8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x383fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x383fac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x383FACu;
    SET_GPR_U32(ctx, 31, 0x383FB4u);
    ctx->pc = 0x383FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FACu;
    // 0x383fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x383FACu, 0x383FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FB4u;
label_383fb4:
    // 0x383fb4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x383FB4u;
    SET_GPR_U32(ctx, 31, 0x383FBCu);
    ctx->pc = 0x383FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FB4u;
    // 0x383fb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x383FB4u, 0x383FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FBCu;
label_383fbc:
    // 0x383fbc: 0xafa20288  sw          $v0, 0x288($sp)
    ctx->pc = 0x383fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 2));
    // 0x383fc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x383fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x383fc8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x383FC8u;
    SET_GPR_U32(ctx, 31, 0x383FD0u);
    ctx->pc = 0x383FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FC8u;
    // 0x383fcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x383FC8u, 0x383FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FD0u;
label_383fd0:
    // 0x383fd0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x383FD0u;
    SET_GPR_U32(ctx, 31, 0x383FD8u);
    ctx->pc = 0x383FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FD0u;
    // 0x383fd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x383FD0u, 0x383FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FD8u;
label_383fd8:
    // 0x383fd8: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x383fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x383fdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383fe0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x383fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x383fe4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x383FE4u;
    SET_GPR_U32(ctx, 31, 0x383FECu);
    ctx->pc = 0x383FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FE4u;
    // 0x383fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x383FE4u, 0x383FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FECu;
label_383fec:
    // 0x383fec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x383FECu;
    SET_GPR_U32(ctx, 31, 0x383FF4u);
    ctx->pc = 0x383FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FECu;
    // 0x383ff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x383FECu, 0x383FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FF4u;
label_383ff4:
    // 0x383ff4: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x383ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
    // 0x383ff8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x383ff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383ffc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x383ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x384000: 0xc102472  jal         func_4091C8
    ctx->pc = 0x384000u;
    SET_GPR_U32(ctx, 31, 0x384008u);
    ctx->pc = 0x384004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384000u;
    // 0x384004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x384000u, 0x384008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384008u;
label_384008:
    // 0x384008: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x384008u;
    SET_GPR_U32(ctx, 31, 0x384010u);
    ctx->pc = 0x38400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384008u;
    // 0x38400c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x384008u, 0x384010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384010u;
label_384010:
    // 0x384010: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x384010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x384014: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384018: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x384018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x38401c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x38401Cu;
    SET_GPR_U32(ctx, 31, 0x384024u);
    ctx->pc = 0x384020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38401Cu;
    // 0x384020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x38401Cu, 0x384024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384024u;
label_384024:
    // 0x384024: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x384024u;
    SET_GPR_U32(ctx, 31, 0x38402Cu);
    ctx->pc = 0x384028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384024u;
    // 0x384028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x384024u, 0x38402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38402Cu;
label_38402c:
    // 0x38402c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x38402cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x384030: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384034: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x384034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x384038: 0xc102488  jal         func_409220
    ctx->pc = 0x384038u;
    SET_GPR_U32(ctx, 31, 0x384040u);
    ctx->pc = 0x38403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384038u;
    // 0x38403c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x384038u, 0x384040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384040u;
label_384040:
    // 0x384040: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x384040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
    // 0x384044: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384048: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x384048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x38404c: 0xc102488  jal         func_409220
    ctx->pc = 0x38404Cu;
    SET_GPR_U32(ctx, 31, 0x384054u);
    ctx->pc = 0x384050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38404Cu;
    // 0x384050: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x38404Cu, 0x384054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384054u;
label_384054:
    // 0x384054: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x384054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
    // 0x384058: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38405c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x38405cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x384060: 0xc102472  jal         func_4091C8
    ctx->pc = 0x384060u;
    SET_GPR_U32(ctx, 31, 0x384068u);
    ctx->pc = 0x384064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384060u;
    // 0x384064: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x384060u, 0x384068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384068u;
label_384068:
    // 0x384068: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x384068u;
    SET_GPR_U32(ctx, 31, 0x384070u);
    ctx->pc = 0x38406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384068u;
    // 0x38406c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x384068u, 0x384070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384070u;
label_384070:
    // 0x384070: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x384070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
    // 0x384074: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384078: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x384078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x38407c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x38407Cu;
    SET_GPR_U32(ctx, 31, 0x384084u);
    ctx->pc = 0x384080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38407Cu;
    // 0x384080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x38407Cu, 0x384084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384084u;
label_384084:
    // 0x384084: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x384084u;
    SET_GPR_U32(ctx, 31, 0x38408Cu);
    ctx->pc = 0x384088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384084u;
    // 0x384088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x384084u, 0x38408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38408Cu;
label_38408c:
    // 0x38408c: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x38408cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
    // 0x384090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384094: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x384094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x384098: 0xc102488  jal         func_409220
    ctx->pc = 0x384098u;
    SET_GPR_U32(ctx, 31, 0x3840A0u);
    ctx->pc = 0x38409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384098u;
    // 0x38409c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x384098u, 0x3840A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840A0u;
label_3840a0:
    // 0x3840a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3840a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840a4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3840a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3840a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3840a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840ac: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3840ACu;
    SET_GPR_U32(ctx, 31, 0x3840B4u);
    ctx->pc = 0x3840B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840ACu;
    // 0x3840b0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3840ACu, 0x3840B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840B4u;
label_3840b4:
    // 0x3840b4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3840B4u;
    SET_GPR_U32(ctx, 31, 0x3840BCu);
    ctx->pc = 0x3840B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840B4u;
    // 0x3840b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3840B4u, 0x3840BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840BCu;
label_3840bc:
    // 0x3840bc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3840bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3840c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840c4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3840c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3840c8: 0xc102488  jal         func_409220
    ctx->pc = 0x3840C8u;
    SET_GPR_U32(ctx, 31, 0x3840D0u);
    ctx->pc = 0x3840CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840C8u;
    // 0x3840cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3840C8u, 0x3840D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3840D0u;
label_3840d0:
    // 0x3840d0: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x3840d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3840d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3840d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840d8: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x3840d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x3840dc: 0x27b501c0  addiu       $s5, $sp, 0x1C0
    ctx->pc = 0x3840dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x3840e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3840e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840e4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x3840e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3840e8:
    // 0x3840e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3840e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3840ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3840ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840f0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3840f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3840f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3840f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3840f8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x3840F8u;
    SET_GPR_U32(ctx, 31, 0x384100u);
    ctx->pc = 0x3840FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3840F8u;
    // 0x3840fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x3840F8u, 0x384100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384100u;
label_384100:
    // 0x384100: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x384100u;
    SET_GPR_U32(ctx, 31, 0x384108u);
    ctx->pc = 0x384104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384100u;
    // 0x384104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x384100u, 0x384108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384108u;
label_384108:
    // 0x384108: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x384108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38410c: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x38410cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x384110: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384110u;
    {
        const bool branch_taken_0x384110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384110u;
        // 0x384114: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384110) {
            ctx->pc = 0x3840E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3840e8;
        }
    }
    ctx->pc = 0x384118u;
    // 0x384118: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38411c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x38411cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_384120:
    // 0x384120: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x384120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x384124: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384128: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x384128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38412c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x38412cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384130: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x384130u;
    SET_GPR_U32(ctx, 31, 0x384138u);
    ctx->pc = 0x384134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384130u;
    // 0x384134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x384130u, 0x384138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384138u;
label_384138:
    // 0x384138: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x384138u;
    SET_GPR_U32(ctx, 31, 0x384140u);
    ctx->pc = 0x38413Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384138u;
    // 0x38413c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x384138u, 0x384140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384140u;
label_384140:
    // 0x384140: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x384140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x384144: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x384144u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x384148: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384148u;
    {
        const bool branch_taken_0x384148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384148u;
        // 0x38414c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384148) {
            ctx->pc = 0x384120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384120;
        }
    }
    ctx->pc = 0x384150u;
    // 0x384150: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384154: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x384154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_384158:
    // 0x384158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x384158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x38415c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384160: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x384160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x384164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384168: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x384168u;
    SET_GPR_U32(ctx, 31, 0x384170u);
    ctx->pc = 0x38416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384168u;
    // 0x38416c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x384168u, 0x384170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384170u;
label_384170:
    // 0x384170: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x384170u;
    SET_GPR_U32(ctx, 31, 0x384178u);
    ctx->pc = 0x384174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384170u;
    // 0x384174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x384170u, 0x384178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384178u;
label_384178:
    // 0x384178: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x384178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x38417c: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x38417cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x384180: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384180u;
    {
        const bool branch_taken_0x384180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384180u;
        // 0x384184: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384180) {
            ctx->pc = 0x384158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384158;
        }
    }
    ctx->pc = 0x384188u;
    // 0x384188: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x384188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x38418c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x38418cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x384190: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x384190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x384194: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x384194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x384198: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x384198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38419c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x38419cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3841a0: 0x8fa2029c  lw          $v0, 0x29C($sp)
    ctx->pc = 0x3841a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x3841a4: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x3841a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x3841a8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3841a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3841ac: 0x8fa202a0  lw          $v0, 0x2A0($sp)
    ctx->pc = 0x3841acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x3841b0: 0x8fa60288  lw          $a2, 0x288($sp)
    ctx->pc = 0x3841b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x3841b4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x3841b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x3841b8: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x3841b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x3841bc: 0x8fa7028c  lw          $a3, 0x28C($sp)
    ctx->pc = 0x3841bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x3841c0: 0x8fa80290  lw          $t0, 0x290($sp)
    ctx->pc = 0x3841c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x3841c4: 0x8fa90294  lw          $t1, 0x294($sp)
    ctx->pc = 0x3841c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x3841c8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3841c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3841cc: 0xafbe0028  sw          $fp, 0x28($sp)
    ctx->pc = 0x3841ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 30));
    // 0x3841d0: 0xafb70030  sw          $s7, 0x30($sp)
    ctx->pc = 0x3841d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 23));
    // 0x3841d4: 0xafb60038  sw          $s6, 0x38($sp)
    ctx->pc = 0x3841d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 22));
    // 0x3841d8: 0xc08a2be  jal         func_228AF8
    ctx->pc = 0x3841D8u;
    SET_GPR_U32(ctx, 31, 0x3841E0u);
    ctx->pc = 0x3841DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841D8u;
    // 0x3841dc: 0xafb50020  sw          $s5, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228AF8u, 0x3841D8u, 0x3841E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3841E0u;
label_3841e0:
    // 0x3841e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3841e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3841e4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3841e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3841e8:
    // 0x3841e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3841e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x3841ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3841ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3841f0: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x3841F0u;
    SET_GPR_U32(ctx, 31, 0x3841F8u);
    ctx->pc = 0x3841F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841F0u;
    // 0x3841f4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x3841F0u, 0x3841F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3841F8u;
label_3841f8:
    // 0x3841f8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3841f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3841fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3841fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384200: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x384200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x384204: 0xc102576  jal         func_4095D8
    ctx->pc = 0x384204u;
    SET_GPR_U32(ctx, 31, 0x38420Cu);
    ctx->pc = 0x384208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384204u;
    // 0x384208: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x384204u, 0x38420Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38420Cu;
label_38420c:
    // 0x38420c: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x38420cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x384210: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384210u;
    {
        const bool branch_taken_0x384210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384210u;
        // 0x384214: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384210) {
            ctx->pc = 0x3841E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3841e8;
        }
    }
    ctx->pc = 0x384218u;
    // 0x384218: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38421c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x38421cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_384220:
    // 0x384220: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x384220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x384224: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x384224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x384228: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x384228u;
    SET_GPR_U32(ctx, 31, 0x384230u);
    ctx->pc = 0x38422Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384228u;
    // 0x38422c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x384228u, 0x384230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384230u;
label_384230:
    // 0x384230: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x384230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384234: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x384234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384238: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x384238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x38423c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x38423Cu;
    SET_GPR_U32(ctx, 31, 0x384244u);
    ctx->pc = 0x384240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38423Cu;
    // 0x384240: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x38423Cu, 0x384244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384244u;
label_384244:
    // 0x384244: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x384244u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x384248: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384248u;
    {
        const bool branch_taken_0x384248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384248u;
        // 0x38424c: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384248) {
            ctx->pc = 0x384220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384220;
        }
    }
    ctx->pc = 0x384250u;
    // 0x384250: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x384250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384254: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x384254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_384258:
    // 0x384258: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x384258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x38425c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x38425cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x384260: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x384260u;
    SET_GPR_U32(ctx, 31, 0x384268u);
    ctx->pc = 0x384264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384260u;
    // 0x384264: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x384260u, 0x384268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384268u;
label_384268:
    // 0x384268: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x384268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38426c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38426cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384270: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x384270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384274: 0xc102576  jal         func_4095D8
    ctx->pc = 0x384274u;
    SET_GPR_U32(ctx, 31, 0x38427Cu);
    ctx->pc = 0x384278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384274u;
    // 0x384278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x384274u, 0x38427Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38427Cu;
label_38427c:
    // 0x38427c: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x38427cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x384280: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x384280u;
    {
        const bool branch_taken_0x384280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384280u;
        // 0x384284: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384280) {
            ctx->pc = 0x384258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384258;
        }
    }
    ctx->pc = 0x384288u;
    // 0x384288: 0x7bb00340  lq          $s0, 0x340($sp)
    ctx->pc = 0x384288u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x38428c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38428cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384290: 0x7bb10330  lq          $s1, 0x330($sp)
    ctx->pc = 0x384290u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x384294: 0x7bb20320  lq          $s2, 0x320($sp)
    ctx->pc = 0x384294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x384298: 0x7bb30310  lq          $s3, 0x310($sp)
    ctx->pc = 0x384298u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x38429c: 0x7bb40300  lq          $s4, 0x300($sp)
    ctx->pc = 0x38429cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x3842a0: 0x7bb502f0  lq          $s5, 0x2F0($sp)
    ctx->pc = 0x3842a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x3842a4: 0x7bb602e0  lq          $s6, 0x2E0($sp)
    ctx->pc = 0x3842a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x3842a8: 0x7bb702d0  lq          $s7, 0x2D0($sp)
    ctx->pc = 0x3842a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x3842ac: 0x7bbe02c0  lq          $fp, 0x2C0($sp)
    ctx->pc = 0x3842acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x3842b0: 0xdfbf02b0  ld          $ra, 0x2B0($sp)
    ctx->pc = 0x3842b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x3842b4: 0xc7b40350  lwc1        $f20, 0x350($sp)
    ctx->pc = 0x3842b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3842b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3842B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3842BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842B8u;
        // 0x3842bc: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3842B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3842C0u;
}
