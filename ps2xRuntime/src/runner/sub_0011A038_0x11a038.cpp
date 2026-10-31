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

// Function: sub_0011A038
// Address: 0x11a038 - 0x11a0a8
void sub_0011A038_0x11a038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A038_0x11a038");
#endif

    switch (ctx->pc) {
        case 0x11a084u: goto label_11a084;
        default: break;
    }

    ctx->pc = 0x11a038u;

    // 0x11a038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a03c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11a040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a044: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x11a044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11a048: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x11a048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x11a04c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x11a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x11a050: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x11a050u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x11a054: 0xa0890010  sb          $t1, 0x10($a0)
    ctx->pc = 0x11a054u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 9));
    // 0x11a058: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x11a058u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a05c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x11a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x11a060: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x11a060u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11a064: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x11a064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x11a068: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x11a068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x11a06c: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A06Cu;
    {
        const bool branch_taken_0x11a06c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A06Cu;
        // 0x11a070: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a06c) {
            ctx->pc = 0x11A08Cu;
            goto label_11a08c;
        }
    }
    ctx->pc = 0x11A074u;
    // 0x11a074: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x11a074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x11a078: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x11a078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a07c: 0xc10c4de  jal         func_431378
    ctx->pc = 0x11A07Cu;
    SET_GPR_U32(ctx, 31, 0x11A084u);
    ctx->pc = 0x11A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A07Cu;
    // 0x11a080: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x11A07Cu, 0x11A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A084u;
label_11a084:
    // 0x11a084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A084u;
    {
        const bool branch_taken_0x11a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A084u;
        // 0x11a088: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a084) {
            ctx->pc = 0x11A094u;
            goto label_11a094;
        }
    }
    ctx->pc = 0x11A08Cu;
label_11a08c:
    // 0x11a08c: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x11a08cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a094:
    // 0x11a094: 0x3e00008  jr          $ra
    ctx->pc = 0x11A094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A094u;
        // 0x11a098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A09Cu;
    // 0x11a09c: 0x0  nop
    ctx->pc = 0x11a09cu;
    // NOP
    // 0x11a0a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11a0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11a0a4: 0x0  nop
    ctx->pc = 0x11a0a4u;
    // NOP
    ctx->pc = 0x11a0a8u;
}
