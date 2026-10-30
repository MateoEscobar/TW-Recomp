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

// Function: sub_0035B4F8
// Address: 0x35b4f8 - 0x35b578
void sub_0035B4F8_0x35b4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B4F8_0x35b4f8");
#endif

    switch (ctx->pc) {
        case 0x35b518u: goto label_35b518;
        case 0x35b520u: goto label_35b520;
        case 0x35b548u: goto label_35b548;
        case 0x35b550u: goto label_35b550;
        case 0x35b55cu: goto label_35b55c;
        default: break;
    }

    ctx->pc = 0x35b4f8u;

    // 0x35b4f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35b4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35b4fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b500: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x35b500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x35b504: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35b504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35b508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b510: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B510u;
    SET_GPR_U32(ctx, 31, 0x35B518u);
    ctx->pc = 0x35B514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B510u;
    // 0x35b514: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B510u, 0x35B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B518u;
label_35b518:
    // 0x35b518: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35B518u;
    SET_GPR_U32(ctx, 31, 0x35B520u);
    ctx->pc = 0x35B51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B518u;
    // 0x35b51c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35B518u, 0x35B520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B520u;
label_35b520:
    // 0x35b520: 0x340683df  ori         $a2, $zero, 0x83DF
    ctx->pc = 0x35b520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33759);
    // 0x35b524: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35b524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35b528: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x35b528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x35b52c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x35b52cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x35b530: 0x34c6ffc0  ori         $a2, $a2, 0xFFC0
    ctx->pc = 0x35b530u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65472);
    // 0x35b534: 0x633f8  dsll        $a2, $a2, 15
    ctx->pc = 0x35b534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 15);
    // 0x35b538: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35b538u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35b53c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35b53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b540: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B540u;
    SET_GPR_U32(ctx, 31, 0x35B548u);
    ctx->pc = 0x35B544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B540u;
    // 0x35b544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B540u, 0x35B548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B548u;
label_35b548:
    // 0x35b548: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B548u;
    SET_GPR_U32(ctx, 31, 0x35B550u);
    ctx->pc = 0x35B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B548u;
    // 0x35b54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B548u, 0x35B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B550u;
label_35b550:
    // 0x35b550: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35b550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b554: 0xc08edde  jal         func_23B778
    ctx->pc = 0x35B554u;
    SET_GPR_U32(ctx, 31, 0x35B55Cu);
    ctx->pc = 0x35B558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B554u;
    // 0x35b558: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B778u, 0x35B554u, 0x35B55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B55Cu;
label_35b55c:
    // 0x35b55c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x35b55cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b560: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b564: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b568: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x35b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x35B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B56Cu;
        // 0x35b570: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B574u;
    // 0x35b574: 0x0  nop
    ctx->pc = 0x35b574u;
    // NOP
    ctx->pc = 0x35b578u;
}
