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

// Function: sub_002FBAE0
// Address: 0x2fbae0 - 0x2fbbe0
void sub_002FBAE0_0x2fbae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FBAE0_0x2fbae0");
#endif

    switch (ctx->pc) {
        case 0x2fbbc0u: goto label_2fbbc0;
        default: break;
    }

    ctx->pc = 0x2fbae0u;

    // 0x2fbae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbae4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2fbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2fbae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fbae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fbaec: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x2fbaecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbaf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fbaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbaf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbaf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fbaf8: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x2fbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x2fbafc: 0xa6080004  sh          $t0, 0x4($s0)
    ctx->pc = 0x2fbafcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 8));
    // 0x2fbb00: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fbb00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2fbb04: 0x340bfdff  ori         $t3, $zero, 0xFDFF
    ctx->pc = 0x2fbb04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
    // 0x2fbb08: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x2fbb08u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x2fbb0c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2fbb0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2fbb10: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x2fbb10u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x2fbb14: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2fbb14u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2fbb18: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x2fbb18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x2fbb1c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x2fbb1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x2fbb20: 0xae0c0000  sw          $t4, 0x0($s0)
    ctx->pc = 0x2fbb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 12));
    // 0x2fbb24: 0x30e70001  andi        $a3, $a3, 0x1
    ctx->pc = 0x2fbb24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x2fbb28: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2fbb28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbb2c: 0x73e7c  dsll32      $a3, $a3, 25
    ctx->pc = 0x2fbb2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 25));
    // 0x2fbb30: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2fbb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2fbb34: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x2fbb34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2fbb38: 0x3404fbff  ori         $a0, $zero, 0xFBFF
    ctx->pc = 0x2fbb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64511);
    // 0x2fbb3c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fbb3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fbb40: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fbb40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fbb44: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fbb44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fbb48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fbb48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fbb4c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fbb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fbb50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fbb50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fbb54: 0xa56bc  dsll32      $t2, $t2, 26
    ctx->pc = 0x2fbb54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 26));
    // 0x2fbb58: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2fbb58u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fbb5c: 0x3408feff  ori         $t0, $zero, 0xFEFF
    ctx->pc = 0x2fbb5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
    // 0x2fbb60: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2fbb60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2fbb64: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2fbb64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2fbb68: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2fbb68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2fbb6c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2fbb6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2fbb70: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2fbb70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2fbb74: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2fbb74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2fbb78: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2fbb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2fbb7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2fbb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2fbb80: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x2fbb80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbb84: 0xa200004d  sb          $zero, 0x4D($s0)
    ctx->pc = 0x2fbb84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbb88: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2fbb88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2fbb8c: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x2fbb8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2fbb90: 0xe60d002c  swc1        $f13, 0x2C($s0)
    ctx->pc = 0x2fbb90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2fbb94: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x2fbb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x2fbb98: 0xae09003c  sw          $t1, 0x3C($s0)
    ctx->pc = 0x2fbb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 9));
    // 0x2fbb9c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2fbb9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2fbba0: 0xe60c0040  swc1        $f12, 0x40($s0)
    ctx->pc = 0x2fbba0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2fbba4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fbba8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2fbba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2fbbac: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x2fbbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x2fbbb0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2fbbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2fbbb4: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x2fbbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x2fbbb8: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2FBBB8u;
    SET_GPR_U32(ctx, 31, 0x2FBBC0u);
    ctx->pc = 0x2FBBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBBB8u;
    // 0x2fbbbc: 0x8d840000  lw          $a0, 0x0($t4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2FBBB8u, 0x2FBBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBBC0u;
label_2fbbc0:
    // 0x2fbbc0: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2fbbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fbbc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbbc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbbc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbbcc: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x2fbbccu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2fbbd0: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2fbbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2fbbd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fbbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBBD8u;
        // 0x2fbbdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBBE0u;
}
