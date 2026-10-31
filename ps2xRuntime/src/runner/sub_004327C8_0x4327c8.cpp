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

// Function: sub_004327C8
// Address: 0x4327c8 - 0x432810
void sub_004327C8_0x4327c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004327C8_0x4327c8");
#endif

    switch (ctx->pc) {
        case 0x4327dcu: goto label_4327dc;
        default: break;
    }

    ctx->pc = 0x4327c8u;

    // 0x4327c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4327c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4327cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4327ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x4327d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4327d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4327d4: 0xc10c998  jal         func_432660
    ctx->pc = 0x4327D4u;
    SET_GPR_U32(ctx, 31, 0x4327DCu);
    ctx->pc = 0x4327D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4327D4u;
    // 0x4327d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432660u, 0x4327D4u, 0x4327DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4327DCu;
label_4327dc:
    // 0x4327dc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4327DCu;
    {
        const bool branch_taken_0x4327dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4327E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4327DCu;
        // 0x4327e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4327dc) {
            ctx->pc = 0x432800u;
            goto label_432800;
        }
    }
    ctx->pc = 0x4327E4u;
    // 0x4327e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4327e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4327e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4327e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4327ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4327ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4327f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x4327f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x4327f4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x4327f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4327f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4327f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4327fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4327fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_432800:
    // 0x432800: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x432800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x432804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x432804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432808: 0x3e00008  jr          $ra
    ctx->pc = 0x432808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432808u;
        // 0x43280c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x432810u;
}
