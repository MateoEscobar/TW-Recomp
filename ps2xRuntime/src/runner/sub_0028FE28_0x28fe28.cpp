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

// Function: sub_0028FE28
// Address: 0x28fe28 - 0x28fe90
void sub_0028FE28_0x28fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FE28_0x28fe28");
#endif

    switch (ctx->pc) {
        case 0x28fe48u: goto label_28fe48;
        case 0x28fe58u: goto label_28fe58;
        case 0x28fe60u: goto label_28fe60;
        case 0x28fe70u: goto label_28fe70;
        default: break;
    }

    ctx->pc = 0x28fe28u;

    // 0x28fe28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28fe28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28fe2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x28fe2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x28fe30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28fe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28fe34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28fe34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fe38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fe3c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x28fe3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fe40: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x28fe40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x28fe44: 0x0  nop
    ctx->pc = 0x28fe44u;
    // NOP
label_28fe48:
    // 0x28fe48: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28FE48u;
    {
        const bool branch_taken_0x28fe48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x28fe48) {
            ctx->pc = 0x28FE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FE48u;
            // 0x28fe4c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FE7Cu;
            goto label_28fe7c;
        }
    }
    ctx->pc = 0x28FE50u;
    // 0x28fe50: 0xc0a36c2  jal         func_28DB08
    ctx->pc = 0x28FE50u;
    SET_GPR_U32(ctx, 31, 0x28FE58u);
    ctx->pc = 0x28FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE50u;
    // 0x28fe54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x28FE50u, 0x28FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE58u;
label_28fe58:
    // 0x28fe58: 0xc0be792  jal         func_2F9E48
    ctx->pc = 0x28FE58u;
    SET_GPR_U32(ctx, 31, 0x28FE60u);
    ctx->pc = 0x28FE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE58u;
    // 0x28fe5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9E48u, 0x28FE58u, 0x28FE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE60u;
label_28fe60:
    // 0x28fe60: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FE60u;
    {
        const bool branch_taken_0x28fe60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x28FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE60u;
        // 0x28fe64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe60) {
            ctx->pc = 0x28FE78u;
            goto label_28fe78;
        }
    }
    ctx->pc = 0x28FE68u;
    // 0x28fe68: 0xc0a3698  jal         func_28DA60
    ctx->pc = 0x28FE68u;
    SET_GPR_U32(ctx, 31, 0x28FE70u);
    ctx->pc = 0x28FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE68u;
    // 0x28fe6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DA60u, 0x28FE68u, 0x28FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE70u;
label_28fe70:
    // 0x28fe70: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x28FE70u;
    {
        const bool branch_taken_0x28fe70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fe70) {
            ctx->pc = 0x28FE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FE70u;
            // 0x28fe74: 0x8202002e  lb          $v0, 0x2E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FE48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fe48;
        }
    }
    ctx->pc = 0x28FE78u;
label_28fe78:
    // 0x28fe78: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x28fe78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28fe7c:
    // 0x28fe7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28fe7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fe80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fe80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fe84: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE84u;
        // 0x28fe88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE8Cu;
    // 0x28fe8c: 0x0  nop
    ctx->pc = 0x28fe8cu;
    // NOP
    ctx->pc = 0x28fe90u;
}
