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

// Function: sub_00456680
// Address: 0x456680 - 0x457688
void sub_00456680_0x456680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456680_0x456680");
#endif

    switch (ctx->pc) {
        case 0x45670cu: goto label_45670c;
        case 0x456738u: goto label_456738;
        case 0x456788u: goto label_456788;
        case 0x4567b0u: goto label_4567b0;
        case 0x456828u: goto label_456828;
        case 0x456954u: goto label_456954;
        case 0x456a00u: goto label_456a00;
        case 0x456a1cu: goto label_456a1c;
        case 0x456a60u: goto label_456a60;
        case 0x456a88u: goto label_456a88;
        case 0x456ae0u: goto label_456ae0;
        case 0x456b08u: goto label_456b08;
        case 0x456b64u: goto label_456b64;
        case 0x456b88u: goto label_456b88;
        case 0x456bc0u: goto label_456bc0;
        case 0x456bf0u: goto label_456bf0;
        case 0x456d40u: goto label_456d40;
        case 0x456d7cu: goto label_456d7c;
        case 0x456da0u: goto label_456da0;
        case 0x456e48u: goto label_456e48;
        case 0x456ea8u: goto label_456ea8;
        case 0x456ed0u: goto label_456ed0;
        case 0x456f6cu: goto label_456f6c;
        case 0x456f90u: goto label_456f90;
        case 0x457030u: goto label_457030;
        case 0x457058u: goto label_457058;
        case 0x4570b0u: goto label_4570b0;
        case 0x4570e0u: goto label_4570e0;
        case 0x457244u: goto label_457244;
        case 0x45728cu: goto label_45728c;
        case 0x4572b0u: goto label_4572b0;
        case 0x457350u: goto label_457350;
        case 0x457440u: goto label_457440;
        case 0x457448u: goto label_457448;
        case 0x45745cu: goto label_45745c;
        default: break;
    }

    ctx->pc = 0x456680u;

    // 0x456680: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x456680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x456684: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x456684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x456688: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x456688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x45668c: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x45668cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x456690: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x456690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x456694: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x456694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456698: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x456698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x45669c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x45669cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4566a0: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x4566a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x4566a4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4566a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4566a8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x4566a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x4566ac: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4566acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x4566b0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4566b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x4566b4: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4566b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x4566b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4566b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4566bc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x4566bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x4566c0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x4566c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x4566c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4566c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4566c8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x4566c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x4566cc: 0x8d020038  lw          $v0, 0x38($t0)
    ctx->pc = 0x4566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x4566d0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4566d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4566d4: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x4566d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x4566d8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4566d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x4566dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4566dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4566e0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4566e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x4566e4: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x4566e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4566e8: 0xc5010074  lwc1        $f1, 0x74($t0)
    ctx->pc = 0x4566e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4566ec: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x4566ecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4566f0: 0x8d110004  lw          $s1, 0x4($t0)
    ctx->pc = 0x4566f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x4566f4: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x4566f4u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4566f8: 0x8d130034  lw          $s3, 0x34($t0)
    ctx->pc = 0x4566f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x4566fc: 0x1462034e  bne         $v1, $v0, . + 4 + (0x34E << 2)
    ctx->pc = 0x4566FCu;
    {
        const bool branch_taken_0x4566fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x456700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4566FCu;
        // 0x456700: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4566fc) {
            ctx->pc = 0x457438u;
            goto label_457438;
        }
    }
    ctx->pc = 0x456704u;
    // 0x456704: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x456704u;
    SET_GPR_U32(ctx, 31, 0x45670Cu);
    ctx->pc = 0x456708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x456704u;
    // 0x456708: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x456704u, 0x45670Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45670Cu;
label_45670c:
    // 0x45670c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456710: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x456710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x456714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x456714u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x456718: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x456718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45671c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x45671Cu;
    {
        const bool branch_taken_0x45671c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45671Cu;
        // 0x456720: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45671c) {
            ctx->pc = 0x456758u;
            goto label_456758;
        }
    }
    ctx->pc = 0x456724u;
    // 0x456724: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x456724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x456728: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x456728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45672c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45672cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456730: 0xf  sync
    ctx->pc = 0x456730u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456734: 0x40f  sync.p
    ctx->pc = 0x456734u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456738:
    // 0x456738: 0x0  nop
    ctx->pc = 0x456738u;
    // NOP
    // 0x45673c: 0x0  nop
    ctx->pc = 0x45673cu;
    // NOP
    // 0x456740: 0x0  nop
    ctx->pc = 0x456740u;
    // NOP
    // 0x456744: 0x0  nop
    ctx->pc = 0x456744u;
    // NOP
    // 0x456748: 0x0  nop
    ctx->pc = 0x456748u;
    // NOP
    // 0x45674c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45674Cu;
    {
        const bool branch_taken_0x45674c = (false);
        if (branch_taken_0x45674c) {
            ctx->pc = 0x456738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456738;
        }
    }
    ctx->pc = 0x456754u;
    // 0x456754: 0x0  nop
    ctx->pc = 0x456754u;
    // NOP
label_456758:
    // 0x456758: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45675c: 0x2a4a00c0  slti        $t2, $s2, 0xC0
    ctx->pc = 0x45675cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x456760: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x456764: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456764u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456768: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x45676c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x45676Cu;
    {
        const bool branch_taken_0x45676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45676Cu;
        // 0x456770: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45676c) {
            ctx->pc = 0x4567CCu;
            goto label_4567cc;
        }
    }
    ctx->pc = 0x456774u;
    // 0x456774: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x456774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x456778: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x456778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x45677c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45677cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456780: 0xf  sync
    ctx->pc = 0x456780u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456784: 0x40f  sync.p
    ctx->pc = 0x456784u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456788:
    // 0x456788: 0x0  nop
    ctx->pc = 0x456788u;
    // NOP
    // 0x45678c: 0x0  nop
    ctx->pc = 0x45678cu;
    // NOP
    // 0x456790: 0x0  nop
    ctx->pc = 0x456790u;
    // NOP
    // 0x456794: 0x0  nop
    ctx->pc = 0x456794u;
    // NOP
    // 0x456798: 0x0  nop
    ctx->pc = 0x456798u;
    // NOP
    // 0x45679c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45679Cu;
    {
        const bool branch_taken_0x45679c = (false);
        if (branch_taken_0x45679c) {
            ctx->pc = 0x456788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456788;
        }
    }
    ctx->pc = 0x4567A4u;
    // 0x4567a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4567a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4567a8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4567a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x4567ac: 0x0  nop
    ctx->pc = 0x4567acu;
    // NOP
label_4567b0:
    // 0x4567b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4567b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4567b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4567b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4567b8: 0x0  nop
    ctx->pc = 0x4567b8u;
    // NOP
    // 0x4567bc: 0x0  nop
    ctx->pc = 0x4567bcu;
    // NOP
    // 0x4567c0: 0x0  nop
    ctx->pc = 0x4567c0u;
    // NOP
    // 0x4567c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4567C4u;
    {
        const bool branch_taken_0x4567c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4567c4) {
            ctx->pc = 0x4567B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4567b0;
        }
    }
    ctx->pc = 0x4567CCu;
