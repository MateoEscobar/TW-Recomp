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

// Function: sub_0036C7A0
// Address: 0x36c7a0 - 0x36c838
void sub_0036C7A0_0x36c7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C7A0_0x36c7a0");
#endif

    switch (ctx->pc) {
        case 0x36c7ccu: goto label_36c7cc;
        case 0x36c7d4u: goto label_36c7d4;
        case 0x36c7e8u: goto label_36c7e8;
        case 0x36c7f0u: goto label_36c7f0;
        case 0x36c804u: goto label_36c804;
        case 0x36c814u: goto label_36c814;
        default: break;
    }

    ctx->pc = 0x36c7a0u;

    // 0x36c7a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36c7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36c7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36c7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36c7a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36c7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36c7ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36c7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36c7b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36c7b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36c7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36c7bc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x36c7bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36c7c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C7C4u;
    SET_GPR_U32(ctx, 31, 0x36C7CCu);
    ctx->pc = 0x36C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7C4u;
    // 0x36c7c8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C7C4u, 0x36C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7CCu;
label_36c7cc:
    // 0x36c7cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36C7CCu;
    SET_GPR_U32(ctx, 31, 0x36C7D4u);
    ctx->pc = 0x36C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7CCu;
    // 0x36c7d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36C7CCu, 0x36C7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7D4u;
label_36c7d4:
    // 0x36c7d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36c7d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36c7d8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36c7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c7e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36C7E0u;
    SET_GPR_U32(ctx, 31, 0x36C7E8u);
    ctx->pc = 0x36C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7E0u;
    // 0x36c7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36C7E0u, 0x36C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7E8u;
label_36c7e8:
    // 0x36c7e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36C7E8u;
    SET_GPR_U32(ctx, 31, 0x36C7F0u);
    ctx->pc = 0x36C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7E8u;
    // 0x36c7ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36C7E8u, 0x36C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7F0u;
label_36c7f0:
    // 0x36c7f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36c7f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36c7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36c7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36c7fc: 0xc102488  jal         func_409220
    ctx->pc = 0x36C7FCu;
    SET_GPR_U32(ctx, 31, 0x36C804u);
    ctx->pc = 0x36C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7FCu;
    // 0x36c800: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36C7FCu, 0x36C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C804u;
label_36c804:
    // 0x36c804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c808: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36c808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36c80c: 0xc103252  jal         func_40C948
    ctx->pc = 0x36C80Cu;
    SET_GPR_U32(ctx, 31, 0x36C814u);
    ctx->pc = 0x36C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C80Cu;
    // 0x36c810: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C948u, 0x36C80Cu, 0x36C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C814u;
label_36c814:
    // 0x36c814: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36c814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36c818: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36c818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c81c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36c81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36c820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c824: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x36c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36c828: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x36c828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36c82c: 0x3e00008  jr          $ra
    ctx->pc = 0x36C82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C82Cu;
        // 0x36c830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C834u;
    // 0x36c834: 0x0  nop
    ctx->pc = 0x36c834u;
    // NOP
    ctx->pc = 0x36c838u;
}
