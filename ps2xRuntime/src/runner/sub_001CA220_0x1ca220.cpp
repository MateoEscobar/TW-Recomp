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

// Function: sub_001CA220
// Address: 0x1ca220 - 0x1ca260
void sub_001CA220_0x1ca220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA220_0x1ca220");
#endif

    switch (ctx->pc) {
        case 0x1ca244u: goto label_1ca244;
        default: break;
    }

    ctx->pc = 0x1ca220u;

    // 0x1ca220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca224: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ca224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ca228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca230: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ca230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca234: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA234u;
    {
        const bool branch_taken_0x1ca234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca234) {
            ctx->pc = 0x1CA238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA234u;
            // 0x1ca238: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA250u;
            goto label_1ca250;
        }
    }
    ctx->pc = 0x1CA23Cu;
    // 0x1ca23c: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x1CA23Cu;
    SET_GPR_U32(ctx, 31, 0x1CA244u);
    ctx->pc = 0x1CA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA23Cu;
    // 0x1ca240: 0x8e050ab4  lw          $a1, 0xAB4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1CA23Cu, 0x1CA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA244u;
label_1ca244:
    // 0x1ca244: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ca244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1ca248: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ca248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca24c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ca24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca250:
    // 0x1ca250: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca254: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA254u;
        // 0x1ca258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA25Cu;
    // 0x1ca25c: 0x0  nop
    ctx->pc = 0x1ca25cu;
    // NOP
    ctx->pc = 0x1ca260u;
}
