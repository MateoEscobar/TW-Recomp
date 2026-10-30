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

// Function: sub_0028F240
// Address: 0x28f240 - 0x28f2b0
void sub_0028F240_0x28f240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F240_0x28f240");
#endif

    switch (ctx->pc) {
        case 0x28f264u: goto label_28f264;
        case 0x28f26cu: goto label_28f26c;
        case 0x28f29cu: goto label_28f29c;
        default: break;
    }

    ctx->pc = 0x28f240u;

    // 0x28f240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f244: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28f244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28f248: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28f248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28f24c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f250: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x28f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x28f254: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28F254u;
    {
        const bool branch_taken_0x28f254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f254) {
            ctx->pc = 0x28F258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F254u;
            // 0x28f258: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F2A0u;
            goto label_28f2a0;
        }
    }
    ctx->pc = 0x28F25Cu;
    // 0x28f25c: 0xc0a7b76  jal         func_29EDD8
    ctx->pc = 0x28F25Cu;
    SET_GPR_U32(ctx, 31, 0x28F264u);
    ctx->pc = 0x29EDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EDD8u, 0x28F25Cu, 0x28F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F264u;
label_28f264:
    // 0x28f264: 0xc0a4e6c  jal         func_2939B0
    ctx->pc = 0x28F264u;
    SET_GPR_U32(ctx, 31, 0x28F26Cu);
    ctx->pc = 0x28F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28F264u;
    // 0x28f268: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2939B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2939B0u, 0x28F264u, 0x28F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F26Cu;
label_28f26c:
    // 0x28f26c: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x28f270: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F270u;
    {
        const bool branch_taken_0x28f270 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F270u;
        // 0x28f274: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f270) {
            ctx->pc = 0x28F288u;
            goto label_28f288;
        }
    }
    ctx->pc = 0x28F278u;
    // 0x28f278: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28f278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28f27c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28f27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28f280: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F280u;
    {
        const bool branch_taken_0x28f280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F280u;
        // 0x28f284: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f280) {
            ctx->pc = 0x28F28Cu;
            goto label_28f28c;
        }
    }
    ctx->pc = 0x28F288u;
label_28f288:
    // 0x28f288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f28c:
    // 0x28f28c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F28Cu;
    {
        const bool branch_taken_0x28f28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F28Cu;
        // 0x28f290: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f28c) {
            ctx->pc = 0x28F2A0u;
            goto label_28f2a0;
        }
    }
    ctx->pc = 0x28F294u;
    // 0x28f294: 0xc0a7b8c  jal         func_29EE30
    ctx->pc = 0x28F294u;
    SET_GPR_U32(ctx, 31, 0x28F29Cu);
    ctx->pc = 0x29EE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EE30u, 0x28F294u, 0x28F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F29Cu;
label_28f29c:
    // 0x28f29c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28f29cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28f2a0:
    // 0x28f2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F2A4u;
        // 0x28f2a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F2ACu;
    // 0x28f2ac: 0x0  nop
    ctx->pc = 0x28f2acu;
    // NOP
    ctx->pc = 0x28f2b0u;
}
