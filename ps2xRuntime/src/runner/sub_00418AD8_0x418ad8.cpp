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

// Function: sub_00418AD8
// Address: 0x418ad8 - 0x418b00
void sub_00418AD8_0x418ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418AD8_0x418ad8");
#endif

    switch (ctx->pc) {
        case 0x418ad8u: goto label_418ad8;
        case 0x418adcu: goto label_418adc;
        case 0x418ae0u: goto label_418ae0;
        case 0x418ae4u: goto label_418ae4;
        case 0x418ae8u: goto label_418ae8;
        case 0x418aecu: goto label_418aec;
        case 0x418af0u: goto label_418af0;
        case 0x418af4u: goto label_418af4;
        case 0x418af8u: goto label_418af8;
        case 0x418afcu: goto label_418afc;
        default: break;
    }

    ctx->pc = 0x418ad8u;

label_418ad8:
    // 0x418ad8: 0x8c830120  lw          $v1, 0x120($a0)
    ctx->pc = 0x418ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
label_418adc:
    // 0x418adc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x418adcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_418ae0:
    // 0x418ae0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_418ae4:
    if (ctx->pc == 0x418AE4u) {
        ctx->pc = 0x418AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AE0u;
        // 0x418ae4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418AE8u;
        goto label_418ae8;
    }
    ctx->pc = 0x418AE0u;
    {
        const bool branch_taken_0x418ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x418AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418AE0u;
        // 0x418ae4: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418ae0) {
            ctx->pc = 0x418B3Cu;
            return;
        }
    }
    ctx->pc = 0x418AE8u;
label_418ae8:
    // 0x418ae8: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x418ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_418aec:
    // 0x418aec: 0x2442adc0  addiu       $v0, $v0, -0x5240
    ctx->pc = 0x418aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946240));
label_418af0:
    // 0x418af0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x418af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_418af4:
    // 0x418af4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x418af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_418af8:
    // 0x418af8: 0x800008  jr          $a0
label_418afc:
    if (ctx->pc == 0x418AFCu) {
        ctx->pc = 0x418B00u;
        goto label_fallthrough_0x418af8;
    }
    ctx->pc = 0x418AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418AF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x418af8:
    ctx->pc = 0x418B00u;
}
