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

// Function: sub_00110AA8
// Address: 0x110aa8 - 0x110b18
void sub_00110AA8_0x110aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110AA8_0x110aa8");
#endif

    ctx->pc = 0x110aa8u;

    // 0x110aa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x110aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110aac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x110aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x110ab0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x110ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x110ab4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x110ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x110ab8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x110ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x110abc: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x110ABCu;
    {
        const bool branch_taken_0x110abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ABCu;
        // 0x110ac0: 0x2c620013  sltiu       $v0, $v1, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110abc) {
            ctx->pc = 0x110B0Cu;
            goto label_110b0c;
        }
    }
    ctx->pc = 0x110AC4u;
    // 0x110ac4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110AC4u;
    {
        const bool branch_taken_0x110ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AC4u;
        // 0x110ac8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ac4) {
            ctx->pc = 0x110ADCu;
            goto label_110adc;
        }
    }
    ctx->pc = 0x110ACCu;
    // 0x110acc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110ACCu;
    {
        const bool branch_taken_0x110acc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110ACCu;
        // 0x110ad0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110acc) {
            ctx->pc = 0x110AF0u;
            goto label_110af0;
        }
    }
    ctx->pc = 0x110AD4u;
    // 0x110ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x110AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110ADCu;
label_110adc:
    // 0x110adc: 0x24020079  addiu       $v0, $zero, 0x79
    ctx->pc = 0x110adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x110ae0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110AE0u;
    {
        const bool branch_taken_0x110ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x110AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AE0u;
        // 0x110ae4: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ae0) {
            ctx->pc = 0x110AF8u;
            goto label_110af8;
        }
    }
    ctx->pc = 0x110AE8u;
    // 0x110ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x110AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AF0u;
label_110af0:
    // 0x110af0: 0x3e00008  jr          $ra
    ctx->pc = 0x110AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110AF0u;
        // 0x110af4: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110AF8u;
label_110af8:
    // 0x110af8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x110af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x110afc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x110afcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x110b00: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x110b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x110b04: 0x3e00008  jr          $ra
    ctx->pc = 0x110B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B04u;
        // 0x110b08: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B0Cu;
label_110b0c:
    // 0x110b0c: 0x2402006a  addiu       $v0, $zero, 0x6A
    ctx->pc = 0x110b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    // 0x110b10: 0x3e00008  jr          $ra
    ctx->pc = 0x110B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110B10u;
        // 0x110b14: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110B18u;
}
