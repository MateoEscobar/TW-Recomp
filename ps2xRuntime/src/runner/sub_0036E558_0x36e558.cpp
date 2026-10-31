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

// Function: sub_0036E558
// Address: 0x36e558 - 0x36e5f8
void sub_0036E558_0x36e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E558_0x36e558");
#endif

    switch (ctx->pc) {
        case 0x36e584u: goto label_36e584;
        case 0x36e58cu: goto label_36e58c;
        case 0x36e5a0u: goto label_36e5a0;
        case 0x36e5a8u: goto label_36e5a8;
        case 0x36e5bcu: goto label_36e5bc;
        case 0x36e5c4u: goto label_36e5c4;
        case 0x36e5d4u: goto label_36e5d4;
        default: break;
    }

    ctx->pc = 0x36e558u;

    // 0x36e558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36e558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36e55c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36e560: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x36e560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x36e564: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36e568: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36e568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e56c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36e56cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e570: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36e570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36e574: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x36e574u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36e578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e57c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E57Cu;
    SET_GPR_U32(ctx, 31, 0x36E584u);
    ctx->pc = 0x36E580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E57Cu;
    // 0x36e580: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E57Cu, 0x36E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E584u;
label_36e584:
    // 0x36e584: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E584u;
    SET_GPR_U32(ctx, 31, 0x36E58Cu);
    ctx->pc = 0x36E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E584u;
    // 0x36e588: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E584u, 0x36E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E58Cu;
label_36e58c:
    // 0x36e58c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x36e58cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x36e590: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e590u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e594: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36e594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36e598: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E598u;
    SET_GPR_U32(ctx, 31, 0x36E5A0u);
    ctx->pc = 0x36E59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E598u;
    // 0x36e59c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E598u, 0x36E5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5A0u;
label_36e5a0:
    // 0x36e5a0: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E5A0u;
    SET_GPR_U32(ctx, 31, 0x36E5A8u);
    ctx->pc = 0x36E5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E5A0u;
    // 0x36e5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E5A0u, 0x36E5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5A8u;
label_36e5a8:
    // 0x36e5a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x36e5a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e5ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36e5acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x36e5b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36e5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36e5b4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36E5B4u;
    SET_GPR_U32(ctx, 31, 0x36E5BCu);
    ctx->pc = 0x36E5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E5B4u;
    // 0x36e5b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36E5B4u, 0x36E5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5BCu;
label_36e5bc:
    // 0x36e5bc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x36E5BCu;
    SET_GPR_U32(ctx, 31, 0x36E5C4u);
    ctx->pc = 0x36E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E5BCu;
    // 0x36e5c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x36E5BCu, 0x36E5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5C4u;
label_36e5c4:
    // 0x36e5c4: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36e5c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36e5c8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x36e5c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x36e5cc: 0xc10321a  jal         func_40C868
    ctx->pc = 0x36E5CCu;
    SET_GPR_U32(ctx, 31, 0x36E5D4u);
    ctx->pc = 0x36E5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E5CCu;
    // 0x36e5d0: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C868u, 0x36E5CCu, 0x36E5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E5D4u;
label_36e5d4:
    // 0x36e5d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x36e5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36e5d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36e5d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e5dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e5dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36e5e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36e5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e5e4: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x36e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36e5e8: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x36e5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36e5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x36E5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E5ECu;
        // 0x36e5f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E5F4u;
    // 0x36e5f4: 0x0  nop
    ctx->pc = 0x36e5f4u;
    // NOP
    ctx->pc = 0x36e5f8u;
}
