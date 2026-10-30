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

// Function: sub_0010BE78
// Address: 0x10be78 - 0x10bf40
void sub_0010BE78_0x10be78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BE78_0x10be78");
#endif

    ctx->pc = 0x10be78u;

    // 0x10be78: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10be78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10be7c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10be7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be80: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10be80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10be84: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10be84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10be88: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x10be8c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x10be8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be90: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x10be90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x10be94: 0x8ca4378c  lw          $a0, 0x378C($a1)
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 14220)));
    // 0x10be98: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x10BE98u;
    {
        const bool branch_taken_0x10be98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE98u;
        // 0x10be9c: 0x8c460038  lw          $a2, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be98) {
            ctx->pc = 0x10BED0u;
            goto label_10bed0;
        }
    }
    ctx->pc = 0x10BEA0u;
    // 0x10bea0: 0x24823a98  addiu       $v0, $a0, 0x3A98
    ctx->pc = 0x10bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 15000));
    // 0x10bea4: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x10bea4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10bea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BEA8u;
    {
        const bool branch_taken_0x10bea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEA8u;
        // 0x10beac: 0x248207d0  addiu       $v0, $a0, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bea8) {
            ctx->pc = 0x10BEBCu;
            goto label_10bebc;
        }
    }
    ctx->pc = 0x10BEB0u;
    // 0x10beb0: 0xaca03788  sw          $zero, 0x3788($a1)
    ctx->pc = 0x10beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14216), GPR_U32(ctx, 0));
    // 0x10beb4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10BEB4u;
    {
        const bool branch_taken_0x10beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEB4u;
        // 0x10beb8: 0xaca0378c  sw          $zero, 0x378C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 14220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10beb4) {
            ctx->pc = 0x10BEE0u;
            goto label_10bee0;
        }
    }
    ctx->pc = 0x10BEBCu;
label_10bebc:
    // 0x10bebc: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x10bebcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10bec0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BEC0u;
    {
        const bool branch_taken_0x10bec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC0u;
        // 0x10bec4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec0) {
            ctx->pc = 0x10BED0u;
            goto label_10bed0;
        }
    }
    ctx->pc = 0x10BEC8u;
    // 0x10bec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10BEC8u;
    {
        const bool branch_taken_0x10bec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC8u;
        // 0x10becc: 0xaca23788  sw          $v0, 0x3788($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 14216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec8) {
            ctx->pc = 0x10BEE0u;
            goto label_10bee0;
        }
    }
    ctx->pc = 0x10BED0u;
label_10bed0:
    // 0x10bed0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10bed4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10bed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10bed8: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x10bedc: 0xac403788  sw          $zero, 0x3788($v0)
    ctx->pc = 0x10bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14216), GPR_U32(ctx, 0));
label_10bee0:
    // 0x10bee0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10bee4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bee8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x10bee8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x10beec: 0x8c65040c  lw          $a1, 0x40C($v1)
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1036)));
    // 0x10bef0: 0x14a40009  bne         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10BEF0u;
    {
        const bool branch_taken_0x10bef0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x10BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEF0u;
        // 0x10bef4: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bef0) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BEF8u;
    // 0x10bef8: 0x8d02b734  lw          $v0, -0x48CC($t0)
    ctx->pc = 0x10bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294948660)));
    // 0x10befc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10befcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10bf00: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x10bf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x10bf04: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x10bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10bf08: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x10bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x10bf0c: 0xac653790  sw          $a1, 0x3790($v1)
    ctx->pc = 0x10bf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14224), GPR_U32(ctx, 5));
    // 0x10bf10: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF10u;
        // 0x10bf14: 0xac643794  sw          $a0, 0x3794($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 14228), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BF18u;
label_10bf18:
    // 0x10bf18: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10bf1c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x10bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x10bf20: 0x8c433794  lw          $v1, 0x3794($v0)
    ctx->pc = 0x10bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14228)));
    // 0x10bf24: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x10bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x10bf28: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x10bf28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x10bf2c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BF2Cu;
    {
        const bool branch_taken_0x10bf2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bf2c) {
            ctx->pc = 0x10BF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF2Cu;
            // 0x10bf30: 0xac403790  sw          $zero, 0x3790($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 14224), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF34u;
            goto label_10bf34;
        }
    }
    ctx->pc = 0x10BF34u;
label_10bf34:
    // 0x10bf34: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BF3Cu;
    // 0x10bf3c: 0x0  nop
    ctx->pc = 0x10bf3cu;
    // NOP
    ctx->pc = 0x10bf40u;
}
