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

// Function: sub_0015F5E0
// Address: 0x15f5e0 - 0x15f658
void sub_0015F5E0_0x15f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F5E0_0x15f5e0");
#endif

    ctx->pc = 0x15f5e0u;

    // 0x15f5e0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x15f5e4: 0x8c436d70  lw          $v1, 0x6D70($v0)
    ctx->pc = 0x15f5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E6D70u));
    // 0x15f5e8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F5E8u;
    {
        const bool branch_taken_0x15f5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5E8u;
        // 0x15f5ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f5e8) {
            ctx->pc = 0x15F604u;
            goto label_15f604;
        }
    }
    ctx->pc = 0x15F5F0u;
    // 0x15f5f0: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15f5f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15f5f8: 0x2442f620  addiu       $v0, $v0, -0x9E0
    ctx->pc = 0x15f5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964768));
    // 0x15f5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15F5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F5FCu;
        // 0x15f600: 0xac62c7ac  sw          $v0, -0x3854($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F604u;
label_15f604:
    // 0x15f604: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F604u;
    {
        const bool branch_taken_0x15f604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15F608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F604u;
        // 0x15f608: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f604) {
            ctx->pc = 0x15F618u;
            goto label_15f618;
        }
    }
    ctx->pc = 0x15F60Cu;
    // 0x15f60c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15f610: 0x2442f6c8  addiu       $v0, $v0, -0x938
    ctx->pc = 0x15f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964936));
    // 0x15f614: 0xac62c7ac  sw          $v0, -0x3854($v1)
    ctx->pc = 0x15f614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C7ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C7ACu, _value); } while (0);
label_15f618:
    // 0x15f618: 0x3e00008  jr          $ra
    ctx->pc = 0x15F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F620u;
    // 0x15f620: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15f624: 0x8c43c7a4  lw          $v1, -0x385C($v0)
    ctx->pc = 0x15f624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C7A4u));
    // 0x15f628: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15F628u;
    {
        const bool branch_taken_0x15f628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F628u;
        // 0x15f62c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f628) {
            ctx->pc = 0x15F644u;
            goto label_15f644;
        }
    }
    ctx->pc = 0x15F630u;
    // 0x15f630: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15f630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x15f634: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15f638: 0x2442f658  addiu       $v0, $v0, -0x9A8
    ctx->pc = 0x15f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964824));
    // 0x15f63c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F63Cu;
        // 0x15f640: 0xac62c7ac  sw          $v0, -0x3854($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F644u;
label_15f644:
    // 0x15f644: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15f644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15f648: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x15f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
    // 0x15f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x15F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F64Cu;
        // 0x15f650: 0xac62c7ac  sw          $v0, -0x3854($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294952876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F654u;
    // 0x15f654: 0x0  nop
    ctx->pc = 0x15f654u;
    // NOP
    ctx->pc = 0x15f658u;
}
