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

// Function: sub_0015F590
// Address: 0x15f590 - 0x15f5e0
void sub_0015F590_0x15f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F590_0x15f590");
#endif

    switch (ctx->pc) {
        case 0x15f590u: goto label_15f590;
        case 0x15f594u: goto label_15f594;
        case 0x15f598u: goto label_15f598;
        case 0x15f59cu: goto label_15f59c;
        case 0x15f5a0u: goto label_15f5a0;
        case 0x15f5a4u: goto label_15f5a4;
        case 0x15f5a8u: goto label_15f5a8;
        case 0x15f5acu: goto label_15f5ac;
        case 0x15f5b0u: goto label_15f5b0;
        case 0x15f5b4u: goto label_15f5b4;
        case 0x15f5b8u: goto label_15f5b8;
        case 0x15f5bcu: goto label_15f5bc;
        case 0x15f5c0u: goto label_15f5c0;
        case 0x15f5c4u: goto label_15f5c4;
        case 0x15f5c8u: goto label_15f5c8;
        case 0x15f5ccu: goto label_15f5cc;
        case 0x15f5d0u: goto label_15f5d0;
        case 0x15f5d4u: goto label_15f5d4;
        case 0x15f5d8u: goto label_15f5d8;
        case 0x15f5dcu: goto label_15f5dc;
        default: break;
    }

    ctx->pc = 0x15f590u;

label_15f590:
    // 0x15f590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_15f594:
    // 0x15f594: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f598:
    // 0x15f598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15f59c:
    // 0x15f59c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_15f5a0:
    // 0x15f5a0: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15f5a4:
    // 0x15f5a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f5a8:
    // 0x15f5a8: 0xac60c7a0  sw          $zero, -0x3860($v1)
    ctx->pc = 0x15f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952864), GPR_U32(ctx, 0));
label_15f5ac:
    // 0x15f5ac: 0x8ca20128  lw          $v0, 0x128($a1)
    ctx->pc = 0x15f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15f5b0:
    // 0x15f5b0: 0xac80c7a8  sw          $zero, -0x3858($a0)
    ctx->pc = 0x15f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952872), GPR_U32(ctx, 0));
label_15f5b4:
    // 0x15f5b4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15f5b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15f5b8:
    // 0x15f5b8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15f5bc:
    // 0x15f5bc: 0x60f809  jalr        $v1
label_15f5c0:
    if (ctx->pc == 0x15F5C0u) {
        ctx->pc = 0x15F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5BCu;
        // 0x15f5c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5C4u;
        goto label_15f5c4;
    }
    ctx->pc = 0x15F5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F5C4u);
        ctx->pc = 0x15F5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5BCu;
        // 0x15f5c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F5BCu, 0x15F5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F5C4u;
label_15f5c4:
    // 0x15f5c4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15f5c8:
    // 0x15f5c8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15f5cc:
    // 0x15f5cc: 0x2442f5e0  addiu       $v0, $v0, -0xA20
    ctx->pc = 0x15f5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964704));
label_15f5d0:
    // 0x15f5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f5d4:
    // 0x15f5d4: 0xac62c7ac  sw          $v0, -0x3854($v1)
    ctx->pc = 0x15f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 2));
label_15f5d8:
    // 0x15f5d8: 0x3e00008  jr          $ra
label_15f5dc:
    if (ctx->pc == 0x15F5DCu) {
        ctx->pc = 0x15F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5D8u;
        // 0x15f5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F5E0u;
        goto label_fallthrough_0x15f5d8;
    }
    ctx->pc = 0x15F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5D8u;
        // 0x15f5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15f5d8:
    ctx->pc = 0x15F5E0u;
}
