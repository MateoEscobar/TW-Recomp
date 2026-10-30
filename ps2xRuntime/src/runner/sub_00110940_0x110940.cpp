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

// Function: sub_00110940
// Address: 0x110940 - 0x110a08
void sub_00110940_0x110940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110940_0x110940");
#endif

    switch (ctx->pc) {
        case 0x11097cu: goto label_11097c;
        case 0x110994u: goto label_110994;
        case 0x1109c0u: goto label_1109c0;
        case 0x1109ecu: goto label_1109ec;
        default: break;
    }

    ctx->pc = 0x110940u;

    // 0x110940: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x110940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x110944: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x110944u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x110948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11094c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x11094cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110950: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x110950u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x110954: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x110954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x110958: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x110958u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x11095c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11095cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110960: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x110960u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x110964: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x110964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x110968: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x110968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11096c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x11096cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x110970: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x110970u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x110974: 0xc0451b0  jal         func_1146C0
    ctx->pc = 0x110974u;
    SET_GPR_U32(ctx, 31, 0x11097Cu);
    ctx->pc = 0x110978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110974u;
    // 0x110978: 0x248401e0  addiu       $a0, $a0, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1146C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1146C0u, 0x110974u, 0x11097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11097Cu;
label_11097c:
    // 0x11097c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x110980: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x110980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x110984: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x110984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x110988: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x110988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11098c: 0xc044594  jal         func_111650
    ctx->pc = 0x11098Cu;
    SET_GPR_U32(ctx, 31, 0x110994u);
    ctx->pc = 0x110990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11098Cu;
    // 0x110990: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x111650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111650u, 0x11098Cu, 0x110994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110994u;
label_110994:
    // 0x110994: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x110994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x110998: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x110998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11099c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x11099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1109a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1109a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1109a4: 0x460cab02  mul.s       $f12, $f21, $f12
    ctx->pc = 0x1109a4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    // 0x1109a8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1109a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1109ac: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1109acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1109b0: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1109b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1109b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1109b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1109b8: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x1109B8u;
    SET_GPR_U32(ctx, 31, 0x1109C0u);
    ctx->pc = 0x1109BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109B8u;
    // 0x1109bc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x1109B8u, 0x1109C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109C0u;
label_1109c0:
    // 0x1109c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1109c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1109c4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1109c4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1109c8: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x1109c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1109cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1109ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1109d0: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1109d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1109d4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1109d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    // 0x1109d8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1109d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1109dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1109dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1109e0: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1109e0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1109e4: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x1109E4u;
    SET_GPR_U32(ctx, 31, 0x1109ECu);
    ctx->pc = 0x1109E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1109E4u;
    // 0x1109e8: 0x460cab02  mul.s       $f12, $f21, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x1109E4u, 0x1109ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1109ECu;
label_1109ec:
    // 0x1109ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1109ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1109f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1109f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1109f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1109f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1109f8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1109f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1109fc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1109fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x110a00: 0x3e00008  jr          $ra
    ctx->pc = 0x110A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110A00u;
        // 0x110a04: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110A08u;
}
