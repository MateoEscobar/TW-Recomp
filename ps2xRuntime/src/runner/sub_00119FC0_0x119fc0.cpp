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

// Function: sub_00119FC0
// Address: 0x119fc0 - 0x11a038
void sub_00119FC0_0x119fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119FC0_0x119fc0");
#endif

    switch (ctx->pc) {
        case 0x11a020u: goto label_11a020;
        default: break;
    }

    ctx->pc = 0x119fc0u;

    // 0x119fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x119fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x119fc4: 0x24a6002c  addiu       $a2, $a1, 0x2C
    ctx->pc = 0x119fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    // 0x119fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119fcc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x119fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x119fd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x119fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x119fd4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x119fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x119fd8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x119fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x119fdc: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x119fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x119fe0: 0xa0820008  sb          $v0, 0x8($a0)
    ctx->pc = 0x119fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x119fe4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x119fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x119fe8: 0xa0800011  sb          $zero, 0x11($a0)
    ctx->pc = 0x119fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 0));
    // 0x119fec: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x119fecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x119ff0: 0x90a20010  lbu         $v0, 0x10($a1)
    ctx->pc = 0x119ff0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x119ff4: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x119ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x119ff8: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x119ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x119ffc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x119ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11a000: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x11a000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x11a004: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x11a004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x11a008: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x11A008u;
    {
        const bool branch_taken_0x11a008 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A008u;
        // 0x11a00c: 0xac800028  sw          $zero, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a008) {
            ctx->pc = 0x11A028u;
            goto label_11a028;
        }
    }
    ctx->pc = 0x11A010u;
    // 0x11a010: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11a010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a014: 0x2484002c  addiu       $a0, $a0, 0x2C
    ctx->pc = 0x11a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x11a018: 0xc10c4de  jal         func_431378
    ctx->pc = 0x11A018u;
    SET_GPR_U32(ctx, 31, 0x11A020u);
    ctx->pc = 0x11A01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A018u;
    // 0x11a01c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x11A018u, 0x11A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A020u;
label_11a020:
    // 0x11a020: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11A020u;
    {
        const bool branch_taken_0x11a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A020u;
        // 0x11a024: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a020) {
            ctx->pc = 0x11A030u;
            goto label_11a030;
        }
    }
    ctx->pc = 0x11A028u;
label_11a028:
    // 0x11a028: 0xa080002c  sb          $zero, 0x2C($a0)
    ctx->pc = 0x11a028u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11a030:
    // 0x11a030: 0x3e00008  jr          $ra
    ctx->pc = 0x11A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A030u;
        // 0x11a034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A038u;
}
