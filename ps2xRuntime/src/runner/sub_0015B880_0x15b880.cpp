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

// Function: sub_0015B880
// Address: 0x15b880 - 0x15b8c0
void sub_0015B880_0x15b880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B880_0x15b880");
#endif

    switch (ctx->pc) {
        case 0x15b880u: goto label_15b880;
        case 0x15b884u: goto label_15b884;
        case 0x15b888u: goto label_15b888;
        case 0x15b88cu: goto label_15b88c;
        case 0x15b890u: goto label_15b890;
        case 0x15b894u: goto label_15b894;
        case 0x15b898u: goto label_15b898;
        case 0x15b89cu: goto label_15b89c;
        case 0x15b8a0u: goto label_15b8a0;
        case 0x15b8a4u: goto label_15b8a4;
        case 0x15b8a8u: goto label_15b8a8;
        case 0x15b8acu: goto label_15b8ac;
        case 0x15b8b0u: goto label_15b8b0;
        case 0x15b8b4u: goto label_15b8b4;
        case 0x15b8b8u: goto label_15b8b8;
        case 0x15b8bcu: goto label_15b8bc;
        default: break;
    }

    ctx->pc = 0x15b880u;

label_15b880:
    // 0x15b880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15b880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15b884:
    // 0x15b884: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b888:
    // 0x15b888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15b88c:
    // 0x15b88c: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15b88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15b890:
    // 0x15b890: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b894:
    // 0x15b894: 0x84640180  lh          $a0, 0x180($v1)
    ctx->pc = 0x15b894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 384)));
label_15b898:
    // 0x15b898: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x15b898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
label_15b89c:
    // 0x15b89c: 0x40f809  jalr        $v0
label_15b8a0:
    if (ctx->pc == 0x15B8A0u) {
        ctx->pc = 0x15B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B89Cu;
        // 0x15b8a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B8A4u;
        goto label_15b8a4;
    }
    ctx->pc = 0x15B89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B8A4u);
        ctx->pc = 0x15B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B89Cu;
        // 0x15b8a0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B89Cu, 0x15B8A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B8A4u;
label_15b8a4:
    // 0x15b8a4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15b8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
label_15b8a8:
    // 0x15b8a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b8ac:
    // 0x15b8ac: 0x2463a2b0  addiu       $v1, $v1, -0x5D50
    ctx->pc = 0x15b8acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943408));
label_15b8b0:
    // 0x15b8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15b8b4:
    // 0x15b8b4: 0xac43c734  sw          $v1, -0x38CC($v0)
    ctx->pc = 0x15b8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 3));
label_15b8b8:
    // 0x15b8b8: 0x3e00008  jr          $ra
label_15b8bc:
    if (ctx->pc == 0x15B8BCu) {
        ctx->pc = 0x15B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8B8u;
        // 0x15b8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B8C0u;
        goto label_fallthrough_0x15b8b8;
    }
    ctx->pc = 0x15B8B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B8B8u;
        // 0x15b8bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B8B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b8b8:
    ctx->pc = 0x15B8C0u;
}
