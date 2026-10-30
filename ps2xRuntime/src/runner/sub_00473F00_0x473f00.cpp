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

// Function: sub_00473F00
// Address: 0x473f00 - 0x474070
void sub_00473F00_0x473f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00473F00_0x473f00");
#endif

    switch (ctx->pc) {
        case 0x473f24u: goto label_473f24;
        case 0x473f3cu: goto label_473f3c;
        case 0x473f58u: goto label_473f58;
        case 0x473f68u: goto label_473f68;
        case 0x473f78u: goto label_473f78;
        case 0x473f94u: goto label_473f94;
        case 0x473fa0u: goto label_473fa0;
        case 0x473fb0u: goto label_473fb0;
        case 0x473fbcu: goto label_473fbc;
        case 0x473fc8u: goto label_473fc8;
        case 0x473fd4u: goto label_473fd4;
        case 0x474010u: goto label_474010;
        case 0x47401cu: goto label_47401c;
        case 0x474028u: goto label_474028;
        case 0x474034u: goto label_474034;
        case 0x474040u: goto label_474040;
        case 0x47404cu: goto label_47404c;
        default: break;
    }

    ctx->pc = 0x473f00u;

    // 0x473f00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x473f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x473f04: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x473f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x473f08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x473f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x473f0c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x473f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x473f10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x473f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x473f14: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x473f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x473f18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x473f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x473f1c: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x473F1Cu;
    SET_GPR_U32(ctx, 31, 0x473F24u);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x473F1Cu, 0x473F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F24u;
label_473f24:
    // 0x473f24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x473f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f28: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x473F28u;
    {
        const bool branch_taken_0x473f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x473F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473F28u;
        // 0x473f2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473f28) {
            ctx->pc = 0x473F78u;
            goto label_473f78;
        }
    }
    ctx->pc = 0x473F30u;
    // 0x473f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x473f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f34: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x473F34u;
    SET_GPR_U32(ctx, 31, 0x473F3Cu);
    ctx->pc = 0x473F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473F34u;
    // 0x473f38: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x473F34u, 0x473F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F3Cu;
label_473f3c:
    // 0x473f3c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x473F3Cu;
    {
        const bool branch_taken_0x473f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x473F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473F3Cu;
        // 0x473f40: 0x3c060053  lui         $a2, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473f3c) {
            ctx->pc = 0x473F70u;
            goto label_473f70;
        }
    }
    ctx->pc = 0x473F44u;
    // 0x473f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x473f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f48: 0x24c6e7a0  addiu       $a2, $a2, -0x1860
    ctx->pc = 0x473f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961056));
    // 0x473f4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x473f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f50: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x473F50u;
    SET_GPR_U32(ctx, 31, 0x473F58u);
    ctx->pc = 0x473F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473F50u;
    // 0x473f54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x473F50u, 0x473F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F58u;
label_473f58:
    // 0x473f58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x473F58u;
    {
        const bool branch_taken_0x473f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x473f58) {
            ctx->pc = 0x473F70u;
            goto label_473f70;
        }
    }
    ctx->pc = 0x473F60u;
    // 0x473f60: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x473F60u;
    SET_GPR_U32(ctx, 31, 0x473F68u);
    ctx->pc = 0x473F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473F60u;
    // 0x473f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x473F60u, 0x473F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F68u;
label_473f68:
    // 0x473f68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x473F68u;
    {
        const bool branch_taken_0x473f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x473F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x473F68u;
        // 0x473f6c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x473f68) {
            ctx->pc = 0x473FA8u;
            goto label_473fa8;
        }
    }
    ctx->pc = 0x473F70u;
label_473f70:
    // 0x473f70: 0xc1295f2  jal         func_4A57C8
    ctx->pc = 0x473F70u;
    SET_GPR_U32(ctx, 31, 0x473F78u);
    ctx->pc = 0x473F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473F70u;
    // 0x473f74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x473F70u, 0x473F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F78u;
label_473f78:
    // 0x473f78: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x473f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x473f7c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x473f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x473f80: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x473f80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x473f84: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x473f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x473f88: 0x24a5e960  addiu       $a1, $a1, -0x16A0
    ctx->pc = 0x473f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961504));
    // 0x473f8c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x473F8Cu;
    SET_GPR_U32(ctx, 31, 0x473F94u);
    ctx->pc = 0x473F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473F8Cu;
    // 0x473f90: 0x34840006  ori         $a0, $a0, 0x6 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x473F8Cu, 0x473F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473F94u;
label_473f94:
    // 0x473f94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x473f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473f98: 0xc11f024  jal         func_47C090
    ctx->pc = 0x473F98u;
    SET_GPR_U32(ctx, 31, 0x473FA0u);
    ctx->pc = 0x473F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473F98u;
    // 0x473f9c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x473F98u, 0x473FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FA0u;
label_473fa0:
    // 0x473fa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x473fa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473fa4: 0x0  nop
    ctx->pc = 0x473fa4u;
    // NOP
