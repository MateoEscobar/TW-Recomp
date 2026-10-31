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

// Function: sub_00338948
// Address: 0x338948 - 0x3389a0
void sub_00338948_0x338948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338948_0x338948");
#endif

    ctx->pc = 0x338948u;

    // 0x338948: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x338948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x33894c: 0x8c8600b0  lw          $a2, 0xB0($a0)
    ctx->pc = 0x33894cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x338950: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x338950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x338954: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338954u;
    {
        const bool branch_taken_0x338954 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x338954) {
            ctx->pc = 0x338958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338954u;
            // 0x338958: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338964u;
            goto label_338964;
        }
    }
    ctx->pc = 0x33895Cu;
    // 0x33895c: 0x3e00008  jr          $ra
    ctx->pc = 0x33895Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33895Cu;
        // 0x338960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33895Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338964u;
label_338964:
    // 0x338964: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x338964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x338968: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x338968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33896c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33896cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x338970: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x338970u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x338974: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x338974u;
    {
        const bool branch_taken_0x338974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338974u;
        // 0x338978: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338974) {
            ctx->pc = 0x338994u;
            goto label_338994;
        }
    }
    ctx->pc = 0x33897Cu;
    // 0x33897c: 0x8c8300ac  lw          $v1, 0xAC($a0)
    ctx->pc = 0x33897cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x338980: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x338980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
    // 0x338984: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x338984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x338988: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x338988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33898c: 0x3e00008  jr          $ra
    ctx->pc = 0x33898Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33898Cu;
        // 0x338990: 0xac8300ac  sw          $v1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33898Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338994u;
label_338994:
    // 0x338994: 0x3e00008  jr          $ra
    ctx->pc = 0x338994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338994u;
        // 0x338998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33899Cu;
    // 0x33899c: 0x0  nop
    ctx->pc = 0x33899cu;
    // NOP
    ctx->pc = 0x3389a0u;
}
