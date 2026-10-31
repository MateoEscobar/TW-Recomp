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

// Function: sub_0046E0C8
// Address: 0x46e0c8 - 0x46e140
void sub_0046E0C8_0x46e0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046E0C8_0x46e0c8");
#endif

    ctx->pc = 0x46e0c8u;

    // 0x46e0c8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x46e0c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x46e0cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x46e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x46e0d0: 0x14c20007  bne         $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x46E0D0u;
    {
        const bool branch_taken_0x46e0d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x46E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E0D0u;
        // 0x46e0d4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46e0d0) {
            ctx->pc = 0x46E0F0u;
            goto label_46e0f0;
        }
    }
    ctx->pc = 0x46E0D8u;
    // 0x46e0d8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x46e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x46e0dc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46e0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x46e0e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46e0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x46e0e4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x46E0E4u;
    {
        const bool branch_taken_0x46e0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46e0e4) {
            ctx->pc = 0x46E0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E0E4u;
            // 0x46e0e8: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E110u;
            goto label_46e110;
        }
    }
    ctx->pc = 0x46E0ECu;
    // 0x46e0ec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x46e0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_46e0f0:
    // 0x46e0f0: 0x54c2000a  bnel        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x46E0F0u;
    {
        const bool branch_taken_0x46e0f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x46e0f0) {
            ctx->pc = 0x46E0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E0F0u;
            // 0x46e0f4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E11Cu;
            goto label_46e11c;
        }
    }
    ctx->pc = 0x46E0F8u;
    // 0x46e0f8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x46e0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x46e0fc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x46e0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x46e100: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x46e100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x46e104: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x46E104u;
    {
        const bool branch_taken_0x46e104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46e104) {
            ctx->pc = 0x46E108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46E104u;
            // 0x46e108: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46E11Cu;
            goto label_46e11c;
        }
    }
    ctx->pc = 0x46E10Cu;
    // 0x46e10c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x46e10cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_46e110:
    // 0x46e110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x46e110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x46e114: 0x3e00008  jr          $ra
    ctx->pc = 0x46E114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E114u;
        // 0x46e118: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E11Cu;
label_46e11c:
    // 0x46e11c: 0x94830004  lhu         $v1, 0x4($a0)
    ctx->pc = 0x46e11cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x46e120: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46e120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46e124: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x46e124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x46e128: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x46e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x46e12c: 0x3e00008  jr          $ra
    ctx->pc = 0x46E12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46E12Cu;
        // 0x46e130: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46E12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46E134u;
    // 0x46e134: 0x0  nop
    ctx->pc = 0x46e134u;
    // NOP
    // 0x46e138: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x46e138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x46e13c: 0x0  nop
    ctx->pc = 0x46e13cu;
    // NOP
    ctx->pc = 0x46e140u;
}
