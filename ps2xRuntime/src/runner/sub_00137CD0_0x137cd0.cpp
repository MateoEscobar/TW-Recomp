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

// Function: sub_00137CD0
// Address: 0x137cd0 - 0x137dc0
void sub_00137CD0_0x137cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137CD0_0x137cd0");
#endif

    switch (ctx->pc) {
        case 0x137ce4u: goto label_137ce4;
        case 0x137d5cu: goto label_137d5c;
        default: break;
    }

    ctx->pc = 0x137cd0u;

    // 0x137cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x137cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137cd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x137cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x137cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137cdc: 0xc04821a  jal         func_120868
    ctx->pc = 0x137CDCu;
    SET_GPR_U32(ctx, 31, 0x137CE4u);
    ctx->pc = 0x137CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137CDCu;
    // 0x137ce0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x137CDCu, 0x137CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137CE4u;
label_137ce4:
    // 0x137ce4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x137ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x137ce8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x137ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x137cec: 0x24636850  addiu       $v1, $v1, 0x6850
    ctx->pc = 0x137cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26704));
    // 0x137cf0: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x137cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
    // 0x137cf4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x137cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x137cf8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x137cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x137cfc: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x137cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x137d00: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x137d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x137d04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137d08: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x137d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x137d0c: 0x8ce3bd30  lw          $v1, -0x42D0($a3)
    ctx->pc = 0x137d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x137d10: 0x24a58fb0  addiu       $a1, $a1, -0x7050
    ctx->pc = 0x137d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938544));
    // 0x137d14: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x137d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x137d18: 0xae0301e0  sw          $v1, 0x1E0($s0)
    ctx->pc = 0x137d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 3));
    // 0x137d1c: 0x8ce2bd30  lw          $v0, -0x42D0($a3)
    ctx->pc = 0x137d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x137d20: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x137d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
    // 0x137d24: 0x8ce3bd30  lw          $v1, -0x42D0($a3)
    ctx->pc = 0x137d24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x137d28: 0xae0301e8  sw          $v1, 0x1E8($s0)
    ctx->pc = 0x137d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 3));
    // 0x137d2c: 0x8d028690  lw          $v0, -0x7970($t0)
    ctx->pc = 0x137d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x598690u));
    // 0x137d30: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x137d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x137d34: 0xae000234  sw          $zero, 0x234($s0)
    ctx->pc = 0x137d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
    // 0x137d38: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x137d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x137d3c: 0xae00023c  sw          $zero, 0x23C($s0)
    ctx->pc = 0x137d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 0));
    // 0x137d40: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x137d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x137d44: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x137d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x137d48: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x137d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x137d4c: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x137d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x137d50: 0xe6000244  swc1        $f0, 0x244($s0)
    ctx->pc = 0x137d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 580), bits); }
    // 0x137d54: 0xc10c4de  jal         func_431378
    ctx->pc = 0x137D54u;
    SET_GPR_U32(ctx, 31, 0x137D5Cu);
    ctx->pc = 0x137D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137D54u;
    // 0x137d58: 0xae0201ec  sw          $v0, 0x1EC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 492), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x137D54u, 0x137D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137D5Cu;
label_137d5c:
    // 0x137d5c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x137d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x137d60: 0x3c013fb9  lui         $at, 0x3FB9
    ctx->pc = 0x137d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16313 << 16));
    // 0x137d64: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x137d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x137d68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137d6c: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x137d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x137d70: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x137d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x137d74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x137d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x137d78: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x137d78u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116C0u));
    // 0x137d7c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x137d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x137d80: 0x24c61790  addiu       $a2, $a2, 0x1790
    ctx->pc = 0x137d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6032));
    // 0x137d84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x137d84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137d88: 0x7e0401f0  sq          $a0, 0x1F0($s0)
    ctx->pc = 0x137d88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 4));
    // 0x137d8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137d90: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x137d90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x137d94: 0x7e030210  sq          $v1, 0x210($s0)
    ctx->pc = 0x137d94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 3));
    // 0x137d98: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x137d98u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116C0u));
    // 0x137d9c: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x137d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x137da0: 0x7e040200  sq          $a0, 0x200($s0)
    ctx->pc = 0x137da0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), GPR_VEC(ctx, 4));
    // 0x137da4: 0xe6010208  swc1        $f1, 0x208($s0)
    ctx->pc = 0x137da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 520), bits); }
    // 0x137da8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x137da8u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511790u));
    // 0x137dac: 0x7e030220  sq          $v1, 0x220($s0)
    ctx->pc = 0x137dacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 3));
    // 0x137db0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x137db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137db4: 0x3e00008  jr          $ra
    ctx->pc = 0x137DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137DB4u;
        // 0x137db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137DBCu;
    // 0x137dbc: 0x0  nop
    ctx->pc = 0x137dbcu;
    // NOP
    ctx->pc = 0x137dc0u;
}
