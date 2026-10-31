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

// Function: sub_001560C0
// Address: 0x1560c0 - 0x156100
void sub_001560C0_0x1560c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001560C0_0x1560c0");
#endif

    switch (ctx->pc) {
        case 0x1560c0u: goto label_1560c0;
        case 0x1560c4u: goto label_1560c4;
        case 0x1560c8u: goto label_1560c8;
        case 0x1560ccu: goto label_1560cc;
        case 0x1560d0u: goto label_1560d0;
        case 0x1560d4u: goto label_1560d4;
        case 0x1560d8u: goto label_1560d8;
        case 0x1560dcu: goto label_1560dc;
        case 0x1560e0u: goto label_1560e0;
        case 0x1560e4u: goto label_1560e4;
        case 0x1560e8u: goto label_1560e8;
        case 0x1560ecu: goto label_1560ec;
        case 0x1560f0u: goto label_1560f0;
        case 0x1560f4u: goto label_1560f4;
        case 0x1560f8u: goto label_1560f8;
        case 0x1560fcu: goto label_1560fc;
        default: break;
    }

    ctx->pc = 0x1560c0u;

label_1560c0:
    // 0x1560c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1560c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1560c4:
    // 0x1560c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1560c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1560c8:
    // 0x1560c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1560c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1560cc:
    // 0x1560cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1560ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1560d0:
    // 0x1560d0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1560d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1560d4:
    // 0x1560d4: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_1560d8:
    if (ctx->pc == 0x1560D8u) {
        ctx->pc = 0x1560D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D4u;
        // 0x1560d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560DCu;
        goto label_1560dc;
    }
    ctx->pc = 0x1560D4u;
    {
        const bool branch_taken_0x1560d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1560D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560D4u;
        // 0x1560d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560d4) {
            ctx->pc = 0x1560F4u;
            goto label_1560f4;
        }
    }
    ctx->pc = 0x1560DCu;
label_1560dc:
    // 0x1560dc: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x1560dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1560e0:
    // 0x1560e0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1560e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1560e4:
    // 0x1560e4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1560e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1560e8:
    // 0x1560e8: 0x60f809  jalr        $v1
label_1560ec:
    if (ctx->pc == 0x1560ECu) {
        ctx->pc = 0x1560ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560E8u;
        // 0x1560ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560F0u;
        goto label_1560f0;
    }
    ctx->pc = 0x1560E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1560F0u);
        ctx->pc = 0x1560ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560E8u;
        // 0x1560ec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560E8u, 0x1560F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1560F0u;
label_1560f0:
    // 0x1560f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1560f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1560f4:
    // 0x1560f4: 0x3e00008  jr          $ra
label_1560f8:
    if (ctx->pc == 0x1560F8u) {
        ctx->pc = 0x1560F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560F4u;
        // 0x1560f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560FCu;
        goto label_1560fc;
    }
    ctx->pc = 0x1560F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1560F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560F4u;
        // 0x1560f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1560FCu;
label_1560fc:
    // 0x1560fc: 0x0  nop
    ctx->pc = 0x1560fcu;
    // NOP
    ctx->pc = 0x156100u;
}
