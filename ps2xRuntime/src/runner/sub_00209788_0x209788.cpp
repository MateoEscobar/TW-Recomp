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

// Function: sub_00209788
// Address: 0x209788 - 0x209838
void sub_00209788_0x209788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209788_0x209788");
#endif

    switch (ctx->pc) {
        case 0x209788u: goto label_209788;
        case 0x20978cu: goto label_20978c;
        case 0x209790u: goto label_209790;
        case 0x209794u: goto label_209794;
        case 0x209798u: goto label_209798;
        case 0x20979cu: goto label_20979c;
        case 0x2097a0u: goto label_2097a0;
        case 0x2097a4u: goto label_2097a4;
        case 0x2097a8u: goto label_2097a8;
        case 0x2097acu: goto label_2097ac;
        case 0x2097b0u: goto label_2097b0;
        case 0x2097b4u: goto label_2097b4;
        case 0x2097b8u: goto label_2097b8;
        case 0x2097bcu: goto label_2097bc;
        case 0x2097c0u: goto label_2097c0;
        case 0x2097c4u: goto label_2097c4;
        case 0x2097c8u: goto label_2097c8;
        case 0x2097ccu: goto label_2097cc;
        case 0x2097d0u: goto label_2097d0;
        case 0x2097d4u: goto label_2097d4;
        case 0x2097d8u: goto label_2097d8;
        case 0x2097dcu: goto label_2097dc;
        case 0x2097e0u: goto label_2097e0;
        case 0x2097e4u: goto label_2097e4;
        case 0x2097e8u: goto label_2097e8;
        case 0x2097ecu: goto label_2097ec;
        case 0x2097f0u: goto label_2097f0;
        case 0x2097f4u: goto label_2097f4;
        case 0x2097f8u: goto label_2097f8;
        case 0x2097fcu: goto label_2097fc;
        case 0x209800u: goto label_209800;
        case 0x209804u: goto label_209804;
        case 0x209808u: goto label_209808;
        case 0x20980cu: goto label_20980c;
        case 0x209810u: goto label_209810;
        case 0x209814u: goto label_209814;
        case 0x209818u: goto label_209818;
        case 0x20981cu: goto label_20981c;
        case 0x209820u: goto label_209820;
        case 0x209824u: goto label_209824;
        case 0x209828u: goto label_209828;
        case 0x20982cu: goto label_20982c;
        case 0x209830u: goto label_209830;
        case 0x209834u: goto label_209834;
        default: break;
    }

    ctx->pc = 0x209788u;

label_209788:
    // 0x209788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20978c:
    // 0x20978c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209790:
    // 0x209790: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_209794:
    // 0x209794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209798:
    // 0x209798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20979c:
    // 0x20979c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x20979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2097a0:
    // 0x2097a0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2097a4:
    if (ctx->pc == 0x2097A4u) {
        ctx->pc = 0x2097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A0u;
        // 0x2097a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097A8u;
        goto label_2097a8;
    }
    ctx->pc = 0x2097A0u;
    {
        const bool branch_taken_0x2097a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2097A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A0u;
        // 0x2097a4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2097a0) {
            ctx->pc = 0x209824u;
            goto label_209824;
        }
    }
    ctx->pc = 0x2097A8u;
label_2097a8:
    // 0x2097a8: 0xc073462  jal         func_1CD188
label_2097ac:
    if (ctx->pc == 0x2097ACu) {
        ctx->pc = 0x2097ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097A8u;
        // 0x2097ac: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097B0u;
        goto label_2097b0;
    }
    ctx->pc = 0x2097A8u;
    SET_GPR_U32(ctx, 31, 0x2097B0u);
    ctx->pc = 0x2097ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097A8u;
    // 0x2097ac: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD188u, 0x2097A8u, 0x2097B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097B0u;
label_2097b0:
    // 0x2097b0: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2097b4:
    // 0x2097b4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x2097b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_2097b8:
    // 0x2097b8: 0x26108e48  addiu       $s0, $s0, -0x71B8
    ctx->pc = 0x2097b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938184));