label_4567cc:
    // 0x4567cc: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x4567ccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x4567d0: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x4567d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x4567d4: 0x35293f00  ori         $t1, $t1, 0x3F00
    ctx->pc = 0x4567d4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16128);
    // 0x4567d8: 0x35083f10  ori         $t0, $t0, 0x3F10
    ctx->pc = 0x4567d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)16144);
    // 0x4567dc: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x4567dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4567e0: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x4567e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4567e4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x4567e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x4567e8: 0xb1230007  sdl         $v1, 0x7($t1)
    ctx->pc = 0x4567e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4567ec: 0xb5230000  sdr         $v1, 0x0($t1)
    ctx->pc = 0x4567ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4567f0: 0x3c167000  lui         $s6, 0x7000
    ctx->pc = 0x4567f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)28672 << 16));
    // 0x4567f4: 0xad240008  sw          $a0, 0x8($t1)
    ctx->pc = 0x4567f4u;
    runtime->Store32(rdram, ctx, 0x70003F08u, GPR_U32(ctx, 4));
    // 0x4567f8: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x4567f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x4567fc: 0x6aa30007  ldl         $v1, 0x7($s5)
    ctx->pc = 0x4567fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x456800: 0x6ea30000  ldr         $v1, 0x0($s5)
    ctx->pc = 0x456800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x456804: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x456804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x456808: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x456808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x45680c: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x45680cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x456810: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x456810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x456814: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x456814u;
    runtime->Store32(rdram, ctx, 0x70003F18u, GPR_U32(ctx, 4));
    // 0x456818: 0x34c63f30  ori         $a2, $a2, 0x3F30
    ctx->pc = 0x456818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16176);
    // 0x45681c: 0x34a53f40  ori         $a1, $a1, 0x3F40
    ctx->pc = 0x45681cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16192);
    // 0x456820: 0x36d63f20  ori         $s6, $s6, 0x3F20
    ctx->pc = 0x456820u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)16160);
    // 0x456824: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x456824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_456828:
    // 0x456828: 0x42000039  di
    ctx->pc = 0x456828u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x45682c: 0x40f  sync.p
    ctx->pc = 0x45682cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456830: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x456830u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x456834: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x456834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x456838: 0x0  nop
    ctx->pc = 0x456838u;
    // NOP
    // 0x45683c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45683Cu;
    {
        const bool branch_taken_0x45683c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45683c) {
            ctx->pc = 0x456828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456828;
        }
    }
    ctx->pc = 0x456844u;
    // 0x456844: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x456844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x456848: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x456848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45684c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45684cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x456850: 0x4a0002ff  vnop
    ctx->pc = 0x456850u;
    // NOP operation, no action needed for VU0
    // 0x456854: 0x4a0002ff  vnop
    ctx->pc = 0x456854u;
    // NOP operation, no action needed for VU0
    // 0x456858: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x456858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45685c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x45685cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x456860: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x456860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x456864: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x456864u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x456868: 0x4a0002ff  vnop
    ctx->pc = 0x456868u;
    // NOP operation, no action needed for VU0
    // 0x45686c: 0x4a0002ff  vnop
    ctx->pc = 0x45686cu;
    // NOP operation, no action needed for VU0
    // 0x456870: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x456870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x456874: 0x3c044009  lui         $a0, 0x4009
    ctx->pc = 0x456874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16393 << 16));
    // 0x456878: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x456878u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x45687c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45687cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x456880: 0x4a0002ff  vnop
    ctx->pc = 0x456880u;
    // NOP operation, no action needed for VU0
    // 0x456884: 0x4a0002ff  vnop
    ctx->pc = 0x456884u;
    // NOP operation, no action needed for VU0
    // 0x456888: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x456888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45688c: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x45688cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
    // 0x456890: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x456890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x456894: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x456894u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x456898: 0x4a0002ff  vnop
    ctx->pc = 0x456898u;
    // NOP operation, no action needed for VU0
    // 0x45689c: 0x4a0002ff  vnop
    ctx->pc = 0x45689cu;
    // NOP operation, no action needed for VU0
    // 0x4568a0: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x4568a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x4568a4: 0x3c04c084  lui         $a0, 0xC084
    ctx->pc = 0x4568a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49284 << 16));
    // 0x4568a8: 0x348487ed  ori         $a0, $a0, 0x87ED
    ctx->pc = 0x4568a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34797);
    // 0x4568ac: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4568acu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4568b0: 0x4a0002ff  vnop
    ctx->pc = 0x4568b0u;
    // NOP operation, no action needed for VU0
    // 0x4568b4: 0x4a0002ff  vnop
    ctx->pc = 0x4568b4u;
    // NOP operation, no action needed for VU0
    // 0x4568b8: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x4568b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x4568bc: 0x3c04b94f  lui         $a0, 0xB94F
    ctx->pc = 0x4568bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)47439 << 16));
    // 0x4568c0: 0x3484b21f  ori         $a0, $a0, 0xB21F
    ctx->pc = 0x4568c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45599);
    // 0x4568c4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4568c4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4568c8: 0x4a0002ff  vnop
    ctx->pc = 0x4568c8u;
    // NOP operation, no action needed for VU0
    // 0x4568cc: 0x4a0002ff  vnop
    ctx->pc = 0x4568ccu;
    // NOP operation, no action needed for VU0
    // 0x4568d0: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x4568d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x4568d4: 0x3c04be2a  lui         $a0, 0xBE2A
    ctx->pc = 0x4568d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48682 << 16));
    // 0x4568d8: 0x3484aaa4  ori         $a0, $a0, 0xAAA4
    ctx->pc = 0x4568d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43684);
    // 0x4568dc: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4568dcu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4568e0: 0x4a0002ff  vnop
    ctx->pc = 0x4568e0u;
    // NOP operation, no action needed for VU0
    // 0x4568e4: 0x4a0002ff  vnop
    ctx->pc = 0x4568e4u;
    // NOP operation, no action needed for VU0
    // 0x4568e8: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x4568e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x4568ec: 0x3c043c08  lui         $a0, 0x3C08
    ctx->pc = 0x4568ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15368 << 16));
    // 0x4568f0: 0x3484873e  ori         $a0, $a0, 0x873E
    ctx->pc = 0x4568f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)34622);
    // 0x4568f4: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x4568f4u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4568f8: 0x4a0002ff  vnop
    ctx->pc = 0x4568f8u;
    // NOP operation, no action needed for VU0
    // 0x4568fc: 0x4a0002ff  vnop
    ctx->pc = 0x4568fcu;
    // NOP operation, no action needed for VU0
    // 0x456900: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x456900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x456904: 0x3c04362e  lui         $a0, 0x362E
    ctx->pc = 0x456904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)13870 << 16));
    // 0x456908: 0x34849c14  ori         $a0, $a0, 0x9C14
    ctx->pc = 0x456908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)39956);
    // 0x45690c: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x45690cu;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x456910: 0x4a0002ff  vnop
    ctx->pc = 0x456910u;
    // NOP operation, no action needed for VU0
    // 0x456914: 0x4a0002ff  vnop
    ctx->pc = 0x456914u;
    // NOP operation, no action needed for VU0
    // 0x456918: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x456918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45691c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x45691cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x456920: 0x48c4a800  ctc2.ni     $a0, $vi21
    ctx->pc = 0x456920u;
    { uint32_t tmp = GPR_U32(ctx, 4); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x456924: 0x4a0002ff  vnop
    ctx->pc = 0x456924u;
    // NOP operation, no action needed for VU0
    // 0x456928: 0x4a0002ff  vnop
    ctx->pc = 0x456928u;
    // NOP operation, no action needed for VU0
    // 0x45692c: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x45692cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x456930: 0x42000038  ei
    ctx->pc = 0x456930u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x456934: 0xe4d5000c  swc1        $f21, 0xC($a2)
    ctx->pc = 0x456934u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x456938: 0xe4d50000  swc1        $f21, 0x0($a2)
    ctx->pc = 0x456938u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x45693c: 0xe4d50008  swc1        $f21, 0x8($a2)
    ctx->pc = 0x45693cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x456940: 0xe4d50004  swc1        $f21, 0x4($a2)
    ctx->pc = 0x456940u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x456944: 0xe4b60000  swc1        $f22, 0x0($a1)
    ctx->pc = 0x456944u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x456948: 0xe4b6000c  swc1        $f22, 0xC($a1)
    ctx->pc = 0x456948u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x45694c: 0xe4b60008  swc1        $f22, 0x8($a1)
    ctx->pc = 0x45694cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x456950: 0xe4b60004  swc1        $f22, 0x4($a1)
    ctx->pc = 0x456950u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_456954:
    // 0x456954: 0x42000039  di
    ctx->pc = 0x456954u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x456958: 0x40f  sync.p
    ctx->pc = 0x456958u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45695c: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x45695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x456960: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x456960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x456964: 0x0  nop
    ctx->pc = 0x456964u;
    // NOP
    // 0x456968: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456968u;
    {
        const bool branch_taken_0x456968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x456968) {
            ctx->pc = 0x456954u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456954;
        }
    }
    ctx->pc = 0x456970u;
    // 0x456970: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x456970u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x456974: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x456974u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x456978: 0xd9030000  lqc2        $vf3, 0x0($t0)
    ctx->pc = 0x456978u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45697c: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x45697cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x456980: 0x4a0002ff  vnop
    ctx->pc = 0x456980u;
    // NOP operation, no action needed for VU0
    // 0x456984: 0x4be4122a  vmul.xyzw   $vf8, $vf2, $vf4
    ctx->pc = 0x456984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x456988: 0x4be41c2a  vmul.xyzw   $vf16, $vf3, $vf4
    ctx->pc = 0x456988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x45698c: 0x4be5126a  vmul.xyzw   $vf9, $vf2, $vf5
    ctx->pc = 0x45698cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x456990: 0x4be51c6a  vmul.xyzw   $vf17, $vf3, $vf5
    ctx->pc = 0x456990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x456994: 0x42000038  ei
    ctx->pc = 0x456994u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x456998: 0x15400119  bnez        $t2, . + 4 + (0x119 << 2)
    ctx->pc = 0x456998u;
    {
        const bool branch_taken_0x456998 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x45699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456998u;
        // 0x45699c: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x456998) {
            ctx->pc = 0x456E00u;
            goto label_456e00;
        }
    }
    ctx->pc = 0x4569A0u;
    // 0x4569a0: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x4569a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x4569a4: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x4569a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x4569a8: 0xafae003c  sw          $t6, 0x3C($sp)
    ctx->pc = 0x4569a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 14));
    // 0x4569ac: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x4569acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x4569b0: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x4569b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x4569b4: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x4569b4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x4569b8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x4569b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x4569bc: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x4569bcu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x4569c0: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x4569c0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x4569c4: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x4569c4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x4569c8: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x4569c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x4569cc: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x4569ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x4569d0: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x4569d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x4569d4: 0x35add000  ori         $t5, $t5, 0xD000
    ctx->pc = 0x4569d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)53248);
    // 0x4569d8: 0x3508e020  ori         $t0, $t0, 0xE020
    ctx->pc = 0x4569d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)57376);
    // 0x4569dc: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x4569dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4569e0: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x4569e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x4569e4: 0x24090200  addiu       $t1, $zero, 0x200
    ctx->pc = 0x4569e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x4569e8: 0x358ce010  ori         $t4, $t4, 0xE010
    ctx->pc = 0x4569e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57360);
    // 0x4569ec: 0x3718d480  ori         $t8, $t8, 0xD480
    ctx->pc = 0x4569ecu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)54400);
    // 0x4569f0: 0x35efd410  ori         $t7, $t7, 0xD410
    ctx->pc = 0x4569f0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54288);
    // 0x4569f4: 0x35ced420  ori         $t6, $t6, 0xD420
    ctx->pc = 0x4569f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)54304);
    // 0x4569f8: 0x37ded020  ori         $fp, $fp, 0xD020
    ctx->pc = 0x4569f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)53280);
    // 0x4569fc: 0x36f7d010  ori         $s7, $s7, 0xD010
    ctx->pc = 0x4569fcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)53264);
