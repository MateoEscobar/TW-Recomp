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

// Function: sub_00202398
// Address: 0x202398 - 0x2023f0
void sub_00202398_0x202398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202398_0x202398");
#endif

    switch (ctx->pc) {
        case 0x2023c0u: goto label_2023c0;
        case 0x2023d0u: goto label_2023d0;
        default: break;
    }

    ctx->pc = 0x202398u;

    // 0x202398: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20239c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2023a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2023a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2023a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2023a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2023a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2023ac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2023b0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2023B0u;
    {
        const bool branch_taken_0x2023b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023B0u;
        // 0x2023b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023b0) {
            ctx->pc = 0x2023D4u;
            goto label_2023d4;
        }
    }
    ctx->pc = 0x2023B8u;
    // 0x2023b8: 0xc06a3aa  jal         func_1A8EA8
    ctx->pc = 0x2023B8u;
    SET_GPR_U32(ctx, 31, 0x2023C0u);
    ctx->pc = 0x2023BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023B8u;
    // 0x2023bc: 0x8e050234  lw          $a1, 0x234($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x2023B8u, 0x2023C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023C0u;
label_2023c0:
    // 0x2023c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2023C0u;
    {
        const bool branch_taken_0x2023c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2023C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023C0u;
        // 0x2023c4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2023c0) {
            ctx->pc = 0x2023D8u;
            goto label_2023d8;
        }
    }
    ctx->pc = 0x2023C8u;
    // 0x2023c8: 0xc074466  jal         func_1D1198
    ctx->pc = 0x2023C8u;
    SET_GPR_U32(ctx, 31, 0x2023D0u);
    ctx->pc = 0x2023CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2023C8u;
    // 0x2023cc: 0x26040270  addiu       $a0, $s0, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1198u, 0x2023C8u, 0x2023D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023D0u;
label_2023d0:
    // 0x2023d0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x2023d0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2023d4:
    // 0x2023d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2023d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2023d8:
    // 0x2023d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2023d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2023dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2023dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2023e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2023e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2023e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2023E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2023E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2023E4u;
        // 0x2023e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2023E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2023ECu;
    // 0x2023ec: 0x0  nop
    ctx->pc = 0x2023ecu;
    // NOP
    ctx->pc = 0x2023f0u;
}
