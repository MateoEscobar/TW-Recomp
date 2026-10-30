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

// Function: sub_00429FA8
// Address: 0x429fa8 - 0x429fe8
void sub_00429FA8_0x429fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00429FA8_0x429fa8");
#endif

    switch (ctx->pc) {
        case 0x429fa8u: goto label_429fa8;
        case 0x429facu: goto label_429fac;
        case 0x429fb0u: goto label_429fb0;
        case 0x429fb4u: goto label_429fb4;
        case 0x429fb8u: goto label_429fb8;
        case 0x429fbcu: goto label_429fbc;
        case 0x429fc0u: goto label_429fc0;
        case 0x429fc4u: goto label_429fc4;
        case 0x429fc8u: goto label_429fc8;
        case 0x429fccu: goto label_429fcc;
        case 0x429fd0u: goto label_429fd0;
        case 0x429fd4u: goto label_429fd4;
        case 0x429fd8u: goto label_429fd8;
        case 0x429fdcu: goto label_429fdc;
        case 0x429fe0u: goto label_429fe0;
        case 0x429fe4u: goto label_429fe4;
        default: break;
    }

    ctx->pc = 0x429fa8u;

label_429fa8:
    // 0x429fa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x429fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_429fac:
    // 0x429fac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x429facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_429fb0:
    // 0x429fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x429fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_429fb4:
    // 0x429fb4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x429fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_429fb8:
    // 0x429fb8: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x429fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_429fbc:
    // 0x429fbc: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x429fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_429fc0:
    // 0x429fc0: 0x24c6bcf0  addiu       $a2, $a2, -0x4310
    ctx->pc = 0x429fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950128));
label_429fc4:
    // 0x429fc4: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x429fc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_429fc8:
    // 0x429fc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x429fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_429fcc:
    // 0x429fcc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x429fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_429fd0:
    // 0x429fd0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x429fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_429fd4:
    // 0x429fd4: 0x60f809  jalr        $v1
label_429fd8:
    if (ctx->pc == 0x429FD8u) {
        ctx->pc = 0x429FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FD4u;
        // 0x429fd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429FDCu;
        goto label_429fdc;
    }
    ctx->pc = 0x429FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x429FDCu);
        ctx->pc = 0x429FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FD4u;
        // 0x429fd8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429FD4u, 0x429FDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x429FDCu;
label_429fdc:
    // 0x429fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x429fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_429fe0:
    // 0x429fe0: 0x3e00008  jr          $ra
label_429fe4:
    if (ctx->pc == 0x429FE4u) {
        ctx->pc = 0x429FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FE0u;
        // 0x429fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x429FE8u;
        goto label_fallthrough_0x429fe0;
    }
    ctx->pc = 0x429FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x429FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x429FE0u;
        // 0x429fe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x429FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x429fe0:
    ctx->pc = 0x429FE8u;
}
