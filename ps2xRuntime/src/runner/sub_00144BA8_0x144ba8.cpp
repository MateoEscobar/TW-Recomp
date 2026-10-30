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

// Function: sub_00144BA8
// Address: 0x144ba8 - 0x144bf0
void sub_00144BA8_0x144ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144BA8_0x144ba8");
#endif

    ctx->pc = 0x144ba8u;

    // 0x144ba8: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x144ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144bac: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x144bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x144bb0: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x144bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x144bb4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x144bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x144bb8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144bb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144bbc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144bc0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x144BC0u;
    {
        const bool branch_taken_0x144bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BC0u;
        // 0x144bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144bc0) {
            ctx->pc = 0x144BE4u;
            goto label_144be4;
        }
    }
    ctx->pc = 0x144BC8u;
    // 0x144bc8: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x144bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144bcc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144bd0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144bd4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x144bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x144bd8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144bd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144bdc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144be0: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x144be0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_144be4:
    // 0x144be4: 0x3e00008  jr          $ra
    ctx->pc = 0x144BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144BE4u;
        // 0x144be8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144BECu;
    // 0x144bec: 0x0  nop
    ctx->pc = 0x144becu;
    // NOP
    ctx->pc = 0x144bf0u;
}
