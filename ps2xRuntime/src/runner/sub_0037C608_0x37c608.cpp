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

// Function: sub_0037C608
// Address: 0x37c608 - 0x37c6a8
void sub_0037C608_0x37c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C608_0x37c608");
#endif

    switch (ctx->pc) {
        case 0x37c634u: goto label_37c634;
        case 0x37c63cu: goto label_37c63c;
        case 0x37c650u: goto label_37c650;
        case 0x37c658u: goto label_37c658;
        case 0x37c66cu: goto label_37c66c;
        case 0x37c674u: goto label_37c674;
        case 0x37c684u: goto label_37c684;
        default: break;
    }

    ctx->pc = 0x37c608u;

    // 0x37c608: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37c608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37c60c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c610: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37c610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37c614: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37c614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37c618: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c61c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c624: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x37c624u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x37c628: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c62c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C62Cu;
    SET_GPR_U32(ctx, 31, 0x37C634u);
    ctx->pc = 0x37C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C62Cu;
    // 0x37c630: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C62Cu, 0x37C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C634u;
label_37c634:
    // 0x37c634: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C634u;
    SET_GPR_U32(ctx, 31, 0x37C63Cu);
    ctx->pc = 0x37C638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C634u;
    // 0x37c638: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C634u, 0x37C63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C63Cu;
label_37c63c:
    // 0x37c63c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x37c63cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x37c640: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c644: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c648: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C648u;
    SET_GPR_U32(ctx, 31, 0x37C650u);
    ctx->pc = 0x37C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C648u;
    // 0x37c64c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C648u, 0x37C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C650u;
label_37c650:
    // 0x37c650: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C650u;
    SET_GPR_U32(ctx, 31, 0x37C658u);
    ctx->pc = 0x37C654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C650u;
    // 0x37c654: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C650u, 0x37C658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C658u;
label_37c658:
    // 0x37c658: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c65c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x37c65cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x37c660: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c664: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C664u;
    SET_GPR_U32(ctx, 31, 0x37C66Cu);
    ctx->pc = 0x37C668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C664u;
    // 0x37c668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C664u, 0x37C66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C66Cu;
label_37c66c:
    // 0x37c66c: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x37C66Cu;
    SET_GPR_U32(ctx, 31, 0x37C674u);
    ctx->pc = 0x37C670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C66Cu;
    // 0x37c670: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x37C66Cu, 0x37C674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C674u;
label_37c674:
    // 0x37c674: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37c674u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x37c678: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x37c678u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x37c67c: 0xc05fc98  jal         func_17F260
    ctx->pc = 0x37C67Cu;
    SET_GPR_U32(ctx, 31, 0x37C684u);
    ctx->pc = 0x37C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C67Cu;
    // 0x37c680: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F260u, 0x37C67Cu, 0x37C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C684u;
label_37c684:
    // 0x37c684: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37c684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c688: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c68c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37c68cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c694: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x37c694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37c698: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x37c698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37c69c: 0x3e00008  jr          $ra
    ctx->pc = 0x37C69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C69Cu;
        // 0x37c6a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C6A4u;
    // 0x37c6a4: 0x0  nop
    ctx->pc = 0x37c6a4u;
    // NOP
    ctx->pc = 0x37c6a8u;
}
