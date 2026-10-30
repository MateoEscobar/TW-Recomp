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

// Function: sub_001C4BE0
// Address: 0x1c4be0 - 0x1c4c88
void sub_001C4BE0_0x1c4be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4BE0_0x1c4be0");
#endif

    switch (ctx->pc) {
        case 0x1c4c0cu: goto label_1c4c0c;
        case 0x1c4c20u: goto label_1c4c20;
        case 0x1c4c5cu: goto label_1c4c5c;
        default: break;
    }

    ctx->pc = 0x1c4be0u;

    // 0x1c4be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4be4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c4be8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c4be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c4bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4bf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4bf4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c4bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c4bf8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c4bfc: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1C4BFCu;
    {
        const bool branch_taken_0x1c4bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4bfc) {
            ctx->pc = 0x1C4C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4BFCu;
            // 0x1c4c00: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C74u;
            goto label_1c4c74;
        }
    }
    ctx->pc = 0x1C4C04u;
    // 0x1c4c04: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C4C04u;
    SET_GPR_U32(ctx, 31, 0x1C4C0Cu);
    ctx->pc = 0x1C4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C04u;
    // 0x1c4c08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C4C04u, 0x1C4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C0Cu;
label_1c4c0c:
    // 0x1c4c0c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1C4C0Cu;
    {
        const bool branch_taken_0x1c4c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C0Cu;
        // 0x1c4c10: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c0c) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4C14u;
    // 0x1c4c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c18: 0xc071462  jal         func_1C5188
    ctx->pc = 0x1C4C18u;
    SET_GPR_U32(ctx, 31, 0x1C4C20u);
    ctx->pc = 0x1C4C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C18u;
    // 0x1c4c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5188u, 0x1C4C18u, 0x1C4C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C20u;
label_1c4c20:
    // 0x1c4c20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c4c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4c28: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C4C28u;
    {
        const bool branch_taken_0x1c4c28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C4C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C28u;
        // 0x1c4c2c: 0x51980  sll         $v1, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c28) {
            ctx->pc = 0x1C4C70u;
            goto label_1c4c70;
        }
    }
    ctx->pc = 0x1C4C30u;
    // 0x1c4c30: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1c4c30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4c34: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1c4c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c4c38: 0x9462094e  lhu         $v0, 0x94E($v1)
    ctx->pc = 0x1c4c38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2382)));
    // 0x1c4c3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4C3Cu;
    {
        const bool branch_taken_0x1c4c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4c3c) {
            ctx->pc = 0x1C4C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C4C3Cu;
            // 0x1c4c40: 0x8c660934  lw          $a2, 0x934($v1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2356)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C4C54u;
            goto label_1c4c54;
        }
    }
    ctx->pc = 0x1C4C44u;
    // 0x1c4c44: 0x90620950  lbu         $v0, 0x950($v1)
    ctx->pc = 0x1c4c44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2384)));
    // 0x1c4c48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4C48u;
    {
        const bool branch_taken_0x1c4c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C48u;
        // 0x1c4c4c: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4c48) {
            ctx->pc = 0x1C4C60u;
            goto label_1c4c60;
        }
    }
    ctx->pc = 0x1C4C50u;
    // 0x1c4c50: 0x8c660934  lw          $a2, 0x934($v1)
    ctx->pc = 0x1c4c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2356)));
label_1c4c54:
    // 0x1c4c54: 0xc071258  jal         func_1C4960
    ctx->pc = 0x1C4C54u;
    SET_GPR_U32(ctx, 31, 0x1C4C5Cu);
    ctx->pc = 0x1C4C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4C54u;
    // 0x1c4c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4960u, 0x1C4C54u, 0x1C4C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4C5Cu;
label_1c4c5c:
    // 0x1c4c5c: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1c4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1c4c60:
    // 0x1c4c60: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1c4c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1c4c64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c4c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c4c68: 0xa443094e  sh          $v1, 0x94E($v0)
    ctx->pc = 0x1c4c68u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2382), (uint16_t)GPR_U32(ctx, 3));
    // 0x1c4c6c: 0xa0440950  sb          $a0, 0x950($v0)
    ctx->pc = 0x1c4c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 4));
label_1c4c70:
    // 0x1c4c70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c4c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4c74:
    // 0x1c4c74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c4c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C7Cu;
        // 0x1c4c80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4C84u;
    // 0x1c4c84: 0x0  nop
    ctx->pc = 0x1c4c84u;
    // NOP
    ctx->pc = 0x1c4c88u;
}
