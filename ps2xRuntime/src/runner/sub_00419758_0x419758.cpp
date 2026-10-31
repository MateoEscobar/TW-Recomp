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

// Function: sub_00419758
// Address: 0x419758 - 0x4197a8
void sub_00419758_0x419758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00419758_0x419758");
#endif

    switch (ctx->pc) {
        case 0x419770u: goto label_419770;
        case 0x419788u: goto label_419788;
        default: break;
    }

    ctx->pc = 0x419758u;

    // 0x419758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x41975c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41975cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x419760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x419760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x419764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x419768: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419768u;
    SET_GPR_U32(ctx, 31, 0x419770u);
    ctx->pc = 0x41976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419768u;
    // 0x41976c: 0x26040264  addiu       $a0, $s0, 0x264 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419768u, 0x419770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419770u;
label_419770:
    // 0x419770: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x419770u;
    {
        const bool branch_taken_0x419770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419770u;
        // 0x419774: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419770) {
            ctx->pc = 0x419794u;
            goto label_419794;
        }
    }
    ctx->pc = 0x419778u;
    // 0x419778: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x419778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x41977c: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x41977cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x419780: 0xc0440dc  jal         func_110370
    ctx->pc = 0x419780u;
    SET_GPR_U32(ctx, 31, 0x419788u);
    ctx->pc = 0x419784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419780u;
    // 0x419784: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110370u, 0x419780u, 0x419788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419788u;
label_419788:
    // 0x419788: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x419788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x41978c: 0x8c438690  lw          $v1, -0x7970($v0)
    ctx->pc = 0x41978cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x598690u));
    // 0x419790: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x419790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
label_419794:
    // 0x419794: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x419794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x419798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x419798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41979c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4197a0: 0x3e00008  jr          $ra
    ctx->pc = 0x4197A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4197A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4197A0u;
        // 0x4197a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4197A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4197A8u;
}
