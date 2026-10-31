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

// Function: sub_0041F298
// Address: 0x41f298 - 0x41f340
void sub_0041F298_0x41f298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041F298_0x41f298");
#endif

    ctx->pc = 0x41f298u;

    // 0x41f298: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x41f298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x41f29c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41f2a0: 0xa71018  mult        $v0, $a1, $a3
    ctx->pc = 0x41f2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x41f2a4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x41f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x41f2a8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x41f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x41f2ac: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x41f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x41f2b0: 0x9084007c  lbu         $a0, 0x7C($a0)
    ctx->pc = 0x41f2b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x41f2b4: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x41F2B4u;
    {
        const bool branch_taken_0x41f2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x41F2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2B4u;
        // 0x41f2b8: 0x28820003  slti        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2b4) {
            ctx->pc = 0x41F304u;
            goto label_41f304;
        }
    }
    ctx->pc = 0x41F2BCu;
    // 0x41f2bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x41F2BCu;
    {
        const bool branch_taken_0x41f2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2BCu;
        // 0x41f2c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2bc) {
            ctx->pc = 0x41F2D4u;
            goto label_41f2d4;
        }
    }
    ctx->pc = 0x41F2C4u;
    // 0x41f2c4: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x41F2C4u;
    {
        const bool branch_taken_0x41f2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2C4u;
        // 0x41f2c8: 0x2403004e  addiu       $v1, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2c4) {
            ctx->pc = 0x41F2F0u;
            goto label_41f2f0;
        }
    }
    ctx->pc = 0x41F2CCu;
    // 0x41f2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x41F2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F2D4u;
label_41f2d4:
    // 0x41f2d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x41f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x41f2d8: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x41F2D8u;
    {
        const bool branch_taken_0x41f2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2D8u;
        // 0x41f2dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2d8) {
            ctx->pc = 0x41F314u;
            goto label_41f314;
        }
    }
    ctx->pc = 0x41F2E0u;
    // 0x41f2e0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x41F2E0u;
    {
        const bool branch_taken_0x41f2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x41F2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2E0u;
        // 0x41f2e4: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f2e0) {
            ctx->pc = 0x41F324u;
            goto label_41f324;
        }
    }
    ctx->pc = 0x41F2E8u;
    // 0x41f2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x41F2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F2F0u;
label_41f2f0:
    // 0x41f2f0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x41f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x41f2f4: 0xa0c20002  sb          $v0, 0x2($a2)
    ctx->pc = 0x41f2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x41f2f8: 0xa0c70000  sb          $a3, 0x0($a2)
    ctx->pc = 0x41f2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x41f2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x41F2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F2FCu;
        // 0x41f300: 0xa0c30001  sb          $v1, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F304u;
label_41f304:
    // 0x41f304: 0x2402003e  addiu       $v0, $zero, 0x3E
    ctx->pc = 0x41f304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x41f308: 0x24040062  addiu       $a0, $zero, 0x62
    ctx->pc = 0x41f308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x41f30c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x41F30Cu;
    {
        const bool branch_taken_0x41f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F30Cu;
        // 0x41f310: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f30c) {
            ctx->pc = 0x41F32Cu;
            goto label_41f32c;
        }
    }
    ctx->pc = 0x41F314u;
label_41f314:
    // 0x41f314: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x41f314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x41f318: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x41f318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x41f31c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x41F31Cu;
    {
        const bool branch_taken_0x41f31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F31Cu;
        // 0x41f320: 0x2403008d  addiu       $v1, $zero, 0x8D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41f31c) {
            ctx->pc = 0x41F32Cu;
            goto label_41f32c;
        }
    }
    ctx->pc = 0x41F324u;
label_41f324:
    // 0x41f324: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x41f324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x41f328: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x41f328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_41f32c:
    // 0x41f32c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x41f32cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x41f330: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x41f330u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x41f334: 0x3e00008  jr          $ra
    ctx->pc = 0x41F334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41F334u;
        // 0x41f338: 0xa0c40001  sb          $a0, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41F334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41F33Cu;
    // 0x41f33c: 0x0  nop
    ctx->pc = 0x41f33cu;
    // NOP
    ctx->pc = 0x41f340u;
}
