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

// Function: sub_0016F980
// Address: 0x16f980 - 0x16fa00
void sub_0016F980_0x16f980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F980_0x16f980");
#endif

    switch (ctx->pc) {
        case 0x16f9a4u: goto label_16f9a4;
        case 0x16f9bcu: goto label_16f9bc;
        default: break;
    }

    ctx->pc = 0x16f980u;

    // 0x16f980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16f980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16f984: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x16f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16f988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f98c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x16f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x16f990: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x16f990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x16f994: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16f994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16f998: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16f998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f99c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x16F99Cu;
    SET_GPR_U32(ctx, 31, 0x16F9A4u);
    ctx->pc = 0x16F9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F99Cu;
    // 0x16f9a0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x16F99Cu, 0x16F9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9A4u;
label_16f9a4:
    // 0x16f9a4: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x16f9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x16f9a8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x16f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x16f9ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f9b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f9b4: 0xc137950  jal         func_4DE540
    ctx->pc = 0x16F9B4u;
    SET_GPR_U32(ctx, 31, 0x16F9BCu);
    ctx->pc = 0x16F9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F9B4u;
    // 0x16f9b8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE540u, 0x16F9B4u, 0x16F9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9BCu;
label_16f9bc:
    // 0x16f9bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x16f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16f9c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f9c4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F9C4u;
    {
        const bool branch_taken_0x16f9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9C4u;
        // 0x16f9c8: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9c4) {
            ctx->pc = 0x16F9E4u;
            goto label_16f9e4;
        }
    }
    ctx->pc = 0x16F9CCu;
    // 0x16f9cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x16f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x16f9d0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16f9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16f9d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F9D4u;
    {
        const bool branch_taken_0x16f9d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9D4u;
        // 0x16f9d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9d4) {
            ctx->pc = 0x16F9E8u;
            goto label_16f9e8;
        }
    }
    ctx->pc = 0x16F9DCu;
    // 0x16f9dc: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F9DCu;
    {
        const bool branch_taken_0x16f9dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9DCu;
        // 0x16f9e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9dc) {
            ctx->pc = 0x16F9ECu;
            goto label_16f9ec;
        }
    }
    ctx->pc = 0x16F9E4u;
label_16f9e4:
    // 0x16f9e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f9e8:
    // 0x16f9e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x16f9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16f9ec:
    // 0x16f9ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x16f9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16f9f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16f9f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f9f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16F9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9F4u;
        // 0x16f9f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F9F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F9FCu;
    // 0x16f9fc: 0x0  nop
    ctx->pc = 0x16f9fcu;
    // NOP
    ctx->pc = 0x16fa00u;
}
