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

// Function: sub_00198890
// Address: 0x198890 - 0x1988f0
void sub_00198890_0x198890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198890_0x198890");
#endif

    switch (ctx->pc) {
        case 0x1988c4u: goto label_1988c4;
        case 0x1988d8u: goto label_1988d8;
        default: break;
    }

    ctx->pc = 0x198890u;

    // 0x198890: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x198894: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x198894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x198898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x198898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19889c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19889cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1988a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1988a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1988a4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1988a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1988a8: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1988a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1988ac: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x1988acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x1988b0: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1988b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1988b4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1988b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1988b8: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1988b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1988bc: 0xc120a34  jal         func_4828D0
    ctx->pc = 0x1988BCu;
    SET_GPR_U32(ctx, 31, 0x1988C4u);
    ctx->pc = 0x1988C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988BCu;
    // 0x1988c0: 0xe7ad0004  swc1        $f13, 0x4($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4828D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4828D0u, 0x1988BCu, 0x1988C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988C4u;
label_1988c4:
    // 0x1988c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1988c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1988c8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1988c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1988cc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1988ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1988d0: 0xc120a46  jal         func_482918
    ctx->pc = 0x1988D0u;
    SET_GPR_U32(ctx, 31, 0x1988D8u);
    ctx->pc = 0x1988D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1988D0u;
    // 0x1988d4: 0xe7b50014  swc1        $f21, 0x14($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x482918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482918u, 0x1988D0u, 0x1988D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1988D8u;
label_1988d8:
    // 0x1988d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1988d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1988dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1988dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1988e0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1988e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1988e4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1988e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1988e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1988E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1988ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1988E8u;
        // 0x1988ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1988E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1988F0u;
}
