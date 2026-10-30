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

// Function: sub_0026F780
// Address: 0x26f780 - 0x26f830
void sub_0026F780_0x26f780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F780_0x26f780");
#endif

    switch (ctx->pc) {
        case 0x26f7a4u: goto label_26f7a4;
        case 0x26f7b8u: goto label_26f7b8;
        case 0x26f7c4u: goto label_26f7c4;
        case 0x26f7d0u: goto label_26f7d0;
        case 0x26f7dcu: goto label_26f7dc;
        case 0x26f7e8u: goto label_26f7e8;
        case 0x26f7f4u: goto label_26f7f4;
        case 0x26f810u: goto label_26f810;
        default: break;
    }

    ctx->pc = 0x26f780u;

    // 0x26f780: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x26f780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x26f784: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26f784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26f788: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26f788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f78c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26f78cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26f790: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26f790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26f794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26f798: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x26f798u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f79c: 0xc089a76  jal         func_2269D8
    ctx->pc = 0x26F79Cu;
    SET_GPR_U32(ctx, 31, 0x26F7A4u);
    ctx->pc = 0x26F7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F79Cu;
    // 0x26f7a0: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269D8u, 0x26F79Cu, 0x26F7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7A4u;
label_26f7a4:
    // 0x26f7a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26f7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7a8: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x26F7A8u;
    {
        const bool branch_taken_0x26f7a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F7A8u;
        // 0x26f7ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f7a8) {
            ctx->pc = 0x26F814u;
            goto label_26f814;
        }
    }
    ctx->pc = 0x26F7B0u;
    // 0x26f7b0: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x26F7B0u;
    SET_GPR_U32(ctx, 31, 0x26F7B8u);
    ctx->pc = 0x26F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7B0u;
    // 0x26f7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26F7B0u, 0x26F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7B8u;
label_26f7b8:
    // 0x26f7b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7bc: 0xc0950ba  jal         func_2542E8
    ctx->pc = 0x26F7BCu;
    SET_GPR_U32(ctx, 31, 0x26F7C4u);
    ctx->pc = 0x26F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7BCu;
    // 0x26f7c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26F7BCu, 0x26F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7C4u;
label_26f7c4:
    // 0x26f7c4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x26f7c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x26f7c8: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x26F7C8u;
    SET_GPR_U32(ctx, 31, 0x26F7D0u);
    ctx->pc = 0x26F7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7C8u;
    // 0x26f7cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x26F7C8u, 0x26F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7D0u;
label_26f7d0:
    // 0x26f7d0: 0x24450003  addiu       $a1, $v0, 0x3
    ctx->pc = 0x26f7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x26f7d4: 0xc0950ba  jal         func_2542E8
    ctx->pc = 0x26F7D4u;
    SET_GPR_U32(ctx, 31, 0x26F7DCu);
    ctx->pc = 0x26F7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7D4u;
    // 0x26f7d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x26F7D4u, 0x26F7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7DCu;
label_26f7dc:
    // 0x26f7dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x26f7dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x26f7e0: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x26F7E0u;
    SET_GPR_U32(ctx, 31, 0x26F7E8u);
    ctx->pc = 0x26F7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7E0u;
    // 0x26f7e4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x26F7E0u, 0x26F7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7E8u;
label_26f7e8:
    // 0x26f7e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7ec: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x26F7ECu;
    SET_GPR_U32(ctx, 31, 0x26F7F4u);
    ctx->pc = 0x26F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7ECu;
    // 0x26f7f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x26F7ECu, 0x26F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7F4u;
label_26f7f4:
    // 0x26f7f4: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x26f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26f7f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x26f7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26f800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f804: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x26f804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26f808: 0xc0875a0  jal         func_21D680
    ctx->pc = 0x26F808u;
    SET_GPR_U32(ctx, 31, 0x26F810u);
    ctx->pc = 0x26F80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F808u;
    // 0x26f80c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D680u, 0x26F808u, 0x26F810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F810u;
label_26f810:
    // 0x26f810: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26f810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_26f814:
    // 0x26f814: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26f814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f818: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26f818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f820: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x26f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x26f824: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x26f824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x26f828: 0x3e00008  jr          $ra
    ctx->pc = 0x26F828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F828u;
        // 0x26f82c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F830u;
}
