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

// Function: sub_00293950
// Address: 0x293950 - 0x2939b0
void sub_00293950_0x293950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293950_0x293950");
#endif

    switch (ctx->pc) {
        case 0x293968u: goto label_293968;
        default: break;
    }

    ctx->pc = 0x293950u;

    // 0x293950: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x293950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x293954: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x293954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x293958: 0x2449eac0  addiu       $t1, $v0, -0x1540
    ctx->pc = 0x293958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x29395c: 0x24670430  addiu       $a3, $v1, 0x430
    ctx->pc = 0x29395cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1072));
    // 0x293960: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293964: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x293964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293968:
    // 0x293968: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29396c: 0x30c3001f  andi        $v1, $a2, 0x1F
    ctx->pc = 0x29396cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x293970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293974: 0x682004  sllv        $a0, $t0, $v1
    ctx->pc = 0x293974u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x293978: 0x492821  addu        $a1, $v0, $t1
    ctx->pc = 0x293978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x29397c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x29397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x293980: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x293980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x293984: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x293984u;
    {
        const bool branch_taken_0x293984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293984u;
        // 0x293988: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293984) {
            ctx->pc = 0x29399Cu;
            goto label_29399c;
        }
    }
    ctx->pc = 0x29398Cu;
    // 0x29398c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29398cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x293990: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x293990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293994: 0x3e00008  jr          $ra
    ctx->pc = 0x293994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293994u;
        // 0x293998: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29399Cu;
label_29399c:
    // 0x29399c: 0x2cc200aa  sltiu       $v0, $a2, 0xAA
    ctx->pc = 0x29399cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)170) ? 1 : 0);
    // 0x2939a0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2939A0u;
    {
        const bool branch_taken_0x2939a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2939A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939A0u;
        // 0x2939a4: 0x24e70090  addiu       $a3, $a3, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939a0) {
            ctx->pc = 0x293968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293968;
        }
    }
    ctx->pc = 0x2939A8u;
    // 0x2939a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2939ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939A8u;
        // 0x2939ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2939A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2939B0u;
}
