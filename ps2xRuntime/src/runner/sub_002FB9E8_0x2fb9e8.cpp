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

// Function: sub_002FB9E8
// Address: 0x2fb9e8 - 0x2fbae0
void sub_002FB9E8_0x2fb9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB9E8_0x2fb9e8");
#endif

    switch (ctx->pc) {
        case 0x2fbac4u: goto label_2fbac4;
        default: break;
    }

    ctx->pc = 0x2fb9e8u;

    // 0x2fb9e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb9ec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2fb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x2fb9f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fb9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fb9f4: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2fb9f4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb9fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fb9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fba00: 0x24422f20  addiu       $v0, $v0, 0x2F20
    ctx->pc = 0x2fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12064));
    // 0x2fba04: 0xa6090004  sh          $t1, 0x4($s0)
    ctx->pc = 0x2fba04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 9));
    // 0x2fba08: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2fba08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2fba0c: 0x340cfdff  ori         $t4, $zero, 0xFDFF
    ctx->pc = 0x2fba0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65023);
    // 0x2fba10: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x2fba10u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x2fba14: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x2fba14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x2fba18: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x2fba18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x2fba1c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x2fba1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x2fba20: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x2fba20u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x2fba24: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x2fba24u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x2fba28: 0xae0d0000  sw          $t5, 0x0($s0)
    ctx->pc = 0x2fba28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 13));
    // 0x2fba2c: 0x31080001  andi        $t0, $t0, 0x1
    ctx->pc = 0x2fba2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x2fba30: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2fba30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fba34: 0x8467c  dsll32      $t0, $t0, 25
    ctx->pc = 0x2fba34u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 25));
    // 0x2fba38: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2fba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2fba3c: 0x316b0001  andi        $t3, $t3, 0x1
    ctx->pc = 0x2fba3cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x2fba40: 0x3404fbff  ori         $a0, $zero, 0xFBFF
    ctx->pc = 0x2fba40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64511);
    // 0x2fba44: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fba44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fba48: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fba48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fba4c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fba4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fba50: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fba50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fba54: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2fba54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2fba58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fba58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fba5c: 0xb5ebc  dsll32      $t3, $t3, 26
    ctx->pc = 0x2fba5cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 26));
    // 0x2fba60: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x2fba60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fba64: 0x3409feff  ori         $t1, $zero, 0xFEFF
    ctx->pc = 0x2fba64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65279);
    // 0x2fba68: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2fba68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2fba6c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2fba6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2fba70: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2fba70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2fba74: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2fba74u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2fba78: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x2fba78u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x2fba7c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x2fba7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x2fba80: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x2fba80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x2fba84: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2fba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba88: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x2fba88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fba8c: 0xa200004d  sb          $zero, 0x4D($s0)
    ctx->pc = 0x2fba8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fba90: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2fba90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2fba94: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x2fba94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2fba98: 0xe60c002c  swc1        $f12, 0x2C($s0)
    ctx->pc = 0x2fba98u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x2fba9c: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x2fba9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x2fbaa0: 0xae0a003c  sw          $t2, 0x3C($s0)
    ctx->pc = 0x2fbaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 10));
    // 0x2fbaa4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x2fbaa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x2fbaa8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2fbaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x2fbaac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fbaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fbab0: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x2fbab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x2fbab4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x2fbab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x2fbab8: 0xfe020048  sd          $v0, 0x48($s0)
    ctx->pc = 0x2fbab8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 2));
    // 0x2fbabc: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x2FBABCu;
    SET_GPR_U32(ctx, 31, 0x2FBAC4u);
    ctx->pc = 0x2FBAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBABCu;
    // 0x2fbac0: 0x8da40000  lw          $a0, 0x0($t5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22AE40u, 0x2FBABCu, 0x2FBAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBAC4u;
label_2fbac4:
    // 0x2fbac4: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2fbac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2fbac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbacc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fbaccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbad0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbad4: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBAD4u;
        // 0x2fbad8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBADCu;
    // 0x2fbadc: 0x0  nop
    ctx->pc = 0x2fbadcu;
    // NOP
    ctx->pc = 0x2fbae0u;
}