label_473fa8:
    // 0x473fa8: 0xc11851c  jal         func_461470
    ctx->pc = 0x473FA8u;
    SET_GPR_U32(ctx, 31, 0x473FB0u);
    ctx->pc = 0x473FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473FA8u;
    // 0x473fac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x473FA8u, 0x473FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FB0u;
label_473fb0:
    // 0x473fb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x473fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473fb4: 0xc11851c  jal         func_461470
    ctx->pc = 0x473FB4u;
    SET_GPR_U32(ctx, 31, 0x473FBCu);
    ctx->pc = 0x473FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473FB4u;
    // 0x473fb8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x473FB4u, 0x473FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FBCu;
label_473fbc:
    // 0x473fbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x473fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473fc0: 0xc11851c  jal         func_461470
    ctx->pc = 0x473FC0u;
    SET_GPR_U32(ctx, 31, 0x473FC8u);
    ctx->pc = 0x473FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473FC0u;
    // 0x473fc4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x473FC0u, 0x473FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FC8u;
label_473fc8:
    // 0x473fc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x473fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473fcc: 0xc11851c  jal         func_461470
    ctx->pc = 0x473FCCu;
    SET_GPR_U32(ctx, 31, 0x473FD4u);
    ctx->pc = 0x473FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x473FCCu;
    // 0x473fd0: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x473FCCu, 0x473FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x473FD4u;
label_473fd4:
    // 0x473fd4: 0x8f858a80  lw          $a1, -0x7580($gp)
    ctx->pc = 0x473fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x473fd8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x473fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x473fdc: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x473fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x473fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x473fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473fe4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x473fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x473fe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x473fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x473fec: 0xacb2003c  sw          $s2, 0x3C($a1)
    ctx->pc = 0x473fecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 18));
    // 0x473ff0: 0xacb30038  sw          $s3, 0x38($a1)
    ctx->pc = 0x473ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 19));
    // 0x473ff4: 0xacb4001c  sw          $s4, 0x1C($a1)
    ctx->pc = 0x473ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 20));
    // 0x473ff8: 0xacb00020  sw          $s0, 0x20($a1)
    ctx->pc = 0x473ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 16));
    // 0x473ffc: 0xacb00024  sw          $s0, 0x24($a1)
    ctx->pc = 0x473ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 16));
    // 0x474000: 0xacb00028  sw          $s0, 0x28($a1)
    ctx->pc = 0x474000u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 16));
    // 0x474004: 0xacb1002c  sw          $s1, 0x2C($a1)
    ctx->pc = 0x474004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 17));
    // 0x474008: 0xc12944c  jal         func_4A5130
    ctx->pc = 0x474008u;
    SET_GPR_U32(ctx, 31, 0x474010u);
    ctx->pc = 0x47400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474008u;
    // 0x47400c: 0xacb10030  sw          $s1, 0x30($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5130u, 0x474008u, 0x474010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474010u;
label_474010:
    // 0x474010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x474010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474014: 0xc1292da  jal         func_4A4B68
    ctx->pc = 0x474014u;
    SET_GPR_U32(ctx, 31, 0x47401Cu);
    ctx->pc = 0x474018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474014u;
    // 0x474018: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x474014u, 0x47401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47401Cu;
label_47401c:
    // 0x47401c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474020: 0xc1292da  jal         func_4A4B68
    ctx->pc = 0x474020u;
    SET_GPR_U32(ctx, 31, 0x474028u);
    ctx->pc = 0x474024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474020u;
    // 0x474024: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x474020u, 0x474028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474028u;
label_474028:
    // 0x474028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x474028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47402c: 0xc1292da  jal         func_4A4B68
    ctx->pc = 0x47402Cu;
    SET_GPR_U32(ctx, 31, 0x474034u);
    ctx->pc = 0x474030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47402Cu;
    // 0x474030: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x47402Cu, 0x474034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474034u;
label_474034:
    // 0x474034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x474034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474038: 0xc1292da  jal         func_4A4B68
    ctx->pc = 0x474038u;
    SET_GPR_U32(ctx, 31, 0x474040u);
    ctx->pc = 0x47403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474038u;
    // 0x47403c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x474038u, 0x474040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x474040u;
label_474040:
    // 0x474040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x474040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x474044: 0xc1292da  jal         func_4A4B68
    ctx->pc = 0x474044u;
    SET_GPR_U32(ctx, 31, 0x47404Cu);
    ctx->pc = 0x474048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x474044u;
    // 0x474048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4B68u, 0x474044u, 0x47404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47404Cu;
label_47404c:
    // 0x47404c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x47404cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x474050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x474050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x474054: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x474054u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x474058: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x474058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47405c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47405cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x474060: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x474060u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x474064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x474064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x474068: 0x3e00008  jr          $ra
    ctx->pc = 0x474068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x474068u;
        // 0x47406c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x474068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x474070u;
}
