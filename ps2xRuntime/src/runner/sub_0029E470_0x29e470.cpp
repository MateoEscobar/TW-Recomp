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

// Function: sub_0029E470
// Address: 0x29e470 - 0x29e4b0
void sub_0029E470_0x29e470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E470_0x29e470");
#endif

    switch (ctx->pc) {
        case 0x29e4a4u: goto label_29e4a4;
        default: break;
    }

    ctx->pc = 0x29e470u;

    // 0x29e470: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29e470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29e474: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x29e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29e478: 0x24428318  addiu       $v0, $v0, -0x7CE8
    ctx->pc = 0x29e478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935320));
    // 0x29e47c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29e47cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29e480: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x29e480u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29e484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29e484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29e488: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x29e488u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x29e48c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29E48Cu;
    {
        const bool branch_taken_0x29e48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e48c) {
            ctx->pc = 0x29E490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E48Cu;
            // 0x29e490: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E494u;
            goto label_29e494;
        }
    }
    ctx->pc = 0x29E494u;
label_29e494:
    // 0x29e494: 0x2012  mflo        $a0
    ctx->pc = 0x29e494u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x29e498: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x29e498u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x29e49c: 0xc0e402c  jal         func_3900B0
    ctx->pc = 0x29E49Cu;
    SET_GPR_U32(ctx, 31, 0x29E4A4u);
    ctx->pc = 0x29E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E49Cu;
    // 0x29e4a0: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x29E49Cu, 0x29E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E4A4u;
label_29e4a4:
    // 0x29e4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29e4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x29E4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E4A8u;
        // 0x29e4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E4B0u;
}