label_456a00:
    // 0x456a00: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x456a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x456a04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456a08: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x456A08u;
    {
        const bool branch_taken_0x456a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456a08) {
            ctx->pc = 0x456A38u;
            goto label_456a38;
        }
    }
    ctx->pc = 0x456A10u;
    // 0x456a10: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x456a10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x456a14: 0xf  sync
    ctx->pc = 0x456a14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456a18: 0x40f  sync.p
    ctx->pc = 0x456a18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456a1c:
    // 0x456a1c: 0x0  nop
    ctx->pc = 0x456a1cu;
    // NOP
    // 0x456a20: 0x0  nop
    ctx->pc = 0x456a20u;
    // NOP
    // 0x456a24: 0x0  nop
    ctx->pc = 0x456a24u;
    // NOP
    // 0x456a28: 0x0  nop
    ctx->pc = 0x456a28u;
    // NOP
    // 0x456a2c: 0x0  nop
    ctx->pc = 0x456a2cu;
    // NOP
    // 0x456a30: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456A30u;
    {
        const bool branch_taken_0x456a30 = (false);
        if (branch_taken_0x456a30) {
            ctx->pc = 0x456A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456a1c;
        }
    }
    ctx->pc = 0x456A38u;
label_456a38:
    // 0x456a38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x456a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x456a3c: 0x2647ff40  addiu       $a3, $s2, -0xC0
    ctx->pc = 0x456a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967104));
    // 0x456a40: 0x26350c00  addiu       $s5, $s1, 0xC00
    ctx->pc = 0x456a40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x456a44: 0x26193000  addiu       $t9, $s0, 0x3000
    ctx->pc = 0x456a44u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 12288));
    // 0x456a48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456a4c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x456A4Cu;
    {
        const bool branch_taken_0x456a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456A4Cu;
        // 0x456a50: 0x26740300  addiu       $s4, $s3, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456a4c) {
            ctx->pc = 0x456AA4u;
            goto label_456aa4;
        }
    }
    ctx->pc = 0x456A54u;
    // 0x456a54: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x456a54u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x456a58: 0xf  sync
    ctx->pc = 0x456a58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456a5c: 0x40f  sync.p
    ctx->pc = 0x456a5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456a60:
    // 0x456a60: 0x0  nop
    ctx->pc = 0x456a60u;
    // NOP
    // 0x456a64: 0x0  nop
    ctx->pc = 0x456a64u;
    // NOP
    // 0x456a68: 0x0  nop
    ctx->pc = 0x456a68u;
    // NOP
    // 0x456a6c: 0x0  nop
    ctx->pc = 0x456a6cu;
    // NOP
    // 0x456a70: 0x0  nop
    ctx->pc = 0x456a70u;
    // NOP
    // 0x456a74: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456A74u;
    {
        const bool branch_taken_0x456a74 = (false);
        if (branch_taken_0x456a74) {
            ctx->pc = 0x456A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456a60;
        }
    }
    ctx->pc = 0x456A7Cu;
    // 0x456a7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456a80: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x456a80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x456a84: 0x0  nop
    ctx->pc = 0x456a84u;
    // NOP
label_456a88:
    // 0x456a88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x456a88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x456a8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456a90: 0x0  nop
    ctx->pc = 0x456a90u;
    // NOP
    // 0x456a94: 0x0  nop
    ctx->pc = 0x456a94u;
    // NOP
    // 0x456a98: 0x0  nop
    ctx->pc = 0x456a98u;
    // NOP
    // 0x456a9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456A9Cu;
    {
        const bool branch_taken_0x456a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456a9c) {
            ctx->pc = 0x456A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456a88;
        }
    }
    ctx->pc = 0x456AA4u;
label_456aa4:
    // 0x456aa4: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x456aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x456aa8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x456aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x456aac: 0xaf000000  sw          $zero, 0x0($t8)
    ctx->pc = 0x456aacu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 0));
    // 0x456ab0: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x456ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x456ab4: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x456ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x456ab8: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x456ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x456abc: 0xf  sync
    ctx->pc = 0x456abcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456ac0: 0x40f  sync.p
    ctx->pc = 0x456ac0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456ac4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x456ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x456ac8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456acc: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x456ACCu;
    {
        const bool branch_taken_0x456acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456acc) {
            ctx->pc = 0x456B24u;
            goto label_456b24;
        }
    }
    ctx->pc = 0x456AD4u;
    // 0x456ad4: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x456ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x456ad8: 0xf  sync
    ctx->pc = 0x456ad8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456adc: 0x40f  sync.p
    ctx->pc = 0x456adcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456ae0:
    // 0x456ae0: 0x0  nop
    ctx->pc = 0x456ae0u;
    // NOP
    // 0x456ae4: 0x0  nop
    ctx->pc = 0x456ae4u;
    // NOP
    // 0x456ae8: 0x0  nop
    ctx->pc = 0x456ae8u;
    // NOP
    // 0x456aec: 0x0  nop
    ctx->pc = 0x456aecu;
    // NOP
    // 0x456af0: 0x0  nop
    ctx->pc = 0x456af0u;
    // NOP
    // 0x456af4: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456AF4u;
    {
        const bool branch_taken_0x456af4 = (false);
        if (branch_taken_0x456af4) {
            ctx->pc = 0x456AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456ae0;
        }
    }
    ctx->pc = 0x456AFCu;
    // 0x456afc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456afcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456b00: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x456b00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x456b04: 0x0  nop
    ctx->pc = 0x456b04u;
    // NOP
