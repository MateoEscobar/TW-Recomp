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

// Function: sub_00377648
// Address: 0x377648 - 0x3776d8
void sub_00377648_0x377648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377648_0x377648");
#endif

    switch (ctx->pc) {
        case 0x37766cu: goto label_37766c;
        case 0x377674u: goto label_377674;
        case 0x37768cu: goto label_37768c;
        case 0x377694u: goto label_377694;
        case 0x3776a8u: goto label_3776a8;
        case 0x3776b8u: goto label_3776b8;
        default: break;
    }

    ctx->pc = 0x377648u;

    // 0x377648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37764c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37764cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377650: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x377650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x377654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377658: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x377658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37765c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37765cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x377660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377664: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377664u;
    SET_GPR_U32(ctx, 31, 0x37766Cu);
    ctx->pc = 0x377668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377664u;
    // 0x377668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377664u, 0x37766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37766Cu;
label_37766c:
    // 0x37766c: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37766Cu;
    SET_GPR_U32(ctx, 31, 0x377674u);
    ctx->pc = 0x377670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37766Cu;
    // 0x377670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37766Cu, 0x377674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377674u;
label_377674:
    // 0x377674: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x377674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x377678: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x377678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37767c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37767cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377680: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x377680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x377684: 0xc102472  jal         func_4091C8
    ctx->pc = 0x377684u;
    SET_GPR_U32(ctx, 31, 0x37768Cu);
    ctx->pc = 0x377688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377684u;
    // 0x377688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x377684u, 0x37768Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37768Cu;
label_37768c:
    // 0x37768c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37768Cu;
    SET_GPR_U32(ctx, 31, 0x377694u);
    ctx->pc = 0x377690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37768Cu;
    // 0x377690: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37768Cu, 0x377694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377694u;
label_377694:
    // 0x377694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x377694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37769c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37769cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3776a0: 0xc102488  jal         func_409220
    ctx->pc = 0x3776A0u;
    SET_GPR_U32(ctx, 31, 0x3776A8u);
    ctx->pc = 0x3776A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776A0u;
    // 0x3776a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x3776A0u, 0x3776A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3776A8u;
label_3776a8:
    // 0x3776a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3776a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3776acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776b0: 0xc0c380a  jal         func_30E028
    ctx->pc = 0x3776B0u;
    SET_GPR_U32(ctx, 31, 0x3776B8u);
    ctx->pc = 0x3776B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3776B0u;
    // 0x3776b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E028u, 0x3776B0u, 0x3776B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3776B8u;
label_3776b8:
    // 0x3776b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3776b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3776bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3776bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3776c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3776c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3776c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3776c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3776c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3776c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3776cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3776CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3776D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3776CCu;
        // 0x3776d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3776CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3776D4u;
    // 0x3776d4: 0x0  nop
    ctx->pc = 0x3776d4u;
    // NOP
    ctx->pc = 0x3776d8u;
}
