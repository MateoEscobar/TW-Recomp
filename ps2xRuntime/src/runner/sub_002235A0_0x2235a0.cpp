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

// Function: sub_002235A0
// Address: 0x2235a0 - 0x2235d8
void sub_002235A0_0x2235a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002235A0_0x2235a0");
#endif

    switch (ctx->pc) {
        case 0x2235a0u: goto label_2235a0;
        case 0x2235a4u: goto label_2235a4;
        case 0x2235a8u: goto label_2235a8;
        case 0x2235acu: goto label_2235ac;
        case 0x2235b0u: goto label_2235b0;
        case 0x2235b4u: goto label_2235b4;
        case 0x2235b8u: goto label_2235b8;
        case 0x2235bcu: goto label_2235bc;
        case 0x2235c0u: goto label_2235c0;
        case 0x2235c4u: goto label_2235c4;
        case 0x2235c8u: goto label_2235c8;
        case 0x2235ccu: goto label_2235cc;
        case 0x2235d0u: goto label_2235d0;
        case 0x2235d4u: goto label_2235d4;
        default: break;
    }

    ctx->pc = 0x2235a0u;

label_2235a0:
    // 0x2235a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2235a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2235a4:
    // 0x2235a4: 0x8cc200d4  lw          $v0, 0xD4($a2)
    ctx->pc = 0x2235a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 212)));
label_2235a8:
    // 0x2235a8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2235ac:
    if (ctx->pc == 0x2235ACu) {
        ctx->pc = 0x2235B0u;
        goto label_2235b0;
    }
    ctx->pc = 0x2235A8u;
    {
        const bool branch_taken_0x2235a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2235a8) {
            ctx->pc = 0x2235F0u;
            return;
        }
    }
    ctx->pc = 0x2235B0u;
label_2235b0:
    // 0x2235b0: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2235b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_2235b4:
    // 0x2235b4: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2235b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2235b8:
    // 0x2235b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2235bc:
    if (ctx->pc == 0x2235BCu) {
        ctx->pc = 0x2235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235B8u;
        // 0x2235bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2235C0u;
        goto label_2235c0;
    }
    ctx->pc = 0x2235B8u;
    {
        const bool branch_taken_0x2235b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2235B8u;
        // 0x2235bc: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2235b8) {
            ctx->pc = 0x2235D8u;
            return;
        }
    }
    ctx->pc = 0x2235C0u;
label_2235c0:
    // 0x2235c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2235c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2235c4:
    // 0x2235c4: 0x2442b370  addiu       $v0, $v0, -0x4C90
    ctx->pc = 0x2235c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947696));
label_2235c8:
    // 0x2235c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2235c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2235cc:
    // 0x2235cc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2235ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2235d0:
    // 0x2235d0: 0x800008  jr          $a0
label_2235d4:
    if (ctx->pc == 0x2235D4u) {
        ctx->pc = 0x2235D8u;
        goto label_fallthrough_0x2235d0;
    }
    ctx->pc = 0x2235D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2235D0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2235d0:
    ctx->pc = 0x2235D8u;
}
