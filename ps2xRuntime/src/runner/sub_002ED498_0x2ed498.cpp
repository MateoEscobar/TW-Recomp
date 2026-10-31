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

// Function: sub_002ED498
// Address: 0x2ed498 - 0x2ed4f0
void sub_002ED498_0x2ed498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED498_0x2ed498");
#endif

    switch (ctx->pc) {
        case 0x2ed4c4u: goto label_2ed4c4;
        case 0x2ed4dcu: goto label_2ed4dc;
        default: break;
    }

    ctx->pc = 0x2ed498u;

    // 0x2ed498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ed498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ed49c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ed49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ed4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ed4a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ed4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed4ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ed4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ed4b0: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2ed4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2ed4b4: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2ED4B4u;
    {
        const bool branch_taken_0x2ed4b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ED4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4B4u;
        // 0x2ed4b8: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4b4) {
            ctx->pc = 0x2ED4DCu;
            goto label_2ed4dc;
        }
    }
    ctx->pc = 0x2ED4BCu;
    // 0x2ed4bc: 0xc0bb4d8  jal         func_2ED360
    ctx->pc = 0x2ED4BCu;
    SET_GPR_U32(ctx, 31, 0x2ED4C4u);
    ctx->pc = 0x2ED4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED4BCu;
    // 0x2ed4c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED360u, 0x2ED4BCu, 0x2ED4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED4C4u;
label_2ed4c4:
    // 0x2ed4c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ED4C4u;
    {
        const bool branch_taken_0x2ed4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4C4u;
        // 0x2ed4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4c4) {
            ctx->pc = 0x2ED4DCu;
            goto label_2ed4dc;
        }
    }
    ctx->pc = 0x2ED4CCu;
    // 0x2ed4cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ed4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed4d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2ed4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed4d4: 0xc0930a0  jal         func_24C280
    ctx->pc = 0x2ED4D4u;
    SET_GPR_U32(ctx, 31, 0x2ED4DCu);
    ctx->pc = 0x2ED4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED4D4u;
    // 0x2ed4d8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C280u, 0x2ED4D4u, 0x2ED4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED4DCu;
label_2ed4dc:
    // 0x2ed4dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ed4dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED4E4u;
        // 0x2ed4e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED4ECu;
    // 0x2ed4ec: 0x0  nop
    ctx->pc = 0x2ed4ecu;
    // NOP
    ctx->pc = 0x2ed4f0u;
}
