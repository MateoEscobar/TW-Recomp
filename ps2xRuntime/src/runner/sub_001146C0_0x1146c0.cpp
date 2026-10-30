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

// Function: sub_001146C0
// Address: 0x1146c0 - 0x114800
void sub_001146C0_0x1146c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001146C0_0x1146c0");
#endif

    ctx->pc = 0x1146c0u;

    // 0x1146c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1146c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1146c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1146c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1146c8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1146c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146cc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1146ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146d0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x1146d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1146d4: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1146d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x1146d8: 0x2d6200bf  sltiu       $v0, $t3, 0xBF
    ctx->pc = 0x1146d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
    // 0x1146dc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1146dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1146e0: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x1146e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1146e4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1146e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1146e8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1146e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x1146ec: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1146ECu;
    {
        const bool branch_taken_0x1146ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146ECu;
        // 0x1146f0: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146ec) {
            ctx->pc = 0x1147F8u;
            goto label_1147f8;
        }
    }
    ctx->pc = 0x1146F4u;
    // 0x1146f4: 0x2d4200bf  sltiu       $v0, $t2, 0xBF
    ctx->pc = 0x1146f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)191) ? 1 : 0);
    // 0x1146f8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1146F8u;
    {
        const bool branch_taken_0x1146f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1146FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1146F8u;
        // 0x1146fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1146f8) {
            ctx->pc = 0x1147F8u;
            goto label_1147f8;
        }
    }
    ctx->pc = 0x114700u;
    // 0x114700: 0x240402fc  addiu       $a0, $zero, 0x2FC
    ctx->pc = 0x114700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
    // 0x114704: 0x4a102b  sltu        $v0, $v0, $t2
    ctx->pc = 0x114704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x114708: 0x1642018  mult        $a0, $t3, $a0
    ctx->pc = 0x114708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11470c: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x11470cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114710: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x114710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x114714: 0xc2500b  movn        $t2, $a2, $v0
    ctx->pc = 0x114714u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 6));
    // 0x114718: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x114718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x11471c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x11471cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114720: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x114720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x114724: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x114724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x114728: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x114728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11472c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11472Cu;
    {
        const bool branch_taken_0x11472c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x114730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11472Cu;
        // 0x114730: 0x240302fc  addiu       $v1, $zero, 0x2FC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11472c) {
            ctx->pc = 0x114744u;
            goto label_114744;
        }
    }
    ctx->pc = 0x114734u;
    // 0x114734: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x114734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114738: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x114738u;
    {
        const bool branch_taken_0x114738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x114738) {
            ctx->pc = 0x11473Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114738u;
            // 0x11473c: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x114770u;
            goto label_114770;
        }
    }
    ctx->pc = 0x114740u;
    // 0x114740: 0x240302fc  addiu       $v1, $zero, 0x2FC
    ctx->pc = 0x114740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 764));
label_114744:
    // 0x114744: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x114744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x114748: 0x1631818  mult        $v1, $t3, $v1
    ctx->pc = 0x114748u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11474c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x114750: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x114750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x114754: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x114754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114758: 0x10a00027  beqz        $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x114758u;
    {
        const bool branch_taken_0x114758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x114758) {
            ctx->pc = 0x1147F8u;
            goto label_1147f8;
        }
    }
    ctx->pc = 0x114760u;
    // 0x114760: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x114760u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x114764: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x114764u;
    {
        const bool branch_taken_0x114764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x114764) {
            ctx->pc = 0x1147F8u;
            goto label_1147f8;
        }
    }
    ctx->pc = 0x11476Cu;
    // 0x11476c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x11476cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_114770:
    // 0x114770: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x114770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x114774: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114778: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x114778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11477c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11477cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x114780: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x114780u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x114784: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x114784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x114788: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x114788u;
    {
        const bool branch_taken_0x114788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x114788) {
            ctx->pc = 0x11478Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x114788u;
            // 0x11478c: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1147A8u;
            goto label_1147a8;
        }
    }
    ctx->pc = 0x114790u;
    // 0x114790: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x114790u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x114794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x114794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x114798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x114798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11479c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11479cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1147a0: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1147a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1147a4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1147a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1147a8:
    // 0x1147a8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1147A8u;
    {
        const bool branch_taken_0x1147a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1147a8) {
            ctx->pc = 0x1147ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1147A8u;
            // 0x1147ac: 0x90a20002  lbu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1147C8u;
            goto label_1147c8;
        }
    }
    ctx->pc = 0x1147B0u;
    // 0x1147b0: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1147b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1147b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1147b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1147b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1147b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1147bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1147bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1147c0: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1147c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1147c4: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x1147c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
label_1147c8:
    // 0x1147c8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x1147c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1147cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1147ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1147d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1147d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1147d4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1147D4u;
    {
        const bool branch_taken_0x1147d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1147D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1147D4u;
        // 0x1147d8: 0xa0a20002  sb          $v0, 0x2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1147d4) {
            ctx->pc = 0x1147E0u;
            goto label_1147e0;
        }
    }
    ctx->pc = 0x1147DCu;
    // 0x1147dc: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1147dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
label_1147e0:
    // 0x1147e0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1147e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1147e4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x1147e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x1147e8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1147e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1147ec: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x1147ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x1147f0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1147f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1147f4: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x1147f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_1147f8:
    // 0x1147f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1147F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1147F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114800u;
}
