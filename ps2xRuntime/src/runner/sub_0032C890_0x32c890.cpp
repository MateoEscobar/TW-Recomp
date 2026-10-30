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

// Function: sub_0032C890
// Address: 0x32c890 - 0x32c8ec
void sub_0032C890_0x32c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C890_0x32c890");
#endif

    switch (ctx->pc) {
        case 0x32c8dcu: goto label_32c8dc;
        default: break;
    }

    ctx->pc = 0x32c890u;

    // 0x32c890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c894: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32c894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c898: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c89c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x32c89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32c8a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x32c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32c8a4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x32C8A4u;
    {
        const bool branch_taken_0x32c8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8A4u;
        // 0x32c8a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8a4) {
            ctx->pc = 0x32C904u;
            return;
        }
    }
    ctx->pc = 0x32C8ACu;
    // 0x32c8ac: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x32c8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x32c8b0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x32C8B0u;
    {
        const bool branch_taken_0x32c8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8B0u;
        // 0x32c8b4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8b0) {
            ctx->pc = 0x32C900u;
            return;
        }
    }
    ctx->pc = 0x32C8B8u;
    // 0x32c8b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c8bc: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x32c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x32c8c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x32c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32c8c4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32c8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32c8c8: 0x800008  jr          $a0
    ctx->pc = 0x32C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x32C8D0u: goto label_32c8d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C8C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x32C8D0u;
label_32c8d0:
    // 0x32c8d0: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x32c8d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x32c8d4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x32C8D4u;
    SET_GPR_U32(ctx, 31, 0x32C8DCu);
    ctx->pc = 0x32C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C8D4u;
    // 0x32c8d8: 0xdca50008  ld          $a1, 0x8($a1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x32C8D4u, 0x32C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C8DCu;
label_32c8dc:
    // 0x32c8dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32c8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c8e0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x32c8e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x32c8e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32C8E4u;
    {
        const bool branch_taken_0x32c8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8E4u;
        // 0x32c8e8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8e4) {
            ctx->pc = 0x32C904u;
            return;
        }
    }
    ctx->pc = 0x32C8ECu;
}