label_456b08:
    // 0x456b08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x456b08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x456b0c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456b10: 0x0  nop
    ctx->pc = 0x456b10u;
    // NOP
    // 0x456b14: 0x0  nop
    ctx->pc = 0x456b14u;
    // NOP
    // 0x456b18: 0x0  nop
    ctx->pc = 0x456b18u;
    // NOP
    // 0x456b1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456B1Cu;
    {
        const bool branch_taken_0x456b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456b1c) {
            ctx->pc = 0x456B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456b08;
        }
    }
    ctx->pc = 0x456B24u;
label_456b24:
    // 0x456b24: 0xad890000  sw          $t1, 0x0($t4)
    ctx->pc = 0x456b24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 9));
    // 0x456b28: 0x24030300  addiu       $v1, $zero, 0x300
    ctx->pc = 0x456b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x456b2c: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x456b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x456b30: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x456b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x456b34: 0xadf10000  sw          $s1, 0x0($t7)
    ctx->pc = 0x456b34u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 17));
    // 0x456b38: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x456b38u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x456b3c: 0xaccb0000  sw          $t3, 0x0($a2)
    ctx->pc = 0x456b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
    // 0x456b40: 0xf  sync
    ctx->pc = 0x456b40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456b44: 0x40f  sync.p
    ctx->pc = 0x456b44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456b48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x456b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x456b4c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456b50: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x456B50u;
    {
        const bool branch_taken_0x456b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456B50u;
        // 0x456b54: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456b50) {
            ctx->pc = 0x456BA4u;
            goto label_456ba4;
        }
    }
    ctx->pc = 0x456B58u;
    // 0x456b58: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x456b58u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x456b5c: 0xf  sync
    ctx->pc = 0x456b5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456b60: 0x40f  sync.p
    ctx->pc = 0x456b60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456b64:
    // 0x456b64: 0x0  nop
    ctx->pc = 0x456b64u;
    // NOP
    // 0x456b68: 0x0  nop
    ctx->pc = 0x456b68u;
    // NOP
    // 0x456b6c: 0x0  nop
    ctx->pc = 0x456b6cu;
    // NOP
    // 0x456b70: 0x0  nop
    ctx->pc = 0x456b70u;
    // NOP
    // 0x456b74: 0x0  nop
    ctx->pc = 0x456b74u;
    // NOP
    // 0x456b78: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456B78u;
    {
        const bool branch_taken_0x456b78 = (false);
        if (branch_taken_0x456b78) {
            ctx->pc = 0x456B64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456b64;
        }
    }
    ctx->pc = 0x456B80u;
    // 0x456b80: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456b84: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x456b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_456b88:
    // 0x456b88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x456b88u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x456b8c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456b90: 0x0  nop
    ctx->pc = 0x456b90u;
    // NOP
    // 0x456b94: 0x0  nop
    ctx->pc = 0x456b94u;
    // NOP
    // 0x456b98: 0x0  nop
    ctx->pc = 0x456b98u;
    // NOP
    // 0x456b9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456B9Cu;
    {
        const bool branch_taken_0x456b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x456BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456B9Cu;
        // 0x456ba0: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456b9c) {
            ctx->pc = 0x456B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456b88;
        }
    }
    ctx->pc = 0x456BA4u;
label_456ba4:
    // 0x456ba4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x456ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x456ba8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x456ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x456bac: 0x34630300  ori         $v1, $v1, 0x300
    ctx->pc = 0x456bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)768);
    // 0x456bb0: 0x34840f00  ori         $a0, $a0, 0xF00
    ctx->pc = 0x456bb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3840);
    // 0x456bb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x456bb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456bb8: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x456bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x456bbc: 0x0  nop
    ctx->pc = 0x456bbcu;
    // NOP
label_456bc0:
    // 0x456bc0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x456bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x456bc4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x456bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x456bc8: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x456bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x456bcc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x456bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x456bd0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x456bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x456bd4: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x456bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x456bd8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x456bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x456bdc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x456bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x456be0: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x456be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x456be4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x456be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x456be8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x456be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x456bec: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x456becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_456bf0:
    // 0x456bf0: 0x42000039  di
    ctx->pc = 0x456bf0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x456bf4: 0x40f  sync.p
    ctx->pc = 0x456bf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456bf8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x456bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x456bfc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x456bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x456c00: 0x0  nop
    ctx->pc = 0x456c00u;
    // NOP
    // 0x456c04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456C04u;
    {
        const bool branch_taken_0x456c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456c04) {
            ctx->pc = 0x456BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456bf0;
        }
    }
    ctx->pc = 0x456C0Cu;
    // 0x456c0c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x456c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x456c10: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x456c10u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x456c14: 0xd87b0010  lqc2        $vf27, 0x10($v1)
    ctx->pc = 0x456c14u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x456c18: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x456c18u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456c1c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x456c1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x456c20: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x456c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456c24: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x456c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x456c28: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x456c28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x456c2c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x456c2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x456c30: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x456c30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x456c34: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x456c34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x456c38: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x456c38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x456c3c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x456c3cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x456c40: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x456c40u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456c44: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x456c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x456c48: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x456c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456c4c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x456c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x456c50: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x456c50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456c54: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x456c54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x456c58: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x456c58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x456c5c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x456c5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x456c60: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x456c60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x456c64: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x456c64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x456c68: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x456c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x456c6c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x456c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x456c70: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x456c70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x456c74: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x456c74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x456c78: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x456c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x456c7c: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x456c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x456c80: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x456c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x456c84: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x456c84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456c88: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x456c88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x456c8c: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x456c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x456c90: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x456c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x456c94: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x456c94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x456c98: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x456c98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x456c9c: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x456c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x456ca0: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x456ca0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x456ca4: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x456ca4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x456ca8: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x456ca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x456cac: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x456cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x456cb0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x456cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x456cb4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x456cb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x456cb8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x456cb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x456cbc: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x456cbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x456cc0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x456cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x456cc4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x456cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x456cc8: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x456cc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x456ccc: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x456cccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x456cd0: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x456cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x456cd4: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x456cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x456cd8: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x456cd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x456cdc: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x456cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x456ce0: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x456ce0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x456ce4: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x456ce4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x456ce8: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x456ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x456cec: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x456cecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x456cf0: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x456cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x456cf4: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x456cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x456cf8: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x456cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x456cfc: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x456cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x456d00: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x456d00u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x456d04: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x456d04u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x456d08: 0x42000038  ei
    ctx->pc = 0x456d08u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x456d0c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x456d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x456d10: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x456d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x456d14: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x456d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x456d18: 0x2a4200c0  slti        $v0, $s2, 0xC0
    ctx->pc = 0x456d18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x456d1c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x456D1Cu;
    {
        const bool branch_taken_0x456d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x456D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456D1Cu;
        // 0x456d20: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456d1c) {
            ctx->pc = 0x456BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456bc0;
        }
    }
    ctx->pc = 0x456D24u;
    // 0x456d24: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x456d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x456d28: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456d2c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x456D2Cu;
    {
        const bool branch_taken_0x456d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d2c) {
            ctx->pc = 0x456D60u;
            goto label_456d60;
        }
    }
    ctx->pc = 0x456D34u;
    // 0x456d34: 0xad0b0000  sw          $t3, 0x0($t0)
    ctx->pc = 0x456d34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 11));
    // 0x456d38: 0xf  sync
    ctx->pc = 0x456d38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456d3c: 0x40f  sync.p
    ctx->pc = 0x456d3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456d40:
    // 0x456d40: 0x0  nop
    ctx->pc = 0x456d40u;
    // NOP
    // 0x456d44: 0x0  nop
    ctx->pc = 0x456d44u;
    // NOP
    // 0x456d48: 0x0  nop
    ctx->pc = 0x456d48u;
    // NOP
    // 0x456d4c: 0x0  nop
    ctx->pc = 0x456d4cu;
    // NOP
    // 0x456d50: 0x0  nop
    ctx->pc = 0x456d50u;
    // NOP
    // 0x456d54: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456D54u;
    {
        const bool branch_taken_0x456d54 = (false);
        if (branch_taken_0x456d54) {
            ctx->pc = 0x456D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456d40;
        }
    }
    ctx->pc = 0x456D5Cu;
    // 0x456d5c: 0x0  nop
    ctx->pc = 0x456d5cu;
    // NOP
