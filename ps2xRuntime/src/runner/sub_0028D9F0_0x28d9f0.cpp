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

// Function: sub_0028D9F0
// Address: 0x28d9f0 - 0x28da60
void sub_0028D9F0_0x28d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D9F0_0x28d9f0");
#endif

    switch (ctx->pc) {
        case 0x28da3cu: goto label_28da3c;
        default: break;
    }

    ctx->pc = 0x28d9f0u;

    // 0x28d9f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28d9f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d9f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28d9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28d9fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d9fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28da00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28da04: 0x8224002e  lb          $a0, 0x2E($s1)
    ctx->pc = 0x28da04u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x28da08: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x28da08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x28da0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DA0Cu;
    {
        const bool branch_taken_0x28da0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA0Cu;
        // 0x28da10: 0x9223002e  lbu         $v1, 0x2E($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da0c) {
            ctx->pc = 0x28DA1Cu;
            goto label_28da1c;
        }
    }
    ctx->pc = 0x28DA14u;
    // 0x28da14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28DA14u;
    {
        const bool branch_taken_0x28da14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA14u;
        // 0x28da18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28da14) {
            ctx->pc = 0x28DA4Cu;
            goto label_28da4c;
        }
    }
    ctx->pc = 0x28DA1Cu;
label_28da1c:
    // 0x28da1c: 0x8230002f  lb          $s0, 0x2F($s1)
    ctx->pc = 0x28da1cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
    // 0x28da20: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x28da20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28da24: 0xa222002e  sb          $v0, 0x2E($s1)
    ctx->pc = 0x28da24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 2));
    // 0x28da28: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x28da28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x28da2c: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x28da2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28da30: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x28da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x28da34: 0xc0a4e84  jal         func_293A10
    ctx->pc = 0x28DA34u;
    SET_GPR_U32(ctx, 31, 0x28DA3Cu);
    ctx->pc = 0x28DA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28DA34u;
    // 0x28da38: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293A10u, 0x28DA34u, 0x28DA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DA3Cu;
label_28da3c:
    // 0x28da3c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x28da3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x28da40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28da40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28da44: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x28da44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28da48: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x28da48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_28da4c:
    // 0x28da4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28da4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28da50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28da50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28da54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28da54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28da58: 0x3e00008  jr          $ra
    ctx->pc = 0x28DA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28DA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DA58u;
        // 0x28da5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DA60u;
}
