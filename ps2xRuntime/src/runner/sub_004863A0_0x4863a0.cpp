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

// Function: sub_004863A0
// Address: 0x4863a0 - 0x486408
void sub_004863A0_0x4863a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004863A0_0x4863a0");
#endif

    switch (ctx->pc) {
        case 0x4863a0u: goto label_4863a0;
        case 0x4863a4u: goto label_4863a4;
        case 0x4863a8u: goto label_4863a8;
        case 0x4863acu: goto label_4863ac;
        case 0x4863b0u: goto label_4863b0;
        case 0x4863b4u: goto label_4863b4;
        case 0x4863b8u: goto label_4863b8;
        case 0x4863bcu: goto label_4863bc;
        case 0x4863c0u: goto label_4863c0;
        case 0x4863c4u: goto label_4863c4;
        case 0x4863c8u: goto label_4863c8;
        case 0x4863ccu: goto label_4863cc;
        case 0x4863d0u: goto label_4863d0;
        case 0x4863d4u: goto label_4863d4;
        case 0x4863d8u: goto label_4863d8;
        case 0x4863dcu: goto label_4863dc;
        case 0x4863e0u: goto label_4863e0;
        case 0x4863e4u: goto label_4863e4;
        case 0x4863e8u: goto label_4863e8;
        case 0x4863ecu: goto label_4863ec;
        case 0x4863f0u: goto label_4863f0;
        case 0x4863f4u: goto label_4863f4;
        case 0x4863f8u: goto label_4863f8;
        case 0x4863fcu: goto label_4863fc;
        case 0x486400u: goto label_486400;
        case 0x486404u: goto label_486404;
        default: break;
    }

    ctx->pc = 0x4863a0u;

label_4863a0:
    // 0x4863a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4863a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4863a4:
    // 0x4863a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4863a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4863a8:
    // 0x4863a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4863a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4863ac:
    // 0x4863ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4863acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4863b0:
    // 0x4863b0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4863b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4863b4:
    // 0x4863b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4863b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4863b8:
    // 0x4863b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4863b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4863bc:
    // 0x4863bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4863bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4863c0:
    // 0x4863c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4863c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4863c4:
    // 0x4863c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4863c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4863c8:
    // 0x4863c8: 0xc11fa7c  jal         func_47E9F0
label_4863cc:
    if (ctx->pc == 0x4863CCu) {
        ctx->pc = 0x4863CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4863C8u;
        // 0x4863cc: 0x8c52adb0  lw          $s2, -0x5250($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4863D0u;
        goto label_4863d0;
    }
    ctx->pc = 0x4863C8u;
    SET_GPR_U32(ctx, 31, 0x4863D0u);
    ctx->pc = 0x4863CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4863C8u;
    // 0x4863cc: 0x8c52adb0  lw          $s2, -0x5250($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47E9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E9F0u, 0x4863C8u, 0x4863D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4863D0u;
label_4863d0:
    // 0x4863d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4863d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4863d4:
    // 0x4863d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4863d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4863d8:
    // 0x4863d8: 0x240f809  jalr        $s2
label_4863dc:
    if (ctx->pc == 0x4863DCu) {
        ctx->pc = 0x4863DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4863D8u;
        // 0x4863dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4863E0u;
        goto label_4863e0;
    }
    ctx->pc = 0x4863D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x4863E0u);
        ctx->pc = 0x4863DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4863D8u;
        // 0x4863dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4863D8u, 0x4863E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4863E0u;
label_4863e0:
    // 0x4863e0: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x4863e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
label_4863e4:
    // 0x4863e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4863e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4863e8:
    // 0x4863e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4863e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4863ec:
    // 0x4863ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4863ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4863f0:
    // 0x4863f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4863f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4863f4:
    // 0x4863f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4863f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4863f8:
    // 0x4863f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4863f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4863fc:
    // 0x4863fc: 0x3e00008  jr          $ra
label_486400:
    if (ctx->pc == 0x486400u) {
        ctx->pc = 0x486400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4863FCu;
        // 0x486400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x486404u;
        goto label_486404;
    }
    ctx->pc = 0x4863FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4863FCu;
        // 0x486400: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4863FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486404u;
label_486404:
    // 0x486404: 0x0  nop
    ctx->pc = 0x486404u;
    // NOP
    ctx->pc = 0x486408u;
}
