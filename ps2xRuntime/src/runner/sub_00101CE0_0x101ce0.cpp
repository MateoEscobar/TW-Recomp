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

// Function: sub_00101CE0
// Address: 0x101ce0 - 0x101d68
void sub_00101CE0_0x101ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101CE0_0x101ce0");
#endif

    switch (ctx->pc) {
        case 0x101d04u: goto label_101d04;
        case 0x101d18u: goto label_101d18;
        default: break;
    }

    ctx->pc = 0x101ce0u;

    // 0x101ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x101ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x101ce4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x101ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x101ce8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x101ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x101cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cf0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x101cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x101cf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x101cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101cfc: 0xc040494  jal         func_101250
    ctx->pc = 0x101CFCu;
    SET_GPR_U32(ctx, 31, 0x101D04u);
    ctx->pc = 0x101D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101CFCu;
    // 0x101d00: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101250u, 0x101CFCu, 0x101D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101D04u;
label_101d04:
    // 0x101d04: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x101d04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x101d08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d0c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x101D0Cu;
    {
        const bool branch_taken_0x101d0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D0Cu;
        // 0x101d10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d0c) {
            ctx->pc = 0x101D44u;
            goto label_101d44;
        }
    }
    ctx->pc = 0x101D14u;
    // 0x101d14: 0x0  nop
    ctx->pc = 0x101d14u;
    // NOP
label_101d18:
    // 0x101d18: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x101d18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x101d1c: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x101D1Cu;
    {
        const bool branch_taken_0x101d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x101d1c) {
            ctx->pc = 0x101D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101D1Cu;
            // 0x101d20: 0x9603001a  lhu         $v1, 0x1A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101D30u;
            goto label_101d30;
        }
    }
    ctx->pc = 0x101D24u;
    // 0x101d24: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x101d24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x101d28: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x101D28u;
    {
        const bool branch_taken_0x101d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D28u;
        // 0x101d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d28) {
            ctx->pc = 0x101D4Cu;
            goto label_101d4c;
        }
    }
    ctx->pc = 0x101D30u;
label_101d30:
    // 0x101d30: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x101d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d34: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x101d34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x101d38: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x101d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x101d3c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x101D3Cu;
    {
        const bool branch_taken_0x101d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D3Cu;
        // 0x101d40: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d3c) {
            ctx->pc = 0x101D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101d18;
        }
    }
    ctx->pc = 0x101D44u;
label_101d44:
    // 0x101d44: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x101d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x101d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x101d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101d4c:
    // 0x101d4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x101d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x101d50: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x101d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101d54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x101d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101d58: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x101d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101d60: 0x3e00008  jr          $ra
    ctx->pc = 0x101D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101D60u;
        // 0x101d64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101D68u;
}
