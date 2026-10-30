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

// Function: sub_002FE280
// Address: 0x2fe280 - 0x2fe320
void sub_002FE280_0x2fe280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE280_0x2fe280");
#endif

    switch (ctx->pc) {
        case 0x2fe2a8u: goto label_2fe2a8;
        case 0x2fe2b8u: goto label_2fe2b8;
        case 0x2fe2d8u: goto label_2fe2d8;
        default: break;
    }

    ctx->pc = 0x2fe280u;

    // 0x2fe280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe284: 0x2405029e  addiu       $a1, $zero, 0x29E
    ctx->pc = 0x2fe284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 670));
    // 0x2fe288: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fe288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fe28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fe290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe298: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fe298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe29c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fe29cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fe2a0: 0xc040680  jal         func_101A00
    ctx->pc = 0x2FE2A0u;
    SET_GPR_U32(ctx, 31, 0x2FE2A8u);
    ctx->pc = 0x2FE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2A0u;
    // 0x2fe2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x2FE2A0u, 0x2FE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2A8u;
label_2fe2a8:
    // 0x2fe2a8: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2fe2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2fe2ac: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fe2acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fe2b0: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2FE2B0u;
    SET_GPR_U32(ctx, 31, 0x2FE2B8u);
    ctx->pc = 0x2FE2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2B0u;
    // 0x2fe2b4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2FE2B0u, 0x2FE2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2B8u;
label_2fe2b8:
    // 0x2fe2b8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2fe2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2fe2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fe2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2c0: 0x8c65b734  lw          $a1, -0x48CC($v1)
    ctx->pc = 0x2fe2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50B734u));
    // 0x2fe2c4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2fe2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2fe2c8: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x2fe2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x2fe2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2fe2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2fe2d0: 0xc08c6f6  jal         func_231BD8
    ctx->pc = 0x2FE2D0u;
    SET_GPR_U32(ctx, 31, 0x2FE2D8u);
    ctx->pc = 0x2FE2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE2D0u;
    // 0x2fe2d4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231BD8u, 0x2FE2D0u, 0x2FE2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE2D8u;
label_2fe2d8:
    // 0x2fe2d8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2fe2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe2dc: 0x2405014d  addiu       $a1, $zero, 0x14D
    ctx->pc = 0x2fe2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
    // 0x2fe2e0: 0x3c014096  lui         $at, 0x4096
    ctx->pc = 0x2fe2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16534 << 16));
    // 0x2fe2e4: 0x3421cbe5  ori         $at, $at, 0xCBE5
    ctx->pc = 0x2fe2e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52197);
    // 0x2fe2e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fe2e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe2ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fe2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe2f0: 0xc480012c  lwc1        $f0, 0x12C($a0)
    ctx->pc = 0x2fe2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fe2f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe2f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe2f8: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2fe2f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2fe2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe300: 0x8c830144  lw          $v1, 0x144($a0)
    ctx->pc = 0x2fe300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 324)));
    // 0x2fe304: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2fe304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2fe308: 0xe481012c  swc1        $f1, 0x12C($a0)
    ctx->pc = 0x2fe308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 300), bits); }
    // 0x2fe30c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2fe30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fe310: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fe310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe314: 0xac650144  sw          $a1, 0x144($v1)
    ctx->pc = 0x2fe314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 324), GPR_U32(ctx, 5));
    // 0x2fe318: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE318u;
        // 0x2fe31c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE320u;
}
