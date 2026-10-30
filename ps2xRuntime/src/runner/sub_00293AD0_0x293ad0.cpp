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

// Function: sub_00293AD0
// Address: 0x293ad0 - 0x293b28
void sub_00293AD0_0x293ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293AD0_0x293ad0");
#endif

    switch (ctx->pc) {
        case 0x293b00u: goto label_293b00;
        default: break;
    }

    ctx->pc = 0x293ad0u;

    // 0x293ad0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x293ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x293ad4: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x293ad4u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x293ad8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x293ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293adc: 0x2c83002a  sltiu       $v1, $a0, 0x2A
    ctx->pc = 0x293adcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)42) ? 1 : 0);
    // 0x293ae0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x293AE0u;
    {
        const bool branch_taken_0x293ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AE0u;
        // 0x293ae4: 0x24030280  addiu       $v1, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ae0) {
            ctx->pc = 0x293B1Cu;
            goto label_293b1c;
        }
    }
    ctx->pc = 0x293AE8u;
    // 0x293ae8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293aec: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x293aecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x293af0: 0x2442eaf0  addiu       $v0, $v0, -0x1510
    ctx->pc = 0x293af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961904));
    // 0x293af4: 0x24446900  addiu       $a0, $v0, 0x6900
    ctx->pc = 0x293af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
    // 0x293af8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x293af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293afc: 0x8c620244  lw          $v0, 0x244($v1)
    ctx->pc = 0x293afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
label_293b00:
    // 0x293b00: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x293B00u;
    {
        const bool branch_taken_0x293b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293b00) {
            ctx->pc = 0x293B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293B00u;
            // 0x293b04: 0x24630280  addiu       $v1, $v1, 0x280 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293B10u;
            goto label_293b10;
        }
    }
    ctx->pc = 0x293B08u;
    // 0x293b08: 0x3e00008  jr          $ra
    ctx->pc = 0x293B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B08u;
        // 0x293b0c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293B10u;
label_293b10:
    // 0x293b10: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x293b10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x293b14: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x293B14u;
    {
        const bool branch_taken_0x293b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293b14) {
            ctx->pc = 0x293B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x293B14u;
            // 0x293b18: 0x8c620244  lw          $v0, 0x244($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x293B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293b00;
        }
    }
    ctx->pc = 0x293B1Cu;
label_293b1c:
    // 0x293b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x293B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B1Cu;
        // 0x293b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293B24u;
    // 0x293b24: 0x0  nop
    ctx->pc = 0x293b24u;
    // NOP
    ctx->pc = 0x293b28u;
}
