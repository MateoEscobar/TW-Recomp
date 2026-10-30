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

// Function: sub_002AEF78
// Address: 0x2aef78 - 0x2aefc8
void sub_002AEF78_0x2aef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEF78_0x2aef78");
#endif

    switch (ctx->pc) {
        case 0x2aefa4u: goto label_2aefa4;
        default: break;
    }

    ctx->pc = 0x2aef78u;

    // 0x2aef78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aef78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aef7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aef7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aef80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aef80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aef84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aef84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aef88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aef88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aef8c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2aef8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aef90: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x2aef90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2aef94: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AEF94u;
    {
        const bool branch_taken_0x2aef94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2aef94) {
            ctx->pc = 0x2AEF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AEF94u;
            // 0x2aef98: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AEFA8u;
            goto label_2aefa8;
        }
    }
    ctx->pc = 0x2AEF9Cu;
    // 0x2aef9c: 0xc0abc2e  jal         func_2AF0B8
    ctx->pc = 0x2AEF9Cu;
    SET_GPR_U32(ctx, 31, 0x2AEFA4u);
    ctx->pc = 0x2AF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0B8u, 0x2AEF9Cu, 0x2AEFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEFA4u;
label_2aefa4:
    // 0x2aefa4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2aefa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2aefa8:
    // 0x2aefa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aefa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aefac: 0xa05102d3  sb          $s1, 0x2D3($v0)
    ctx->pc = 0x2aefacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 723), (uint8_t)GPR_U32(ctx, 17));
    // 0x2aefb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aefb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aefb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2aefb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2aefb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2aefb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aefbc: 0xa06002e5  sb          $zero, 0x2E5($v1)
    ctx->pc = 0x2aefbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 741), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aefc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEFC0u;
        // 0x2aefc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEFC8u;
}
