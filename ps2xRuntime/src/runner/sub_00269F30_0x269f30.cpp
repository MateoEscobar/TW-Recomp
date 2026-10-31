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

// Function: sub_00269F30
// Address: 0x269f30 - 0x26a1f0
void sub_00269F30_0x269f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269F30_0x269f30");
#endif

    switch (ctx->pc) {
        case 0x269f5cu: goto label_269f5c;
        case 0x269f70u: goto label_269f70;
        case 0x269f80u: goto label_269f80;
        case 0x269f8cu: goto label_269f8c;
        case 0x269fa4u: goto label_269fa4;
        case 0x269fb4u: goto label_269fb4;
        case 0x269fc4u: goto label_269fc4;
        case 0x269fdcu: goto label_269fdc;
        case 0x269ff4u: goto label_269ff4;
        case 0x26a008u: goto label_26a008;
        case 0x26a01cu: goto label_26a01c;
        case 0x26a034u: goto label_26a034;
        case 0x26a048u: goto label_26a048;
        case 0x26a050u: goto label_26a050;
        case 0x26a060u: goto label_26a060;
        case 0x26a0a4u: goto label_26a0a4;
        case 0x26a0d0u: goto label_26a0d0;
        case 0x26a150u: goto label_26a150;
        case 0x26a17cu: goto label_26a17c;
        case 0x26a18cu: goto label_26a18c;
        case 0x26a19cu: goto label_26a19c;
        case 0x26a1a8u: goto label_26a1a8;
        case 0x26a1b8u: goto label_26a1b8;
        case 0x26a1c8u: goto label_26a1c8;
        default: break;
    }

    ctx->pc = 0x269f30u;

    // 0x269f30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x269f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x269f34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x269f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269f38: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x269f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x269f3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x269f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x269f40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x269f40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x269f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f48: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x269f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x269f4c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x269f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x269f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x269f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x269f54: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x269F54u;
    SET_GPR_U32(ctx, 31, 0x269F5Cu);
    ctx->pc = 0x269F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F54u;
    // 0x269f58: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x269F54u, 0x269F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F5Cu;
label_269f5c:
    // 0x269f5c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x269f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x269f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f68: 0xc095358  jal         func_254D60
    ctx->pc = 0x269F68u;
    SET_GPR_U32(ctx, 31, 0x269F70u);
    ctx->pc = 0x269F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F68u;
    // 0x269f6c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x269F68u, 0x269F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F70u;
label_269f70:
    // 0x269f70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x269f70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x269f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f78: 0xc099c6a  jal         func_2671A8
    ctx->pc = 0x269F78u;
    SET_GPR_U32(ctx, 31, 0x269F80u);
    ctx->pc = 0x269F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F78u;
    // 0x269f7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2671A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2671A8u, 0x269F78u, 0x269F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F80u;
label_269f80:
    // 0x269f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x269f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f84: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x269F84u;
    SET_GPR_U32(ctx, 31, 0x269F8Cu);
    ctx->pc = 0x269F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F84u;
    // 0x269f88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x269F84u, 0x269F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269F8Cu;
label_269f8c:
    // 0x269f8c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x269f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x269f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x269f94: 0x1202008c  beq         $s0, $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x269F94u;
    {
        const bool branch_taken_0x269f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x269F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269F94u;
        // 0x269f98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269f94) {
            ctx->pc = 0x26A1C8u;
            goto label_26a1c8;
        }
    }
    ctx->pc = 0x269F9Cu;
    // 0x269f9c: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x269F9Cu;
    SET_GPR_U32(ctx, 31, 0x269FA4u);
    ctx->pc = 0x269FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269F9Cu;
    // 0x269fa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x269F9Cu, 0x269FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269FA4u;
label_269fa4:
    // 0x269fa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x269FA4u;
    {
        const bool branch_taken_0x269fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fa4) {
            ctx->pc = 0x269FC8u;
            goto label_269fc8;
        }
    }
    ctx->pc = 0x269FACu;
    // 0x269fac: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x269FACu;
    SET_GPR_U32(ctx, 31, 0x269FB4u);
    ctx->pc = 0x269FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269FACu;
    // 0x269fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x269FACu, 0x269FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269FB4u;
label_269fb4:
    // 0x269fb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269FB4u;
    {
        const bool branch_taken_0x269fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FB4u;
        // 0x269fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fb4) {
            ctx->pc = 0x269FC8u;
            goto label_269fc8;
        }
    }
    ctx->pc = 0x269FBCu;
    // 0x269fbc: 0xc089998  jal         func_226660
    ctx->pc = 0x269FBCu;
    SET_GPR_U32(ctx, 31, 0x269FC4u);
    ctx->pc = 0x269FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269FBCu;
    // 0x269fc0: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x269FBCu, 0x269FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269FC4u;
