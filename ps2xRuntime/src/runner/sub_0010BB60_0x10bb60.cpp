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

// Function: sub_0010BB60
// Address: 0x10bb60 - 0x10bbd0
void sub_0010BB60_0x10bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB60_0x10bb60");
#endif

    ctx->pc = 0x10bb60u;

    // 0x10bb60: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10bb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10bb64: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x10bb64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb68: 0x8c47a8bc  lw          $a3, -0x5744($v0)
    ctx->pc = 0x10bb68u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x50A8BCu));
    // 0x10bb6c: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x10bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x10bb70: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x10bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x10bb74: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x10bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10bb78: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10BB78u;
    {
        const bool branch_taken_0x10bb78 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB78u;
        // 0x10bb7c: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb78) {
            ctx->pc = 0x10BBBCu;
            goto label_10bbbc;
        }
    }
    ctx->pc = 0x10BB80u;
    // 0x10bb80: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x10bb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x10bb84: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10bb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10bb88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bb8c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x10bb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10bb90: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BB90u;
    {
        const bool branch_taken_0x10bb90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB90u;
        // 0x10bb94: 0xace4000c  sw          $a0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bb90) {
            ctx->pc = 0x10BBB4u;
            goto label_10bbb4;
        }
    }
    ctx->pc = 0x10BB98u;
    // 0x10bb98: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x10bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x10bb9c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x10bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x10bba0: 0x244251f8  addiu       $v0, $v0, 0x51F8
    ctx->pc = 0x10bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20984));
    // 0x10bba4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10bba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10bba8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x10bba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x10bbac: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x10bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x10bbb0: 0xa4c0001e  sh          $zero, 0x1E($a2)
    ctx->pc = 0x10bbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 30), (uint16_t)GPR_U32(ctx, 0));
label_10bbb4:
    // 0x10bbb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10BBB4u;
    {
        const bool branch_taken_0x10bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBB4u;
        // 0x10bbb8: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bbb4) {
            ctx->pc = 0x10BBC0u;
            goto label_10bbc0;
        }
    }
    ctx->pc = 0x10BBBCu;
label_10bbbc:
    // 0x10bbbc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10bbbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10bbc0:
    // 0x10bbc0: 0xac680010  sw          $t0, 0x10($v1)
    ctx->pc = 0x10bbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 8));
    // 0x10bbc4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10bbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10BBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BBC8u;
        // 0x10bbcc: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BBD0u;
}
