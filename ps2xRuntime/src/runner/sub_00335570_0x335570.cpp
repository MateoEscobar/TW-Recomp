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

// Function: sub_00335570
// Address: 0x335570 - 0x335608
void sub_00335570_0x335570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335570_0x335570");
#endif

    switch (ctx->pc) {
        case 0x3355a8u: goto label_3355a8;
        case 0x3355b8u: goto label_3355b8;
        case 0x3355c8u: goto label_3355c8;
        default: break;
    }

    ctx->pc = 0x335570u;

    // 0x335570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x335570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x335574: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x335574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x335578: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x335578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33557c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33557cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335580: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x335580u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x335584: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335588: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x335588u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33558c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x33558cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x335590: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x335590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x335594: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x335594u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x335598: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x335598u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x33559c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33559cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3355a0: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x3355A0u;
    SET_GPR_U32(ctx, 31, 0x3355A8u);
    ctx->pc = 0x3355A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355A0u;
    // 0x3355a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x3355A0u, 0x3355A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355A8u;
label_3355a8:
    // 0x3355a8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3355a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3355ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3355acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355b0: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x3355B0u;
    SET_GPR_U32(ctx, 31, 0x3355B8u);
    ctx->pc = 0x3355B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355B0u;
    // 0x3355b4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x3355B0u, 0x3355B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355B8u;
label_3355b8:
    // 0x3355b8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x3355b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3355bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3355bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355c0: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x3355C0u;
    SET_GPR_U32(ctx, 31, 0x3355C8u);
    ctx->pc = 0x3355C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355C0u;
    // 0x3355c4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x3355C0u, 0x3355C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355C8u;
label_3355c8:
    // 0x3355c8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3355c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x3355cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3355ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3355d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3355d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3355d4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3355d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3355d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3355d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3355dc: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3355dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3355e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3355e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3355e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3355e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3355e8: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3355e8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3355ec: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x3355ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3355f0: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x3355f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x3355f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3355f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3355f8: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x3355f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3355fc: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x3355fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x335600: 0x3e00008  jr          $ra
    ctx->pc = 0x335600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335600u;
        // 0x335604: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335608u;
}
