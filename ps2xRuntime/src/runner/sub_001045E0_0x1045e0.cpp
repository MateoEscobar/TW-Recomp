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

// Function: sub_001045E0
// Address: 0x1045e0 - 0x104630
void sub_001045E0_0x1045e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001045E0_0x1045e0");
#endif

    switch (ctx->pc) {
        case 0x1045f4u: goto label_1045f4;
        case 0x104614u: goto label_104614;
        case 0x104620u: goto label_104620;
        default: break;
    }

    ctx->pc = 0x1045e0u;

    // 0x1045e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1045e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1045e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1045e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1045e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1045e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1045ec: 0xc051048  jal         func_144120
    ctx->pc = 0x1045ECu;
    SET_GPR_U32(ctx, 31, 0x1045F4u);
    ctx->pc = 0x1045F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1045ECu;
    // 0x1045f0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x1045ECu, 0x1045F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1045F4u;
label_1045f4:
    // 0x1045f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1045f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1045f8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1045F8u;
    {
        const bool branch_taken_0x1045f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045F8u;
        // 0x1045fc: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1045f8) {
            ctx->pc = 0x10460Cu;
            goto label_10460c;
        }
    }
    ctx->pc = 0x104600u;
    // 0x104600: 0xa2000043  sb          $zero, 0x43($s0)
    ctx->pc = 0x104600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 67), (uint8_t)GPR_U32(ctx, 0));
    // 0x104604: 0x24424240  addiu       $v0, $v0, 0x4240
    ctx->pc = 0x104604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16960));
    // 0x104608: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x104608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_10460c:
    // 0x10460c: 0xc051048  jal         func_144120
    ctx->pc = 0x10460Cu;
    SET_GPR_U32(ctx, 31, 0x104614u);
    ctx->pc = 0x104610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10460Cu;
    // 0x104610: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144120u, 0x10460Cu, 0x104614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104614u;
label_104614:
    // 0x104614: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x104614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x104618: 0xc051032  jal         func_1440C8
    ctx->pc = 0x104618u;
    SET_GPR_U32(ctx, 31, 0x104620u);
    ctx->pc = 0x10461Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104618u;
    // 0x10461c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1440C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1440C8u, 0x104618u, 0x104620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104620u;
label_104620:
    // 0x104620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x104620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104628: 0x3e00008  jr          $ra
    ctx->pc = 0x104628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104628u;
        // 0x10462c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104630u;
}
