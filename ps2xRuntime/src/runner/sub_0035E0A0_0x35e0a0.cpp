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

// Function: sub_0035E0A0
// Address: 0x35e0a0 - 0x35e140
void sub_0035E0A0_0x35e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E0A0_0x35e0a0");
#endif

    switch (ctx->pc) {
        case 0x35e0ccu: goto label_35e0cc;
        case 0x35e0d4u: goto label_35e0d4;
        case 0x35e0e8u: goto label_35e0e8;
        case 0x35e0f0u: goto label_35e0f0;
        case 0x35e104u: goto label_35e104;
        case 0x35e10cu: goto label_35e10c;
        case 0x35e11cu: goto label_35e11c;
        default: break;
    }

    ctx->pc = 0x35e0a0u;

    // 0x35e0a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35e0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35e0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e0a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x35e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35e0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35e0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35e0b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35e0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35e0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35e0bc: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x35e0bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x35e0c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e0c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E0C4u;
    SET_GPR_U32(ctx, 31, 0x35E0CCu);
    ctx->pc = 0x35E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0C4u;
    // 0x35e0c8: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E0C4u, 0x35E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0CCu;
label_35e0cc:
    // 0x35e0cc: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E0CCu;
    SET_GPR_U32(ctx, 31, 0x35E0D4u);
    ctx->pc = 0x35E0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0CCu;
    // 0x35e0d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E0CCu, 0x35E0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0D4u;
label_35e0d4:
    // 0x35e0d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x35e0d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x35e0d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35e0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35e0e0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E0E0u;
    SET_GPR_U32(ctx, 31, 0x35E0E8u);
    ctx->pc = 0x35E0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0E0u;
    // 0x35e0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E0E0u, 0x35E0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0E8u;
label_35e0e8:
    // 0x35e0e8: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E0E8u;
    SET_GPR_U32(ctx, 31, 0x35E0F0u);
    ctx->pc = 0x35E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0E8u;
    // 0x35e0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E0E8u, 0x35E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E0F0u;
label_35e0f0:
    // 0x35e0f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35e0f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e0f4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x35e0f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x35e0f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35e0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35e0fc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35E0FCu;
    SET_GPR_U32(ctx, 31, 0x35E104u);
    ctx->pc = 0x35E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E0FCu;
    // 0x35e100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35E0FCu, 0x35E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E104u;
label_35e104:
    // 0x35e104: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35E104u;
    SET_GPR_U32(ctx, 31, 0x35E10Cu);
    ctx->pc = 0x35E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E104u;
    // 0x35e108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35E104u, 0x35E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E10Cu;
label_35e10c:
    // 0x35e10c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x35e10cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x35e110: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x35e110u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x35e114: 0xc08e98c  jal         func_23A630
    ctx->pc = 0x35E114u;
    SET_GPR_U32(ctx, 31, 0x35E11Cu);
    ctx->pc = 0x35E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E114u;
    // 0x35e118: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A630u, 0x35E114u, 0x35E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E11Cu;
label_35e11c:
    // 0x35e11c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x35e11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35e120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35e128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e12c: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x35e12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35e130: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x35e130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35e134: 0x3e00008  jr          $ra
    ctx->pc = 0x35E134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E134u;
        // 0x35e138: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E13Cu;
    // 0x35e13c: 0x0  nop
    ctx->pc = 0x35e13cu;
    // NOP
    ctx->pc = 0x35e140u;
}