label_269fc4:
    // 0x269fc4: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x269fc4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_269fc8:
    // 0x269fc8: 0x16000080  bnez        $s0, . + 4 + (0x80 << 2)
    ctx->pc = 0x269FC8u;
    {
        const bool branch_taken_0x269fc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FC8u;
        // 0x269fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fc8) {
            ctx->pc = 0x26A1CCu;
            goto label_26a1cc;
        }
    }
    ctx->pc = 0x269FD0u;
    // 0x269fd0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269fd4: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x269FD4u;
    SET_GPR_U32(ctx, 31, 0x269FDCu);
    ctx->pc = 0x269FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269FD4u;
    // 0x269fd8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x269FD4u, 0x269FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269FDCu;
label_269fdc:
    // 0x269fdc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x269fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x269fe0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x269fe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x269fe4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x269FE4u;
    {
        const bool branch_taken_0x269fe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269fe4) {
            ctx->pc = 0x269FF8u;
            goto label_269ff8;
        }
    }
    ctx->pc = 0x269FECu;
    // 0x269fec: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x269FECu;
    SET_GPR_U32(ctx, 31, 0x269FF4u);
    ctx->pc = 0x269FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269FECu;
    // 0x269ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x269FECu, 0x269FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269FF4u;
label_269ff4:
    // 0x269ff4: 0x28500023  slti        $s0, $v0, 0x23
    ctx->pc = 0x269ff4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)35) ? 1 : 0);
label_269ff8:
    // 0x269ff8: 0x16000071  bnez        $s0, . + 4 + (0x71 << 2)
    ctx->pc = 0x269FF8u;
    {
        const bool branch_taken_0x269ff8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x269FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FF8u;
        // 0x269ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ff8) {
            ctx->pc = 0x26A1C0u;
            goto label_26a1c0;
        }
    }
    ctx->pc = 0x26A000u;
    // 0x26a000: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x26A000u;
    SET_GPR_U32(ctx, 31, 0x26A008u);
    ctx->pc = 0x26A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A000u;
    // 0x26a004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26A000u, 0x26A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A008u;
label_26a008:
    // 0x26a008: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x26a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x26a00c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26A00Cu;
    {
        const bool branch_taken_0x26a00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26a00c) {
            ctx->pc = 0x26A048u;
            goto label_26a048;
        }
    }
    ctx->pc = 0x26A014u;
    // 0x26a014: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x26A014u;
    SET_GPR_U32(ctx, 31, 0x26A01Cu);
    ctx->pc = 0x26A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A014u;
    // 0x26a018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26A014u, 0x26A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A01Cu;
label_26a01c:
    // 0x26a01c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26a020: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26A020u;
    {
        const bool branch_taken_0x26a020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A020u;
        // 0x26a024: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a020) {
            ctx->pc = 0x26A048u;
            goto label_26a048;
        }
    }
    ctx->pc = 0x26A028u;
    // 0x26a028: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26a028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a02c: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x26A02Cu;
    SET_GPR_U32(ctx, 31, 0x26A034u);
    ctx->pc = 0x26A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A02Cu;
    // 0x26a030: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26A02Cu, 0x26A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A034u;
label_26a034:
    // 0x26a034: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A034u;
    {
        const bool branch_taken_0x26a034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A034u;
        // 0x26a038: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a034) {
            ctx->pc = 0x26A048u;
            goto label_26a048;
        }
    }
    ctx->pc = 0x26A03Cu;
    // 0x26a03c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26a03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26a040: 0xc09a8a6  jal         func_26A298
    ctx->pc = 0x26A040u;
    SET_GPR_U32(ctx, 31, 0x26A048u);
    ctx->pc = 0x26A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A040u;
    // 0x26a044: 0x24050275  addiu       $a1, $zero, 0x275 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A298u, 0x26A040u, 0x26A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A048u;
label_26a048:
    // 0x26a048: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x26A048u;
    SET_GPR_U32(ctx, 31, 0x26A050u);
    ctx->pc = 0x26A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A048u;
    // 0x26a04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26A048u, 0x26A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A050u;
label_26a050:
    // 0x26a050: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26A050u;
    {
        const bool branch_taken_0x26a050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a050) {
            ctx->pc = 0x26A054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A050u;
            // 0x26a054: 0x822201b0  lb          $v0, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A070u;
            goto label_26a070;
        }
    }
    ctx->pc = 0x26A058u;
    // 0x26a058: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x26A058u;
    SET_GPR_U32(ctx, 31, 0x26A060u);
    ctx->pc = 0x26A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A058u;
    // 0x26a05c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x26A058u, 0x26A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A060u;
