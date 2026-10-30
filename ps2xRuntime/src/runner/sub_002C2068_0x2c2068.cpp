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

// Function: sub_002C2068
// Address: 0x2c2068 - 0x2c20b0
void sub_002C2068_0x2c2068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2068_0x2c2068");
#endif

    switch (ctx->pc) {
        case 0x2c2068u: goto label_2c2068;
        case 0x2c206cu: goto label_2c206c;
        case 0x2c2070u: goto label_2c2070;
        case 0x2c2074u: goto label_2c2074;
        case 0x2c2078u: goto label_2c2078;
        case 0x2c207cu: goto label_2c207c;
        case 0x2c2080u: goto label_2c2080;
        case 0x2c2084u: goto label_2c2084;
        case 0x2c2088u: goto label_2c2088;
        case 0x2c208cu: goto label_2c208c;
        case 0x2c2090u: goto label_2c2090;
        case 0x2c2094u: goto label_2c2094;
        case 0x2c2098u: goto label_2c2098;
        case 0x2c209cu: goto label_2c209c;
        case 0x2c20a0u: goto label_2c20a0;
        case 0x2c20a4u: goto label_2c20a4;
        case 0x2c20a8u: goto label_2c20a8;
        case 0x2c20acu: goto label_2c20ac;
        default: break;
    }

    ctx->pc = 0x2c2068u;

label_2c2068:
    // 0x2c2068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c2068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c206c:
    // 0x2c206c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c206cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c2070:
    // 0x2c2070: 0xa0800046  sb          $zero, 0x46($a0)
    ctx->pc = 0x2c2070u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 70), (uint8_t)GPR_U32(ctx, 0));
label_2c2074:
    // 0x2c2074: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c2078:
    // 0x2c2078: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c2078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c207c:
    // 0x2c207c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2c207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c2080:
    // 0x2c2080: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2c2080u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2c2084:
    // 0x2c2084: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c2088:
    // 0x2c2088: 0x40f809  jalr        $v0
label_2c208c:
    if (ctx->pc == 0x2C208Cu) {
        ctx->pc = 0x2C208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2088u;
        // 0x2c208c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C2090u;
        goto label_2c2090;
    }
    ctx->pc = 0x2C2088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C2090u);
        ctx->pc = 0x2C208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2088u;
        // 0x2c208c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2088u, 0x2C2090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C2090u;
label_2c2090:
    // 0x2c2090: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2c2090u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2c2094:
    // 0x2c2094: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c2094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c2098:
    // 0x2c2098: 0x24c650d8  addiu       $a2, $a2, 0x50D8
    ctx->pc = 0x2c2098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20696));
label_2c209c:
    // 0x2c209c: 0xc08e1a4  jal         func_238690
label_2c20a0:
    if (ctx->pc == 0x2C20A0u) {
        ctx->pc = 0x2C20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C209Cu;
        // 0x2c20a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20A4u;
        goto label_2c20a4;
    }
    ctx->pc = 0x2C209Cu;
    SET_GPR_U32(ctx, 31, 0x2C20A4u);
    ctx->pc = 0x2C20A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C209Cu;
    // 0x2c20a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2C209Cu, 0x2C20A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C20A4u;
label_2c20a4:
    // 0x2c20a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c20a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c20a8:
    // 0x2c20a8: 0x3e00008  jr          $ra
label_2c20ac:
    if (ctx->pc == 0x2C20ACu) {
        ctx->pc = 0x2C20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20A8u;
        // 0x2c20ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C20B0u;
        goto label_fallthrough_0x2c20a8;
    }
    ctx->pc = 0x2C20A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C20A8u;
        // 0x2c20ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C20A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c20a8:
    ctx->pc = 0x2C20B0u;
}
