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

// Function: sub_0042CF70
// Address: 0x42cf70 - 0x42cff8
void sub_0042CF70_0x42cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CF70_0x42cf70");
#endif

    switch (ctx->pc) {
        case 0x42cfa0u: goto label_42cfa0;
        case 0x42cfecu: goto label_42cfec;
        default: break;
    }

    ctx->pc = 0x42cf70u;

    // 0x42cf70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x42cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x42cf74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x42cf74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cf78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x42cf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x42cf7c: 0x24a8029c  addiu       $t0, $a1, 0x29C
    ctx->pc = 0x42cf7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 668));
    // 0x42cf80: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x42cf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x42cf84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x42cf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x42cf88: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x42cf88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42cf8c: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x42CF8Cu;
    {
        const bool branch_taken_0x42cf8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x42CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CF8Cu;
        // 0x42cf90: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cf8c) {
            ctx->pc = 0x42CFC0u;
            goto label_42cfc0;
        }
    }
    ctx->pc = 0x42CF94u;
    // 0x42cf94: 0x24a70018  addiu       $a3, $a1, 0x18
    ctx->pc = 0x42cf94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x42cf98: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x42cf98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x42cf9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x42cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42cfa0:
    // 0x42cfa0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x42cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x42cfa4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x42cfa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42cfa8: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x42cfa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x42cfac: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x42cfacu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x42cfb0: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x42cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x42cfb4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x42cfb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42cfb8: 0x5064fff9  beql        $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42CFB8u;
    {
        const bool branch_taken_0x42cfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x42cfb8) {
            ctx->pc = 0x42CFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42CFB8u;
            // 0x42cfbc: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42CFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42cfa0;
        }
    }
    ctx->pc = 0x42CFC0u;
label_42cfc0:
    // 0x42cfc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x42cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42cfc4: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x42cfc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x42cfc8: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42CFC8u;
    {
        const bool branch_taken_0x42cfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x42CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CFC8u;
        // 0x42cfcc: 0x618c0  sll         $v1, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cfc8) {
            ctx->pc = 0x42CFE4u;
            goto label_42cfe4;
        }
    }
    ctx->pc = 0x42CFD0u;
    // 0x42cfd0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x42cfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x42cfd4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x42cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x42cfd8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x42cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x42cfdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x42CFDCu;
    {
        const bool branch_taken_0x42cfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CFDCu;
        // 0x42cfe0: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cfdc) {
            ctx->pc = 0x42CFECu;
            goto label_42cfec;
        }
    }
    ctx->pc = 0x42CFE4u;
label_42cfe4:
    // 0x42cfe4: 0xc10ce84  jal         func_433A10
    ctx->pc = 0x42CFE4u;
    SET_GPR_U32(ctx, 31, 0x42CFECu);
    ctx->pc = 0x433A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A10u, 0x42CFE4u, 0x42CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42CFECu;
label_42cfec:
    // 0x42cfec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x42cfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42cff0: 0x3e00008  jr          $ra
    ctx->pc = 0x42CFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42CFF0u;
        // 0x42cff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42CFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42CFF8u;
}