label_456d60:
    // 0x456d60: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x456d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x456d64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456d68: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x456D68u;
    {
        const bool branch_taken_0x456d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d68) {
            ctx->pc = 0x456DBCu;
            goto label_456dbc;
        }
    }
    ctx->pc = 0x456D70u;
    // 0x456d70: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x456d70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
    // 0x456d74: 0xf  sync
    ctx->pc = 0x456d74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456d78: 0x40f  sync.p
    ctx->pc = 0x456d78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456d7c:
    // 0x456d7c: 0x0  nop
    ctx->pc = 0x456d7cu;
    // NOP
    // 0x456d80: 0x0  nop
    ctx->pc = 0x456d80u;
    // NOP
    // 0x456d84: 0x0  nop
    ctx->pc = 0x456d84u;
    // NOP
    // 0x456d88: 0x0  nop
    ctx->pc = 0x456d88u;
    // NOP
    // 0x456d8c: 0x0  nop
    ctx->pc = 0x456d8cu;
    // NOP
    // 0x456d90: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456D90u;
    {
        const bool branch_taken_0x456d90 = (false);
        if (branch_taken_0x456d90) {
            ctx->pc = 0x456D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456d7c;
        }
    }
    ctx->pc = 0x456D98u;
    // 0x456d98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456d98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456d9c: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x456d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
label_456da0:
    // 0x456da0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x456da0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x456da4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456da8: 0x0  nop
    ctx->pc = 0x456da8u;
    // NOP
    // 0x456dac: 0x0  nop
    ctx->pc = 0x456dacu;
    // NOP
    // 0x456db0: 0x0  nop
    ctx->pc = 0x456db0u;
    // NOP
    // 0x456db4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456DB4u;
    {
        const bool branch_taken_0x456db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456db4) {
            ctx->pc = 0x456DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456da0;
        }
    }
    ctx->pc = 0x456DBCu;
label_456dbc:
    // 0x456dbc: 0xad8b0000  sw          $t3, 0x0($t4)
    ctx->pc = 0x456dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 11));
    // 0x456dc0: 0x24030f00  addiu       $v1, $zero, 0xF00
    ctx->pc = 0x456dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x456dc4: 0x24040300  addiu       $a0, $zero, 0x300
    ctx->pc = 0x456dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x456dc8: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x456dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x456dcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x456dd0: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x456dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
    // 0x456dd4: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x456dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x456dd8: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x456dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x456ddc: 0xf  sync
    ctx->pc = 0x456ddcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456de0: 0x40f  sync.p
    ctx->pc = 0x456de0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456de4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x456de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456de8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x456de8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456dec: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x456decu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456df0: 0x2a4200c0  slti        $v0, $s2, 0xC0
    ctx->pc = 0x456df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)192) ? 1 : 0);
    // 0x456df4: 0x1040ff02  beqz        $v0, . + 4 + (-0xFE << 2)
    ctx->pc = 0x456DF4u;
    {
        const bool branch_taken_0x456df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456DF4u;
        // 0x456df8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456df4) {
            ctx->pc = 0x456A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456a00;
        }
    }
    ctx->pc = 0x456DFCu;
    // 0x456dfc: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x456dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_456e00:
    // 0x456e00: 0x1440014f  bnez        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x456E00u;
    {
        const bool branch_taken_0x456e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x456E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456E00u;
        // 0x456e04: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456e00) {
            ctx->pc = 0x457340u;
            goto label_457340;
        }
    }
    ctx->pc = 0x456E08u;
    // 0x456e08: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x456e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x456e0c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x456e0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x456e10: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x456e10u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x456e14: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x456e14u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x456e18: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x456e18u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x456e1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456e20: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x456e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x456e24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x456e24u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x456e28: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x456e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x456e2c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x456E2Cu;
    {
        const bool branch_taken_0x456e2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456E2Cu;
        // 0x456e30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456e2c) {
            ctx->pc = 0x456E68u;
            goto label_456e68;
        }
    }
    ctx->pc = 0x456E34u;
    // 0x456e34: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x456e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x456e38: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x456e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x456e3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456e3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456e40: 0xf  sync
    ctx->pc = 0x456e40u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456e44: 0x40f  sync.p
    ctx->pc = 0x456e44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456e48:
    // 0x456e48: 0x0  nop
    ctx->pc = 0x456e48u;
    // NOP
    // 0x456e4c: 0x0  nop
    ctx->pc = 0x456e4cu;
    // NOP
    // 0x456e50: 0x0  nop
    ctx->pc = 0x456e50u;
    // NOP
    // 0x456e54: 0x0  nop
    ctx->pc = 0x456e54u;
    // NOP
    // 0x456e58: 0x0  nop
    ctx->pc = 0x456e58u;
    // NOP
    // 0x456e5c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456E5Cu;
    {
        const bool branch_taken_0x456e5c = (false);
        if (branch_taken_0x456e5c) {
            ctx->pc = 0x456E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456e48;
        }
    }
    ctx->pc = 0x456E64u;
    // 0x456e64: 0x0  nop
    ctx->pc = 0x456e64u;
    // NOP
label_456e68:
    // 0x456e68: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456e6c: 0x46200  sll         $t4, $a0, 8
    ctx->pc = 0x456e6cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x456e70: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x456e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x456e74: 0x2485823  subu        $t3, $s2, $t0
    ctx->pc = 0x456e74u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x456e78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x456e78u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x456e7c: 0x25060003  addiu       $a2, $t0, 0x3
    ctx->pc = 0x456e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x456e80: 0x44900  sll         $t1, $a0, 4
    ctx->pc = 0x456e80u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x456e84: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x456e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x456e88: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x456E88u;
    {
        const bool branch_taken_0x456e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456E88u;
        // 0x456e8c: 0x45180  sll         $t2, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456e88) {
            ctx->pc = 0x456EECu;
            goto label_456eec;
        }
    }
    ctx->pc = 0x456E90u;
    // 0x456e90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456e94: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x456e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x456e98: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x456e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x456e9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456e9cu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456ea0: 0xf  sync
    ctx->pc = 0x456ea0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456ea4: 0x40f  sync.p
    ctx->pc = 0x456ea4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456ea8:
    // 0x456ea8: 0x0  nop
    ctx->pc = 0x456ea8u;
    // NOP
    // 0x456eac: 0x0  nop
    ctx->pc = 0x456eacu;
    // NOP
    // 0x456eb0: 0x0  nop
    ctx->pc = 0x456eb0u;
    // NOP
    // 0x456eb4: 0x0  nop
    ctx->pc = 0x456eb4u;
    // NOP
    // 0x456eb8: 0x0  nop
    ctx->pc = 0x456eb8u;
    // NOP
    // 0x456ebc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456EBCu;
    {
        const bool branch_taken_0x456ebc = (false);
        if (branch_taken_0x456ebc) {
            ctx->pc = 0x456EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456ea8;
        }
    }
    ctx->pc = 0x456EC4u;
    // 0x456ec4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456ec8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x456ecc: 0x0  nop
    ctx->pc = 0x456eccu;
    // NOP
label_456ed0:
    // 0x456ed0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456ed4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456ed8: 0x0  nop
    ctx->pc = 0x456ed8u;
    // NOP
    // 0x456edc: 0x0  nop
    ctx->pc = 0x456edcu;
    // NOP
    // 0x456ee0: 0x0  nop
    ctx->pc = 0x456ee0u;
    // NOP
    // 0x456ee4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456EE4u;
    {
        const bool branch_taken_0x456ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456ee4) {
            ctx->pc = 0x456ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456ed0;
        }
    }
    ctx->pc = 0x456EECu;
