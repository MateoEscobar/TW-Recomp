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

// Function: sub_00329978
// Address: 0x329978 - 0x329ac0
void sub_00329978_0x329978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329978_0x329978");
#endif

    switch (ctx->pc) {
        case 0x3299b0u: goto label_3299b0;
        case 0x3299bcu: goto label_3299bc;
        case 0x3299c8u: goto label_3299c8;
        case 0x3299ccu: goto label_3299cc;
        case 0x3299f0u: goto label_3299f0;
        case 0x3299fcu: goto label_3299fc;
        case 0x329a40u: goto label_329a40;
        case 0x329a6cu: goto label_329a6c;
        case 0x329a78u: goto label_329a78;
        case 0x329a84u: goto label_329a84;
        default: break;
    }

    ctx->pc = 0x329978u;

    // 0x329978: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x329978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x32997c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x32997cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x329980: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x329980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329984: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x329984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x329988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x329988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32998c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x32998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x329990: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x329990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x329994: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x329994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x329998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x329998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32999c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x32999cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3299a0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3299a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3299a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3299a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3299a8: 0xc0ca608  jal         func_329820
    ctx->pc = 0x3299A8u;
    SET_GPR_U32(ctx, 31, 0x3299B0u);
    ctx->pc = 0x3299ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299A8u;
    // 0x3299ac: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329820u, 0x3299A8u, 0x3299B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299B0u;
label_3299b0:
    // 0x3299b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3299b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3299b4: 0xc0ca5ba  jal         func_3296E8
    ctx->pc = 0x3299B4u;
    SET_GPR_U32(ctx, 31, 0x3299BCu);
    ctx->pc = 0x3299B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299B4u;
    // 0x3299b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296E8u, 0x3299B4u, 0x3299BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299BCu;
label_3299bc:
    // 0x3299bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3299bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3299c0: 0xc0ca5d2  jal         func_329748
    ctx->pc = 0x3299C0u;
    SET_GPR_U32(ctx, 31, 0x3299C8u);
    ctx->pc = 0x3299C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299C0u;
    // 0x3299c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329748u, 0x3299C0u, 0x3299C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299C8u;
label_3299c8:
    // 0x3299c8: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x3299c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3299cc:
    // 0x3299cc: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x3299CCu;
    {
        const bool branch_taken_0x3299cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3299D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299CCu;
        // 0x3299d0: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299cc) {
            ctx->pc = 0x329A18u;
            goto label_329a18;
        }
    }
    ctx->pc = 0x3299D4u;
    // 0x3299d4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3299d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3299d8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3299d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3299dc: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x3299dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x3299e0: 0x1840fff9  blez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3299E0u;
    {
        const bool branch_taken_0x3299e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3299E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3299E0u;
        // 0x3299e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3299e0) {
            ctx->pc = 0x3299C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3299c8;
        }
    }
    ctx->pc = 0x3299E8u;
    // 0x3299e8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x3299e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3299ec: 0x0  nop
    ctx->pc = 0x3299ecu;
    // NOP
label_3299f0:
    // 0x3299f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3299f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3299f4: 0xc0ca634  jal         func_3298D0
    ctx->pc = 0x3299F4u;
    SET_GPR_U32(ctx, 31, 0x3299FCu);
    ctx->pc = 0x3299F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3299F4u;
    // 0x3299f8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298D0u, 0x3299F4u, 0x3299FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3299FCu;
label_3299fc:
    // 0x3299fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3299fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x329a00: 0x8642000e  lh          $v0, 0xE($s2)
    ctx->pc = 0x329a00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 14)));
    // 0x329a04: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x329a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329a08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x329A08u;
    {
        const bool branch_taken_0x329a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A08u;
        // 0x329a0c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a08) {
            ctx->pc = 0x3299F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3299f0;
        }
    }
    ctx->pc = 0x329A10u;
    // 0x329a10: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x329A10u;
    {
        const bool branch_taken_0x329a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A10u;
        // 0x329a14: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a10) {
            ctx->pc = 0x3299CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3299cc;
        }
    }
    ctx->pc = 0x329A18u;
