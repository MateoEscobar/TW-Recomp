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

// Function: sub_004E65D8
// Address: 0x4e65d8 - 0x4e6628
void sub_004E65D8_0x4e65d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E65D8_0x4e65d8");
#endif

    switch (ctx->pc) {
        case 0x4e65f8u: goto label_4e65f8;
        case 0x4e6608u: goto label_4e6608;
        default: break;
    }

    ctx->pc = 0x4e65d8u;

    // 0x4e65d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e65d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e65dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e65dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e65e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e65e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e65e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e65e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e65e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e65e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e65ec: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E65ECu;
    {
        const bool branch_taken_0x4e65ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x4E65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E65ECu;
        // 0x4e65f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e65ec) {
            ctx->pc = 0x4E6610u;
            goto label_4e6610;
        }
    }
    ctx->pc = 0x4E65F4u;
    // 0x4e65f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e65f8:
    // 0x4e65f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e65f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e65fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e65fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e6600: 0xc139904  jal         func_4E6410
    ctx->pc = 0x4E6600u;
    SET_GPR_U32(ctx, 31, 0x4E6608u);
    ctx->pc = 0x4E6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6600u;
    // 0x4e6604: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E6410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E6410u, 0x4E6600u, 0x4E6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6608u;
label_4e6608:
    // 0x4e6608: 0x5611fffb  bnel        $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x4E6608u;
    {
        const bool branch_taken_0x4e6608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x4e6608) {
            ctx->pc = 0x4E660Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6608u;
            // 0x4e660c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E65F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e65f8;
        }
    }
    ctx->pc = 0x4E6610u;
label_4e6610:
    // 0x4e6610: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e6610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e6614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e6614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e6618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e661c: 0x3e00008  jr          $ra
    ctx->pc = 0x4E661Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E661Cu;
        // 0x4e6620: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E661Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6624u;
    // 0x4e6624: 0x0  nop
    ctx->pc = 0x4e6624u;
    // NOP
    ctx->pc = 0x4e6628u;
}
