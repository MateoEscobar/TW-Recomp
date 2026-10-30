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

// Function: sub_00113A58
// Address: 0x113a58 - 0x113b28
void sub_00113A58_0x113a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113A58_0x113a58");
#endif

    switch (ctx->pc) {
        case 0x113b1cu: goto label_113b1c;
        default: break;
    }

    ctx->pc = 0x113a58u;

    // 0x113a58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x113a5c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x113a5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a60: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x113a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x113a64: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x113a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113a6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113a6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113a70: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x113a70u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
    // 0x113a74: 0xc4ac0008  lwc1        $f12, 0x8($a1)
    ctx->pc = 0x113a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x113a78: 0x2d420006  sltiu       $v0, $t2, 0x6
    ctx->pc = 0x113a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x113a7c: 0xc4a60000  lwc1        $f6, 0x0($a1)
    ctx->pc = 0x113a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x113a80: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x113a80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x113a84: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x113a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113a88: 0x142380b  movn        $a3, $t2, $v0
    ctx->pc = 0x113a88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 10));
    // 0x113a8c: 0xc46d0008  lwc1        $f13, 0x8($v1)
    ctx->pc = 0x113a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x113a90: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x113a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a94: 0xc56e0008  lwc1        $f14, 0x8($t3)
    ctx->pc = 0x113a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x113a98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x113a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a9c: 0xc50f0008  lwc1        $f15, 0x8($t0)
    ctx->pc = 0x113a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x113aa0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x113aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113aa4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x113aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113aa8: 0xc5640000  lwc1        $f4, 0x0($t3)
    ctx->pc = 0x113aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x113aac: 0xc5650004  lwc1        $f5, 0x4($t3)
    ctx->pc = 0x113aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x113ab0: 0xc5080004  lwc1        $f8, 0x4($t0)
    ctx->pc = 0x113ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x113ab4: 0xc52a0004  lwc1        $f10, 0x4($t1)
    ctx->pc = 0x113ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x113ab8: 0xc5070000  lwc1        $f7, 0x0($t0)
    ctx->pc = 0x113ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x113abc: 0xc5290000  lwc1        $f9, 0x0($t1)
    ctx->pc = 0x113abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x113ac0: 0xc52b0008  lwc1        $f11, 0x8($t1)
    ctx->pc = 0x113ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x113ac4: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x113ac4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x113ac8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x113ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x113acc: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x113accu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x113ad0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x113ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x113ad4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x113ad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x113ad8: 0xe7ad0018  swc1        $f13, 0x18($sp)
    ctx->pc = 0x113ad8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x113adc: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x113adcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x113ae0: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x113ae0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x113ae4: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x113ae4u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x113ae8: 0xe7a70030  swc1        $f7, 0x30($sp)
    ctx->pc = 0x113ae8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x113aec: 0xe7a80034  swc1        $f8, 0x34($sp)
    ctx->pc = 0x113aecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x113af0: 0xe7af0038  swc1        $f15, 0x38($sp)
    ctx->pc = 0x113af0u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x113af4: 0xe7a90040  swc1        $f9, 0x40($sp)
    ctx->pc = 0x113af4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x113af8: 0xe7aa0044  swc1        $f10, 0x44($sp)
    ctx->pc = 0x113af8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x113afc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x113afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x113b00: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x113b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x113b04: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x113b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x113b08: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x113b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x113b0c: 0xe7ab0048  swc1        $f11, 0x48($sp)
    ctx->pc = 0x113b0cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x113b10: 0x8d84aa84  lw          $a0, -0x557C($t4)
    ctx->pc = 0x113b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294945412)));
    // 0x113b14: 0xc0443b8  jal         func_110EE0
    ctx->pc = 0x113B14u;
    SET_GPR_U32(ctx, 31, 0x113B1Cu);
    ctx->pc = 0x113B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113B14u;
    // 0x113b18: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x110EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110EE0u, 0x113B14u, 0x113B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113B1Cu;
label_113b1c:
    // 0x113b1c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x113b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113b20: 0x3e00008  jr          $ra
    ctx->pc = 0x113B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113B20u;
        // 0x113b24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113B28u;
}
