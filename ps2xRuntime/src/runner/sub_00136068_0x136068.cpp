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

// Function: sub_00136068
// Address: 0x136068 - 0x136160
void sub_00136068_0x136068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136068_0x136068");
#endif

    switch (ctx->pc) {
        case 0x13607cu: goto label_13607c;
        case 0x1360e4u: goto label_1360e4;
        default: break;
    }

    ctx->pc = 0x136068u;

    // 0x136068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13606c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13606cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x136070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136074: 0xc04821a  jal         func_120868
    ctx->pc = 0x136074u;
    SET_GPR_U32(ctx, 31, 0x13607Cu);
    ctx->pc = 0x136078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136074u;
    // 0x136078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x136074u, 0x13607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13607Cu;
label_13607c:
    // 0x13607c: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x13607cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x136080: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x136080u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x136084: 0x24636590  addiu       $v1, $v1, 0x6590
    ctx->pc = 0x136084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26000));
    // 0x136088: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x136088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x13608c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13608cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136090: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x136090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x136094: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x136094u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x136098: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x136098u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x13609c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x13609cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1360a0: 0x8d02bd30  lw          $v0, -0x42D0($t0)
    ctx->pc = 0x1360a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x1360a4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1360a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1360a8: 0x24a58de8  addiu       $a1, $a1, -0x7218
    ctx->pc = 0x1360a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938088));
    // 0x1360ac: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1360acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1360b0: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x1360b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x1360b4: 0x8d03bd30  lw          $v1, -0x42D0($t0)
    ctx->pc = 0x1360b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x1360b8: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x1360b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
    // 0x1360bc: 0xae000244  sw          $zero, 0x244($s0)
    ctx->pc = 0x1360bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 0));
    // 0x1360c0: 0xae000248  sw          $zero, 0x248($s0)
    ctx->pc = 0x1360c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 584), GPR_U32(ctx, 0));
    // 0x1360c4: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1360c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1360c8: 0xae000250  sw          $zero, 0x250($s0)
    ctx->pc = 0x1360c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 0));
    // 0x1360cc: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x1360ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x1360d0: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x1360d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x1360d4: 0xae0301e4  sw          $v1, 0x1E4($s0)
    ctx->pc = 0x1360d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 3));
    // 0x1360d8: 0xae0701e8  sw          $a3, 0x1E8($s0)
    ctx->pc = 0x1360d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 7));
    // 0x1360dc: 0xc10c4de  jal         func_431378
    ctx->pc = 0x1360DCu;
    SET_GPR_U32(ctx, 31, 0x1360E4u);
    ctx->pc = 0x1360E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1360DCu;
    // 0x1360e0: 0xe6000254  swc1        $f0, 0x254($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1360DCu, 0x1360E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360E4u;
label_1360e4:
    // 0x1360e4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x1360e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x1360e8: 0x3c013fac  lui         $at, 0x3FAC
    ctx->pc = 0x1360e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16300 << 16));
    // 0x1360ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1360ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1360f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1360f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1360f4: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x1360f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x1360f8: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1360f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x1360fc: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1360fcu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x136100: 0x24e71730  addiu       $a3, $a3, 0x1730
    ctx->pc = 0x136100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5936));
    // 0x136104: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x136104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x136108: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13610c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x13610cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x136110: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x136110u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    // 0x136114: 0x24c61790  addiu       $a2, $a2, 0x1790
    ctx->pc = 0x136114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6032));
    // 0x136118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13611c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136120: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x136120u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x136124: 0x7e030210  sq          $v1, 0x210($s0)
    ctx->pc = 0x136124u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 528), GPR_VEC(ctx, 3));
    // 0x136128: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x136128u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x5116C0u));
    // 0x13612c: 0x7e040200  sq          $a0, 0x200($s0)
    ctx->pc = 0x13612cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), GPR_VEC(ctx, 4));
    // 0x136130: 0xc6000208  lwc1        $f0, 0x208($s0)
    ctx->pc = 0x136130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136134: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x136134u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x136138: 0xe6000208  swc1        $f0, 0x208($s0)
    ctx->pc = 0x136138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 520), bits); }
    // 0x13613c: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x13613cu;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x511730u));
    // 0x136140: 0xe60101a4  swc1        $f1, 0x1A4($s0)
    ctx->pc = 0x136140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x136144: 0x7e040220  sq          $a0, 0x220($s0)
    ctx->pc = 0x136144u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 4));
    // 0x136148: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x136148u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x511790u));
    // 0x13614c: 0x7e030230  sq          $v1, 0x230($s0)
    ctx->pc = 0x13614cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), GPR_VEC(ctx, 3));
    // 0x136150: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x136150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136154: 0x3e00008  jr          $ra
    ctx->pc = 0x136154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136154u;
        // 0x136158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13615Cu;
    // 0x13615c: 0x0  nop
    ctx->pc = 0x13615cu;
    // NOP
    ctx->pc = 0x136160u;
}
