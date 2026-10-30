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

// Function: sub_001C5188
// Address: 0x1c5188 - 0x1c5210
void sub_001C5188_0x1c5188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5188_0x1c5188");
#endif

    switch (ctx->pc) {
        case 0x1c51b4u: goto label_1c51b4;
        case 0x1c51c8u: goto label_1c51c8;
        default: break;
    }

    ctx->pc = 0x1c5188u;

    // 0x1c5188: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c5188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c518c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c518cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c5190: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c5190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c5194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c519c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c519cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c51a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c51a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c51a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1c51a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1c51ac: 0xc0e4060  jal         func_390180
    ctx->pc = 0x1C51ACu;
    SET_GPR_U32(ctx, 31, 0x1C51B4u);
    ctx->pc = 0x1C51B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51ACu;
    // 0x1c51b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x1C51ACu, 0x1C51B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B4u;
label_1c51b4:
    // 0x1c51b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C51B4u;
    {
        const bool branch_taken_0x1c51b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51B4u;
        // 0x1c51b8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51b4) {
            ctx->pc = 0x1C51F8u;
            goto label_1c51f8;
        }
    }
    ctx->pc = 0x1C51BCu;
    // 0x1c51bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1c51bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51c0: 0x26240930  addiu       $a0, $s1, 0x930
    ctx->pc = 0x1c51c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2352));
    // 0x1c51c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c51c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c51c8:
    // 0x1c51c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c51cc: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C51CCu;
    {
        const bool branch_taken_0x1c51cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c51cc) {
            ctx->pc = 0x1C51D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C51CCu;
            // 0x1c51d0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C51E8u;
            goto label_1c51e8;
        }
    }
    ctx->pc = 0x1C51D4u;
    // 0x1c51d4: 0x16120003  bne         $s0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C51D4u;
    {
        const bool branch_taken_0x1c51d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x1C51D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51D4u;
        // 0x1c51d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51d4) {
            ctx->pc = 0x1C51E4u;
            goto label_1c51e4;
        }
    }
    ctx->pc = 0x1C51DCu;
    // 0x1c51dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C51DCu;
    {
        const bool branch_taken_0x1c51dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51DCu;
        // 0x1c51e0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51dc) {
            ctx->pc = 0x1C51F8u;
            goto label_1c51f8;
        }
    }
    ctx->pc = 0x1C51E4u;
label_1c51e4:
    // 0x1c51e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1c51e8:
    // 0x1c51e8: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1c51e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1c51ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C51ECu;
    {
        const bool branch_taken_0x1c51ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51ECu;
        // 0x1c51f0: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51ec) {
            ctx->pc = 0x1C51C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51c8;
        }
    }
    ctx->pc = 0x1C51F4u;
    // 0x1c51f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c51f8:
    // 0x1c51f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c51f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c51fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c51fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c5200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c5200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c5204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5208: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5208u;
        // 0x1c520c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C5208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5210u;
}
