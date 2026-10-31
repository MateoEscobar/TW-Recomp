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

// Function: sub_00420BA8
// Address: 0x420ba8 - 0x420bd0
void sub_00420BA8_0x420ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420BA8_0x420ba8");
#endif

    switch (ctx->pc) {
        case 0x420ba8u: goto label_420ba8;
        case 0x420bacu: goto label_420bac;
        case 0x420bb0u: goto label_420bb0;
        case 0x420bb4u: goto label_420bb4;
        case 0x420bb8u: goto label_420bb8;
        case 0x420bbcu: goto label_420bbc;
        case 0x420bc0u: goto label_420bc0;
        case 0x420bc4u: goto label_420bc4;
        case 0x420bc8u: goto label_420bc8;
        case 0x420bccu: goto label_420bcc;
        default: break;
    }

    ctx->pc = 0x420ba8u;

label_420ba8:
    // 0x420ba8: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x420ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_420bac:
    // 0x420bac: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_420bb0:
    if (ctx->pc == 0x420BB0u) {
        ctx->pc = 0x420BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420BACu;
        // 0x420bb0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x420BB4u;
        goto label_420bb4;
    }
    ctx->pc = 0x420BACu;
    {
        const bool branch_taken_0x420bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420BACu;
        // 0x420bb0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420bac) {
            ctx->pc = 0x420C00u;
            return;
        }
    }
    ctx->pc = 0x420BB4u;
label_420bb4:
    // 0x420bb4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x420bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_420bb8:
    // 0x420bb8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x420bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_420bbc:
    // 0x420bbc: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x420bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
label_420bc0:
    // 0x420bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x420bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_420bc4:
    // 0x420bc4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x420bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_420bc8:
    // 0x420bc8: 0x800008  jr          $a0
label_420bcc:
    if (ctx->pc == 0x420BCCu) {
        ctx->pc = 0x420BD0u;
        goto label_fallthrough_0x420bc8;
    }
    ctx->pc = 0x420BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420BC8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x420bc8:
    ctx->pc = 0x420BD0u;
}
