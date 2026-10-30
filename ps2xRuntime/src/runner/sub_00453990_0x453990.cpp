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

// Function: sub_00453990
// Address: 0x453990 - 0x453ab0
void sub_00453990_0x453990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453990_0x453990");
#endif

    switch (ctx->pc) {
        case 0x4539b8u: goto label_4539b8;
        case 0x4539ccu: goto label_4539cc;
        case 0x4539e0u: goto label_4539e0;
        case 0x4539f4u: goto label_4539f4;
        case 0x453a0cu: goto label_453a0c;
        case 0x453a24u: goto label_453a24;
        case 0x453a2cu: goto label_453a2c;
        case 0x453a48u: goto label_453a48;
        case 0x453a60u: goto label_453a60;
        case 0x453a6cu: goto label_453a6c;
        case 0x453a7cu: goto label_453a7c;
        default: break;
    }

    ctx->pc = 0x453990u;

    // 0x453990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x453990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x453994: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x453994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x453998: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x453998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x45399c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x45399cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x4539a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x4539a4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4539a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x4539a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4539a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x4539ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4539acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4539b0: 0xc114cee  jal         func_4533B8
    ctx->pc = 0x4539B0u;
    SET_GPR_U32(ctx, 31, 0x4539B8u);
    ctx->pc = 0x4539B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4539B0u;
    // 0x4539b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4533B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4533B8u, 0x4539B0u, 0x4539B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539B8u;
label_4539b8:
    // 0x4539b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4539b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539bc: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x4539BCu;
    {
        const bool branch_taken_0x4539bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4539C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4539BCu;
        // 0x4539c0: 0xae93000c  sw          $s3, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4539bc) {
            ctx->pc = 0x453A88u;
            goto label_453a88;
        }
    }
    ctx->pc = 0x4539C4u;
    // 0x4539c4: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x4539C4u;
    SET_GPR_U32(ctx, 31, 0x4539CCu);
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x4539C4u, 0x4539CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539CCu;
label_4539cc:
    // 0x4539cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4539ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539d0: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x4539D0u;
    {
        const bool branch_taken_0x4539d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4539D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4539D0u;
        // 0x4539d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4539d0) {
            ctx->pc = 0x453A80u;
            goto label_453a80;
        }
    }
    ctx->pc = 0x4539D8u;
    // 0x4539d8: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x4539D8u;
    SET_GPR_U32(ctx, 31, 0x4539E0u);
    ctx->pc = 0x4539DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4539D8u;
    // 0x4539dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x4539D8u, 0x4539E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539E0u;
label_4539e0:
    // 0x4539e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4539e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539e4: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4539E4u;
    {
        const bool branch_taken_0x4539e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4539e4) {
            ctx->pc = 0x453A74u;
            goto label_453a74;
        }
    }
    ctx->pc = 0x4539ECu;
    // 0x4539ec: 0xc11dad8  jal         func_476B60
    ctx->pc = 0x4539ECu;
    SET_GPR_U32(ctx, 31, 0x4539F4u);
    ctx->pc = 0x476B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B60u, 0x4539ECu, 0x4539F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4539F4u;
label_4539f4:
    // 0x4539f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4539f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4539f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4539fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4539fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x453a00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a04: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x453A04u;
    SET_GPR_U32(ctx, 31, 0x453A0Cu);
    ctx->pc = 0x453A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A04u;
    // 0x453a08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x453A04u, 0x453A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A0Cu;
label_453a0c:
    // 0x453a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a10: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x453a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x453a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x453a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a1c: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x453A1Cu;
    SET_GPR_U32(ctx, 31, 0x453A24u);
    ctx->pc = 0x453A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A1Cu;
    // 0x453a20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x453A1Cu, 0x453A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A24u;
label_453a24:
    // 0x453a24: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x453A24u;
    SET_GPR_U32(ctx, 31, 0x453A2Cu);
    ctx->pc = 0x453A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A24u;
    // 0x453a28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x453A24u, 0x453A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A2Cu;
label_453a2c:
    // 0x453a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a30: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x453A30u;
    {
        const bool branch_taken_0x453a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x453A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453A30u;
        // 0x453a34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453a30) {
            ctx->pc = 0x453A74u;
            goto label_453a74;
        }
    }
    ctx->pc = 0x453A38u;
    // 0x453a38: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x453a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x453a3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x453a3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a40: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x453A40u;
    SET_GPR_U32(ctx, 31, 0x453A48u);
    ctx->pc = 0x453A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A40u;
    // 0x453a44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x453A40u, 0x453A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A48u;
label_453a48:
    // 0x453a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a4c: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x453a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x453a50: 0x24c635e8  addiu       $a2, $a2, 0x35E8
    ctx->pc = 0x453a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13800));
    // 0x453a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a58: 0xc11dadc  jal         func_476B70
    ctx->pc = 0x453A58u;
    SET_GPR_U32(ctx, 31, 0x453A60u);
    ctx->pc = 0x453A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A58u;
    // 0x453a5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476B70u, 0x453A58u, 0x453A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A60u;
label_453a60:
    // 0x453a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a64: 0xc11daf2  jal         func_476BC8
    ctx->pc = 0x453A64u;
    SET_GPR_U32(ctx, 31, 0x453A6Cu);
    ctx->pc = 0x453A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A64u;
    // 0x453a68: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x476BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x476BC8u, 0x453A64u, 0x453A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A6Cu;
label_453a6c:
    // 0x453a6c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x453A6Cu;
    {
        const bool branch_taken_0x453a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x453A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453A6Cu;
        // 0x453a70: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x453a6c) {
            ctx->pc = 0x453A80u;
            goto label_453a80;
        }
    }
    ctx->pc = 0x453A74u;
label_453a74:
    // 0x453a74: 0xc1295f2  jal         func_4A57C8
    ctx->pc = 0x453A74u;
    SET_GPR_U32(ctx, 31, 0x453A7Cu);
    ctx->pc = 0x453A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x453A74u;
    // 0x453a78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A57C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A57C8u, 0x453A74u, 0x453A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453A7Cu;
label_453a7c:
    // 0x453a7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x453a7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453a80:
    // 0x453a80: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x453a80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x453a84: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x453a84u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_453a88:
    // 0x453a88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x453a88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x453a8c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x453a8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x453a90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x453a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x453a94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x453a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x453a98: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x453a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453a9c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x453a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x453aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x453AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x453AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x453AA4u;
        // 0x453aa8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453AACu;
    // 0x453aac: 0x0  nop
    ctx->pc = 0x453aacu;
    // NOP
    ctx->pc = 0x453ab0u;
}