label_456eec:
    // 0x456eec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456ef0: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x456ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x456ef4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x456ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x456ef8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x456ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x456efc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x456efcu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x456f00: 0x88202a  slt         $a0, $a0, $t0
    ctx->pc = 0x456f00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x456f04: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x456f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456f08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456f0c: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x456f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x456f10: 0x104280b  movn        $a1, $t0, $a0
    ctx->pc = 0x456f10u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x456f14: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456f18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x456f18u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x456f1c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x456f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x456f20: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456f24: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x456f24u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x456f28: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x456f28u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x456f2c: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x456f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x456f30: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456f34: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x456f34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x456f38: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x456f3c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x456f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x456f40: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x456f40u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x456f44: 0xf  sync
    ctx->pc = 0x456f44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456f48: 0x40f  sync.p
    ctx->pc = 0x456f48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456f4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x456f50: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456f54: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x456F54u;
    {
        const bool branch_taken_0x456f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x456F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x456F54u;
        // 0x456f58: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456f54) {
            ctx->pc = 0x456FACu;
            goto label_456fac;
        }
    }
    ctx->pc = 0x456F5Cu;
    // 0x456f5c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x456f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x456f60: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x456f60u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x456f64: 0xf  sync
    ctx->pc = 0x456f64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x456f68: 0x40f  sync.p
    ctx->pc = 0x456f68u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_456f6c:
    // 0x456f6c: 0x0  nop
    ctx->pc = 0x456f6cu;
    // NOP
    // 0x456f70: 0x0  nop
    ctx->pc = 0x456f70u;
    // NOP
    // 0x456f74: 0x0  nop
    ctx->pc = 0x456f74u;
    // NOP
    // 0x456f78: 0x0  nop
    ctx->pc = 0x456f78u;
    // NOP
    // 0x456f7c: 0x0  nop
    ctx->pc = 0x456f7cu;
    // NOP
    // 0x456f80: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x456F80u;
    {
        const bool branch_taken_0x456f80 = (false);
        if (branch_taken_0x456f80) {
            ctx->pc = 0x456F6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456f6c;
        }
    }
    ctx->pc = 0x456F88u;
    // 0x456f88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456f8c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x456f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_456f90:
    // 0x456f90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x456f90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x456f94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x456f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x456f98: 0x0  nop
    ctx->pc = 0x456f98u;
    // NOP
    // 0x456f9c: 0x0  nop
    ctx->pc = 0x456f9cu;
    // NOP
    // 0x456fa0: 0x0  nop
    ctx->pc = 0x456fa0u;
    // NOP
    // 0x456fa4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x456FA4u;
    {
        const bool branch_taken_0x456fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456fa4) {
            ctx->pc = 0x456F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456f90;
        }
    }
    ctx->pc = 0x456FACu;
label_456fac:
    // 0x456fac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x456facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x456fb0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x456fb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456fb4: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x456fb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x456fb8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x456fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x456fbc: 0x102180b  movn        $v1, $t0, $v0
    ctx->pc = 0x456fbcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x456fc0: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x456fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
    // 0x456fc4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x456fc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x456fc8: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x456fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x456fcc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456fd0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x456fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x456fd4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x456fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x456fd8: 0x3484d480  ori         $a0, $a0, 0xD480
    ctx->pc = 0x456fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54400);
    // 0x456fdc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x456fdcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x456fe0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x456fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x456fe4: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x456fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x456fe8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x456fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x456fec: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x456fecu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x456ff0: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x456ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x456ff4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x456ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x456ff8: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x456ff8u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 8)); // MMIO: 0x10000000
    // 0x456ffc: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x456ffcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x457000: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x457000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x457004: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x457004u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x457008: 0xf  sync
    ctx->pc = 0x457008u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45700c: 0x40f  sync.p
    ctx->pc = 0x45700cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x457010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x457014: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x457014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457018: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x457018u;
    {
        const bool branch_taken_0x457018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457018u;
        // 0x45701c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457018) {
            ctx->pc = 0x457074u;
            goto label_457074;
        }
    }
    ctx->pc = 0x457020u;
    // 0x457020: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457024: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x457024u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x457028: 0xf  sync
    ctx->pc = 0x457028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45702c: 0x40f  sync.p
    ctx->pc = 0x45702cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457030:
    // 0x457030: 0x0  nop
    ctx->pc = 0x457030u;
    // NOP
    // 0x457034: 0x0  nop
    ctx->pc = 0x457034u;
    // NOP
    // 0x457038: 0x0  nop
    ctx->pc = 0x457038u;
    // NOP
    // 0x45703c: 0x0  nop
    ctx->pc = 0x45703cu;
    // NOP
    // 0x457040: 0x0  nop
    ctx->pc = 0x457040u;
    // NOP
    // 0x457044: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457044u;
    {
        const bool branch_taken_0x457044 = (false);
        if (branch_taken_0x457044) {
            ctx->pc = 0x457030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457030;
        }
    }
    ctx->pc = 0x45704Cu;
    // 0x45704c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45704cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x457050: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x457050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x457054: 0x0  nop
    ctx->pc = 0x457054u;
    // NOP
label_457058:
    // 0x457058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x457058u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45705c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45705cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x457060: 0x0  nop
    ctx->pc = 0x457060u;
    // NOP
    // 0x457064: 0x0  nop
    ctx->pc = 0x457064u;
    // NOP
    // 0x457068: 0x0  nop
    ctx->pc = 0x457068u;
    // NOP
    // 0x45706c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45706Cu;
    {
        const bool branch_taken_0x45706c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45706c) {
            ctx->pc = 0x457058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457058;
        }
    }
    ctx->pc = 0x457074u;
label_457074:
    // 0x457074: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x457074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x457078: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x457078u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45707c: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x45707cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x457080: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x457080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x457084: 0x102180b  movn        $v1, $t0, $v0
    ctx->pc = 0x457084u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
    // 0x457088: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x457088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45708c: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x45708cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x457090: 0x681021  addu        $v0, $v1, $t0
    ctx->pc = 0x457090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x457094: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x457094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x457098: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x457098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x45709c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x45709cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4570a0: 0x1900005d  blez        $t0, . + 4 + (0x5D << 2)
    ctx->pc = 0x4570A0u;
    {
        const bool branch_taken_0x4570a0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x4570A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4570A0u;
        // 0x4570a4: 0x452025  or          $a0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4570a0) {
            ctx->pc = 0x457218u;
            goto label_457218;
        }
    }
    ctx->pc = 0x4570A8u;
    // 0x4570a8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x4570a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x4570ac: 0x0  nop
    ctx->pc = 0x4570acu;
    // NOP
label_4570b0:
    // 0x4570b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4570b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4570b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4570b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4570b8: 0xe4203f20  swc1        $f0, 0x3F20($at)
    ctx->pc = 0x4570b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F20u, bits); }
    // 0x4570bc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4570bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4570c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4570c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4570c4: 0xe4213f24  swc1        $f1, 0x3F24($at)
    ctx->pc = 0x4570c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F24u, bits); }
    // 0x4570c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4570c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4570cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4570ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4570d0: 0xe4203f28  swc1        $f0, 0x3F28($at)
    ctx->pc = 0x4570d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F28u, bits); }
    // 0x4570d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4570d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4570d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4570d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4570dc: 0xe4213f2c  swc1        $f1, 0x3F2C($at)
    ctx->pc = 0x4570dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F2Cu, bits); }
