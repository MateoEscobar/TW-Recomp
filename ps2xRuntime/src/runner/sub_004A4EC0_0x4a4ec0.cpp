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

// Function: sub_004A4EC0
// Address: 0x4a4ec0 - 0x4a4f28
void sub_004A4EC0_0x4a4ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4EC0_0x4a4ec0");
#endif

    switch (ctx->pc) {
        case 0x4a4ee8u: goto label_4a4ee8;
        case 0x4a4ef8u: goto label_4a4ef8;
        default: break;
    }

    ctx->pc = 0x4a4ec0u;

    // 0x4a4ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a4ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a4ec4: 0x8f828a80  lw          $v0, -0x7580($gp)
    ctx->pc = 0x4a4ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4ec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a4ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4a4ecc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a4eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4a4ed0: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x4a4ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x4a4ed4: 0x2610ad38  addiu       $s0, $s0, -0x52C8
    ctx->pc = 0x4a4ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946104));
    // 0x4a4ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a4ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4edc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a4edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a4ee0: 0xc12a524  jal         func_4A9490
    ctx->pc = 0x4A4EE0u;
    SET_GPR_U32(ctx, 31, 0x4A4EE8u);
    ctx->pc = 0x4A4EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4EE0u;
    // 0x4a4ee4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9490u, 0x4A4EE0u, 0x4A4EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4EE8u;
label_4a4ee8:
    // 0x4a4ee8: 0x8f848a80  lw          $a0, -0x7580($gp)
    ctx->pc = 0x4a4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x4a4eec: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x4a4eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x4a4ef0: 0xc12a522  jal         func_4A9488
    ctx->pc = 0x4A4EF0u;
    SET_GPR_U32(ctx, 31, 0x4A4EF8u);
    ctx->pc = 0x4A4EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4EF0u;
    // 0x4a4ef4: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9488u, 0x4A4EF0u, 0x4A4EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4EF8u;
label_4a4ef8:
    // 0x4a4ef8: 0x8f838a84  lw          $v1, -0x757C($gp)
    ctx->pc = 0x4a4ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x4a4efc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a4efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4f00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a4f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4f04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a4f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a4f08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a4f08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4f0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a4f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4f10: 0xaf838a84  sw          $v1, -0x757C($gp)
    ctx->pc = 0x4a4f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937220), GPR_U32(ctx, 3));
    // 0x4a4f14: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4F14u;
        // 0x4a4f18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4F1Cu;
    // 0x4a4f1c: 0x0  nop
    ctx->pc = 0x4a4f1cu;
    // NOP
    // 0x4a4f20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4a4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a4f24: 0x0  nop
    ctx->pc = 0x4a4f24u;
    // NOP
    ctx->pc = 0x4a4f28u;
}