label_329a18:
    // 0x329a18: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x329A18u;
    {
        const bool branch_taken_0x329a18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A18u;
        // 0x329a1c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a18) {
            ctx->pc = 0x329AA0u;
            goto label_329aa0;
        }
    }
    ctx->pc = 0x329A20u;
    // 0x329a20: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x329a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x329a24: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x329a24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x329a28: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x329a28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x329a2c: 0x1840ffe6  blez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x329A2Cu;
    {
        const bool branch_taken_0x329a2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x329A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A2Cu;
        // 0x329a30: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a2c) {
            ctx->pc = 0x3299C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3299c8;
        }
    }
    ctx->pc = 0x329A34u;
    // 0x329a34: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x329a38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a3c: 0x0  nop
    ctx->pc = 0x329a3cu;
    // NOP
label_329a40:
    // 0x329a40: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x329a44: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x329a48: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x329a4c: 0x5074000e  beql        $v1, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x329A4Cu;
    {
        const bool branch_taken_0x329a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x329a4c) {
            ctx->pc = 0x329A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A4Cu;
            // 0x329a50: 0x86220006  lh          $v0, 0x6($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A88u;
            goto label_329a88;
        }
    }
    ctx->pc = 0x329A54u;
    // 0x329a54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x329a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x329a58: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x329A58u;
    {
        const bool branch_taken_0x329a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x329a58) {
            ctx->pc = 0x329A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x329A58u;
            // 0x329a5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x329A70u;
            goto label_329a70;
        }
    }
    ctx->pc = 0x329A60u;
    // 0x329a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x329a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329a64: 0xc0cc77e  jal         func_331DF8
    ctx->pc = 0x329A64u;
    SET_GPR_U32(ctx, 31, 0x329A6Cu);
    ctx->pc = 0x329A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A64u;
    // 0x329a68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DF8u, 0x329A64u, 0x329A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A6Cu;
label_329a6c:
    // 0x329a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x329a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_329a70:
    // 0x329a70: 0xc0ca634  jal         func_3298D0
    ctx->pc = 0x329A70u;
    SET_GPR_U32(ctx, 31, 0x329A78u);
    ctx->pc = 0x329A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A70u;
    // 0x329a74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298D0u, 0x329A70u, 0x329A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A78u;
label_329a78:
    // 0x329a78: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x329a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x329a7c: 0xc0ca634  jal         func_3298D0
    ctx->pc = 0x329A7Cu;
    SET_GPR_U32(ctx, 31, 0x329A84u);
    ctx->pc = 0x329A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329A7Cu;
    // 0x329a80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3298D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298D0u, 0x329A7Cu, 0x329A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329A84u;
label_329a84:
    // 0x329a84: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x329a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_329a88:
    // 0x329a88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x329a88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x329a8c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x329a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x329a90: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x329A90u;
    {
        const bool branch_taken_0x329a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x329A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A90u;
        // 0x329a94: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a90) {
            ctx->pc = 0x329A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329a40;
        }
    }
    ctx->pc = 0x329A98u;
    // 0x329a98: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
    ctx->pc = 0x329A98u;
    {
        const bool branch_taken_0x329a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x329A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329A98u;
        // 0x329a9c: 0x8fb20004  lw          $s2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329a98) {
            ctx->pc = 0x3299CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3299cc;
        }
    }
    ctx->pc = 0x329AA0u;
label_329aa0:
    // 0x329aa0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x329aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x329aa4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x329aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x329aa8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x329aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x329aac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x329aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x329ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x329ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x329ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x329AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x329AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329AB4u;
        // 0x329ab8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x329ABCu;
    // 0x329abc: 0x0  nop
    ctx->pc = 0x329abcu;
    // NOP
    ctx->pc = 0x329ac0u;
}
