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

// Function: sub_00187960
// Address: 0x187960 - 0x187990
void sub_00187960_0x187960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187960_0x187960");
#endif

    switch (ctx->pc) {
        case 0x187960u: goto label_187960;
        case 0x187964u: goto label_187964;
        case 0x187968u: goto label_187968;
        case 0x18796cu: goto label_18796c;
        case 0x187970u: goto label_187970;
        case 0x187974u: goto label_187974;
        case 0x187978u: goto label_187978;
        case 0x18797cu: goto label_18797c;
        case 0x187980u: goto label_187980;
        case 0x187984u: goto label_187984;
        case 0x187988u: goto label_187988;
        case 0x18798cu: goto label_18798c;
        default: break;
    }

    ctx->pc = 0x187960u;

label_187960:
    // 0x187960: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x187960u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_187964:
    // 0x187964: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_187968:
    if (ctx->pc == 0x187968u) {
        ctx->pc = 0x187968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187964u;
        // 0x187968: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18796Cu;
        goto label_18796c;
    }
    ctx->pc = 0x187964u;
    {
        const bool branch_taken_0x187964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187964u;
        // 0x187968: 0x24a3ffff  addiu       $v1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187964) {
            ctx->pc = 0x1879B0u;
            return;
        }
    }
    ctx->pc = 0x18796Cu;
label_18796c:
    // 0x18796c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x18796cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_187970:
    // 0x187970: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_187974:
    if (ctx->pc == 0x187974u) {
        ctx->pc = 0x187974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187970u;
        // 0x187974: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187978u;
        goto label_187978;
    }
    ctx->pc = 0x187970u;
    {
        const bool branch_taken_0x187970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x187974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187970u;
        // 0x187974: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187970) {
            ctx->pc = 0x1879A8u;
            return;
        }
    }
    ctx->pc = 0x187978u;
label_187978:
    // 0x187978: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_18797c:
    // 0x18797c: 0x24422d50  addiu       $v0, $v0, 0x2D50
    ctx->pc = 0x18797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11600));
label_187980:
    // 0x187980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x187980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_187984:
    // 0x187984: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x187984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_187988:
    // 0x187988: 0x800008  jr          $a0
label_18798c:
    if (ctx->pc == 0x18798Cu) {
        ctx->pc = 0x187990u;
        goto label_fallthrough_0x187988;
    }
    ctx->pc = 0x187988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x187988:
    ctx->pc = 0x187990u;
}
