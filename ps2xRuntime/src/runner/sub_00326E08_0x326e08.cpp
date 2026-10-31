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

// Function: sub_00326E08
// Address: 0x326e08 - 0x326e88
void sub_00326E08_0x326e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326E08_0x326e08");
#endif

    switch (ctx->pc) {
        case 0x326e38u: goto label_326e38;
        case 0x326e5cu: goto label_326e5c;
        default: break;
    }

    ctx->pc = 0x326e08u;

    // 0x326e08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x326e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x326e0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326e10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x326e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x326e14: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x326e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x326e18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326e18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326e1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x326e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x326e20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x326e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326e24: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x326E24u;
    {
        const bool branch_taken_0x326e24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x326E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E24u;
        // 0x326e28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e24) {
            ctx->pc = 0x326E68u;
            goto label_326e68;
        }
    }
    ctx->pc = 0x326E2Cu;
    // 0x326e2c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x326e2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326e30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x326e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x326e34: 0x0  nop
    ctx->pc = 0x326e34u;
    // NOP
label_326e38:
    // 0x326e38: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x326e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x326e3c: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x326e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x326e40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326e44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x326e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326e48: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x326e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x326e4c: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x326E4Cu;
    {
        const bool branch_taken_0x326e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x326E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E4Cu;
        // 0x326e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326e4c) {
            ctx->pc = 0x326E6Cu;
            goto label_326e6c;
        }
    }
    ctx->pc = 0x326E54u;
    // 0x326e54: 0xc0c99be  jal         func_3266F8
    ctx->pc = 0x326E54u;
    SET_GPR_U32(ctx, 31, 0x326E5Cu);
    ctx->pc = 0x326E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326E54u;
    // 0x326e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3266F8u, 0x326E54u, 0x326E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326E5Cu;
label_326e5c:
    // 0x326e5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x326e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326e60: 0x54b2fff5  bnel        $a1, $s2, . + 4 + (-0xB << 2)
    ctx->pc = 0x326E60u;
    {
        const bool branch_taken_0x326e60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 18));
        if (branch_taken_0x326e60) {
            ctx->pc = 0x326E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326E60u;
            // 0x326e64: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326e38;
        }
    }
    ctx->pc = 0x326E68u;
label_326e68:
    // 0x326e68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x326e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_326e6c:
    // 0x326e6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x326e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326e70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x326e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326e74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x326e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x326E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326E7Cu;
        // 0x326e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326E84u;
    // 0x326e84: 0x0  nop
    ctx->pc = 0x326e84u;
    // NOP
    ctx->pc = 0x326e88u;
}
