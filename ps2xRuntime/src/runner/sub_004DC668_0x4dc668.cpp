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

// Function: sub_004DC668
// Address: 0x4dc668 - 0x4dc698
void sub_004DC668_0x4dc668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC668_0x4dc668");
#endif

    switch (ctx->pc) {
        case 0x4dc668u: goto label_4dc668;
        case 0x4dc66cu: goto label_4dc66c;
        case 0x4dc670u: goto label_4dc670;
        case 0x4dc674u: goto label_4dc674;
        case 0x4dc678u: goto label_4dc678;
        case 0x4dc67cu: goto label_4dc67c;
        case 0x4dc680u: goto label_4dc680;
        case 0x4dc684u: goto label_4dc684;
        case 0x4dc688u: goto label_4dc688;
        case 0x4dc68cu: goto label_4dc68c;
        case 0x4dc690u: goto label_4dc690;
        case 0x4dc694u: goto label_4dc694;
        default: break;
    }

    ctx->pc = 0x4dc668u;

label_4dc668:
    // 0x4dc668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4dc66c:
    // 0x4dc66c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4dc670:
    // 0x4dc670: 0x8c850214  lw          $a1, 0x214($a0)
    ctx->pc = 0x4dc670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 532)));
label_4dc674:
    // 0x4dc674: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4dc674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4dc678:
    // 0x4dc678: 0x844401a0  lh          $a0, 0x1A0($v0)
    ctx->pc = 0x4dc678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 416)));
label_4dc67c:
    // 0x4dc67c: 0x8c4301a4  lw          $v1, 0x1A4($v0)
    ctx->pc = 0x4dc67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 420)));
label_4dc680:
    // 0x4dc680: 0x60f809  jalr        $v1
label_4dc684:
    if (ctx->pc == 0x4DC684u) {
        ctx->pc = 0x4DC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC680u;
        // 0x4dc684: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC688u;
        goto label_4dc688;
    }
    ctx->pc = 0x4DC680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DC688u);
        ctx->pc = 0x4DC684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC680u;
        // 0x4dc684: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC680u, 0x4DC688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DC688u;
label_4dc688:
    // 0x4dc688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4dc68c:
    // 0x4dc68c: 0x3e00008  jr          $ra
label_4dc690:
    if (ctx->pc == 0x4DC690u) {
        ctx->pc = 0x4DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC68Cu;
        // 0x4dc690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DC694u;
        goto label_4dc694;
    }
    ctx->pc = 0x4DC68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC68Cu;
        // 0x4dc690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC694u;
label_4dc694:
    // 0x4dc694: 0x0  nop
    ctx->pc = 0x4dc694u;
    // NOP
    ctx->pc = 0x4dc698u;
}
