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

// Function: sub_002F61E0
// Address: 0x2f61e0 - 0x2f6220
void sub_002F61E0_0x2f61e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F61E0_0x2f61e0");
#endif

    switch (ctx->pc) {
        case 0x2f61f8u: goto label_2f61f8;
        default: break;
    }

    ctx->pc = 0x2f61e0u;

    // 0x2f61e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f61e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f61e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f61e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f61e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f61ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f61ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f61f0: 0xc088ed2  jal         func_223B48
    ctx->pc = 0x2F61F0u;
    SET_GPR_U32(ctx, 31, 0x2F61F8u);
    ctx->pc = 0x2F61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F61F0u;
    // 0x2f61f4: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B48u, 0x2F61F0u, 0x2F61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F61F8u;
label_2f61f8:
    // 0x2f61f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f61f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f61fc: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F61FCu;
    {
        const bool branch_taken_0x2f61fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f61fc) {
            ctx->pc = 0x2F6200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F61FCu;
            // 0x2f6200: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6214u;
            goto label_2f6214;
        }
    }
    ctx->pc = 0x2F6204u;
    // 0x2f6204: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f6208: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x2f6208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2f620c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2f620cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2f6210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f6210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f6214:
    // 0x2f6214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f6214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6218: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6218u;
        // 0x2f621c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6220u;
}
