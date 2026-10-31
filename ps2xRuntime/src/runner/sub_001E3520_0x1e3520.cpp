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

// Function: sub_001E3520
// Address: 0x1e3520 - 0x1e35d8
void sub_001E3520_0x1e3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3520_0x1e3520");
#endif

    switch (ctx->pc) {
        case 0x1e3574u: goto label_1e3574;
        case 0x1e358cu: goto label_1e358c;
        case 0x1e35bcu: goto label_1e35bc;
        default: break;
    }

    ctx->pc = 0x1e3520u;

    // 0x1e3520: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1e3520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1e3524: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3528: 0xc440eee4  lwc1        $f0, -0x111C($v0)
    ctx->pc = 0x1e3528u;
    { uint32_t bits = FAST_READ32(0x50EEE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e352c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1e352cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1e3530: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e3530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e3534: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e3534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3538: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e3538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e353c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1e353cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e3540: 0xc461eee8  lwc1        $f1, -0x1118($v1)
    ctx->pc = 0x1e3540u;
    { uint32_t bits = FAST_READ32(0x50EEE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e3544: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e354c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e354cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e3550: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3554: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e3554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e3558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e355c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1e355cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1e3560: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e3560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e3564: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x1e3564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1e3568: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x1e3568u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1e356c: 0xc048b52  jal         func_122D48
    ctx->pc = 0x1E356Cu;
    SET_GPR_U32(ctx, 31, 0x1E3574u);
    ctx->pc = 0x1E3570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E356Cu;
    // 0x1e3570: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122D48u, 0x1E356Cu, 0x1E3574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3574u;
label_1e3574:
    // 0x1e3574: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x1e3574u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e3578: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x1e3578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x1e357c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e357cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1e3580: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1e3580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e3584: 0xc05e602  jal         func_179808
    ctx->pc = 0x1E3584u;
    SET_GPR_U32(ctx, 31, 0x1E358Cu);
    ctx->pc = 0x1E3588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E3584u;
    // 0x1e3588: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179808u, 0x1E3584u, 0x1E358Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E358Cu;
label_1e358c:
    // 0x1e358c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e358cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1e3590: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e3590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e3594: 0x8c47d310  lw          $a3, -0x2CF0($v0)
    ctx->pc = 0x1e3594u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5FD310u));
    // 0x1e3598: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1e3598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1e359c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e359cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1e35a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35a4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1e35a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1e35a8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1e35a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e35ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1e35acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e35b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e35b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e35b4: 0xc073418  jal         func_1CD060
    ctx->pc = 0x1E35B4u;
    SET_GPR_U32(ctx, 31, 0x1E35BCu);
    ctx->pc = 0x1E35B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E35B4u;
    // 0x1e35b8: 0x240b0004  addiu       $t3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD060u, 0x1E35B4u, 0x1E35BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E35BCu;
label_1e35bc:
    // 0x1e35bc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e35bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e35c0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e35c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e35c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e35c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e35c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1e35c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e35cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E35CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E35D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E35CCu;
        // 0x1e35d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E35CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E35D4u;
    // 0x1e35d4: 0x0  nop
    ctx->pc = 0x1e35d4u;
    // NOP
    ctx->pc = 0x1e35d8u;
}