label_26a060:
    // 0x26a060: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26a064: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26A064u;
    {
        const bool branch_taken_0x26a064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A064u;
        // 0x26a068: 0x2a62025d  slti        $v0, $s3, 0x25D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)605) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a064) {
            ctx->pc = 0x26A0DCu;
            goto label_26a0dc;
        }
    }
    ctx->pc = 0x26A06Cu;
    // 0x26a06c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26a06cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_26a070:
    // 0x26a070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a074: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26a078: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26a078u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26a07c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A07Cu;
    {
        const bool branch_taken_0x26a07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a07c) {
            ctx->pc = 0x26A094u;
            goto label_26a094;
        }
    }
    ctx->pc = 0x26A084u;
    // 0x26a084: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x26a084u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x26a088: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26a088u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26a08c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A08Cu;
    {
        const bool branch_taken_0x26a08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a08c) {
            ctx->pc = 0x26A09Cu;
            goto label_26a09c;
        }
    }
    ctx->pc = 0x26A094u;
label_26a094:
    // 0x26a094: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26a094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26a098: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26a09c:
    // 0x26a09c: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x26A09Cu;
    SET_GPR_U32(ctx, 31, 0x26A0A4u);
    ctx->pc = 0x26A0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A09Cu;
    // 0x26a0a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x26A09Cu, 0x26A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0A4u;
label_26a0a4:
    // 0x26a0a4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26A0A4u;
    {
        const bool branch_taken_0x26a0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0A4u;
        // 0x26a0a8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0a4) {
            ctx->pc = 0x26A19Cu;
            goto label_26a19c;
        }
    }
    ctx->pc = 0x26A0ACu;
    // 0x26a0ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0b0: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x26a0b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x26a0b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a0b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a0b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26a0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26a0bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a0c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26a0c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a0c8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x26A0C8u;
    SET_GPR_U32(ctx, 31, 0x26A0D0u);
    ctx->pc = 0x26A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A0C8u;
    // 0x26a0cc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x26A0C8u, 0x26A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0D0u;
label_26a0d0:
    // 0x26a0d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x26a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x26a0d4: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x26A0D4u;
    {
        const bool branch_taken_0x26a0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0D4u;
        // 0x26a0d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0d4) {
            ctx->pc = 0x26A184u;
            goto label_26a184;
        }
    }
    ctx->pc = 0x26A0DCu;
label_26a0dc:
    // 0x26a0dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26a0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26a0e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A0E0u;
    {
        const bool branch_taken_0x26a0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0E0u;
        // 0x26a0e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0e0) {
            ctx->pc = 0x26A0F4u;
            goto label_26a0f4;
        }
    }
    ctx->pc = 0x26A0E8u;
    // 0x26a0e8: 0x2a62026d  slti        $v0, $s3, 0x26D
    ctx->pc = 0x26a0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)621) ? 1 : 0);
    // 0x26a0ec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A0ECu;
    {
        const bool branch_taken_0x26a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a0ec) {
            ctx->pc = 0x26A0F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A0ECu;
            // 0x26a0f0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A110u;
            goto label_26a110;
        }
    }
    ctx->pc = 0x26A0F4u;
label_26a0f4:
    // 0x26a0f4: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x26a0f8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x26a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x26a0fc: 0x52620004  beql        $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A0FCu;
    {
        const bool branch_taken_0x26a0fc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a0fc) {
            ctx->pc = 0x26A100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A0FCu;
            // 0x26a100: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A110u;
            goto label_26a110;
        }
    }
    ctx->pc = 0x26A104u;
    // 0x26a104: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x26a104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x26a108: 0x52620001  beql        $s3, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x26A108u;
    {
        const bool branch_taken_0x26a108 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x26a108) {
            ctx->pc = 0x26A10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A108u;
            // 0x26a10c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A110u;
            goto label_26a110;
        }
    }
    ctx->pc = 0x26A110u;
label_26a110:
    // 0x26a110: 0x5080002b  beql        $a0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x26A110u;
    {
        const bool branch_taken_0x26a110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a110) {
            ctx->pc = 0x26A114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A110u;
            // 0x26a114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A1C0u;
            goto label_26a1c0;
        }
    }
    ctx->pc = 0x26A118u;
    // 0x26a118: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x26a118u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x26a11c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26a11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26a120: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26a124: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26a124u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26a128: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26A128u;
    {
        const bool branch_taken_0x26a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a128) {
            ctx->pc = 0x26A140u;
            goto label_26a140;
        }
    }
    ctx->pc = 0x26A130u;
    // 0x26a130: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x26a130u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x26a134: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26a134u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26a138: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A138u;
    {
        const bool branch_taken_0x26a138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a138) {
            ctx->pc = 0x26A148u;
            goto label_26a148;
        }
    }
    ctx->pc = 0x26A140u;
