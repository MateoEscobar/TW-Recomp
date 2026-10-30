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

// Function: sub_0041A008
// Address: 0x41a008 - 0x41a060
void sub_0041A008_0x41a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041A008_0x41a008");
#endif

    switch (ctx->pc) {
        case 0x41a048u: goto label_41a048;
        case 0x41a050u: goto label_41a050;
        default: break;
    }

    ctx->pc = 0x41a008u;

    // 0x41a008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41a00c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x41a010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41a014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41a014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41a018: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x41a018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x41a01c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x41A01Cu;
    {
        const bool branch_taken_0x41a01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x41A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A01Cu;
        // 0x41a020: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a01c) {
            ctx->pc = 0x41A02Cu;
            goto label_41a02c;
        }
    }
    ctx->pc = 0x41A024u;
    // 0x41a024: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x41A024u;
    {
        const bool branch_taken_0x41a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A024u;
        // 0x41a028: 0xae0003f4  sw          $zero, 0x3F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a024) {
            ctx->pc = 0x41A050u;
            goto label_41a050;
        }
    }
    ctx->pc = 0x41A02Cu;
label_41a02c:
    // 0x41a02c: 0xae0503f8  sw          $a1, 0x3F8($s0)
    ctx->pc = 0x41a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 5));
    // 0x41a030: 0xae02040c  sw          $v0, 0x40C($s0)
    ctx->pc = 0x41a030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1036), GPR_U32(ctx, 2));
    // 0x41a034: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x41A034u;
    {
        const bool branch_taken_0x41a034 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x41A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A034u;
        // 0x41a038: 0xae0003f4  sw          $zero, 0x3F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41a034) {
            ctx->pc = 0x41A048u;
            goto label_41a048;
        }
    }
    ctx->pc = 0x41A03Cu;
    // 0x41a03c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x41a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41a040: 0xc04414a  jal         func_110528
    ctx->pc = 0x41A040u;
    SET_GPR_U32(ctx, 31, 0x41A048u);
    ctx->pc = 0x41A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A040u;
    // 0x41a044: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110528u, 0x41A040u, 0x41A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A048u;
label_41a048:
    // 0x41a048: 0xc106818  jal         func_41A060
    ctx->pc = 0x41A048u;
    SET_GPR_U32(ctx, 31, 0x41A050u);
    ctx->pc = 0x41A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41A048u;
    // 0x41a04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41A060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41A060u, 0x41A048u, 0x41A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41A050u;
label_41a050:
    // 0x41a050: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41a050u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41a054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41a054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41a058: 0x3e00008  jr          $ra
    ctx->pc = 0x41A058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41A058u;
        // 0x41a05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41A058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41A060u;
}
