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

// Function: sub_002AB470
// Address: 0x2ab470 - 0x2ab4b8
void sub_002AB470_0x2ab470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB470_0x2ab470");
#endif

    switch (ctx->pc) {
        case 0x2ab4a4u: goto label_2ab4a4;
        default: break;
    }

    ctx->pc = 0x2ab470u;

    // 0x2ab470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab474: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ab474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ab478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ab47c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ab47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ab480: 0x90830070  lbu         $v1, 0x70($a0)
    ctx->pc = 0x2ab480u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2ab484: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2AB484u;
    {
        const bool branch_taken_0x2ab484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AB488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB484u;
        // 0x2ab488: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab484) {
            ctx->pc = 0x2AB4A8u;
            goto label_2ab4a8;
        }
    }
    ctx->pc = 0x2AB48Cu;
    // 0x2ab48c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2ab48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2ab490: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2ab490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ab494: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AB494u;
    {
        const bool branch_taken_0x2ab494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB494u;
        // 0x2ab498: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab494) {
            ctx->pc = 0x2AB4ACu;
            goto label_2ab4ac;
        }
    }
    ctx->pc = 0x2AB49Cu;
    // 0x2ab49c: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x2AB49Cu;
    SET_GPR_U32(ctx, 31, 0x2AB4A4u);
    ctx->pc = 0x2AB4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB49Cu;
    // 0x2ab4a0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x2AB49Cu, 0x2AB4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB4A4u;
label_2ab4a4:
    // 0x2ab4a4: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x2ab4a4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ab4a8:
    // 0x2ab4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ab4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ab4ac:
    // 0x2ab4ac: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2ab4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab4b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB4B0u;
        // 0x2ab4b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB4B8u;
}
