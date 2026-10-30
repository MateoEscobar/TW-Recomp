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

// Function: sub_00145980
// Address: 0x145980 - 0x145a10
void sub_00145980_0x145980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145980_0x145980");
#endif

    switch (ctx->pc) {
        case 0x1459b4u: goto label_1459b4;
        case 0x1459bcu: goto label_1459bc;
        case 0x1459c8u: goto label_1459c8;
        default: break;
    }

    ctx->pc = 0x145980u;

    // 0x145980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x145980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x145984: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x145984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x145988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14598c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14598cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145994: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x145994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x145998: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x145998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x14599c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459a0: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x1459a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x1459a4: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1459a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1459a8: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1459a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1459ac: 0xc0523e6  jal         func_148F98
    ctx->pc = 0x1459ACu;
    SET_GPR_U32(ctx, 31, 0x1459B4u);
    ctx->pc = 0x1459B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459ACu;
    // 0x1459b0: 0xae000058  sw          $zero, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F98u, 0x1459ACu, 0x1459B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459B4u;
label_1459b4:
    // 0x1459b4: 0xc0523f6  jal         func_148FD8
    ctx->pc = 0x1459B4u;
    SET_GPR_U32(ctx, 31, 0x1459BCu);
    ctx->pc = 0x1459B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459B4u;
    // 0x1459b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FD8u, 0x1459B4u, 0x1459BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459BCu;
label_1459bc:
    // 0x1459bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1459bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459c0: 0xc0523f6  jal         func_148FD8
    ctx->pc = 0x1459C0u;
    SET_GPR_U32(ctx, 31, 0x1459C8u);
    ctx->pc = 0x1459C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1459C0u;
    // 0x1459c4: 0xfe020020  sd          $v0, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148FD8u, 0x1459C0u, 0x1459C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1459C8u;
label_1459c8:
    // 0x1459c8: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x1459c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x1459cc: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x1459ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x1459d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1459d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1459d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1459d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1459d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1459d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1459dc: 0xfe020028  sd          $v0, 0x28($s0)
    ctx->pc = 0x1459dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 2));
    // 0x1459e0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1459e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1459e4: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x1459e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x1459e8: 0xfe000030  sd          $zero, 0x30($s0)
    ctx->pc = 0x1459e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 0));
    // 0x1459ec: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1459ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1459f0: 0xfe000040  sd          $zero, 0x40($s0)
    ctx->pc = 0x1459f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 0));
    // 0x1459f4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1459f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1459f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1459f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1459fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1459fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145a04: 0x3e00008  jr          $ra
    ctx->pc = 0x145A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A04u;
        // 0x145a08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145A0Cu;
    // 0x145a0c: 0x0  nop
    ctx->pc = 0x145a0cu;
    // NOP
    ctx->pc = 0x145a10u;
}
