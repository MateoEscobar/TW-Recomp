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

// Function: sub_00198358
// Address: 0x198358 - 0x1983a8
void sub_00198358_0x198358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198358_0x198358");
#endif

    switch (ctx->pc) {
        case 0x198374u: goto label_198374;
        default: break;
    }

    ctx->pc = 0x198358u;

    // 0x198358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19835c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198360: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x198364: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198368: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19836c: 0xc066088  jal         func_198220
    ctx->pc = 0x19836Cu;
    SET_GPR_U32(ctx, 31, 0x198374u);
    ctx->pc = 0x198370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19836Cu;
    // 0x198370: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198220u, 0x19836Cu, 0x198374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198374u;
label_198374:
    // 0x198374: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198374u;
    {
        const bool branch_taken_0x198374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198374u;
        // 0x198378: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198374) {
            ctx->pc = 0x198388u;
            goto label_198388;
        }
    }
    ctx->pc = 0x19837Cu;
    // 0x19837c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x19837cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x198380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x198380u;
    {
        const bool branch_taken_0x198380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198380u;
        // 0x198384: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198380) {
            ctx->pc = 0x198390u;
            goto label_198390;
        }
    }
    ctx->pc = 0x198388u;
label_198388:
    // 0x198388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19838c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x19838cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_198390:
    // 0x198390: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19839c: 0x3e00008  jr          $ra
    ctx->pc = 0x19839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1983A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19839Cu;
        // 0x1983a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1983A4u;
    // 0x1983a4: 0x0  nop
    ctx->pc = 0x1983a4u;
    // NOP
    ctx->pc = 0x1983a8u;
}
