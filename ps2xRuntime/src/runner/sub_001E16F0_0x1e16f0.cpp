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

// Function: sub_001E16F0
// Address: 0x1e16f0 - 0x1e1800
void sub_001E16F0_0x1e16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E16F0_0x1e16f0");
#endif

    switch (ctx->pc) {
        case 0x1e1730u: goto label_1e1730;
        default: break;
    }

    ctx->pc = 0x1e16f0u;

    // 0x1e16f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e16f4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1e16f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1e16f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e16f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e16fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1e16fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1e1700: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e1700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e1704: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e1704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e1708: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1e1708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1e170c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e170cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e1710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1714: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1e1714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1718: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x1e1718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x1e171c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1e171cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1720: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x1e1720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x1e1724: 0x24840840  addiu       $a0, $a0, 0x840
    ctx->pc = 0x1e1724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    // 0x1e1728: 0xc06ba26  jal         func_1AE898
    ctx->pc = 0x1E1728u;
    SET_GPR_U32(ctx, 31, 0x1E1730u);
    ctx->pc = 0x1E172Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E1728u;
    // 0x1e172c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE898u, 0x1E1728u, 0x1E1730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1730u;
label_1e1730:
    // 0x1e1730: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1e1730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1e1734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e1734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1738: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1e1738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1e173c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e1740: 0x24050226  addiu       $a1, $zero, 0x226
    ctx->pc = 0x1e1740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 550));
    // 0x1e1744: 0xae1100cc  sw          $s1, 0xCC($s0)
    ctx->pc = 0x1e1744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 17));
    // 0x1e1748: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1e1748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1e174c: 0xe60000c8  swc1        $f0, 0xC8($s0)
    ctx->pc = 0x1e174cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 200), bits); }
    // 0x1e1750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e1750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e1754: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1e1754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1e1758: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1e1758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1e175c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x1e175cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
    // 0x1e1760: 0xae0500c4  sw          $a1, 0xC4($s0)
    ctx->pc = 0x1e1760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 5));
    // 0x1e1764: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x1e1764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x1e1768: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x1e1768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x1e176c: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x1e176cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x1e1770: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x1e1770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x1e1774: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x1e1774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x1e1778: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1e1778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1e177c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1e177cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1e1780: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x1e1780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x1e1784: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1e1784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1e1788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e1788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e178c: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x1e178cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e1790: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e1790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1794: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1e1794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e1798: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e1798u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1e179c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1e179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1e17a0: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1e17a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x1e17a4: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1e17a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1e17a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e17a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e17ac: 0xe482000c  swc1        $f2, 0xC($a0)
    ctx->pc = 0x1e17acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1e17b0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1e17b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1e17b4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1e17b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1e17b8: 0xae1300d4  sw          $s3, 0xD4($s0)
    ctx->pc = 0x1e17b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 19));
    // 0x1e17bc: 0xe60100b8  swc1        $f1, 0xB8($s0)
    ctx->pc = 0x1e17bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 184), bits); }
    // 0x1e17c0: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e17c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e17c4: 0xae07000c  sw          $a3, 0xC($s0)
    ctx->pc = 0x1e17c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 7));
    // 0x1e17c8: 0xa20600fc  sb          $a2, 0xFC($s0)
    ctx->pc = 0x1e17c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e17cc: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x1e17ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x1e17d0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e17d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e17d4: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1e17d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1e17d8: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x1e17d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1e17dc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e17dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e17e0: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x1e17e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x1e17e4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1e17e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e17e8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1e17e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e17ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e17ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e17f0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1e17f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e17f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e17f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e17f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E17F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E17FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E17F8u;
        // 0x1e17fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E17F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1800u;
}
