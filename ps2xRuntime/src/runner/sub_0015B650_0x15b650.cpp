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

// Function: sub_0015B650
// Address: 0x15b650 - 0x15b6a8
void sub_0015B650_0x15b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B650_0x15b650");
#endif

    switch (ctx->pc) {
        case 0x15b650u: goto label_15b650;
        case 0x15b654u: goto label_15b654;
        case 0x15b658u: goto label_15b658;
        case 0x15b65cu: goto label_15b65c;
        case 0x15b660u: goto label_15b660;
        case 0x15b664u: goto label_15b664;
        case 0x15b668u: goto label_15b668;
        case 0x15b66cu: goto label_15b66c;
        case 0x15b670u: goto label_15b670;
        case 0x15b674u: goto label_15b674;
        case 0x15b678u: goto label_15b678;
        case 0x15b67cu: goto label_15b67c;
        case 0x15b680u: goto label_15b680;
        case 0x15b684u: goto label_15b684;
        case 0x15b688u: goto label_15b688;
        case 0x15b68cu: goto label_15b68c;
        case 0x15b690u: goto label_15b690;
        case 0x15b694u: goto label_15b694;
        case 0x15b698u: goto label_15b698;
        case 0x15b69cu: goto label_15b69c;
        case 0x15b6a0u: goto label_15b6a0;
        case 0x15b6a4u: goto label_15b6a4;
        default: break;
    }

    ctx->pc = 0x15b650u;

label_15b650:
    // 0x15b650: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b654:
    // 0x15b654: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b658:
    // 0x15b658: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b65c:
    // 0x15b65c: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b660:
    // 0x15b660: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b664:
    // 0x15b664: 0x84640158  lh          $a0, 0x158($v1)
    ctx->pc = 0x15b664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 344)));
label_15b668:
    // 0x15b668: 0x8c62015c  lw          $v0, 0x15C($v1)
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 348)));
label_15b66c:
    // 0x15b66c: 0x40f809  jalr        $v0
label_15b670:
    if (ctx->pc == 0x15B670u) {
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B674u;
        goto label_15b674;
    }
    ctx->pc = 0x15B66Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B674u);
        ctx->pc = 0x15B670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B66Cu;
        // 0x15b670: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B66Cu, 0x15B674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B674u;
label_15b674:
    // 0x15b674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15b678:
    if (ctx->pc == 0x15B678u) {
        ctx->pc = 0x15B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B674u;
        // 0x15b678: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B67Cu;
        goto label_15b67c;
    }
    ctx->pc = 0x15B674u;
    {
        const bool branch_taken_0x15b674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B674u;
        // 0x15b678: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b674) {
            ctx->pc = 0x15B688u;
            goto label_15b688;
        }
    }
    ctx->pc = 0x15B67Cu;
label_15b67c:
    // 0x15b67c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b680:
    // 0x15b680: 0x10000004  b           . + 4 + (0x4 << 2)
label_15b684:
    if (ctx->pc == 0x15B684u) {
        ctx->pc = 0x15B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B680u;
        // 0x15b684: 0x2442b6a8  addiu       $v0, $v0, -0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B688u;
        goto label_15b688;
    }
    ctx->pc = 0x15B680u;
    {
        const bool branch_taken_0x15b680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B680u;
        // 0x15b684: 0x2442b6a8  addiu       $v0, $v0, -0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b680) {
            ctx->pc = 0x15B694u;
            goto label_15b694;
        }
    }
    ctx->pc = 0x15B688u;
label_15b688:
    // 0x15b688: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15b688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15b68c:
    // 0x15b68c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b690:
    // 0x15b690: 0x2442b7e0  addiu       $v0, $v0, -0x4820
    ctx->pc = 0x15b690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948832));
label_15b694:
    // 0x15b694: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15b694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15b698:
    // 0x15b698: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b69c:
    // 0x15b69c: 0x3e00008  jr          $ra
label_15b6a0:
    if (ctx->pc == 0x15B6A0u) {
        ctx->pc = 0x15B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B69Cu;
        // 0x15b6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B6A4u;
        goto label_15b6a4;
    }
    ctx->pc = 0x15B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B69Cu;
        // 0x15b6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B6A4u;
label_15b6a4:
    // 0x15b6a4: 0x0  nop
    ctx->pc = 0x15b6a4u;
    // NOP
    ctx->pc = 0x15b6a8u;
}
