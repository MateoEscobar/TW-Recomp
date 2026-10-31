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

// Function: sub_00144BF0
// Address: 0x144bf0 - 0x144c38
void sub_00144BF0_0x144bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144BF0_0x144bf0");
#endif

    ctx->pc = 0x144bf0u;

    // 0x144bf0: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x144bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x144bf4: 0x2487001c  addiu       $a3, $a0, 0x1C
    ctx->pc = 0x144bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x144bf8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x144bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x144bfc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x144bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x144c00: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144c04: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144c08: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x144C08u;
    {
        const bool branch_taken_0x144c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C08u;
        // 0x144c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144c08) {
            ctx->pc = 0x144C2Cu;
            goto label_144c2c;
        }
    }
    ctx->pc = 0x144C10u;
    // 0x144c10: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x144c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144c14: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x144c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x144c18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x144c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x144c1c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x144c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x144c20: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x144c20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144c24: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x144c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x144c28: 0x2c640001  sltiu       $a0, $v1, 0x1
    ctx->pc = 0x144c28u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_144c2c:
    // 0x144c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x144C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144C2Cu;
        // 0x144c30: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144C34u;
    // 0x144c34: 0x0  nop
    ctx->pc = 0x144c34u;
    // NOP
    ctx->pc = 0x144c38u;
}