label_26a140:
    // 0x26a140: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x26a140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x26a144: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26a144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26a148:
    // 0x26a148: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x26A148u;
    SET_GPR_U32(ctx, 31, 0x26A150u);
    ctx->pc = 0x26A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A148u;
    // 0x26a14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x26A148u, 0x26A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A150u;
label_26a150:
    // 0x26a150: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26A150u;
    {
        const bool branch_taken_0x26a150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A150u;
        // 0x26a154: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a150) {
            ctx->pc = 0x26A19Cu;
            goto label_26a19c;
        }
    }
    ctx->pc = 0x26A158u;
    // 0x26a158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a15c: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x26a15cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x26a160: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26a160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x26a164: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x26a164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x26a168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26a168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a16c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26a16cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a170: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26a170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26a174: 0xc088178  jal         func_2205E0
    ctx->pc = 0x26A174u;
    SET_GPR_U32(ctx, 31, 0x26A17Cu);
    ctx->pc = 0x26A178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A174u;
    // 0x26a178: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x26A174u, 0x26A17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A17Cu;
label_26a17c:
    // 0x26a17c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x26a180: 0x37a40004  ori         $a0, $sp, 0x4
    ctx->pc = 0x26a180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_26a184:
    // 0x26a184: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x26A184u;
    SET_GPR_U32(ctx, 31, 0x26A18Cu);
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x26A184u, 0x26A18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A18Cu;
label_26a18c:
    // 0x26a18c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26A18Cu;
    {
        const bool branch_taken_0x26a18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A18Cu;
        // 0x26a190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a18c) {
            ctx->pc = 0x26A1A0u;
            goto label_26a1a0;
        }
    }
    ctx->pc = 0x26A194u;
    // 0x26a194: 0xc087dc0  jal         func_21F700
    ctx->pc = 0x26A194u;
    SET_GPR_U32(ctx, 31, 0x26A19Cu);
    ctx->pc = 0x26A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A194u;
    // 0x26a198: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F700u, 0x26A194u, 0x26A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A19Cu;
label_26a19c:
    // 0x26a19c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a1a0:
    // 0x26a1a0: 0xc089998  jal         func_226660
    ctx->pc = 0x26A1A0u;
    SET_GPR_U32(ctx, 31, 0x26A1A8u);
    ctx->pc = 0x26A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1A0u;
    // 0x26a1a4: 0x24051000  addiu       $a1, $zero, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x26A1A0u, 0x26A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1A8u;
label_26a1a8:
    // 0x26a1a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26A1A8u;
    {
        const bool branch_taken_0x26a1a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1A8u;
        // 0x26a1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1a8) {
            ctx->pc = 0x26A1CCu;
            goto label_26a1cc;
        }
    }
    ctx->pc = 0x26A1B0u;
    // 0x26a1b0: 0xc0899f2  jal         func_2267C8
    ctx->pc = 0x26A1B0u;
    SET_GPR_U32(ctx, 31, 0x26A1B8u);
    ctx->pc = 0x26A1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1B0u;
    // 0x26a1b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267C8u, 0x26A1B0u, 0x26A1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1B8u;
label_26a1b8:
    // 0x26a1b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26A1B8u;
    {
        const bool branch_taken_0x26a1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1B8u;
        // 0x26a1bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1b8) {
            ctx->pc = 0x26A1CCu;
            goto label_26a1cc;
        }
    }
    ctx->pc = 0x26A1C0u;
label_26a1c0:
    // 0x26a1c0: 0xc087dc0  jal         func_21F700
    ctx->pc = 0x26A1C0u;
    SET_GPR_U32(ctx, 31, 0x26A1C8u);
    ctx->pc = 0x26A1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A1C0u;
    // 0x26a1c4: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21F700u, 0x26A1C0u, 0x26A1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A1C8u;
label_26a1c8:
    // 0x26a1c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26a1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26a1cc:
    // 0x26a1cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26a1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26a1d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26a1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26a1d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26a1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26a1d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26a1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26a1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26a1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a1e0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x26a1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26a1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x26A1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A1E4u;
        // 0x26a1e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A1ECu;
    // 0x26a1ec: 0x0  nop
    ctx->pc = 0x26a1ecu;
    // NOP
    ctx->pc = 0x26a1f0u;
}
