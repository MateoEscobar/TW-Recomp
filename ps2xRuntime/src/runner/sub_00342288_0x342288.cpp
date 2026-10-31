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

// Function: sub_00342288
// Address: 0x342288 - 0x3422d0
void sub_00342288_0x342288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342288_0x342288");
#endif

    switch (ctx->pc) {
        case 0x342288u: goto label_342288;
        case 0x34228cu: goto label_34228c;
        case 0x342290u: goto label_342290;
        case 0x342294u: goto label_342294;
        case 0x342298u: goto label_342298;
        case 0x34229cu: goto label_34229c;
        case 0x3422a0u: goto label_3422a0;
        case 0x3422a4u: goto label_3422a4;
        case 0x3422a8u: goto label_3422a8;
        case 0x3422acu: goto label_3422ac;
        case 0x3422b0u: goto label_3422b0;
        case 0x3422b4u: goto label_3422b4;
        case 0x3422b8u: goto label_3422b8;
        case 0x3422bcu: goto label_3422bc;
        case 0x3422c0u: goto label_3422c0;
        case 0x3422c4u: goto label_3422c4;
        case 0x3422c8u: goto label_3422c8;
        case 0x3422ccu: goto label_3422cc;
        default: break;
    }

    ctx->pc = 0x342288u;

label_342288:
    // 0x342288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_34228c:
    // 0x34228c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_342290:
    // 0x342290: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x342290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_342294:
    // 0x342294: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x342294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_342298:
    // 0x342298: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x342298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_34229c:
    // 0x34229c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x34229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3422a0:
    // 0x3422a0: 0x40f809  jalr        $v0
label_3422a4:
    if (ctx->pc == 0x3422A4u) {
        ctx->pc = 0x3422A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422A0u;
        // 0x3422a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422A8u;
        goto label_3422a8;
    }
    ctx->pc = 0x3422A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3422A8u);
        ctx->pc = 0x3422A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422A0u;
        // 0x3422a4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3422A0u, 0x3422A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3422A8u;
label_3422a8:
    // 0x3422a8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3422a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3422ac:
    // 0x3422ac: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3422acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_3422b0:
    // 0x3422b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3422b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3422b4:
    // 0x3422b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3422b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3422b8:
    // 0x3422b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3422bc:
    if (ctx->pc == 0x3422BCu) {
        ctx->pc = 0x3422BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422B8u;
        // 0x3422bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422C0u;
        goto label_3422c0;
    }
    ctx->pc = 0x3422B8u;
    {
        const bool branch_taken_0x3422b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3422BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422B8u;
        // 0x3422bc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422b8) {
            ctx->pc = 0x3422C8u;
            goto label_3422c8;
        }
    }
    ctx->pc = 0x3422C0u;
label_3422c0:
    // 0x3422c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3422c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3422c4:
    // 0x3422c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3422c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3422c8:
    // 0x3422c8: 0x3e00008  jr          $ra
label_3422cc:
    if (ctx->pc == 0x3422CCu) {
        ctx->pc = 0x3422CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422C8u;
        // 0x3422cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3422D0u;
        goto label_fallthrough_0x3422c8;
    }
    ctx->pc = 0x3422C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3422CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422C8u;
        // 0x3422cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3422C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3422c8:
    ctx->pc = 0x3422D0u;
}
