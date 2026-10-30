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

// Function: sub_00328D40
// Address: 0x328d40 - 0x328d98
void sub_00328D40_0x328d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00328D40_0x328d40");
#endif

    switch (ctx->pc) {
        case 0x328d7cu: goto label_328d7c;
        default: break;
    }

    ctx->pc = 0x328d40u;

    // 0x328d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x328d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x328d44: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x328d44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x328d48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x328d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x328d4c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x328d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x328d50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x328d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x328d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x328d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x328d5c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x328d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x328d60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x328d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x328d64: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x328d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x328d68: 0x658823  subu        $s1, $v1, $a1
    ctx->pc = 0x328d68u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x328d6c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x328d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328d70: 0x24458d20  addiu       $a1, $v0, -0x72E0
    ctx->pc = 0x328d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937888));
    // 0x328d74: 0xc0ca48e  jal         func_329238
    ctx->pc = 0x328D74u;
    SET_GPR_U32(ctx, 31, 0x328D7Cu);
    ctx->pc = 0x328D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328D74u;
    // 0x328d78: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329238u, 0x328D74u, 0x328D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328D7Cu;
label_328d7c:
    // 0x328d7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x328D7Cu;
    {
        const bool branch_taken_0x328d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328d7c) {
            ctx->pc = 0x328D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x328D7Cu;
            // 0x328d80: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x328D84u;
            goto label_328d84;
        }
    }
    ctx->pc = 0x328D84u;
label_328d84:
    // 0x328d84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x328d84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328d88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x328d88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328d8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x328d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328d90: 0x3e00008  jr          $ra
    ctx->pc = 0x328D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328D90u;
        // 0x328d94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328D98u;
}
