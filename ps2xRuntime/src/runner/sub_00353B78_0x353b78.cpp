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

// Function: sub_00353B78
// Address: 0x353b78 - 0x353bf0
void sub_00353B78_0x353b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353B78_0x353b78");
#endif

    switch (ctx->pc) {
        case 0x353b8cu: goto label_353b8c;
        default: break;
    }

    ctx->pc = 0x353b78u;

    // 0x353b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353b7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x353b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x353b80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x353b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x353b84: 0xc0d4ca6  jal         func_353298
    ctx->pc = 0x353B84u;
    SET_GPR_U32(ctx, 31, 0x353B8Cu);
    ctx->pc = 0x353B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x353B84u;
    // 0x353b88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353298u, 0x353B84u, 0x353B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353B8Cu;
label_353b8c:
    // 0x353b8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x353b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353b90: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x353B90u;
    {
        const bool branch_taken_0x353b90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x353B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353B90u;
        // 0x353b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353b90) {
            ctx->pc = 0x353BE0u;
            goto label_353be0;
        }
    }
    ctx->pc = 0x353B98u;
    // 0x353b98: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x353b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x353b9c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x353B9Cu;
    {
        const bool branch_taken_0x353b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x353b9c) {
            ctx->pc = 0x353BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353B9Cu;
            // 0x353ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353BE0u;
            goto label_353be0;
        }
    }
    ctx->pc = 0x353BA4u;
    // 0x353ba4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x353ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x353ba8: 0x1450000d  bne         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x353BA8u;
    {
        const bool branch_taken_0x353ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x353BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BA8u;
        // 0x353bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353ba8) {
            ctx->pc = 0x353BE0u;
            goto label_353be0;
        }
    }
    ctx->pc = 0x353BB0u;
    // 0x353bb0: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x353bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x353bb4: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x353bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x353bb8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x353BB8u;
    {
        const bool branch_taken_0x353bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x353bb8) {
            ctx->pc = 0x353BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x353BB8u;
            // 0x353bbc: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x353BD4u;
            goto label_353bd4;
        }
    }
    ctx->pc = 0x353BC0u;
    // 0x353bc0: 0x30820006  andi        $v0, $a0, 0x6
    ctx->pc = 0x353bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)6);
    // 0x353bc4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x353BC4u;
    {
        const bool branch_taken_0x353bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x353BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BC4u;
        // 0x353bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bc4) {
            ctx->pc = 0x353BDCu;
            goto label_353bdc;
        }
    }
    ctx->pc = 0x353BCCu;
    // 0x353bcc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x353BCCu;
    {
        const bool branch_taken_0x353bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BCCu;
        // 0x353bd0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bcc) {
            ctx->pc = 0x353BE4u;
            goto label_353be4;
        }
    }
    ctx->pc = 0x353BD4u;
label_353bd4:
    // 0x353bd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x353BD4u;
    {
        const bool branch_taken_0x353bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x353BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BD4u;
        // 0x353bd8: 0x9462001c  lhu         $v0, 0x1C($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353bd4) {
            ctx->pc = 0x353BE0u;
            goto label_353be0;
        }
    }
    ctx->pc = 0x353BDCu;
label_353bdc:
    // 0x353bdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x353bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_353be0:
    // 0x353be0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x353be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_353be4:
    // 0x353be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x353be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x353be8: 0x3e00008  jr          $ra
    ctx->pc = 0x353BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353BE8u;
        // 0x353bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353BF0u;
}
