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

// Function: sub_001A4B60
// Address: 0x1a4b60 - 0x1a4bc0
void sub_001A4B60_0x1a4b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4B60_0x1a4b60");
#endif

    switch (ctx->pc) {
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4ba8u: goto label_1a4ba8;
        default: break;
    }

    ctx->pc = 0x1a4b60u;

    // 0x1a4b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a4b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a4b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a4b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4b6c: 0xc0694f0  jal         func_1A53C0
    ctx->pc = 0x1A4B6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4B74u);
    ctx->pc = 0x1A4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B6Cu;
    // 0x1a4b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A53C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A53C0u, 0x1A4B6Cu, 0x1A4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B74u;
label_1a4b74:
    // 0x1a4b74: 0x8e040350  lw          $a0, 0x350($s0)
    ctx->pc = 0x1a4b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 848)));
    // 0x1a4b78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4B78u;
    {
        const bool branch_taken_0x1a4b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B78u;
        // 0x1a4b7c: 0x240600d8  addiu       $a2, $zero, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b78) {
            ctx->pc = 0x1A4B90u;
            goto label_1a4b90;
        }
    }
    ctx->pc = 0x1A4B80u;
    // 0x1a4b80: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a4b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1a4b84: 0xc139040  jal         func_4E4100
    ctx->pc = 0x1A4B84u;
    SET_GPR_U32(ctx, 31, 0x1A4B8Cu);
    ctx->pc = 0x1A4B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4B84u;
    // 0x1a4b88: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4100u, 0x1A4B84u, 0x1A4B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4B8Cu;
label_1a4b8c:
    // 0x1a4b8c: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x1a4b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
label_1a4b90:
    // 0x1a4b90: 0x8e040354  lw          $a0, 0x354($s0)
    ctx->pc = 0x1a4b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x1a4b94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4B94u;
    {
        const bool branch_taken_0x1a4b94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B94u;
        // 0x1a4b98: 0x240600dd  addiu       $a2, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b94) {
            ctx->pc = 0x1A4BACu;
            goto label_1a4bac;
        }
    }
    ctx->pc = 0x1A4B9Cu;
    // 0x1a4b9c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a4b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1a4ba0: 0xc139040  jal         func_4E4100
    ctx->pc = 0x1A4BA0u;
    SET_GPR_U32(ctx, 31, 0x1A4BA8u);
    ctx->pc = 0x1A4BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4BA0u;
    // 0x1a4ba4: 0x24a53ea0  addiu       $a1, $a1, 0x3EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4100u, 0x1A4BA0u, 0x1A4BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4BA8u;
label_1a4ba8:
    // 0x1a4ba8: 0xae000354  sw          $zero, 0x354($s0)
    ctx->pc = 0x1a4ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
label_1a4bac:
    // 0x1a4bac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a4bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BB4u;
        // 0x1a4bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BBCu;
    // 0x1a4bbc: 0x0  nop
    ctx->pc = 0x1a4bbcu;
    // NOP
    ctx->pc = 0x1a4bc0u;
}
