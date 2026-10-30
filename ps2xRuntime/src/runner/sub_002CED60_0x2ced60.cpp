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

// Function: sub_002CED60
// Address: 0x2ced60 - 0x2cedb0
void sub_002CED60_0x2ced60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CED60_0x2ced60");
#endif

    ctx->pc = 0x2ced60u;

    // 0x2ced60: 0x90820048  lbu         $v0, 0x48($a0)
    ctx->pc = 0x2ced60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ced64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ced64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ced68: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CED68u;
    {
        const bool branch_taken_0x2ced68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2CED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED68u;
        // 0x2ced6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced68) {
            ctx->pc = 0x2CEDA4u;
            goto label_2ceda4;
        }
    }
    ctx->pc = 0x2CED70u;
    // 0x2ced70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ced70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ced74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ced74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ced78: 0x8c6400d8  lw          $a0, 0xD8($v1)
    ctx->pc = 0x2ced78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x2ced7c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CED7Cu;
    {
        const bool branch_taken_0x2ced7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED7Cu;
        // 0x2ced80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced7c) {
            ctx->pc = 0x2CEDA0u;
            goto label_2ceda0;
        }
    }
    ctx->pc = 0x2CED84u;
    // 0x2ced84: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x2ced84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2ced88: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2ced88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2ced8c: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x2ced8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2ced90: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2ced90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ced94: 0x2c631389  sltiu       $v1, $v1, 0x1389
    ctx->pc = 0x2ced94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5001) ? 1 : 0);
    // 0x2ced98: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2CED98u;
    {
        const bool branch_taken_0x2ced98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CED98u;
        // 0x2ced9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ced98) {
            ctx->pc = 0x2CEDA4u;
            goto label_2ceda4;
        }
    }
    ctx->pc = 0x2CEDA0u;
label_2ceda0:
    // 0x2ceda0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ceda0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ceda4:
    // 0x2ceda4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEDACu;
    // 0x2cedac: 0x0  nop
    ctx->pc = 0x2cedacu;
    // NOP
    ctx->pc = 0x2cedb0u;
}
