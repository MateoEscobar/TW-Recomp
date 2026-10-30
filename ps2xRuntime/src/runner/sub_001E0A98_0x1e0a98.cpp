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

// Function: sub_001E0A98
// Address: 0x1e0a98 - 0x1e0af0
void sub_001E0A98_0x1e0a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0A98_0x1e0a98");
#endif

    switch (ctx->pc) {
        case 0x1e0a98u: goto label_1e0a98;
        case 0x1e0a9cu: goto label_1e0a9c;
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0aa4u: goto label_1e0aa4;
        case 0x1e0aa8u: goto label_1e0aa8;
        case 0x1e0aacu: goto label_1e0aac;
        case 0x1e0ab0u: goto label_1e0ab0;
        case 0x1e0ab4u: goto label_1e0ab4;
        case 0x1e0ab8u: goto label_1e0ab8;
        case 0x1e0abcu: goto label_1e0abc;
        case 0x1e0ac0u: goto label_1e0ac0;
        case 0x1e0ac4u: goto label_1e0ac4;
        case 0x1e0ac8u: goto label_1e0ac8;
        case 0x1e0accu: goto label_1e0acc;
        case 0x1e0ad0u: goto label_1e0ad0;
        case 0x1e0ad4u: goto label_1e0ad4;
        case 0x1e0ad8u: goto label_1e0ad8;
        case 0x1e0adcu: goto label_1e0adc;
        case 0x1e0ae0u: goto label_1e0ae0;
        case 0x1e0ae4u: goto label_1e0ae4;
        case 0x1e0ae8u: goto label_1e0ae8;
        case 0x1e0aecu: goto label_1e0aec;
        default: break;
    }

    ctx->pc = 0x1e0a98u;

label_1e0a98:
    // 0x1e0a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e0a9c:
    // 0x1e0a9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e0aa0:
    // 0x1e0aa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0aa4:
    // 0x1e0aa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e0aa8:
    // 0x1e0aa8: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x1e0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0aac:
    // 0x1e0aac: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
label_1e0ab0:
    if (ctx->pc == 0x1E0AB0u) {
        ctx->pc = 0x1E0AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AACu;
        // 0x1e0ab0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0AB4u;
        goto label_1e0ab4;
    }
    ctx->pc = 0x1E0AACu;
    {
        const bool branch_taken_0x1e0aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0aac) {
            ctx->pc = 0x1E0AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E0AACu;
            // 0x1e0ab0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E0AE4u;
            goto label_1e0ae4;
        }
    }
    ctx->pc = 0x1E0AB4u;
label_1e0ab4:
    // 0x1e0ab4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e0ab8:
    // 0x1e0ab8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1e0ab8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1e0abc:
    // 0x1e0abc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1e0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1e0ac0:
    // 0x1e0ac0: 0x60f809  jalr        $v1
label_1e0ac4:
    if (ctx->pc == 0x1E0AC4u) {
        ctx->pc = 0x1E0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AC0u;
        // 0x1e0ac4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0AC8u;
        goto label_1e0ac8;
    }
    ctx->pc = 0x1E0AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E0AC8u);
        ctx->pc = 0x1E0AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AC0u;
        // 0x1e0ac4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0AC0u, 0x1E0AC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E0AC8u;
label_1e0ac8:
    // 0x1e0ac8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1e0acc:
    // 0x1e0acc: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_1e0ad0:
    // 0x1e0ad0: 0x24a56628  addiu       $a1, $a1, 0x6628
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26152));
label_1e0ad4:
    // 0x1e0ad4: 0xc1391da  jal         func_4E4768
label_1e0ad8:
    if (ctx->pc == 0x1E0AD8u) {
        ctx->pc = 0x1E0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AD4u;
        // 0x1e0ad8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0ADCu;
        goto label_1e0adc;
    }
    ctx->pc = 0x1E0AD4u;
    SET_GPR_U32(ctx, 31, 0x1E0ADCu);
    ctx->pc = 0x1E0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0AD4u;
    // 0x1e0ad8: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4768u, 0x1E0AD4u, 0x1E0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0ADCu;
label_1e0adc:
    // 0x1e0adc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1e0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_1e0ae0:
    // 0x1e0ae0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0ae4:
    // 0x1e0ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0ae8:
    // 0x1e0ae8: 0x3e00008  jr          $ra
label_1e0aec:
    if (ctx->pc == 0x1E0AECu) {
        ctx->pc = 0x1E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE8u;
        // 0x1e0aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0AF0u;
        goto label_fallthrough_0x1e0ae8;
    }
    ctx->pc = 0x1E0AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE8u;
        // 0x1e0aec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0ae8:
    ctx->pc = 0x1E0AF0u;
}
