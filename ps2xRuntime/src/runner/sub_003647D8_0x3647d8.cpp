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

// Function: sub_003647D8
// Address: 0x3647d8 - 0x3648a0
void sub_003647D8_0x3647d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003647D8_0x3647d8");
#endif

    switch (ctx->pc) {
        case 0x364808u: goto label_364808;
        case 0x364810u: goto label_364810;
        case 0x364824u: goto label_364824;
        case 0x36482cu: goto label_36482c;
        case 0x364840u: goto label_364840;
        case 0x364848u: goto label_364848;
        case 0x364860u: goto label_364860;
        case 0x364868u: goto label_364868;
        case 0x36487cu: goto label_36487c;
        default: break;
    }

    ctx->pc = 0x3647d8u;

    // 0x3647d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3647d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3647dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3647dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3647e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3647e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3647e4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3647e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3647e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3647e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3647ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3647f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3647f4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3647f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3647f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3647f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3647fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3647fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x364800: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364800u;
    SET_GPR_U32(ctx, 31, 0x364808u);
    ctx->pc = 0x364804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364800u;
    // 0x364804: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364800u, 0x364808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364808u;
label_364808:
    // 0x364808: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364808u;
    SET_GPR_U32(ctx, 31, 0x364810u);
    ctx->pc = 0x36480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364808u;
    // 0x36480c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364808u, 0x364810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364810u;
label_364810:
    // 0x364810: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x364810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364814: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x364814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364818: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x364818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36481c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36481Cu;
    SET_GPR_U32(ctx, 31, 0x364824u);
    ctx->pc = 0x364820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36481Cu;
    // 0x364820: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36481Cu, 0x364824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364824u;
label_364824:
    // 0x364824: 0xc10b108  jal         func_42C420
    ctx->pc = 0x364824u;
    SET_GPR_U32(ctx, 31, 0x36482Cu);
    ctx->pc = 0x364828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364824u;
    // 0x364828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x364824u, 0x36482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36482Cu;
label_36482c:
    // 0x36482c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36482cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364830: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x364830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364834: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x364834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x364838: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364838u;
    SET_GPR_U32(ctx, 31, 0x364840u);
    ctx->pc = 0x36483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364838u;
    // 0x36483c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364838u, 0x364840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364840u;
label_364840:
    // 0x364840: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x364840u;
    SET_GPR_U32(ctx, 31, 0x364848u);
    ctx->pc = 0x364844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364840u;
    // 0x364844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x364840u, 0x364848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364848u;
label_364848:
    // 0x364848: 0x3406bff0  ori         $a2, $zero, 0xBFF0
    ctx->pc = 0x364848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x36484c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x36484cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x364850: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x364850u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x364854: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x364854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364858: 0xc102472  jal         func_4091C8
    ctx->pc = 0x364858u;
    SET_GPR_U32(ctx, 31, 0x364860u);
    ctx->pc = 0x36485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364858u;
    // 0x36485c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x364858u, 0x364860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364860u;
label_364860:
    // 0x364860: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x364860u;
    SET_GPR_U32(ctx, 31, 0x364868u);
    ctx->pc = 0x364864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364860u;
    // 0x364864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x364860u, 0x364868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364868u;
label_364868:
    // 0x364868: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x364868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36486c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36486cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x364870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364874: 0xc0bf832  jal         func_2FE0C8
    ctx->pc = 0x364874u;
    SET_GPR_U32(ctx, 31, 0x36487Cu);
    ctx->pc = 0x364878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364874u;
    // 0x364878: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0C8u, 0x364874u, 0x36487Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36487Cu;
label_36487c:
    // 0x36487c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36487cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x364880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x364880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364884: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x364884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x364888: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x364888u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36488c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36488cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x364890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x364890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x364894: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x364894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x364898: 0x3e00008  jr          $ra
    ctx->pc = 0x364898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364898u;
        // 0x36489c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3648A0u;
}
