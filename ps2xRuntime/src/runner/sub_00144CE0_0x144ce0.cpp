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

// Function: sub_00144CE0
// Address: 0x144ce0 - 0x144d60
void sub_00144CE0_0x144ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144CE0_0x144ce0");
#endif

    switch (ctx->pc) {
        case 0x144cfcu: goto label_144cfc;
        case 0x144d18u: goto label_144d18;
        default: break;
    }

    ctx->pc = 0x144ce0u;

    // 0x144ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144ce4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x144ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x144ce8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144cf4: 0xc0512ea  jal         func_144BA8
    ctx->pc = 0x144CF4u;
    SET_GPR_U32(ctx, 31, 0x144CFCu);
    ctx->pc = 0x144CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144CF4u;
    // 0x144cf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144BA8u, 0x144CF4u, 0x144CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144CFCu;
label_144cfc:
    // 0x144cfc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x144CFCu;
    {
        const bool branch_taken_0x144cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144CFCu;
        // 0x144d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144cfc) {
            ctx->pc = 0x144D4Cu;
            goto label_144d4c;
        }
    }
    ctx->pc = 0x144D04u;
    // 0x144d04: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x144d08: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x144d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x144d0c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x144d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144d10: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x144d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x144d14: 0x0  nop
    ctx->pc = 0x144d14u;
    // NOP
label_144d18:
    // 0x144d18: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144d1c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144d20: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x144d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x144d24: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144d24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144d28: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x144d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x144d2c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x144D2Cu;
    {
        const bool branch_taken_0x144d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144d2c) {
            ctx->pc = 0x144D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144D2Cu;
            // 0x144d30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144D3Cu;
            goto label_144d3c;
        }
    }
    ctx->pc = 0x144D34u;
    // 0x144d34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x144D34u;
    {
        const bool branch_taken_0x144d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D34u;
        // 0x144d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d34) {
            ctx->pc = 0x144D4Cu;
            goto label_144d4c;
        }
    }
    ctx->pc = 0x144D3Cu;
label_144d3c:
    // 0x144d3c: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x144d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x144d40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x144D40u;
    {
        const bool branch_taken_0x144d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D40u;
        // 0x144d44: 0xc51023  subu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144d40) {
            ctx->pc = 0x144D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144d18;
        }
    }
    ctx->pc = 0x144D48u;
    // 0x144d48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x144d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144d4c:
    // 0x144d4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x144d4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x144d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x144d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144d54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x144d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144d58: 0x3e00008  jr          $ra
    ctx->pc = 0x144D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144D58u;
        // 0x144d5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144D60u;
}