label_4570e0:
    // 0x4570e0: 0x42000039  di
    ctx->pc = 0x4570e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4570e4: 0x40f  sync.p
    ctx->pc = 0x4570e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4570e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x4570e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x4570ec: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4570ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4570f0: 0x0  nop
    ctx->pc = 0x4570f0u;
    // NOP
    // 0x4570f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4570F4u;
    {
        const bool branch_taken_0x4570f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4570f4) {
            ctx->pc = 0x4570E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4570e0;
        }
    }
    ctx->pc = 0x4570FCu;
    // 0x4570fc: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x4570fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x457100: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x457100u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x457104: 0xd87b0010  lqc2        $vf27, 0x10($v1)
    ctx->pc = 0x457104u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x457108: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x457108u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45710c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45710cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x457110: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x457110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457114: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x457114u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x457118: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x457118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45711c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45711cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457120: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x457120u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x457124: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x457124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x457128: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x457128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45712c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45712cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457130: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x457130u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457134: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x457134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457138: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x457138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45713c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45713cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x457140: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x457140u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x457144: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x457144u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x457148: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x457148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45714c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45714cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x457150: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x457150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x457154: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x457154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457158: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x457158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45715c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45715cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x457160: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x457160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x457164: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x457164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457168: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x457168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x45716c: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x45716cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x457170: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x457170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x457174: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x457174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x457178: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x457178u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x45717c: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x45717cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x457180: 0x4bc74099  vmuly.xyz   $vf2, $vf8, $vf7y
    ctx->pc = 0x457180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457184: 0x4bc780db  vmulw.xyz   $vf3, $vf16, $vf7w
    ctx->pc = 0x457184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x457188: 0x4bc7491b  vmulw.xyz   $vf4, $vf9, $vf7w
    ctx->pc = 0x457188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45718c: 0x4bc78959  vmuly.xyz   $vf5, $vf17, $vf7y
    ctx->pc = 0x45718cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x457190: 0x4be3166c  vsub.xyzw   $vf25, $vf2, $vf3
    ctx->pc = 0x457190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = PS2_VBLEND(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x457194: 0x4be526a8  vadd.xyzw   $vf26, $vf4, $vf5
    ctx->pc = 0x457194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x457198: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x457198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x45719c: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x45719cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4571a0: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x4571a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4571a4: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x4571a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4571a8: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x4571a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4571ac: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x4571acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4571b0: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x4571b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4571b4: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x4571b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4571b8: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x4571b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x4571bc: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x4571bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x4571c0: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x4571c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x4571c4: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x4571c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x4571c8: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x4571c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x4571cc: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x4571ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x4571d0: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x4571d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x4571d4: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x4571d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x4571d8: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x4571d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x4571dc: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x4571dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x4571e0: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x4571e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x4571e4: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x4571e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x4571e8: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x4571e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x4571ec: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x4571ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x4571f0: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x4571f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x4571f4: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x4571f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x4571f8: 0x42000038  ei
    ctx->pc = 0x4571f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4571fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4571fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x457200: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x457200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x457204: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x457204u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x457208: 0x248102a  slt         $v0, $s2, $t0
    ctx->pc = 0x457208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x45720c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x45720Cu;
    {
        const bool branch_taken_0x45720c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x457210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45720Cu;
        // 0x457210: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45720c) {
            ctx->pc = 0x4570B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4570b0;
        }
    }
    ctx->pc = 0x457214u;
    // 0x457214: 0x0  nop
    ctx->pc = 0x457214u;
    // NOP
label_457218:
    // 0x457218: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45721c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x457220: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x457220u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x457224: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x457224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x457228: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x457228u;
    {
        const bool branch_taken_0x457228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x45722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457228u;
        // 0x45722c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457228) {
            ctx->pc = 0x457260u;
            goto label_457260;
        }
    }
    ctx->pc = 0x457230u;
    // 0x457230: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x457230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x457234: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x457234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457238: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457238u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x45723c: 0xf  sync
    ctx->pc = 0x45723cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457240: 0x40f  sync.p
    ctx->pc = 0x457240u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_457244:
    // 0x457244: 0x0  nop
    ctx->pc = 0x457244u;
    // NOP
    // 0x457248: 0x0  nop
    ctx->pc = 0x457248u;
    // NOP
    // 0x45724c: 0x0  nop
    ctx->pc = 0x45724cu;
    // NOP
    // 0x457250: 0x0  nop
    ctx->pc = 0x457250u;
    // NOP
    // 0x457254: 0x0  nop
    ctx->pc = 0x457254u;
    // NOP
    // 0x457258: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x457258u;
    {
        const bool branch_taken_0x457258 = (false);
        if (branch_taken_0x457258) {
            ctx->pc = 0x457244u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457244;
        }
    }
    ctx->pc = 0x457260u;
label_457260:
    // 0x457260: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457264: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x457264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x457268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x457268u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45726c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45726cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x457270: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x457270u;
    {
        const bool branch_taken_0x457270 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x457274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457270u;
        // 0x457274: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457270) {
            ctx->pc = 0x4572CCu;
            goto label_4572cc;
        }
    }
    ctx->pc = 0x457278u;
    // 0x457278: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x457278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45727c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x457280: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457280u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x457284: 0xf  sync
    ctx->pc = 0x457284u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457288: 0x40f  sync.p
    ctx->pc = 0x457288u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45728c:
    // 0x45728c: 0x0  nop
    ctx->pc = 0x45728cu;
    // NOP
    // 0x457290: 0x0  nop
    ctx->pc = 0x457290u;
    // NOP
    // 0x457294: 0x0  nop
    ctx->pc = 0x457294u;
    // NOP
    // 0x457298: 0x0  nop
    ctx->pc = 0x457298u;
    // NOP
    // 0x45729c: 0x0  nop
    ctx->pc = 0x45729cu;
    // NOP
    // 0x4572a0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4572A0u;
    {
        const bool branch_taken_0x4572a0 = (false);
        if (branch_taken_0x4572a0) {
            ctx->pc = 0x45728Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45728c;
        }
    }
    ctx->pc = 0x4572A8u;
    // 0x4572a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4572a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4572ac: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4572acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_4572b0:
    // 0x4572b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4572b0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4572b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4572b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4572b8: 0x0  nop
    ctx->pc = 0x4572b8u;
    // NOP
    // 0x4572bc: 0x0  nop
    ctx->pc = 0x4572bcu;
    // NOP
    // 0x4572c0: 0x0  nop
    ctx->pc = 0x4572c0u;
    // NOP
    // 0x4572c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4572C4u;
    {
        const bool branch_taken_0x4572c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4572c4) {
            ctx->pc = 0x4572B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4572b0;
        }
    }
    ctx->pc = 0x4572CCu;
label_4572cc:
    // 0x4572cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4572ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4572d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x4572d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x4572d4: 0x48102a  slt         $v0, $v0, $t0
    ctx->pc = 0x4572d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4572d8: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x4572d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4572dc: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x4572dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x4572e0: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x4572e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
    // 0x4572e4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4572e4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x4572e8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4572e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4572ec: 0xc81821  addu        $v1, $a2, $t0
    ctx->pc = 0x4572ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x4572f0: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x4572f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x4572f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4572f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x4572f8: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x4572f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x4572fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4572fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457300: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x457300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x457304: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x457304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x457308: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x457308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45730c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x45730cu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x457310: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x457310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x457314: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x457314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x457318: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x457318u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x45731c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45731cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x457320: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x457320u;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 7)); // MMIO: 0x10000000
    // 0x457324: 0xf  sync
    ctx->pc = 0x457324u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x457328: 0x40f  sync.p
    ctx->pc = 0x457328u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45732c: 0x22a8821  addu        $s1, $s1, $t2
    ctx->pc = 0x45732cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x457330: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x457330u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x457334: 0x20c8021  addu        $s0, $s0, $t4
    ctx->pc = 0x457334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 12)));
    // 0x457338: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x457338u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x45733c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x45733cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_457340:
    // 0x457340: 0x1a4000c1  blez        $s2, . + 4 + (0xC1 << 2)
    ctx->pc = 0x457340u;
    {
        const bool branch_taken_0x457340 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x457344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457340u;
        // 0x457344: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457340) {
            ctx->pc = 0x457648u;
            goto label_457648;
        }
    }
    ctx->pc = 0x457348u;
    // 0x457348: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x457348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x45734c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x45734cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_457350:
    // 0x457350: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x457350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457354: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x457354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x457358: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x457358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45735c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x45735cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x457360: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x457360u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457364: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x457364u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x457368: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x457368u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45736c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45736cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x457370: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x457370u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457374: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x457374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x457378: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x457378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45737c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45737cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457380: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x457380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x457384: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x457384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x457388: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x457388u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45738c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45738cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457390: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x457390u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x457394: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x457394u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x457398: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x457398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45739c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45739cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4573a0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x4573a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4573a4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x4573a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x4573a8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x4573a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4573ac: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x4573acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4573b0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x4573b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4573b4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x4573b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4573b8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x4573b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4573bc: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x4573bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4573c0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x4573c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4573c4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x4573c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4573c8: 0x4bc74098  vmulx.xyz   $vf2, $vf8, $vf7x
    ctx->pc = 0x4573c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4573cc: 0x4bc780da  vmulz.xyz   $vf3, $vf16, $vf7z
    ctx->pc = 0x4573ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x4573d0: 0x4bc7491a  vmulz.xyz   $vf4, $vf9, $vf7z
    ctx->pc = 0x4573d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4573d4: 0x4bc78958  vmulx.xyz   $vf5, $vf17, $vf7x
    ctx->pc = 0x4573d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4573d8: 0x4be314ac  vsub.xyzw   $vf18, $vf2, $vf3
    ctx->pc = 0x4573d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = PS2_VBLEND(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x4573dc: 0x4be524e8  vadd.xyzw   $vf19, $vf4, $vf5
    ctx->pc = 0x4573dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = PS2_VBLEND(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x4573e0: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x4573e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4573e4: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x4573e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4573e8: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x4573e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4573ec: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x4573ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4573f0: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x4573f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4573f4: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x4573f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4573f8: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x4573f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4573fc: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x4573fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x457400: 0xfa150000  sqc2        $vf21, 0x0($s0)
    ctx->pc = 0x457400u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x457404: 0xfa160010  sqc2        $vf22, 0x10($s0)
    ctx->pc = 0x457404u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x457408: 0xfa170020  sqc2        $vf23, 0x20($s0)
    ctx->pc = 0x457408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x45740c: 0xfa180030  sqc2        $vf24, 0x30($s0)
    ctx->pc = 0x45740cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x457410: 0x42000038  ei
    ctx->pc = 0x457410u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x457414: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x457414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457418: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x457418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x45741c: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x45741cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x457420: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x457420u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x457424: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x457424u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x457428: 0x1640ffc9  bnez        $s2, . + 4 + (-0x37 << 2)
    ctx->pc = 0x457428u;
    {
        const bool branch_taken_0x457428 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x45742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457428u;
        // 0x45742c: 0x2679821  addu        $s3, $s3, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457428) {
            ctx->pc = 0x457350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457350;
        }
    }
    ctx->pc = 0x457430u;
    // 0x457430: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x457430u;
    {
        const bool branch_taken_0x457430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x457430u;
        // 0x457434: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457430) {
            ctx->pc = 0x45764Cu;
            goto label_45764c;
        }
    }
    ctx->pc = 0x457438u;
