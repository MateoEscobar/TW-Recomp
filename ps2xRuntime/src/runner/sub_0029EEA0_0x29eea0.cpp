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

// Function: sub_0029EEA0
// Address: 0x29eea0 - 0x29eed8
void sub_0029EEA0_0x29eea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EEA0_0x29eea0");
#endif

    switch (ctx->pc) {
        case 0x29eea0u: goto label_29eea0;
        case 0x29eea4u: goto label_29eea4;
        case 0x29eea8u: goto label_29eea8;
        case 0x29eeacu: goto label_29eeac;
        case 0x29eeb0u: goto label_29eeb0;
        case 0x29eeb4u: goto label_29eeb4;
        case 0x29eeb8u: goto label_29eeb8;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eec0u: goto label_29eec0;
        case 0x29eec4u: goto label_29eec4;
        case 0x29eec8u: goto label_29eec8;
        case 0x29eeccu: goto label_29eecc;
        case 0x29eed0u: goto label_29eed0;
        case 0x29eed4u: goto label_29eed4;
        default: break;
    }

    ctx->pc = 0x29eea0u;

label_29eea0:
    // 0x29eea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29eea4:
    // 0x29eea4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x29eea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29eea8:
    // 0x29eea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29eeac:
    // 0x29eeac: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x29eeacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_29eeb0:
    // 0x29eeb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29eeb4:
    if (ctx->pc == 0x29EEB4u) {
        ctx->pc = 0x29EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEB0u;
        // 0x29eeb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EEB8u;
        goto label_29eeb8;
    }
    ctx->pc = 0x29EEB0u;
    {
        const bool branch_taken_0x29eeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEB0u;
        // 0x29eeb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eeb0) {
            ctx->pc = 0x29EED0u;
            goto label_29eed0;
        }
    }
    ctx->pc = 0x29EEB8u;
label_29eeb8:
    // 0x29eeb8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x29eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_29eebc:
    // 0x29eebc: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x29eebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_29eec0:
    // 0x29eec0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x29eec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_29eec4:
    // 0x29eec4: 0x60f809  jalr        $v1
label_29eec8:
    if (ctx->pc == 0x29EEC8u) {
        ctx->pc = 0x29EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEC4u;
        // 0x29eec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EECCu;
        goto label_29eecc;
    }
    ctx->pc = 0x29EEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x29EECCu);
        ctx->pc = 0x29EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEC4u;
        // 0x29eec8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEC4u, 0x29EECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EECCu;
label_29eecc:
    // 0x29eecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29eeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29eed0:
    // 0x29eed0: 0x3e00008  jr          $ra
label_29eed4:
    if (ctx->pc == 0x29EED4u) {
        ctx->pc = 0x29EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EED0u;
        // 0x29eed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EED8u;
        goto label_fallthrough_0x29eed0;
    }
    ctx->pc = 0x29EED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EED0u;
        // 0x29eed4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29eed0:
    ctx->pc = 0x29EED8u;
}
