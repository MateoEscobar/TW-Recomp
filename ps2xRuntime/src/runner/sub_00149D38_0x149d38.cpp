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

// Function: sub_00149D38
// Address: 0x149d38 - 0x149da0
void sub_00149D38_0x149d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149D38_0x149d38");
#endif

    switch (ctx->pc) {
        case 0x149d54u: goto label_149d54;
        case 0x149d78u: goto label_149d78;
        case 0x149d90u: goto label_149d90;
        default: break;
    }

    ctx->pc = 0x149d38u;

    // 0x149d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x149d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x149d3c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x149d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x149d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149d48: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149d4c: 0xc113518  jal         func_44D460
    ctx->pc = 0x149D4Cu;
    SET_GPR_U32(ctx, 31, 0x149D54u);
    ctx->pc = 0x149D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D4Cu;
    // 0x149d50: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x149D4Cu, 0x149D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D54u;
label_149d54:
    // 0x149d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x149d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149d58: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149D58u;
    {
        const bool branch_taken_0x149d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x149d58) {
            ctx->pc = 0x149D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149D58u;
            // 0x149d5c: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149D70u;
            goto label_149d70;
        }
    }
    ctx->pc = 0x149D60u;
    // 0x149d60: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x149d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x149d64: 0x24429cf0  addiu       $v0, $v0, -0x6310
    ctx->pc = 0x149d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941936));
    // 0x149d68: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x149d6c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_149d70:
    // 0x149d70: 0xc113518  jal         func_44D460
    ctx->pc = 0x149D70u;
    SET_GPR_U32(ctx, 31, 0x149D78u);
    ctx->pc = 0x149D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D70u;
    // 0x149d74: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D460u, 0x149D70u, 0x149D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D78u;
label_149d78:
    // 0x149d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x149D78u;
    {
        const bool branch_taken_0x149d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D78u;
        // 0x149d7c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149d78) {
            ctx->pc = 0x149D88u;
            goto label_149d88;
        }
    }
    ctx->pc = 0x149D80u;
    // 0x149d80: 0x24429da0  addiu       $v0, $v0, -0x6260
    ctx->pc = 0x149d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942112));
    // 0x149d84: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x149d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
label_149d88:
    // 0x149d88: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149D88u;
    SET_GPR_U32(ctx, 31, 0x149D90u);
    ctx->pc = 0x149D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149D88u;
    // 0x149d8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149D88u, 0x149D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149D90u;
label_149d90:
    // 0x149d90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x149d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149d98: 0x3e00008  jr          $ra
    ctx->pc = 0x149D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149D98u;
        // 0x149d9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149DA0u;
}