label_2097bc:
    // 0x2097bc: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x2097bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_2097c0:
    // 0x2097c0: 0xc139138  jal         func_4E44E0
label_2097c4:
    if (ctx->pc == 0x2097C4u) {
        ctx->pc = 0x2097C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097C0u;
        // 0x2097c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097C8u;
        goto label_2097c8;
    }
    ctx->pc = 0x2097C0u;
    SET_GPR_U32(ctx, 31, 0x2097C8u);
    ctx->pc = 0x2097C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097C0u;
    // 0x2097c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E44E0u, 0x2097C0u, 0x2097C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097C8u;
label_2097c8:
    // 0x2097c8: 0x8e250094  lw          $a1, 0x94($s1)
    ctx->pc = 0x2097c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2097cc:
    // 0x2097cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2097ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2097d0:
    // 0x2097d0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2097d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2097d4:
    // 0x2097d4: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_2097d8:
    // 0x2097d8: 0x60f809  jalr        $v1
label_2097dc:
    if (ctx->pc == 0x2097DCu) {
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097E0u;
        goto label_2097e0;
    }
    ctx->pc = 0x2097D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2097E0u);
        ctx->pc = 0x2097DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097D8u;
        // 0x2097dc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2097D8u, 0x2097E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2097E0u;
label_2097e0:
    // 0x2097e0: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x2097e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_2097e4:
    // 0x2097e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2097e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2097e8:
    // 0x2097e8: 0xc139fe8  jal         func_4E7FA0
label_2097ec:
    if (ctx->pc == 0x2097ECu) {
        ctx->pc = 0x2097ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2097E8u;
        // 0x2097ec: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2097F0u;
        goto label_2097f0;
    }
    ctx->pc = 0x2097E8u;
    SET_GPR_U32(ctx, 31, 0x2097F0u);
    ctx->pc = 0x2097ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2097E8u;
    // 0x2097ec: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7FA0u, 0x2097E8u, 0x2097F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2097F0u;
label_2097f0:
    // 0x2097f0: 0x8e250090  lw          $a1, 0x90($s1)
    ctx->pc = 0x2097f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2097f4:
    // 0x2097f4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2097f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2097f8:
    // 0x2097f8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x2097f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_2097fc:
    // 0x2097fc: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x2097fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_209800:
    // 0x209800: 0x60f809  jalr        $v1
label_209804:
    if (ctx->pc == 0x209804u) {
        ctx->pc = 0x209804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209800u;
        // 0x209804: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209808u;
        goto label_209808;
    }
    ctx->pc = 0x209800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x209808u);
        ctx->pc = 0x209804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209800u;
        // 0x209804: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209800u, 0x209808u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x209808u;
label_209808:
    // 0x209808: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x209808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_20980c:
    // 0x20980c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20980cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209810:
    // 0x209810: 0xc139fc8  jal         func_4E7F20
label_209814:
    if (ctx->pc == 0x209814u) {
        ctx->pc = 0x209814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209810u;
        // 0x209814: 0x2406006d  addiu       $a2, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209818u;
        goto label_209818;
    }
    ctx->pc = 0x209810u;
    SET_GPR_U32(ctx, 31, 0x209818u);
    ctx->pc = 0x209814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209810u;
    // 0x209814: 0x2406006d  addiu       $a2, $zero, 0x6D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7F20u, 0x209810u, 0x209818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209818u;
label_209818:
    // 0x209818: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x209818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_20981c:
    // 0x20981c: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x20981cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_209820:
    // 0x209820: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_209824:
    // 0x209824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_209828:
    // 0x209828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20982c:
    // 0x20982c: 0x3e00008  jr          $ra
label_209830:
    if (ctx->pc == 0x209830u) {
        ctx->pc = 0x209830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20982Cu;
        // 0x209830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x209834u;
        goto label_209834;
    }
    ctx->pc = 0x20982Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20982Cu;
        // 0x209830: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20982Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209834u;
label_209834:
    // 0x209834: 0x0  nop
    ctx->pc = 0x209834u;
    // NOP
    ctx->pc = 0x209838u;
}
