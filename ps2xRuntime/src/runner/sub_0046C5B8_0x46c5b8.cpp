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

// Function: sub_0046C5B8
// Address: 0x46c5b8 - 0x46c638
void sub_0046C5B8_0x46c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046C5B8_0x46c5b8");
#endif

    switch (ctx->pc) {
        case 0x46c5f4u: goto label_46c5f4;
        default: break;
    }

    ctx->pc = 0x46c5b8u;

    // 0x46c5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46c5bc: 0xaf8588d0  sw          $a1, -0x7730($gp)
    ctx->pc = 0x46c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936784), GPR_U32(ctx, 5));
    // 0x46c5c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46c5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46c5c4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46c5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x46c5c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46c5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c5cc: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x46c5ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x46c5d0: 0x8c44e6f8  lw          $a0, -0x1908($v0)
    ctx->pc = 0x46c5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52E6F8u));
    // 0x46c5d4: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x46c5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x46c5d8: 0x8f8584dc  lw          $a1, -0x7B24($gp)
    ctx->pc = 0x46c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935772)));
    // 0x46c5dc: 0x2508a370  addiu       $t0, $t0, -0x5C90
    ctx->pc = 0x46c5dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943600));
    // 0x46c5e0: 0x8f8784e0  lw          $a3, -0x7B20($gp)
    ctx->pc = 0x46c5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x46c5e4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x46c5e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x46c5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46c5ec: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x46C5ECu;
    SET_GPR_U32(ctx, 31, 0x46C5F4u);
    ctx->pc = 0x46C5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46C5ECu;
    // 0x46c5f0: 0x35290012  ori         $t1, $t1, 0x12 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)18);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x46C5ECu, 0x46C5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46C5F4u;
label_46c5f4:
    // 0x46c5f4: 0x8f8488d0  lw          $a0, -0x7730($gp)
    ctx->pc = 0x46c5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936784)));
    // 0x46c5f8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46c5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x46c5fc: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x46c5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
    // 0x46c600: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x46c600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x46c604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46C604u;
    {
        const bool branch_taken_0x46c604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C604u;
        // 0x46c608: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c604) {
            ctx->pc = 0x46C614u;
            goto label_46c614;
        }
    }
    ctx->pc = 0x46C60Cu;
    // 0x46c60c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x46C60Cu;
    {
        const bool branch_taken_0x46c60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C60Cu;
        // 0x46c610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46c60c) {
            ctx->pc = 0x46C624u;
            goto label_46c624;
        }
    }
    ctx->pc = 0x46C614u;
label_46c614:
    // 0x46c614: 0x8f8388d4  lw          $v1, -0x772C($gp)
    ctx->pc = 0x46c614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936788)));
    // 0x46c618: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46c618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46c61c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x46c61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x46c620: 0xaf8388d4  sw          $v1, -0x772C($gp)
    ctx->pc = 0x46c620u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936788), GPR_U32(ctx, 3));
label_46c624:
    // 0x46c624: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46c624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46c628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46c628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46c62c: 0x3e00008  jr          $ra
    ctx->pc = 0x46C62Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46C62Cu;
        // 0x46c630: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46C62Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46C634u;
    // 0x46c634: 0x0  nop
    ctx->pc = 0x46c634u;
    // NOP
    ctx->pc = 0x46c638u;
}
