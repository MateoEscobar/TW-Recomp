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

// Function: sub_0028EE88
// Address: 0x28ee88 - 0x28ef00
void sub_0028EE88_0x28ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EE88_0x28ee88");
#endif

    switch (ctx->pc) {
        case 0x28eee4u: goto label_28eee4;
        case 0x28eef4u: goto label_28eef4;
        default: break;
    }

    ctx->pc = 0x28ee88u;

    // 0x28ee88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ee88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ee8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28ee8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ee90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ee94: 0x90c202d4  lbu         $v0, 0x2D4($a2)
    ctx->pc = 0x28ee94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 724)));
    // 0x28ee98: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28EE98u;
    {
        const bool branch_taken_0x28ee98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee98) {
            ctx->pc = 0x28EE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EE98u;
            // 0x28ee9c: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EEC0u;
            goto label_28eec0;
        }
    }
    ctx->pc = 0x28EEA0u;
    // 0x28eea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28eea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eea4: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28EEA4u;
    {
        const bool branch_taken_0x28eea4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x28eea4) {
            ctx->pc = 0x28EEA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28EEA4u;
            // 0x28eea8: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28EEC0u;
            goto label_28eec0;
        }
    }
    ctx->pc = 0x28EEACu;
    // 0x28eeac: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x28eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x28eeb0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x28eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x28eeb4: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x28eeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x28eeb8: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x28eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x28eebc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x28eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28eec0:
    // 0x28eec0: 0xa0c502d4  sb          $a1, 0x2D4($a2)
    ctx->pc = 0x28eec0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 724), (uint8_t)GPR_U32(ctx, 5));
    // 0x28eec4: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x28eec4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
    // 0x28eec8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28eec8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28eecc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28EECCu;
    {
        const bool branch_taken_0x28eecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EECCu;
        // 0x28eed0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eecc) {
            ctx->pc = 0x28EEF8u;
            goto label_28eef8;
        }
    }
    ctx->pc = 0x28EED4u;
    // 0x28eed4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28EED4u;
    {
        const bool branch_taken_0x28eed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eed4) {
            ctx->pc = 0x28EEECu;
            goto label_28eeec;
        }
    }
    ctx->pc = 0x28EEDCu;
    // 0x28eedc: 0xc08bfe2  jal         func_22FF88
    ctx->pc = 0x28EEDCu;
    SET_GPR_U32(ctx, 31, 0x28EEE4u);
    ctx->pc = 0x22FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FF88u, 0x28EEDCu, 0x28EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEE4u;
label_28eee4:
    // 0x28eee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28EEE4u;
    {
        const bool branch_taken_0x28eee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEE4u;
        // 0x28eee8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eee4) {
            ctx->pc = 0x28EEF8u;
            goto label_28eef8;
        }
    }
    ctx->pc = 0x28EEECu;
label_28eeec:
    // 0x28eeec: 0xc08c030  jal         func_2300C0
    ctx->pc = 0x28EEECu;
    SET_GPR_U32(ctx, 31, 0x28EEF4u);
    ctx->pc = 0x2300C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2300C0u, 0x28EEECu, 0x28EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EEF4u;
label_28eef4:
    // 0x28eef4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28eef8:
    // 0x28eef8: 0x3e00008  jr          $ra
    ctx->pc = 0x28EEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EEF8u;
        // 0x28eefc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EF00u;
}