label_457438:
    // 0x457438: 0x5a400084  blezl       $s2, . + 4 + (0x84 << 2)
    ctx->pc = 0x457438u;
    {
        const bool branch_taken_0x457438 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x457438) {
            ctx->pc = 0x45743Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x457438u;
            // 0x45743c: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45764Cu;
            goto label_45764c;
        }
    }
    ctx->pc = 0x457440u;
label_457440:
    // 0x457440: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x457440u;
    SET_GPR_U32(ctx, 31, 0x457448u);
    ctx->pc = 0x457444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x457440u;
    // 0x457444: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x457440u, 0x457448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x457448u;
label_457448:
    // 0x457448: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x457448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x45744c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x45744cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x457450: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x457450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x457454: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x457454u;
    SET_GPR_U32(ctx, 31, 0x45745Cu);
    ctx->pc = 0x457458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x457454u;
    // 0x457458: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x457454u, 0x45745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45745Cu;
label_45745c:
    // 0x45745c: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x45745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x457460: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x457460u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x457464: 0xc6a90000  lwc1        $f9, 0x0($s5)
    ctx->pc = 0x457464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x457468: 0xc6870008  lwc1        $f7, 0x8($s4)
    ctx->pc = 0x457468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x45746c: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x45746cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x457470: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x457470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x457474: 0x46092302  mul.s       $f12, $f4, $f9
    ctx->pc = 0x457474u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x457478: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x457478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45747c: 0x4605a142  mul.s       $f5, $f20, $f5
    ctx->pc = 0x45747cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x457480: 0xc6a80004  lwc1        $f8, 0x4($s5)
    ctx->pc = 0x457480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x457484: 0x4607a182  mul.s       $f6, $f20, $f7
    ctx->pc = 0x457484u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x457488: 0x460202c2  mul.s       $f11, $f0, $f2
    ctx->pc = 0x457488u;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45748c: 0x4603a502  mul.s       $f20, $f20, $f3
    ctx->pc = 0x45748cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x457490: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x457490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x457494: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x457494u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x457498: 0x46080282  mul.s       $f10, $f0, $f8
    ctx->pc = 0x457498u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x45749c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x45749cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x4574a0: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x4574a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x4574a4: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x4574a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x4574a8: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x4574a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x4574ac: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x4574acu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x4574b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4574b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4574b4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x4574b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x4574b8: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x4574b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x4574bc: 0x460aa500  add.s       $f20, $f20, $f10
    ctx->pc = 0x4574bcu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[10]);
    // 0x4574c0: 0x460b3180  add.s       $f6, $f6, $f11
    ctx->pc = 0x4574c0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x4574c4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x4574c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x4574c8: 0x46162942  mul.s       $f5, $f5, $f22
    ctx->pc = 0x4574c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[22]);
    // 0x4574cc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4574ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x4574d0: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x4574d0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x4574d4: 0x4616a502  mul.s       $f20, $f20, $f22
    ctx->pc = 0x4574d4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x4574d8: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x4574d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x4574dc: 0x46163182  mul.s       $f6, $f6, $f22
    ctx->pc = 0x4574dcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[22]);
    // 0x4574e0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x4574e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x4574e4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4574e4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x4574e8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x4574e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x4574ec: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x4574ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x4574f0: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x4574f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x4574f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x4574f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x4574f8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x4574f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4574fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4574fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x457500: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x457500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x457504: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x457504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457508: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x457508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45750c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45750cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x457510: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x457510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457514: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x457514u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x457518: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x457518u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x45751c: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x45751cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x457520: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x457520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457524: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x457524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457528: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x457528u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x45752c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x45752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457530: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x457530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x457534: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x457534u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x457538: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x457538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45753c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457540: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x457540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457544: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x457544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457548: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x457548u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45754c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x45754cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x457550: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x457550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x457554: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x457554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x457558: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x457558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45755c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45755cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457560: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x457560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457564: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x457564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457568: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x457568u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45756c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45756cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x457570: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x457570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x457574: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x457574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457578: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x457578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45757c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45757cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457580: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x457580u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x457584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x457584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x457588: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x457588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45758c: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457590: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x457590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x457594: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x457594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457598: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x457598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45759c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45759cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4575a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4575a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4575a4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x4575a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4575a8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x4575a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4575ac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x4575acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4575b0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x4575b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4575b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4575b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4575b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4575b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4575bc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x4575bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4575c0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x4575c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4575c4: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x4575c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4575c8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x4575c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4575cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x4575ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4575d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4575d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4575d4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x4575d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x4575d8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4575d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x4575dc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x4575dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4575e0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x4575e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4575e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x4575e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x4575e8: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x4575e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4575ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4575ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4575f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4575f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x4575f4: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x4575f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x4575f8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x4575f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4575fc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x4575fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x457600: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x457600u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x457604: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x457604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457608: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x457608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45760c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x45760cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x457610: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x457610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x457614: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x457614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x457618: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x457618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45761c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x45761cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x457620: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x457620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x457624: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x457624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x457628: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x457628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x45762c: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x45762cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x457630: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x457630u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x457634: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x457634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x457638: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x457638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x45763c: 0x1640ff80  bnez        $s2, . + 4 + (-0x80 << 2)
    ctx->pc = 0x45763Cu;
    {
        const bool branch_taken_0x45763c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x457640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45763Cu;
        // 0x457640: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45763c) {
            ctx->pc = 0x457440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_457440;
        }
    }
    ctx->pc = 0x457644u;
    // 0x457644: 0x0  nop
    ctx->pc = 0x457644u;
    // NOP
label_457648:
    // 0x457648: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x457648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_45764c:
    // 0x45764c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x45764cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x457650: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x457650u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x457654: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x457654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x457658: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x457658u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45765c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x45765cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x457660: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x457660u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x457664: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x457664u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x457668: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x457668u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45766c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45766cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x457670: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x457670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x457674: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x457674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x457678: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x457678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45767c: 0x3e00008  jr          $ra
    ctx->pc = 0x45767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x457680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45767Cu;
        // 0x457680: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457684u;
    // 0x457684: 0x0  nop
    ctx->pc = 0x457684u;
    // NOP
    ctx->pc = 0x457688u;
}
