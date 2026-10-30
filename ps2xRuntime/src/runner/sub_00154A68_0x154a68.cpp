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

// Function: sub_00154A68
// Address: 0x154a68 - 0x154ae0
void sub_00154A68_0x154a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154A68_0x154a68");
#endif

    ctx->pc = 0x154a68u;

    // 0x154a68: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x154a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x154a6c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x154a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x154a70: 0x102001b  divu        $zero, $t0, $v0
    ctx->pc = 0x154a70u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 8) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,8); } }
    // 0x154a74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x154A74u;
    {
        const bool branch_taken_0x154a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154a74) {
            ctx->pc = 0x154A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154A74u;
            // 0x154a78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x154A7Cu;
            goto label_154a7c;
        }
    }
    ctx->pc = 0x154A7Cu;
label_154a7c:
    // 0x154a7c: 0x2485002c  addiu       $a1, $a0, 0x2C
    ctx->pc = 0x154a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x154a80: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x154a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x154a84: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x154a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x154a88: 0x3c063cf3  lui         $a2, 0x3CF3
    ctx->pc = 0x154a88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15603 << 16));
    // 0x154a8c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x154a90: 0x34c6cf3d  ori         $a2, $a2, 0xCF3D
    ctx->pc = 0x154a90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)53053);
    // 0x154a94: 0x8ca90004  lw          $t1, 0x4($a1)
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x154a98: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x154a98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154a9c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x154a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x154aa0: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x154aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x154aa4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x154aa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x154aa8: 0x8c87001c  lw          $a3, 0x1C($a0)
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x154aac: 0xa92823  subu        $a1, $a1, $t1
    ctx->pc = 0x154aacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x154ab0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154ab4: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x154ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x154ab8: 0x4012  mflo        $t0
    ctx->pc = 0x154ab8u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x154abc: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x154abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x154ac0: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x154ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x154ac4: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x154ac4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x154ac8: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x154ac8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x154acc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x154accu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x154ad0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x154ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x154AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AD4u;
        // 0x154ad8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154ADCu;
    // 0x154adc: 0x0  nop
    ctx->pc = 0x154adcu;
    // NOP
    ctx->pc = 0x154ae0u;
}
