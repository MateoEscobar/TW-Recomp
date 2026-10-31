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

// Function: sub_002F69D8
// Address: 0x2f69d8 - 0x2f6a80
void sub_002F69D8_0x2f69d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F69D8_0x2f69d8");
#endif

    switch (ctx->pc) {
        case 0x2f6a04u: goto label_2f6a04;
        case 0x2f6a14u: goto label_2f6a14;
        case 0x2f6a24u: goto label_2f6a24;
        case 0x2f6a48u: goto label_2f6a48;
        default: break;
    }

    ctx->pc = 0x2f69d8u;

    // 0x2f69d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f69d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f69dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2f69dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2f69e0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2f69e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2f69e4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f69e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69e8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2f69e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2f69ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f69ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f69f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f69f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f69f4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2f69f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f69f8: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x2f69f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2f69fc: 0xc05959e  jal         func_165678
    ctx->pc = 0x2F69FCu;
    SET_GPR_U32(ctx, 31, 0x2F6A04u);
    ctx->pc = 0x2F6A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F69FCu;
    // 0x2f6a00: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x2F69FCu, 0x2F6A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A04u;
label_2f6a04:
    // 0x2f6a04: 0x12020018  beq         $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F6A04u;
    {
        const bool branch_taken_0x2f6a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A04u;
        // 0x2f6a08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a04) {
            ctx->pc = 0x2F6A68u;
            goto label_2f6a68;
        }
    }
    ctx->pc = 0x2F6A0Cu;
    // 0x2f6a0c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2F6A0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A14u);
    ctx->pc = 0x2F6A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A0Cu;
    // 0x2f6a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2F6A0Cu, 0x2F6A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A14u;
label_2f6a14:
    // 0x2f6a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f6a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a18: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6a1c: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2F6A1Cu;
    SET_GPR_U32(ctx, 31, 0x2F6A24u);
    ctx->pc = 0x2F6A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A1Cu;
    // 0x2f6a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2F6A1Cu, 0x2F6A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A24u;
label_2f6a24:
    // 0x2f6a24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f6a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6a28: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F6A28u;
    {
        const bool branch_taken_0x2f6a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F6A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A28u;
        // 0x2f6a2c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a28) {
            ctx->pc = 0x2F6A40u;
            goto label_2f6a40;
        }
    }
    ctx->pc = 0x2F6A30u;
    // 0x2f6a30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f6a34: 0x8c440b88  lw          $a0, 0xB88($v0)
    ctx->pc = 0x2f6a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
    // 0x2f6a38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f6a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2f6a3c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f6a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2f6a40:
    // 0x2f6a40: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2F6A40u;
    SET_GPR_U32(ctx, 31, 0x2F6A48u);
    ctx->pc = 0x2F6A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6A40u;
    // 0x2f6a44: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2F6A40u, 0x2F6A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6A48u;
label_2f6a48:
    // 0x2f6a48: 0x14520007  bne         $v0, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F6A48u;
    {
        const bool branch_taken_0x2f6a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2F6A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A48u;
        // 0x2f6a4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6a48) {
            ctx->pc = 0x2F6A68u;
            goto label_2f6a68;
        }
    }
    ctx->pc = 0x2F6A50u;
    // 0x2f6a50: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2f6a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2f6a54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2f6a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f6a58: 0x8c820b88  lw          $v0, 0xB88($a0)
    ctx->pc = 0x2f6a58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x510B88u));
    // 0x2f6a5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f6a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f6a60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f6a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2f6a64: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2f6a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2f6a68:
    // 0x2f6a68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2f6a68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6a6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2f6a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6a74: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6A74u;
        // 0x2f6a78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6A7Cu;
    // 0x2f6a7c: 0x0  nop
    ctx->pc = 0x2f6a7cu;
    // NOP
    ctx->pc = 0x2f6a80u;
}
