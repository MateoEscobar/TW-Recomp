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

// Function: sub_002A4DC8
// Address: 0x2a4dc8 - 0x2a4e90
void sub_002A4DC8_0x2a4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4DC8_0x2a4dc8");
#endif

    switch (ctx->pc) {
        case 0x2a4e44u: goto label_2a4e44;
        default: break;
    }

    ctx->pc = 0x2a4dc8u;

    // 0x2a4dc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a4dcc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2a4dd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2a4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2a4dd4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a4dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2a4dd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a4ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4de0: 0x2463fa90  addiu       $v1, $v1, -0x570
    ctx->pc = 0x2a4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965904));
    // 0x2a4de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a4de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a4de8: 0x78cb0000  lq          $t3, 0x0($a2)
    ctx->pc = 0x2a4de8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4dec: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2a4decu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2a4df0: 0x7fab0000  sq          $t3, 0x0($sp)
    ctx->pc = 0x2a4df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 11));
    // 0x2a4df4: 0x24c64b00  addiu       $a2, $a2, 0x4B00
    ctx->pc = 0x2a4df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19200));
    // 0x2a4df8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2a4df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4dfc: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a4dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2a4e00: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a4e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a4e04: 0xa60a002c  sh          $t2, 0x2C($s0)
    ctx->pc = 0x2a4e04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 10));
    // 0x2a4e08: 0x7e0b0010  sq          $t3, 0x10($s0)
    ctx->pc = 0x2a4e08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 11));
    // 0x2a4e0c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2a4e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2a4e10: 0xa607002a  sh          $a3, 0x2A($s0)
    ctx->pc = 0x2a4e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 7));
    // 0x2a4e14: 0xae090030  sw          $t1, 0x30($s0)
    ctx->pc = 0x2a4e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 9));
    // 0x2a4e18: 0xa6080038  sh          $t0, 0x38($s0)
    ctx->pc = 0x2a4e18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 8));
    // 0x2a4e1c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2a4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2a4e20: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2a4e20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4e24: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2a4e24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a4e28: 0xa6000028  sh          $zero, 0x28($s0)
    ctx->pc = 0x2a4e28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
    // 0x2a4e2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a4e30: 0x84440092  lh          $a0, 0x92($v0)
    ctx->pc = 0x2a4e30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 146)));
    // 0x2a4e34: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2a4e34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2a4e38: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2a4e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2a4e3c: 0xc0cd7d2  jal         func_335F48
    ctx->pc = 0x2A4E3Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E44u);
    ctx->pc = 0x2A4E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4E3Cu;
    // 0x2a4e40: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2A4E3Cu, 0x2A4E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E44u;
label_2a4e44:
    // 0x2a4e44: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x2a4e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2a4e48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a4e4c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x2a4e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2a4e50: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2a4e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2a4e54: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A4E54u;
    {
        const bool branch_taken_0x2a4e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E54u;
        // 0x2a4e58: 0xa203003a  sb          $v1, 0x3A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4e54) {
            ctx->pc = 0x2A4E78u;
            goto label_2a4e78;
        }
    }
    ctx->pc = 0x2A4E5Cu;
    // 0x2a4e5c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2a4e60: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2a4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2a4e64: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2a4e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2a4e68: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x2a4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x2a4e6c: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a4e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2a4e70: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a4e74: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x2a4e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_2a4e78:
    // 0x2a4e78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a4e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a4e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4e80: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2a4e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4e84: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4E84u;
        // 0x2a4e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4E8Cu;
    // 0x2a4e8c: 0x0  nop
    ctx->pc = 0x2a4e8cu;
    // NOP
    ctx->pc = 0x2a4e90u;
}
