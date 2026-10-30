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

// Function: sub_00258E10
// Address: 0x258e10 - 0x258e88
void sub_00258E10_0x258e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258E10_0x258e10");
#endif

    switch (ctx->pc) {
        case 0x258e38u: goto label_258e38;
        case 0x258e4cu: goto label_258e4c;
        case 0x258e64u: goto label_258e64;
        default: break;
    }

    ctx->pc = 0x258e10u;

    // 0x258e10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258e14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x258e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x258e18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x258e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x258e1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x258e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x258e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x258e24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258e24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258e2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x258e2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e30: 0xc088e58  jal         func_223960
    ctx->pc = 0x258E30u;
    SET_GPR_U32(ctx, 31, 0x258E38u);
    ctx->pc = 0x258E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E30u;
    // 0x258e34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x258E30u, 0x258E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E38u;
label_258e38:
    // 0x258e38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x258E38u;
    {
        const bool branch_taken_0x258e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E38u;
        // 0x258e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e38) {
            ctx->pc = 0x258E68u;
            goto label_258e68;
        }
    }
    ctx->pc = 0x258E40u;
    // 0x258e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x258e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e44: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x258E44u;
    SET_GPR_U32(ctx, 31, 0x258E4Cu);
    ctx->pc = 0x258E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E44u;
    // 0x258e48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x258E44u, 0x258E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E4Cu;
label_258e4c:
    // 0x258e4c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x258E4Cu;
    {
        const bool branch_taken_0x258e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x258E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E4Cu;
        // 0x258e50: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258e4c) {
            ctx->pc = 0x258E6Cu;
            goto label_258e6c;
        }
    }
    ctx->pc = 0x258E54u;
    // 0x258e54: 0x3c0500c1  lui         $a1, 0xC1
    ctx->pc = 0x258e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)193 << 16));
    // 0x258e58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258e5c: 0xc089998  jal         func_226660
    ctx->pc = 0x258E5Cu;
    SET_GPR_U32(ctx, 31, 0x258E64u);
    ctx->pc = 0x258E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258E5Cu;
    // 0x258e60: 0x34a52200  ori         $a1, $a1, 0x2200 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8704);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x258E5Cu, 0x258E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258E64u;
label_258e64:
    // 0x258e64: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x258e64u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_258e68:
    // 0x258e68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x258e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_258e6c:
    // 0x258e6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x258e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258e70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x258e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258e74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x258e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x258E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258E7Cu;
        // 0x258e80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258E84u;
    // 0x258e84: 0x0  nop
    ctx->pc = 0x258e84u;
    // NOP
    ctx->pc = 0x258e88u;
}
