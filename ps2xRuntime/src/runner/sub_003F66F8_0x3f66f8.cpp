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

// Function: sub_003F66F8
// Address: 0x3f66f8 - 0x3f6720
void sub_003F66F8_0x3f66f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F66F8_0x3f66f8");
#endif

    switch (ctx->pc) {
        case 0x3f66f8u: goto label_3f66f8;
        case 0x3f66fcu: goto label_3f66fc;
        case 0x3f6700u: goto label_3f6700;
        case 0x3f6704u: goto label_3f6704;
        case 0x3f6708u: goto label_3f6708;
        case 0x3f670cu: goto label_3f670c;
        case 0x3f6710u: goto label_3f6710;
        case 0x3f6714u: goto label_3f6714;
        case 0x3f6718u: goto label_3f6718;
        case 0x3f671cu: goto label_3f671c;
        default: break;
    }

    ctx->pc = 0x3f66f8u;

label_3f66f8:
    // 0x3f66f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3f66f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3f66fc:
    // 0x3f66fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3f66fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3f6700:
    // 0x3f6700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3f6700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f6704:
    // 0x3f6704: 0x84650188  lh          $a1, 0x188($v1)
    ctx->pc = 0x3f6704u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6708:
    // 0x3f6708: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f670c:
    // 0x3f670c: 0x40f809  jalr        $v0
label_3f6710:
    if (ctx->pc == 0x3F6710u) {
        ctx->pc = 0x3F6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F670Cu;
        // 0x3f6710: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6714u;
        goto label_3f6714;
    }
    ctx->pc = 0x3F670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6714u);
        ctx->pc = 0x3F6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F670Cu;
        // 0x3f6710: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F670Cu, 0x3F6714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6714u;
label_3f6714:
    // 0x3f6714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3f6714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3f6718:
    // 0x3f6718: 0x3e00008  jr          $ra
label_3f671c:
    if (ctx->pc == 0x3F671Cu) {
        ctx->pc = 0x3F671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6718u;
        // 0x3f671c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6720u;
        goto label_fallthrough_0x3f6718;
    }
    ctx->pc = 0x3F6718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6718u;
        // 0x3f671c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f6718:
    ctx->pc = 0x3F6720u;
}
