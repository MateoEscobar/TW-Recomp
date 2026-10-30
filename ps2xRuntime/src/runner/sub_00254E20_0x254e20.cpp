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

// Function: sub_00254E20
// Address: 0x254e20 - 0x254e78
void sub_00254E20_0x254e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254E20_0x254e20");
#endif

    switch (ctx->pc) {
        case 0x254e40u: goto label_254e40;
        default: break;
    }

    ctx->pc = 0x254e20u;

    // 0x254e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254e24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x254e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254e28: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x254e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x254e2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254e30: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254E30u;
    {
        const bool branch_taken_0x254e30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x254E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E30u;
        // 0x254e34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e30) {
            ctx->pc = 0x254E44u;
            goto label_254e44;
        }
    }
    ctx->pc = 0x254E38u;
    // 0x254e38: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x254E38u;
    SET_GPR_U32(ctx, 31, 0x254E40u);
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x254E38u, 0x254E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254E40u;
label_254e40:
    // 0x254e40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254e44:
    // 0x254e44: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x254e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254e48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254E48u;
    {
        const bool branch_taken_0x254e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E48u;
        // 0x254e4c: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e48) {
            ctx->pc = 0x254E60u;
            goto label_254e60;
        }
    }
    ctx->pc = 0x254E50u;
    // 0x254e50: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x254e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x254e54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254e58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x254E58u;
    {
        const bool branch_taken_0x254e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E58u;
        // 0x254e5c: 0x9442000e  lhu         $v0, 0xE($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254e58) {
            ctx->pc = 0x254E64u;
            goto label_254e64;
        }
    }
    ctx->pc = 0x254E60u;
label_254e60:
    // 0x254e60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254e64:
    // 0x254e64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x254e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x254E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E6Cu;
        // 0x254e70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E74u;
    // 0x254e74: 0x0  nop
    ctx->pc = 0x254e74u;
    // NOP
    ctx->pc = 0x254e78u;
}
