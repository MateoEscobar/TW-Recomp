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

// Function: sub_004ED338
// Address: 0x4ed338 - 0x4ed388
void sub_004ED338_0x4ed338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED338_0x4ed338");
#endif

    switch (ctx->pc) {
        case 0x4ed358u: goto label_4ed358;
        case 0x4ed368u: goto label_4ed368;
        default: break;
    }

    ctx->pc = 0x4ed338u;

    // 0x4ed338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ed338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ed33c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4ed33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4ed340: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ed340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4ed344: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ed344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed348: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ed348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed34c: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4ED34Cu;
    {
        const bool branch_taken_0x4ed34c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4ED350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED34Cu;
        // 0x4ed350: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed34c) {
            ctx->pc = 0x4ED370u;
            goto label_4ed370;
        }
    }
    ctx->pc = 0x4ED354u;
    // 0x4ed354: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4ed354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4ed358:
    // 0x4ed358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ed358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed35c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4ed35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed360: 0xc13b47a  jal         func_4ED1E8
    ctx->pc = 0x4ED360u;
    SET_GPR_U32(ctx, 31, 0x4ED368u);
    ctx->pc = 0x4ED364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED360u;
    // 0x4ed364: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED1E8u, 0x4ED360u, 0x4ED368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED368u;
label_4ed368:
    // 0x4ed368: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4ED368u;
    {
        const bool branch_taken_0x4ed368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x4ed368) {
            ctx->pc = 0x4ED36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED368u;
            // 0x4ed36c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ED358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ed358;
        }
    }
    ctx->pc = 0x4ED370u;
label_4ed370:
    // 0x4ed370: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4ed370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ed374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ed378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed37c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ED37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ED380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED37Cu;
        // 0x4ed380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ED37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ED384u;
    // 0x4ed384: 0x0  nop
    ctx->pc = 0x4ed384u;
    // NOP
    ctx->pc = 0x4ed388u;
}
