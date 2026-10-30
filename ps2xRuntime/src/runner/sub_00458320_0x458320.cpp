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

// Function: sub_00458320
// Address: 0x458320 - 0x459520
void sub_00458320_0x458320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00458320_0x458320");
#endif

    switch (ctx->pc) {
        case 0x458398u: goto label_458398;
        case 0x4583c4u: goto label_4583c4;
        case 0x458410u: goto label_458410;
        case 0x458438u: goto label_458438;
        case 0x4584c0u: goto label_4584c0;
        case 0x4585ccu: goto label_4585cc;
        case 0x458660u: goto label_458660;
        case 0x45867cu: goto label_45867c;
        case 0x4586c8u: goto label_4586c8;
        case 0x4586f0u: goto label_4586f0;
        case 0x458748u: goto label_458748;
        case 0x458770u: goto label_458770;
        case 0x4587ccu: goto label_4587cc;
        case 0x4587f0u: goto label_4587f0;
        case 0x45884cu: goto label_45884c;
        case 0x458870u: goto label_458870;
        case 0x4588b0u: goto label_4588b0;
        case 0x4588e0u: goto label_4588e0;
        case 0x458a38u: goto label_458a38;
        case 0x458a74u: goto label_458a74;
        case 0x458a98u: goto label_458a98;
        case 0x458b50u: goto label_458b50;
        case 0x458bb4u: goto label_458bb4;
        case 0x458bd8u: goto label_458bd8;
        case 0x458c74u: goto label_458c74;
        case 0x458c98u: goto label_458c98;
        case 0x458d28u: goto label_458d28;
        case 0x458d50u: goto label_458d50;
        case 0x458ddcu: goto label_458ddc;
        case 0x458e00u: goto label_458e00;
        case 0x458e48u: goto label_458e48;
        case 0x458e78u: goto label_458e78;
        case 0x458fe4u: goto label_458fe4;
        case 0x45902cu: goto label_45902c;
        case 0x459050u: goto label_459050;
        case 0x459100u: goto label_459100;
        case 0x459130u: goto label_459130;
        case 0x459284u: goto label_459284;
        case 0x459390u: goto label_459390;
        case 0x4593d8u: goto label_4593d8;
        case 0x4593f8u: goto label_4593f8;
        default: break;
    }

    ctx->pc = 0x458320u;

    // 0x458320: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x458320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x458324: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x458324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x458328: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x458328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x45832c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x45832cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458330: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x458330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x458334: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x458334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458338: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x458338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x45833c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x45833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458340: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x458340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x458344: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x458344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x458348: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x458348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x45834c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x45834cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x458350: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x458350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x458354: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x458354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x458358: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x458358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x45835c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x45835cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x458360: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x458360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x458364: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x458364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x458368: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x458368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45836c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x45836cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x458370: 0x8d030038  lw          $v1, 0x38($t0)
    ctx->pc = 0x458370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x458374: 0xafa30034  sw          $v1, 0x34($sp)
    ctx->pc = 0x458374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 3));
    // 0x458378: 0x8c960000  lw          $s6, 0x0($a0)
    ctx->pc = 0x458378u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45837c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x45837cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x458380: 0x8d150004  lw          $s5, 0x4($t0)
    ctx->pc = 0x458380u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x458384: 0x8d140034  lw          $s4, 0x34($t0)
    ctx->pc = 0x458384u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x458388: 0x144403a9  bne         $v0, $a0, . + 4 + (0x3A9 << 2)
    ctx->pc = 0x458388u;
    {
        const bool branch_taken_0x458388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x45838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458388u;
        // 0x45838c: 0x8d13001c  lw          $s3, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458388) {
            ctx->pc = 0x459230u;
            goto label_459230;
        }
    }
    ctx->pc = 0x458390u;
    // 0x458390: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x458390u;
    SET_GPR_U32(ctx, 31, 0x458398u);
    ctx->pc = 0x458394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x458390u;
    // 0x458394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x458390u, 0x458398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x458398u;
label_458398:
    // 0x458398: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45839c: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x45839cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4583a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4583a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4583a4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4583a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4583a8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4583A8u;
    {
        const bool branch_taken_0x4583a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4583ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4583A8u;
        // 0x4583ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4583a8) {
            ctx->pc = 0x4583E0u;
            goto label_4583e0;
        }
    }
    ctx->pc = 0x4583B0u;
    // 0x4583b0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4583b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4583b4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4583b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4583b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4583b8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4583bc: 0xf  sync
    ctx->pc = 0x4583bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4583c0: 0x40f  sync.p
    ctx->pc = 0x4583c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4583c4:
    // 0x4583c4: 0x0  nop
    ctx->pc = 0x4583c4u;
    // NOP
    // 0x4583c8: 0x0  nop
    ctx->pc = 0x4583c8u;
    // NOP
    // 0x4583cc: 0x0  nop
    ctx->pc = 0x4583ccu;
    // NOP
    // 0x4583d0: 0x0  nop
    ctx->pc = 0x4583d0u;
    // NOP
    // 0x4583d4: 0x0  nop
    ctx->pc = 0x4583d4u;
    // NOP
    // 0x4583d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4583D8u;
    {
        const bool branch_taken_0x4583d8 = (false);
        if (branch_taken_0x4583d8) {
            ctx->pc = 0x4583C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4583c4;
        }
    }
    ctx->pc = 0x4583E0u;
label_4583e0:
    // 0x4583e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4583e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4583e4: 0x2a4800b0  slti        $t0, $s2, 0xB0
    ctx->pc = 0x4583e4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x4583e8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4583e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x4583ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4583ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4583f0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4583f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4583f4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4583F4u;
    {
        const bool branch_taken_0x4583f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4583F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4583F4u;
        // 0x4583f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4583f4) {
            ctx->pc = 0x458454u;
            goto label_458454;
        }
    }
    ctx->pc = 0x4583FCu;
    // 0x4583fc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x4583fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x458400: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458404: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458404u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x458408: 0xf  sync
    ctx->pc = 0x458408u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45840c: 0x40f  sync.p
    ctx->pc = 0x45840cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458410:
    // 0x458410: 0x0  nop
    ctx->pc = 0x458410u;
    // NOP
    // 0x458414: 0x0  nop
    ctx->pc = 0x458414u;
    // NOP
    // 0x458418: 0x0  nop
    ctx->pc = 0x458418u;
    // NOP
    // 0x45841c: 0x0  nop
    ctx->pc = 0x45841cu;
    // NOP
    // 0x458420: 0x0  nop
    ctx->pc = 0x458420u;
    // NOP
    // 0x458424: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458424u;
    {
        const bool branch_taken_0x458424 = (false);
        if (branch_taken_0x458424) {
            ctx->pc = 0x458410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458410;
        }
    }
    ctx->pc = 0x45842Cu;
    // 0x45842c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45842cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458430: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x458434: 0x0  nop
    ctx->pc = 0x458434u;
    // NOP
label_458438:
    // 0x458438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458438u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45843c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45843cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458440: 0x0  nop
    ctx->pc = 0x458440u;
    // NOP
    // 0x458444: 0x0  nop
    ctx->pc = 0x458444u;
    // NOP
    // 0x458448: 0x0  nop
    ctx->pc = 0x458448u;
    // NOP
    // 0x45844c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45844Cu;
    {
        const bool branch_taken_0x45844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45844c) {
            ctx->pc = 0x458438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458438;
        }
    }
    ctx->pc = 0x458454u;
label_458454:
    // 0x458454: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x458454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x458458: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x458458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x45845c: 0x3c187000  lui         $t8, 0x7000
    ctx->pc = 0x45845cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)28672 << 16));
    // 0x458460: 0x34e73f40  ori         $a3, $a3, 0x3F40
    ctx->pc = 0x458460u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16192);
    // 0x458464: 0x34c63f50  ori         $a2, $a2, 0x3F50
    ctx->pc = 0x458464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16208);
    // 0x458468: 0x37183f60  ori         $t8, $t8, 0x3F60
    ctx->pc = 0x458468u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)16224);
    // 0x45846c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x45846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x458470: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x458470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x458474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x458474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x458478: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x458478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x45847c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x45847cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F40u, bits); }
    // 0x458480: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x458480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x458484: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x458484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x458488: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x458488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F44u, bits); }
    // 0x45848c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x45848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x458490: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x458490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x458494: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x458494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F48u, bits); }
    // 0x458498: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x458498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45849c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x45849cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4584a0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x4584a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F50u, bits); }
    // 0x4584a4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x4584a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4584a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4584a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x4584ac: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x4584acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F54u, bits); }
    // 0x4584b0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x4584b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4584b4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4584b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x4584b8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x4584b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F58u, bits); }
    // 0x4584bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4584bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4584c0:
    // 0x4584c0: 0x42000039  di
    ctx->pc = 0x4584c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4584c4: 0x40f  sync.p
    ctx->pc = 0x4584c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4584c8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4584c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4584cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4584ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4584d0: 0x0  nop
    ctx->pc = 0x4584d0u;
    // NOP
    // 0x4584d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4584D4u;
    {
        const bool branch_taken_0x4584d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4584d4) {
            ctx->pc = 0x4584C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4584c0;
        }
    }
    ctx->pc = 0x4584DCu;
    // 0x4584dc: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x4584dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x4584e0: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x4584e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x4584e4: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4584e4u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4584e8: 0x4a0002ff  vnop
    ctx->pc = 0x4584e8u;
    // NOP operation, no action needed for VU0
    // 0x4584ec: 0x4a0002ff  vnop
    ctx->pc = 0x4584ecu;
    // NOP operation, no action needed for VU0
    // 0x4584f0: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x4584f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x4584f4: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x4584f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x4584f8: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x4584f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x4584fc: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4584fcu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458500: 0x4a0002ff  vnop
    ctx->pc = 0x458500u;
    // NOP operation, no action needed for VU0
    // 0x458504: 0x4a0002ff  vnop
    ctx->pc = 0x458504u;
    // NOP operation, no action needed for VU0
    // 0x458508: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x458508u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x45850c: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x45850cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x458510: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x458510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x458514: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x458514u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458518: 0x4a0002ff  vnop
    ctx->pc = 0x458518u;
    // NOP operation, no action needed for VU0
    // 0x45851c: 0x4a0002ff  vnop
    ctx->pc = 0x45851cu;
    // NOP operation, no action needed for VU0
    // 0x458520: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x458520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x458524: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x458524u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x458528: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x458528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x45852c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45852cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458530: 0x4a0002ff  vnop
    ctx->pc = 0x458530u;
    // NOP operation, no action needed for VU0
    // 0x458534: 0x4a0002ff  vnop
    ctx->pc = 0x458534u;
    // NOP operation, no action needed for VU0
    // 0x458538: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x458538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45853c: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x45853cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x458540: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x458540u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x458544: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x458544u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458548: 0x4a0002ff  vnop
    ctx->pc = 0x458548u;
    // NOP operation, no action needed for VU0
    // 0x45854c: 0x4a0002ff  vnop
    ctx->pc = 0x45854cu;
    // NOP operation, no action needed for VU0
    // 0x458550: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x458550u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x458554: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x458554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x458558: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x458558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x45855c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45855cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458560: 0x4a0002ff  vnop
    ctx->pc = 0x458560u;
    // NOP operation, no action needed for VU0
    // 0x458564: 0x4a0002ff  vnop
    ctx->pc = 0x458564u;
    // NOP operation, no action needed for VU0
    // 0x458568: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x458568u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x45856c: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x45856cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x458570: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x458570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x458574: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x458574u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458578: 0x4a0002ff  vnop
    ctx->pc = 0x458578u;
    // NOP operation, no action needed for VU0
    // 0x45857c: 0x4a0002ff  vnop
    ctx->pc = 0x45857cu;
    // NOP operation, no action needed for VU0
    // 0x458580: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x458580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x458584: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x458584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x458588: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x458588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x45858c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45858cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x458590: 0x4a0002ff  vnop
    ctx->pc = 0x458590u;
    // NOP operation, no action needed for VU0
    // 0x458594: 0x4a0002ff  vnop
    ctx->pc = 0x458594u;
    // NOP operation, no action needed for VU0
    // 0x458598: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x458598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x45859c: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x45859cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x4585a0: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x4585a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x4585a4: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4585a4u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4585a8: 0x4a0002ff  vnop
    ctx->pc = 0x4585a8u;
    // NOP operation, no action needed for VU0
    // 0x4585ac: 0x4a0002ff  vnop
    ctx->pc = 0x4585acu;
    // NOP operation, no action needed for VU0
    // 0x4585b0: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x4585b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x4585b4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x4585b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x4585b8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4585b8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4585bc: 0x4a0002ff  vnop
    ctx->pc = 0x4585bcu;
    // NOP operation, no action needed for VU0
    // 0x4585c0: 0x4a0002ff  vnop
    ctx->pc = 0x4585c0u;
    // NOP operation, no action needed for VU0
    // 0x4585c4: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x4585c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x4585c8: 0x42000038  ei
    ctx->pc = 0x4585c8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_4585cc:
    // 0x4585cc: 0x42000039  di
    ctx->pc = 0x4585ccu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4585d0: 0x40f  sync.p
    ctx->pc = 0x4585d0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4585d4: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x4585d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x4585d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4585d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4585dc: 0x0  nop
    ctx->pc = 0x4585dcu;
    // NOP
    // 0x4585e0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4585E0u;
    {
        const bool branch_taken_0x4585e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4585e0) {
            ctx->pc = 0x4585CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4585cc;
        }
    }
    ctx->pc = 0x4585E8u;
    // 0x4585e8: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x4585e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4585ec: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x4585ecu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4585f0: 0x42000038  ei
    ctx->pc = 0x4585f0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4585f4: 0x15000144  bnez        $t0, . + 4 + (0x144 << 2)
    ctx->pc = 0x4585F4u;
    {
        const bool branch_taken_0x4585f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4585F4u;
        // 0x4585f8: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4585f4) {
            ctx->pc = 0x458B08u;
            goto label_458b08;
        }
    }
    ctx->pc = 0x4585FCu;
    // 0x4585fc: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x4585fcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
    // 0x458600: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x458600u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x458604: 0xafae0040  sw          $t6, 0x40($sp)
    ctx->pc = 0x458604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 14));
    // 0x458608: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x458608u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x45860c: 0xafae0044  sw          $t6, 0x44($sp)
    ctx->pc = 0x45860cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 14));
    // 0x458610: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x458610u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x458614: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x458614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458618: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x458618u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x45861c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x45861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x458620: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x458620u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x458624: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x458624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x458628: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x458628u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x45862c: 0x3442d020  ori         $v0, $v0, 0xD020
    ctx->pc = 0x45862cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53280);
    // 0x458630: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x458630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x458634: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x458634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x458638: 0x3631d000  ori         $s1, $s1, 0xD000
    ctx->pc = 0x458638u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)53248);
    // 0x45863c: 0x354ae020  ori         $t2, $t2, 0xE020
    ctx->pc = 0x45863cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57376);
    // 0x458640: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x458640u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x458644: 0x3529d400  ori         $t1, $t1, 0xD400
    ctx->pc = 0x458644u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)54272);
    // 0x458648: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x458648u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45864c: 0x35ade010  ori         $t5, $t5, 0xE010
    ctx->pc = 0x45864cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)57360);
    // 0x458650: 0x3610d480  ori         $s0, $s0, 0xD480
    ctx->pc = 0x458650u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)54400);
    // 0x458654: 0x35efd410  ori         $t7, $t7, 0xD410
    ctx->pc = 0x458654u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)54288);
    // 0x458658: 0x35ced420  ori         $t6, $t6, 0xD420
    ctx->pc = 0x458658u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)54304);
    // 0x45865c: 0x0  nop
    ctx->pc = 0x45865cu;
    // NOP
label_458660:
    // 0x458660: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x458660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x458664: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458668: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x458668u;
    {
        const bool branch_taken_0x458668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458668) {
            ctx->pc = 0x458698u;
            goto label_458698;
        }
    }
    ctx->pc = 0x458670u;
    // 0x458670: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x458670u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x458674: 0xf  sync
    ctx->pc = 0x458674u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458678: 0x40f  sync.p
    ctx->pc = 0x458678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45867c:
    // 0x45867c: 0x0  nop
    ctx->pc = 0x45867cu;
    // NOP
    // 0x458680: 0x0  nop
    ctx->pc = 0x458680u;
    // NOP
    // 0x458684: 0x0  nop
    ctx->pc = 0x458684u;
    // NOP
    // 0x458688: 0x0  nop
    ctx->pc = 0x458688u;
    // NOP
    // 0x45868c: 0x0  nop
    ctx->pc = 0x45868cu;
    // NOP
    // 0x458690: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458690u;
    {
        const bool branch_taken_0x458690 = (false);
        if (branch_taken_0x458690) {
            ctx->pc = 0x45867Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45867c;
        }
    }
    ctx->pc = 0x458698u;
label_458698:
    // 0x458698: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x458698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x45869c: 0x2652ff50  addiu       $s2, $s2, -0xB0
    ctx->pc = 0x45869cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967120));
    // 0x4586a0: 0xafb20048  sw          $s2, 0x48($sp)
    ctx->pc = 0x4586a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 18));
    // 0x4586a4: 0x26de2c00  addiu       $fp, $s6, 0x2C00
    ctx->pc = 0x4586a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 11264));
    // 0x4586a8: 0x26b20b00  addiu       $s2, $s5, 0xB00
    ctx->pc = 0x4586a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 2816));
    // 0x4586ac: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4586acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4586b0: 0x269702c0  addiu       $s7, $s4, 0x2C0
    ctx->pc = 0x4586b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
    // 0x4586b4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4586B4u;
    {
        const bool branch_taken_0x4586b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4586B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4586B4u;
        // 0x4586b8: 0x26790580  addiu       $t9, $s3, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4586b4) {
            ctx->pc = 0x45870Cu;
            goto label_45870c;
        }
    }
    ctx->pc = 0x4586BCu;
    // 0x4586bc: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x4586bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x4586c0: 0xf  sync
    ctx->pc = 0x4586c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4586c4: 0x40f  sync.p
    ctx->pc = 0x4586c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4586c8:
    // 0x4586c8: 0x0  nop
    ctx->pc = 0x4586c8u;
    // NOP
    // 0x4586cc: 0x0  nop
    ctx->pc = 0x4586ccu;
    // NOP
    // 0x4586d0: 0x0  nop
    ctx->pc = 0x4586d0u;
    // NOP
    // 0x4586d4: 0x0  nop
    ctx->pc = 0x4586d4u;
    // NOP
    // 0x4586d8: 0x0  nop
    ctx->pc = 0x4586d8u;
    // NOP
    // 0x4586dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4586DCu;
    {
        const bool branch_taken_0x4586dc = (false);
        if (branch_taken_0x4586dc) {
            ctx->pc = 0x4586C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4586c8;
        }
    }
    ctx->pc = 0x4586E4u;
    // 0x4586e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4586e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4586e8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4586e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x4586ec: 0x0  nop
    ctx->pc = 0x4586ecu;
    // NOP
label_4586f0:
    // 0x4586f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4586f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4586f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4586f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4586f8: 0x0  nop
    ctx->pc = 0x4586f8u;
    // NOP
    // 0x4586fc: 0x0  nop
    ctx->pc = 0x4586fcu;
    // NOP
    // 0x458700: 0x0  nop
    ctx->pc = 0x458700u;
    // NOP
    // 0x458704: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458704u;
    {
        const bool branch_taken_0x458704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458704) {
            ctx->pc = 0x4586F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4586f0;
        }
    }
    ctx->pc = 0x45870Cu;
label_45870c:
    // 0x45870c: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45870cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x458710: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x458710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x458714: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x458714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x458718: 0xadf40000  sw          $s4, 0x0($t7)
    ctx->pc = 0x458718u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 20));
    // 0x45871c: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x45871cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x458720: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x458720u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x458724: 0xf  sync
    ctx->pc = 0x458724u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458728: 0x40f  sync.p
    ctx->pc = 0x458728u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45872c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x45872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x458730: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458734: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x458734u;
    {
        const bool branch_taken_0x458734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458734) {
            ctx->pc = 0x45878Cu;
            goto label_45878c;
        }
    }
    ctx->pc = 0x45873Cu;
    // 0x45873c: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x45873cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x458740: 0xf  sync
    ctx->pc = 0x458740u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458744: 0x40f  sync.p
    ctx->pc = 0x458744u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458748:
    // 0x458748: 0x0  nop
    ctx->pc = 0x458748u;
    // NOP
    // 0x45874c: 0x0  nop
    ctx->pc = 0x45874cu;
    // NOP
    // 0x458750: 0x0  nop
    ctx->pc = 0x458750u;
    // NOP
    // 0x458754: 0x0  nop
    ctx->pc = 0x458754u;
    // NOP
    // 0x458758: 0x0  nop
    ctx->pc = 0x458758u;
    // NOP
    // 0x45875c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x45875Cu;
    {
        const bool branch_taken_0x45875c = (false);
        if (branch_taken_0x45875c) {
            ctx->pc = 0x458748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458748;
        }
    }
    ctx->pc = 0x458764u;
    // 0x458764: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458768: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x45876c: 0x0  nop
    ctx->pc = 0x45876cu;
    // NOP
label_458770:
    // 0x458770: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458770u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458774: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458778: 0x0  nop
    ctx->pc = 0x458778u;
    // NOP
    // 0x45877c: 0x0  nop
    ctx->pc = 0x45877cu;
    // NOP
    // 0x458780: 0x0  nop
    ctx->pc = 0x458780u;
    // NOP
    // 0x458784: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458784u;
    {
        const bool branch_taken_0x458784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458784) {
            ctx->pc = 0x458770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458770;
        }
    }
    ctx->pc = 0x45878Cu;
label_45878c:
    // 0x45878c: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45878cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x458790: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x458790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x458794: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x458794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x458798: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x458798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x45879c: 0xadf30000  sw          $s3, 0x0($t7)
    ctx->pc = 0x45879cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 19));
    // 0x4587a0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4587a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4587a4: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x4587a4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x4587a8: 0xf  sync
    ctx->pc = 0x4587a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4587ac: 0x40f  sync.p
    ctx->pc = 0x4587acu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4587b0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4587b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4587b4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4587b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4587b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4587B8u;
    {
        const bool branch_taken_0x4587b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4587b8) {
            ctx->pc = 0x45880Cu;
            goto label_45880c;
        }
    }
    ctx->pc = 0x4587C0u;
    // 0x4587c0: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x4587c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x4587c4: 0xf  sync
    ctx->pc = 0x4587c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4587c8: 0x40f  sync.p
    ctx->pc = 0x4587c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4587cc:
    // 0x4587cc: 0x0  nop
    ctx->pc = 0x4587ccu;
    // NOP
    // 0x4587d0: 0x0  nop
    ctx->pc = 0x4587d0u;
    // NOP
    // 0x4587d4: 0x0  nop
    ctx->pc = 0x4587d4u;
    // NOP
    // 0x4587d8: 0x0  nop
    ctx->pc = 0x4587d8u;
    // NOP
    // 0x4587dc: 0x0  nop
    ctx->pc = 0x4587dcu;
    // NOP
    // 0x4587e0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4587E0u;
    {
        const bool branch_taken_0x4587e0 = (false);
        if (branch_taken_0x4587e0) {
            ctx->pc = 0x4587CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4587cc;
        }
    }
    ctx->pc = 0x4587E8u;
    // 0x4587e8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4587e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x4587ec: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x4587ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_4587f0:
    // 0x4587f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4587f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4587f4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4587f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4587f8: 0x0  nop
    ctx->pc = 0x4587f8u;
    // NOP
    // 0x4587fc: 0x0  nop
    ctx->pc = 0x4587fcu;
    // NOP
    // 0x458800: 0x0  nop
    ctx->pc = 0x458800u;
    // NOP
    // 0x458804: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458804u;
    {
        const bool branch_taken_0x458804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458804) {
            ctx->pc = 0x4587F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4587f0;
        }
    }
    ctx->pc = 0x45880Cu;
label_45880c:
    // 0x45880c: 0xadab0000  sw          $t3, 0x0($t5)
    ctx->pc = 0x45880cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 11));
    // 0x458810: 0x24020840  addiu       $v0, $zero, 0x840
    ctx->pc = 0x458810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x458814: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x458814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x458818: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x458818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x45881c: 0xadf50000  sw          $s5, 0x0($t7)
    ctx->pc = 0x45881cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 21));
    // 0x458820: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x458820u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x458824: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x458824u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x458828: 0xf  sync
    ctx->pc = 0x458828u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45882c: 0x40f  sync.p
    ctx->pc = 0x45882cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458830: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x458830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x458834: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458838: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x458838u;
    {
        const bool branch_taken_0x458838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458838u;
        // 0x45883c: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458838) {
            ctx->pc = 0x45888Cu;
            goto label_45888c;
        }
    }
    ctx->pc = 0x458840u;
    // 0x458840: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x458840u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x458844: 0xf  sync
    ctx->pc = 0x458844u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458848: 0x40f  sync.p
    ctx->pc = 0x458848u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45884c:
    // 0x45884c: 0x0  nop
    ctx->pc = 0x45884cu;
    // NOP
    // 0x458850: 0x0  nop
    ctx->pc = 0x458850u;
    // NOP
    // 0x458854: 0x0  nop
    ctx->pc = 0x458854u;
    // NOP
    // 0x458858: 0x0  nop
    ctx->pc = 0x458858u;
    // NOP
    // 0x45885c: 0x0  nop
    ctx->pc = 0x45885cu;
    // NOP
    // 0x458860: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458860u;
    {
        const bool branch_taken_0x458860 = (false);
        if (branch_taken_0x458860) {
            ctx->pc = 0x45884Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45884c;
        }
    }
    ctx->pc = 0x458868u;
    // 0x458868: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45886c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45886cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_458870:
    // 0x458870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458870u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458874: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458878: 0x0  nop
    ctx->pc = 0x458878u;
    // NOP
    // 0x45887c: 0x0  nop
    ctx->pc = 0x45887cu;
    // NOP
    // 0x458880: 0x0  nop
    ctx->pc = 0x458880u;
    // NOP
    // 0x458884: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458884u;
    {
        const bool branch_taken_0x458884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x458888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458884u;
        // 0x458888: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458884) {
            ctx->pc = 0x458870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458870;
        }
    }
    ctx->pc = 0x45888Cu;
label_45888c:
    // 0x45888c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x45888cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x458890: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x458890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x458894: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x458894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x458898: 0x350802c0  ori         $t0, $t0, 0x2C0
    ctx->pc = 0x458898u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)704);
    // 0x45889c: 0x34c60840  ori         $a2, $a2, 0x840
    ctx->pc = 0x45889cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2112);
    // 0x4588a0: 0x34841340  ori         $a0, $a0, 0x1340
    ctx->pc = 0x4588a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4928);
    // 0x4588a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4588a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4588a8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4588a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4588ac: 0x0  nop
    ctx->pc = 0x4588acu;
    // NOP
label_4588b0:
    // 0x4588b0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4588b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4588b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4588b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4588b8: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x4588b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x4588bc: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4588bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4588c0: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4588c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4588c4: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x4588c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x4588c8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4588c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4588cc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4588ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4588d0: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x4588d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x4588d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x4588d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4588d8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x4588d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x4588dc: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x4588dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_4588e0:
    // 0x4588e0: 0x42000039  di
    ctx->pc = 0x4588e0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4588e4: 0x40f  sync.p
    ctx->pc = 0x4588e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4588e8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x4588e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x4588ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4588ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4588f0: 0x0  nop
    ctx->pc = 0x4588f0u;
    // NOP
    // 0x4588f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4588F4u;
    {
        const bool branch_taken_0x4588f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4588f4) {
            ctx->pc = 0x4588E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4588e0;
        }
    }
    ctx->pc = 0x4588FCu;
    // 0x4588fc: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x4588fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x458900: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x458900u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458904: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x458904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458908: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x458908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45890c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45890cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x458910: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x458910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x458914: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x458914u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458918: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x458918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45891c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45891cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x458920: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x458920u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x458924: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x458924u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458928: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x458928u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45892c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45892cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458930: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x458930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x458934: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x458934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x458938: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x458938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45893c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45893cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x458940: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x458940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x458944: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x458944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458948: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x458948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45894c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45894cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458950: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x458950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458954: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x458954u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458958: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x458958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45895c: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x45895cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458960: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x458960u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x458964: 0xd8db0010  lqc2        $vf27, 0x10($a2)
    ctx->pc = 0x458964u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x458968: 0xd90e0000  lqc2        $vf14, 0x0($t0)
    ctx->pc = 0x458968u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x45896c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x45896cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458970: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x458970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x458974: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x458974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458978: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x458978u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x45897c: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x45897cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458980: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x458980u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x458984: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x458984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458988: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x458988u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45898c: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x45898cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x458990: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x458990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x458994: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x458994u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x458998: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x458998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x45899c: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x45899cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4589a0: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x4589a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4589a4: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x4589a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4589a8: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x4589a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4589ac: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x4589acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4589b0: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x4589b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4589b4: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x4589b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4589b8: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x4589b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4589bc: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x4589bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x4589c0: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x4589c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x4589c4: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x4589c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x4589c8: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x4589c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x4589cc: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x4589ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x4589d0: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x4589d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x4589d4: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x4589d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x4589d8: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x4589d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x4589dc: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x4589dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x4589e0: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x4589e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x4589e4: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x4589e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x4589e8: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x4589e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x4589ec: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x4589ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x4589f0: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x4589f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x4589f4: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x4589f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x4589f8: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x4589f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x4589fc: 0x42000038  ei
    ctx->pc = 0x4589fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x458a00: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x458a00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x458a04: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x458a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x458a08: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x458a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x458a0c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x458a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x458a10: 0x28e200b0  slti        $v0, $a3, 0xB0
    ctx->pc = 0x458a10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x458a14: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x458A14u;
    {
        const bool branch_taken_0x458a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x458A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458A14u;
        // 0x458a18: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458a14) {
            ctx->pc = 0x4588B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4588b0;
        }
    }
    ctx->pc = 0x458A1Cu;
    // 0x458a1c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x458a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x458a20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458a24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x458A24u;
    {
        const bool branch_taken_0x458a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a24) {
            ctx->pc = 0x458A58u;
            goto label_458a58;
        }
    }
    ctx->pc = 0x458A2Cu;
    // 0x458a2c: 0xad4c0000  sw          $t4, 0x0($t2)
    ctx->pc = 0x458a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 12));
    // 0x458a30: 0xf  sync
    ctx->pc = 0x458a30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458a34: 0x40f  sync.p
    ctx->pc = 0x458a34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458a38:
    // 0x458a38: 0x0  nop
    ctx->pc = 0x458a38u;
    // NOP
    // 0x458a3c: 0x0  nop
    ctx->pc = 0x458a3cu;
    // NOP
    // 0x458a40: 0x0  nop
    ctx->pc = 0x458a40u;
    // NOP
    // 0x458a44: 0x0  nop
    ctx->pc = 0x458a44u;
    // NOP
    // 0x458a48: 0x0  nop
    ctx->pc = 0x458a48u;
    // NOP
    // 0x458a4c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458A4Cu;
    {
        const bool branch_taken_0x458a4c = (false);
        if (branch_taken_0x458a4c) {
            ctx->pc = 0x458A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458a38;
        }
    }
    ctx->pc = 0x458A54u;
    // 0x458a54: 0x0  nop
    ctx->pc = 0x458a54u;
    // NOP
label_458a58:
    // 0x458a58: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x458a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x458a5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458a60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x458A60u;
    {
        const bool branch_taken_0x458a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a60) {
            ctx->pc = 0x458AB4u;
            goto label_458ab4;
        }
    }
    ctx->pc = 0x458A68u;
    // 0x458a68: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x458a68u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x458a6c: 0xf  sync
    ctx->pc = 0x458a6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458a70: 0x40f  sync.p
    ctx->pc = 0x458a70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458a74:
    // 0x458a74: 0x0  nop
    ctx->pc = 0x458a74u;
    // NOP
    // 0x458a78: 0x0  nop
    ctx->pc = 0x458a78u;
    // NOP
    // 0x458a7c: 0x0  nop
    ctx->pc = 0x458a7cu;
    // NOP
    // 0x458a80: 0x0  nop
    ctx->pc = 0x458a80u;
    // NOP
    // 0x458a84: 0x0  nop
    ctx->pc = 0x458a84u;
    // NOP
    // 0x458a88: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458A88u;
    {
        const bool branch_taken_0x458a88 = (false);
        if (branch_taken_0x458a88) {
            ctx->pc = 0x458A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458a74;
        }
    }
    ctx->pc = 0x458A90u;
    // 0x458a90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458a94: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_458a98:
    // 0x458a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458a98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458a9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458aa0: 0x0  nop
    ctx->pc = 0x458aa0u;
    // NOP
    // 0x458aa4: 0x0  nop
    ctx->pc = 0x458aa4u;
    // NOP
    // 0x458aa8: 0x0  nop
    ctx->pc = 0x458aa8u;
    // NOP
    // 0x458aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458AACu;
    {
        const bool branch_taken_0x458aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458aac) {
            ctx->pc = 0x458A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458a98;
        }
    }
    ctx->pc = 0x458AB4u;
label_458ab4:
    // 0x458ab4: 0xadac0000  sw          $t4, 0x0($t5)
    ctx->pc = 0x458ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 12));
    // 0x458ab8: 0x24021340  addiu       $v0, $zero, 0x1340
    ctx->pc = 0x458ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x458abc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458ac0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x458ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x458ac4: 0x3463d010  ori         $v1, $v1, 0xD010
    ctx->pc = 0x458ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53264);
    // 0x458ac8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x458ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x458acc: 0xac760000  sw          $s6, 0x0($v1)
    ctx->pc = 0x458accu;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 22)); // MMIO: 0x10000000
    // 0x458ad0: 0x240302c0  addiu       $v1, $zero, 0x2C0
    ctx->pc = 0x458ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x458ad4: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x458ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x458ad8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x458adc: 0xae2c0000  sw          $t4, 0x0($s1)
    ctx->pc = 0x458adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 12));
    // 0x458ae0: 0xf  sync
    ctx->pc = 0x458ae0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458ae4: 0x40f  sync.p
    ctx->pc = 0x458ae4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458ae8: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x458ae8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458aec: 0x8fb20048  lw          $s2, 0x48($sp)
    ctx->pc = 0x458aecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x458af0: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x458af0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458af4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x458af4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458af8: 0x2a4200b0  slti        $v0, $s2, 0xB0
    ctx->pc = 0x458af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)176) ? 1 : 0);
    // 0x458afc: 0x1040fed8  beqz        $v0, . + 4 + (-0x128 << 2)
    ctx->pc = 0x458AFCu;
    {
        const bool branch_taken_0x458afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x458B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458AFCu;
        // 0x458b00: 0x320982d  daddu       $s3, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458afc) {
            ctx->pc = 0x458660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458660;
        }
    }
    ctx->pc = 0x458B04u;
    // 0x458b04: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x458b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_458b08:
    // 0x458b08: 0x14400177  bnez        $v0, . + 4 + (0x177 << 2)
    ctx->pc = 0x458B08u;
    {
        const bool branch_taken_0x458b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x458B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458B08u;
        // 0x458b0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458b08) {
            ctx->pc = 0x4590E8u;
            goto label_4590e8;
        }
    }
    ctx->pc = 0x458B10u;
    // 0x458b10: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x458b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x458b14: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x458b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x458b18: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x458b18u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x458b1c: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x458b1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x458b20: 0x44880  sll         $t1, $a0, 2
    ctx->pc = 0x458b20u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x458b24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458b28: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x458b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x458b2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x458b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x458b30: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x458b30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x458b34: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x458B34u;
    {
        const bool branch_taken_0x458b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x458B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458B34u;
        // 0x458b38: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458b34) {
            ctx->pc = 0x458B70u;
            goto label_458b70;
        }
    }
    ctx->pc = 0x458B3Cu;
    // 0x458b3c: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x458b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x458b40: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458b44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458b44u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x458b48: 0xf  sync
    ctx->pc = 0x458b48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458b4c: 0x40f  sync.p
    ctx->pc = 0x458b4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458b50:
    // 0x458b50: 0x0  nop
    ctx->pc = 0x458b50u;
    // NOP
    // 0x458b54: 0x0  nop
    ctx->pc = 0x458b54u;
    // NOP
    // 0x458b58: 0x0  nop
    ctx->pc = 0x458b58u;
    // NOP
    // 0x458b5c: 0x0  nop
    ctx->pc = 0x458b5cu;
    // NOP
    // 0x458b60: 0x0  nop
    ctx->pc = 0x458b60u;
    // NOP
    // 0x458b64: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458B64u;
    {
        const bool branch_taken_0x458b64 = (false);
        if (branch_taken_0x458b64) {
            ctx->pc = 0x458B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458b50;
        }
    }
    ctx->pc = 0x458B6Cu;
    // 0x458b6c: 0x0  nop
    ctx->pc = 0x458b6cu;
    // NOP
label_458b70:
    // 0x458b70: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458b74: 0x47200  sll         $t6, $a0, 8
    ctx->pc = 0x458b74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x458b78: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x458b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x458b7c: 0x2497823  subu        $t7, $s2, $t1
    ctx->pc = 0x458b7cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x458b80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x458b80u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x458b84: 0x252a0003  addiu       $t2, $t1, 0x3
    ctx->pc = 0x458b84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x458b88: 0x967c3  sra         $t4, $t1, 31
    ctx->pc = 0x458b88u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 9), 31));
    // 0x458b8c: 0x45900  sll         $t3, $a0, 4
    ctx->pc = 0x458b8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x458b90: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x458b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x458b94: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x458B94u;
    {
        const bool branch_taken_0x458b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x458B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458B94u;
        // 0x458b98: 0x46980  sll         $t5, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458b94) {
            ctx->pc = 0x458BF4u;
            goto label_458bf4;
        }
    }
    ctx->pc = 0x458B9Cu;
    // 0x458b9c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458ba0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x458ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x458ba4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458ba8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458ba8u;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x458bac: 0xf  sync
    ctx->pc = 0x458bacu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458bb0: 0x40f  sync.p
    ctx->pc = 0x458bb0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458bb4:
    // 0x458bb4: 0x0  nop
    ctx->pc = 0x458bb4u;
    // NOP
    // 0x458bb8: 0x0  nop
    ctx->pc = 0x458bb8u;
    // NOP
    // 0x458bbc: 0x0  nop
    ctx->pc = 0x458bbcu;
    // NOP
    // 0x458bc0: 0x0  nop
    ctx->pc = 0x458bc0u;
    // NOP
    // 0x458bc4: 0x0  nop
    ctx->pc = 0x458bc4u;
    // NOP
    // 0x458bc8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458BC8u;
    {
        const bool branch_taken_0x458bc8 = (false);
        if (branch_taken_0x458bc8) {
            ctx->pc = 0x458BB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458bb4;
        }
    }
    ctx->pc = 0x458BD0u;
    // 0x458bd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458bd4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_458bd8:
    // 0x458bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458bdc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458be0: 0x0  nop
    ctx->pc = 0x458be0u;
    // NOP
    // 0x458be4: 0x0  nop
    ctx->pc = 0x458be4u;
    // NOP
    // 0x458be8: 0x0  nop
    ctx->pc = 0x458be8u;
    // NOP
    // 0x458bec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458BECu;
    {
        const bool branch_taken_0x458bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458bec) {
            ctx->pc = 0x458BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458bd8;
        }
    }
    ctx->pc = 0x458BF4u;
label_458bf4:
    // 0x458bf4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458bf8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x458bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x458bfc: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x458bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x458c00: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x458c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x458c04: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x458c04u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x458c08: 0x89202a  slt         $a0, $a0, $t1
    ctx->pc = 0x458c08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x458c0c: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x458c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x458c10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458c14: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x458c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x458c18: 0x124280b  movn        $a1, $t1, $a0
    ctx->pc = 0x458c18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 9));
    // 0x458c1c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458c20: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x458c20u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x458c24: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x458c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x458c28: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x458c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x458c2c: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x458c2cu;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 20)); // MMIO: 0x10000000
    // 0x458c30: 0x52883  sra         $a1, $a1, 2
    ctx->pc = 0x458c30u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x458c34: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x458c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x458c38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458c3c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x458c3cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x458c40: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x458c44: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x458c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x458c48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x458c48u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x458c4c: 0xf  sync
    ctx->pc = 0x458c4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458c50: 0x40f  sync.p
    ctx->pc = 0x458c50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458c54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x458c58: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458c5c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x458C5Cu;
    {
        const bool branch_taken_0x458c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x458C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458C5Cu;
        // 0x458c60: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458c5c) {
            ctx->pc = 0x458CB4u;
            goto label_458cb4;
        }
    }
    ctx->pc = 0x458C64u;
    // 0x458c64: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458c68: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x458c68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x458c6c: 0xf  sync
    ctx->pc = 0x458c6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458c70: 0x40f  sync.p
    ctx->pc = 0x458c70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458c74:
    // 0x458c74: 0x0  nop
    ctx->pc = 0x458c74u;
    // NOP
    // 0x458c78: 0x0  nop
    ctx->pc = 0x458c78u;
    // NOP
    // 0x458c7c: 0x0  nop
    ctx->pc = 0x458c7cu;
    // NOP
    // 0x458c80: 0x0  nop
    ctx->pc = 0x458c80u;
    // NOP
    // 0x458c84: 0x0  nop
    ctx->pc = 0x458c84u;
    // NOP
    // 0x458c88: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458C88u;
    {
        const bool branch_taken_0x458c88 = (false);
        if (branch_taken_0x458c88) {
            ctx->pc = 0x458C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458c74;
        }
    }
    ctx->pc = 0x458C90u;
    // 0x458c90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458c94: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_458c98:
    // 0x458c98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458c98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458c9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458ca0: 0x0  nop
    ctx->pc = 0x458ca0u;
    // NOP
    // 0x458ca4: 0x0  nop
    ctx->pc = 0x458ca4u;
    // NOP
    // 0x458ca8: 0x0  nop
    ctx->pc = 0x458ca8u;
    // NOP
    // 0x458cac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458CACu;
    {
        const bool branch_taken_0x458cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458cac) {
            ctx->pc = 0x458C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458c98;
        }
    }
    ctx->pc = 0x458CB4u;
label_458cb4:
    // 0x458cb4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458cb8: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x458cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x458cbc: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x458cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x458cc0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x458cc0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x458cc4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458cc8: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x458cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x458ccc: 0x240402c0  addiu       $a0, $zero, 0x2C0
    ctx->pc = 0x458cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 704));
    // 0x458cd0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458cd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x458cd4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x458cd8: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x458cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x458cdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x458cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x458ce0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x458ce0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 19)); // MMIO: 0x10000000
    // 0x458ce4: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x458ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x458ce8: 0x91043  sra         $v0, $t1, 1
    ctx->pc = 0x458ce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 1));
    // 0x458cec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458cf0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x458cf0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x458cf4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x458cf8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x458cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x458cfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x458cfcu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x458d00: 0xf  sync
    ctx->pc = 0x458d00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458d04: 0x40f  sync.p
    ctx->pc = 0x458d04u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458d08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x458d0c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458d10: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x458D10u;
    {
        const bool branch_taken_0x458d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x458D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458D10u;
        // 0x458d14: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458d10) {
            ctx->pc = 0x458D6Cu;
            goto label_458d6c;
        }
    }
    ctx->pc = 0x458D18u;
    // 0x458d18: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458d1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x458d1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x458d20: 0xf  sync
    ctx->pc = 0x458d20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458d24: 0x40f  sync.p
    ctx->pc = 0x458d24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458d28:
    // 0x458d28: 0x0  nop
    ctx->pc = 0x458d28u;
    // NOP
    // 0x458d2c: 0x0  nop
    ctx->pc = 0x458d2cu;
    // NOP
    // 0x458d30: 0x0  nop
    ctx->pc = 0x458d30u;
    // NOP
    // 0x458d34: 0x0  nop
    ctx->pc = 0x458d34u;
    // NOP
    // 0x458d38: 0x0  nop
    ctx->pc = 0x458d38u;
    // NOP
    // 0x458d3c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458D3Cu;
    {
        const bool branch_taken_0x458d3c = (false);
        if (branch_taken_0x458d3c) {
            ctx->pc = 0x458D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458d28;
        }
    }
    ctx->pc = 0x458D44u;
    // 0x458d44: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458d48: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x458d4c: 0x0  nop
    ctx->pc = 0x458d4cu;
    // NOP
label_458d50:
    // 0x458d50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458d50u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458d54: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458d58: 0x0  nop
    ctx->pc = 0x458d58u;
    // NOP
    // 0x458d5c: 0x0  nop
    ctx->pc = 0x458d5cu;
    // NOP
    // 0x458d60: 0x0  nop
    ctx->pc = 0x458d60u;
    // NOP
    // 0x458d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458D64u;
    {
        const bool branch_taken_0x458d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458d64) {
            ctx->pc = 0x458D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458d50;
        }
    }
    ctx->pc = 0x458D6Cu;
label_458d6c:
    // 0x458d6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458d70: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x458d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x458d74: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x458d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x458d78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458d7c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x458d7cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x458d80: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x458d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x458d84: 0x24040840  addiu       $a0, $zero, 0x840
    ctx->pc = 0x458d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2112));
    // 0x458d88: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458d8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x458d8cu;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x458d90: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x458d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x458d94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458d98: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x458d98u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 21)); // MMIO: 0x10000000
    // 0x458d9c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x458d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x458da0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x458da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x458da4: 0xac690000  sw          $t1, 0x0($v1)
    ctx->pc = 0x458da4u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 9)); // MMIO: 0x10000000
    // 0x458da8: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x458da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x458dac: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x458dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x458db0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x458db0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x458db4: 0xf  sync
    ctx->pc = 0x458db4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458db8: 0x40f  sync.p
    ctx->pc = 0x458db8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458dbc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x458dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x458dc0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458dc4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x458DC4u;
    {
        const bool branch_taken_0x458dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x458DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458DC4u;
        // 0x458dc8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458dc4) {
            ctx->pc = 0x458E1Cu;
            goto label_458e1c;
        }
    }
    ctx->pc = 0x458DCCu;
    // 0x458dcc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458dd0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x458dd0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x458dd4: 0xf  sync
    ctx->pc = 0x458dd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458dd8: 0x40f  sync.p
    ctx->pc = 0x458dd8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458ddc:
    // 0x458ddc: 0x0  nop
    ctx->pc = 0x458ddcu;
    // NOP
    // 0x458de0: 0x0  nop
    ctx->pc = 0x458de0u;
    // NOP
    // 0x458de4: 0x0  nop
    ctx->pc = 0x458de4u;
    // NOP
    // 0x458de8: 0x0  nop
    ctx->pc = 0x458de8u;
    // NOP
    // 0x458dec: 0x0  nop
    ctx->pc = 0x458decu;
    // NOP
    // 0x458df0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458DF0u;
    {
        const bool branch_taken_0x458df0 = (false);
        if (branch_taken_0x458df0) {
            ctx->pc = 0x458DDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458ddc;
        }
    }
    ctx->pc = 0x458DF8u;
    // 0x458df8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x458df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x458dfc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x458dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_458e00:
    // 0x458e00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x458e00u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x458e04: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x458e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x458e08: 0x0  nop
    ctx->pc = 0x458e08u;
    // NOP
    // 0x458e0c: 0x0  nop
    ctx->pc = 0x458e0cu;
    // NOP
    // 0x458e10: 0x0  nop
    ctx->pc = 0x458e10u;
    // NOP
    // 0x458e14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458E14u;
    {
        const bool branch_taken_0x458e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458e14) {
            ctx->pc = 0x458E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458e00;
        }
    }
    ctx->pc = 0x458E1Cu;
label_458e1c:
    // 0x458e1c: 0x3c087000  lui         $t0, 0x7000
    ctx->pc = 0x458e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    // 0x458e20: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x458e20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x458e24: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x458e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x458e28: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x458e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x458e2c: 0x350802c0  ori         $t0, $t0, 0x2C0
    ctx->pc = 0x458e2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)704);
    // 0x458e30: 0x34c60840  ori         $a2, $a2, 0x840
    ctx->pc = 0x458e30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2112);
    // 0x458e34: 0x34841340  ori         $a0, $a0, 0x1340
    ctx->pc = 0x458e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4928);
    // 0x458e38: 0x1920005f  blez        $t1, . + 4 + (0x5F << 2)
    ctx->pc = 0x458E38u;
    {
        const bool branch_taken_0x458e38 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x458E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458E38u;
        // 0x458e3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458e38) {
            ctx->pc = 0x458FB8u;
            goto label_458fb8;
        }
    }
    ctx->pc = 0x458E40u;
    // 0x458e40: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x458e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x458e44: 0x0  nop
    ctx->pc = 0x458e44u;
    // NOP
label_458e48:
    // 0x458e48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x458e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x458e4c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x458e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x458e50: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x458e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x458e54: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x458e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x458e58: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x458e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x458e5c: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x458e5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x458e60: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x458e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x458e64: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x458e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x458e68: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x458e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x458e6c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x458e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x458e70: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x458e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x458e74: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x458e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_458e78:
    // 0x458e78: 0x42000039  di
    ctx->pc = 0x458e78u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x458e7c: 0x40f  sync.p
    ctx->pc = 0x458e7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458e80: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x458e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x458e84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x458e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x458e88: 0x0  nop
    ctx->pc = 0x458e88u;
    // NOP
    // 0x458e8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x458E8Cu;
    {
        const bool branch_taken_0x458e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458e8c) {
            ctx->pc = 0x458E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458e78;
        }
    }
    ctx->pc = 0x458E94u;
    // 0x458e94: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x458e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x458e98: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x458e98u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458e9c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x458e9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458ea0: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x458ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458ea4: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x458ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x458ea8: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x458ea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x458eac: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x458eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458eb0: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x458eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x458eb4: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x458eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x458eb8: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x458eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x458ebc: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x458ebcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458ec0: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x458ec0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458ec4: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x458ec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458ec8: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x458ec8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x458ecc: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x458eccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x458ed0: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x458ed0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x458ed4: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x458ed4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x458ed8: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x458ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x458edc: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x458edcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458ee0: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x458ee0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x458ee4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x458ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x458ee8: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x458ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458eec: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x458eecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458ef0: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x458ef0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458ef4: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x458ef4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x458ef8: 0xd8d40000  lqc2        $vf20, 0x0($a2)
    ctx->pc = 0x458ef8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x458efc: 0xd8db0010  lqc2        $vf27, 0x10($a2)
    ctx->pc = 0x458efcu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x458f00: 0xd90e0000  lqc2        $vf14, 0x0($t0)
    ctx->pc = 0x458f00u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x458f04: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x458f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458f08: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x458f08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x458f0c: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x458f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458f10: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x458f10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x458f14: 0x4be741bd  vmulay.xyzw $ACC, $vf8, $vf7y
    ctx->pc = 0x458f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458f18: 0x4be74e4f  vmsubw.xyzw $vf25, $vf9, $vf7w
    ctx->pc = 0x458f18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x458f1c: 0x4be749bd  vmulay.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x458f1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x458f20: 0x4be7468b  vmaddw.xyzw $vf26, $vf8, $vf7w
    ctx->pc = 0x458f20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x458f24: 0x4bee9498  vmulx.xyzw  $vf18, $vf18, $vf14x
    ctx->pc = 0x458f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x458f28: 0x4bee9cd9  vmuly.xyzw  $vf19, $vf19, $vf14y
    ctx->pc = 0x458f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x458f2c: 0x4beece5a  vmulz.xyzw  $vf25, $vf25, $vf14z
    ctx->pc = 0x458f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x458f30: 0x4beed69b  vmulw.xyzw  $vf26, $vf26, $vf14w
    ctx->pc = 0x458f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[26], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x458f34: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x458f34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x458f38: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x458f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x458f3c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x458f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x458f40: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x458f40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x458f44: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x458f44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x458f48: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x458f48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x458f4c: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x458f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x458f50: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x458f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x458f54: 0x4bf9df2c  vsub.xyzw   $vf28, $vf27, $vf25
    ctx->pc = 0x458f54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x458f58: 0x4bf9df68  vadd.xyzw   $vf29, $vf27, $vf25
    ctx->pc = 0x458f58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x458f5c: 0x4bf9dfa8  vadd.xyzw   $vf30, $vf27, $vf25
    ctx->pc = 0x458f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x458f60: 0x4bf9dfec  vsub.xyzw   $vf31, $vf27, $vf25
    ctx->pc = 0x458f60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x458f64: 0x4bfae72c  vsub.xyzw   $vf28, $vf28, $vf26
    ctx->pc = 0x458f64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x458f68: 0x4bfaef6c  vsub.xyzw   $vf29, $vf29, $vf26
    ctx->pc = 0x458f68u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x458f6c: 0x4bfaf7a8  vadd.xyzw   $vf30, $vf30, $vf26
    ctx->pc = 0x458f6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x458f70: 0x4bfaffe8  vadd.xyzw   $vf31, $vf31, $vf26
    ctx->pc = 0x458f70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x458f74: 0xf8950000  sqc2        $vf21, 0x0($a0)
    ctx->pc = 0x458f74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x458f78: 0xf8960010  sqc2        $vf22, 0x10($a0)
    ctx->pc = 0x458f78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x458f7c: 0xf8970020  sqc2        $vf23, 0x20($a0)
    ctx->pc = 0x458f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x458f80: 0xf8980030  sqc2        $vf24, 0x30($a0)
    ctx->pc = 0x458f80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x458f84: 0xf89c0040  sqc2        $vf28, 0x40($a0)
    ctx->pc = 0x458f84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x458f88: 0xf89d0050  sqc2        $vf29, 0x50($a0)
    ctx->pc = 0x458f88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x458f8c: 0xf89e0060  sqc2        $vf30, 0x60($a0)
    ctx->pc = 0x458f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x458f90: 0xf89f0070  sqc2        $vf31, 0x70($a0)
    ctx->pc = 0x458f90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x458f94: 0x42000038  ei
    ctx->pc = 0x458f94u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x458f98: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x458f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x458f9c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x458f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x458fa0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x458fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x458fa4: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x458fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x458fa8: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x458fa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x458fac: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x458FACu;
    {
        const bool branch_taken_0x458fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x458FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458FACu;
        // 0x458fb0: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458fac) {
            ctx->pc = 0x458E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458e48;
        }
    }
    ctx->pc = 0x458FB4u;
    // 0x458fb4: 0x0  nop
    ctx->pc = 0x458fb4u;
    // NOP
label_458fb8:
    // 0x458fb8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x458fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x458fbc: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x458fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x458fc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x458fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x458fc4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x458fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x458fc8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x458FC8u;
    {
        const bool branch_taken_0x458fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x458FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x458FC8u;
        // 0x458fcc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458fc8) {
            ctx->pc = 0x459000u;
            goto label_459000;
        }
    }
    ctx->pc = 0x458FD0u;
    // 0x458fd0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x458fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x458fd4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x458fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x458fd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x458fd8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x458fdc: 0xf  sync
    ctx->pc = 0x458fdcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x458fe0: 0x40f  sync.p
    ctx->pc = 0x458fe0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_458fe4:
    // 0x458fe4: 0x0  nop
    ctx->pc = 0x458fe4u;
    // NOP
    // 0x458fe8: 0x0  nop
    ctx->pc = 0x458fe8u;
    // NOP
    // 0x458fec: 0x0  nop
    ctx->pc = 0x458fecu;
    // NOP
    // 0x458ff0: 0x0  nop
    ctx->pc = 0x458ff0u;
    // NOP
    // 0x458ff4: 0x0  nop
    ctx->pc = 0x458ff4u;
    // NOP
    // 0x458ff8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x458FF8u;
    {
        const bool branch_taken_0x458ff8 = (false);
        if (branch_taken_0x458ff8) {
            ctx->pc = 0x458FE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_458fe4;
        }
    }
    ctx->pc = 0x459000u;
label_459000:
    // 0x459000: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459004: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x459004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x459008: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x459008u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x45900c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x45900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x459010: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x459010u;
    {
        const bool branch_taken_0x459010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x459014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459010u;
        // 0x459014: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459010) {
            ctx->pc = 0x45906Cu;
            goto label_45906c;
        }
    }
    ctx->pc = 0x459018u;
    // 0x459018: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x459018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x45901c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x45901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x459020: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x459020u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x459024: 0xf  sync
    ctx->pc = 0x459024u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459028: 0x40f  sync.p
    ctx->pc = 0x459028u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45902c:
    // 0x45902c: 0x0  nop
    ctx->pc = 0x45902cu;
    // NOP
    // 0x459030: 0x0  nop
    ctx->pc = 0x459030u;
    // NOP
    // 0x459034: 0x0  nop
    ctx->pc = 0x459034u;
    // NOP
    // 0x459038: 0x0  nop
    ctx->pc = 0x459038u;
    // NOP
    // 0x45903c: 0x0  nop
    ctx->pc = 0x45903cu;
    // NOP
    // 0x459040: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x459040u;
    {
        const bool branch_taken_0x459040 = (false);
        if (branch_taken_0x459040) {
            ctx->pc = 0x45902Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45902c;
        }
    }
    ctx->pc = 0x459048u;
    // 0x459048: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45904c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45904cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_459050:
    // 0x459050: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x459050u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x459054: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x459054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x459058: 0x0  nop
    ctx->pc = 0x459058u;
    // NOP
    // 0x45905c: 0x0  nop
    ctx->pc = 0x45905cu;
    // NOP
    // 0x459060: 0x0  nop
    ctx->pc = 0x459060u;
    // NOP
    // 0x459064: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459064u;
    {
        const bool branch_taken_0x459064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459064) {
            ctx->pc = 0x459050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459050;
        }
    }
    ctx->pc = 0x45906Cu;
label_45906c:
    // 0x45906c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45906cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x459070: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x459070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x459074: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x459074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x459078: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x459078u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x45907c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459080: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x459080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x459084: 0x24041340  addiu       $a0, $zero, 0x1340
    ctx->pc = 0x459084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4928));
    // 0x459088: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x459088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x45908c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x45908cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x459090: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x459090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x459094: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x459094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x459098: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x459098u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 22)); // MMIO: 0x10000000
    // 0x45909c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x45909cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x4590a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x4590a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4590a4: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x4590a4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 11)); // MMIO: 0x10000000
    // 0x4590a8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4590a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4590ac: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x4590acu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x4590b0: 0xf  sync
    ctx->pc = 0x4590b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4590b4: 0x40f  sync.p
    ctx->pc = 0x4590b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4590b8: 0x2ada821  addu        $s5, $s5, $t5
    ctx->pc = 0x4590b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x4590bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4590c0: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x4590c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x4590c4: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x4590c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x4590c8: 0x2ceb021  addu        $s6, $s6, $t6
    ctx->pc = 0x4590c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 14)));
    // 0x4590cc: 0x122500b  movn        $t2, $t1, $v0
    ctx->pc = 0x4590ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 9));
    // 0x4590d0: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x4590d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x4590d4: 0xa1083  sra         $v0, $t2, 2
    ctx->pc = 0x4590d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 10), 2));
    // 0x4590d8: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x4590d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4590dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4590dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4590e0: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x4590e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x4590e4: 0x0  nop
    ctx->pc = 0x4590e4u;
    // NOP
label_4590e8:
    // 0x4590e8: 0x5a400101  blezl       $s2, . + 4 + (0x101 << 2)
    ctx->pc = 0x4590E8u;
    {
        const bool branch_taken_0x4590e8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x4590e8) {
            ctx->pc = 0x4590ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4590E8u;
            // 0x4590ec: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4594F0u;
            goto label_4594f0;
        }
    }
    ctx->pc = 0x4590F0u;
    // 0x4590f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x4590f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4590f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4590f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4590f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4590f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4590fc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x4590fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_459100:
    // 0x459100: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x459100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459104: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459108: 0xe4203f60  swc1        $f0, 0x3F60($at)
    ctx->pc = 0x459108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F60u, bits); }
    // 0x45910c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x45910cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459110: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459114: 0xe4213f64  swc1        $f1, 0x3F64($at)
    ctx->pc = 0x459114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F64u, bits); }
    // 0x459118: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x459118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45911c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x45911cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x459120: 0xe4203f68  swc1        $f0, 0x3F68($at)
    ctx->pc = 0x459120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F68u, bits); }
    // 0x459124: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x459124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459128: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x459128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x45912c: 0xe4213f6c  swc1        $f1, 0x3F6C($at)
    ctx->pc = 0x45912cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F6Cu, bits); }
label_459130:
    // 0x459130: 0x42000039  di
    ctx->pc = 0x459130u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459134: 0x40f  sync.p
    ctx->pc = 0x459134u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459138: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x459138u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x45913c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x45913cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x459140: 0x0  nop
    ctx->pc = 0x459140u;
    // NOP
    // 0x459144: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459144u;
    {
        const bool branch_taken_0x459144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459144) {
            ctx->pc = 0x459130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459130;
        }
    }
    ctx->pc = 0x45914Cu;
    // 0x45914c: 0xdb010000  lqc2        $vf1, 0x0($t8)
    ctx->pc = 0x45914cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x459150: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x459150u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459154: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x459154u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459158: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x459158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45915c: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x45915cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x459160: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x459160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x459164: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x459164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459168: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x459168u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x45916c: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x45916cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x459170: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x459170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459174: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x459174u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459178: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x459178u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45917c: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x45917cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459180: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x459180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x459184: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x459184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459188: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x459188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x45918c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x45918cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459190: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x459190u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x459194: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x459194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459198: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x459198u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x45919c: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x45919cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4591a0: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x4591a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4591a4: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x4591a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4591a8: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x4591a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4591ac: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x4591acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4591b0: 0xdab40000  lqc2        $vf20, 0x0($s5)
    ctx->pc = 0x4591b0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4591b4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x4591b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4591b8: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x4591b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x4591bc: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x4591bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x4591c0: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x4591c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x4591c4: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x4591c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x4591c8: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x4591c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x4591cc: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x4591ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4591d0: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x4591d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4591d4: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x4591d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4591d8: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x4591d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4591dc: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x4591dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4591e0: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x4591e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4591e4: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x4591e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4591e8: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x4591e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4591ec: 0xfad50000  sqc2        $vf21, 0x0($s6)
    ctx->pc = 0x4591ecu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x4591f0: 0xfad60010  sqc2        $vf22, 0x10($s6)
    ctx->pc = 0x4591f0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x4591f4: 0xfad70020  sqc2        $vf23, 0x20($s6)
    ctx->pc = 0x4591f4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x4591f8: 0xfad80030  sqc2        $vf24, 0x30($s6)
    ctx->pc = 0x4591f8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x4591fc: 0x42000038  ei
    ctx->pc = 0x4591fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x459200: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x459200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459204: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x459204u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x459208: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x459208u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x45920c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x45920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x459210: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x459210u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x459214: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x459214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x459218: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x459218u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x45921c: 0x14e0ffb8  bnez        $a3, . + 4 + (-0x48 << 2)
    ctx->pc = 0x45921Cu;
    {
        const bool branch_taken_0x45921c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x459220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45921Cu;
        // 0x459220: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45921c) {
            ctx->pc = 0x459100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459100;
        }
    }
    ctx->pc = 0x459224u;
    // 0x459224: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x459224u;
    {
        const bool branch_taken_0x459224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x459228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459224u;
        // 0x459228: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459224) {
            ctx->pc = 0x4594F0u;
            goto label_4594f0;
        }
    }
    ctx->pc = 0x45922Cu;
    // 0x45922c: 0x0  nop
    ctx->pc = 0x45922cu;
    // NOP
label_459230:
    // 0x459230: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x459230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x459234: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x459234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x459238: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x459238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45923c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x459240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x459240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x459244: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x459244u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x459248: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x459248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45924c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x45924cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x459250: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x459250u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x459254: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x459254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x459258: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x459258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45925c: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x45925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x459260: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x459260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x459264: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x459264u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x459268: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x459268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45926c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x45926cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x459270: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x459270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x459274: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x459274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x459278: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x459278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45927c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x45927cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x459280: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x459280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_459284:
    // 0x459284: 0x42000039  di
    ctx->pc = 0x459284u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459288: 0x40f  sync.p
    ctx->pc = 0x459288u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45928c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x45928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x459290: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x459290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x459294: 0x0  nop
    ctx->pc = 0x459294u;
    // NOP
    // 0x459298: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x459298u;
    {
        const bool branch_taken_0x459298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459298) {
            ctx->pc = 0x459284u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459284;
        }
    }
    ctx->pc = 0x4592A0u;
    // 0x4592a0: 0x3c053fc9  lui         $a1, 0x3FC9
    ctx->pc = 0x4592a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16329 << 16));
    // 0x4592a4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x4592a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x4592a8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4592a8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4592ac: 0x4a0002ff  vnop
    ctx->pc = 0x4592acu;
    // NOP operation, no action needed for VU0
    // 0x4592b0: 0x4a0002ff  vnop
    ctx->pc = 0x4592b0u;
    // NOP operation, no action needed for VU0
    // 0x4592b4: 0x4b0002a2  vaddi.x     $vf10, $vf0, $I
    ctx->pc = 0x4592b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x4592b8: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x4592b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x4592bc: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x4592bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x4592c0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4592c0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4592c4: 0x4a0002ff  vnop
    ctx->pc = 0x4592c4u;
    // NOP operation, no action needed for VU0
    // 0x4592c8: 0x4a0002ff  vnop
    ctx->pc = 0x4592c8u;
    // NOP operation, no action needed for VU0
    // 0x4592cc: 0x4a8002a2  vaddi.y     $vf10, $vf0, $I
    ctx->pc = 0x4592ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x4592d0: 0x3c054009  lui         $a1, 0x4009
    ctx->pc = 0x4592d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16393 << 16));
    // 0x4592d4: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x4592d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x4592d8: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4592d8u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4592dc: 0x4a0002ff  vnop
    ctx->pc = 0x4592dcu;
    // NOP operation, no action needed for VU0
    // 0x4592e0: 0x4a0002ff  vnop
    ctx->pc = 0x4592e0u;
    // NOP operation, no action needed for VU0
    // 0x4592e4: 0x4a4002a2  vaddi.z     $vf10, $vf0, $I
    ctx->pc = 0x4592e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x4592e8: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x4592e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x4592ec: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x4592ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x4592f0: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x4592f0u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x4592f4: 0x4a0002ff  vnop
    ctx->pc = 0x4592f4u;
    // NOP operation, no action needed for VU0
    // 0x4592f8: 0x4a0002ff  vnop
    ctx->pc = 0x4592f8u;
    // NOP operation, no action needed for VU0
    // 0x4592fc: 0x4b0002e2  vaddi.x     $vf11, $vf0, $I
    ctx->pc = 0x4592fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x459300: 0x3c05c084  lui         $a1, 0xC084
    ctx->pc = 0x459300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49284 << 16));
    // 0x459304: 0x34a587ed  ori         $a1, $a1, 0x87ED
    ctx->pc = 0x459304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34797);
    // 0x459308: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x459308u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45930c: 0x4a0002ff  vnop
    ctx->pc = 0x45930cu;
    // NOP operation, no action needed for VU0
    // 0x459310: 0x4a0002ff  vnop
    ctx->pc = 0x459310u;
    // NOP operation, no action needed for VU0
    // 0x459314: 0x4a8002e2  vaddi.y     $vf11, $vf0, $I
    ctx->pc = 0x459314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x459318: 0x3c05b94f  lui         $a1, 0xB94F
    ctx->pc = 0x459318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47439 << 16));
    // 0x45931c: 0x34a5b21f  ori         $a1, $a1, 0xB21F
    ctx->pc = 0x45931cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45599);
    // 0x459320: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x459320u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459324: 0x4a0002ff  vnop
    ctx->pc = 0x459324u;
    // NOP operation, no action needed for VU0
    // 0x459328: 0x4a0002ff  vnop
    ctx->pc = 0x459328u;
    // NOP operation, no action needed for VU0
    // 0x45932c: 0x4a4002e2  vaddi.z     $vf11, $vf0, $I
    ctx->pc = 0x45932cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x459330: 0x3c05be2a  lui         $a1, 0xBE2A
    ctx->pc = 0x459330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48682 << 16));
    // 0x459334: 0x34a5aaa4  ori         $a1, $a1, 0xAAA4
    ctx->pc = 0x459334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43684);
    // 0x459338: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x459338u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45933c: 0x4a0002ff  vnop
    ctx->pc = 0x45933cu;
    // NOP operation, no action needed for VU0
    // 0x459340: 0x4a0002ff  vnop
    ctx->pc = 0x459340u;
    // NOP operation, no action needed for VU0
    // 0x459344: 0x4b000322  vaddi.x     $vf12, $vf0, $I
    ctx->pc = 0x459344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x459348: 0x3c053c08  lui         $a1, 0x3C08
    ctx->pc = 0x459348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15368 << 16));
    // 0x45934c: 0x34a5873e  ori         $a1, $a1, 0x873E
    ctx->pc = 0x45934cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34622);
    // 0x459350: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x459350u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459354: 0x4a0002ff  vnop
    ctx->pc = 0x459354u;
    // NOP operation, no action needed for VU0
    // 0x459358: 0x4a0002ff  vnop
    ctx->pc = 0x459358u;
    // NOP operation, no action needed for VU0
    // 0x45935c: 0x4a800322  vaddi.y     $vf12, $vf0, $I
    ctx->pc = 0x45935cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x459360: 0x3c05362e  lui         $a1, 0x362E
    ctx->pc = 0x459360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)13870 << 16));
    // 0x459364: 0x34a59c14  ori         $a1, $a1, 0x9C14
    ctx->pc = 0x459364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39956);
    // 0x459368: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x459368u;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x45936c: 0x4a0002ff  vnop
    ctx->pc = 0x45936cu;
    // NOP operation, no action needed for VU0
    // 0x459370: 0x4a0002ff  vnop
    ctx->pc = 0x459370u;
    // NOP operation, no action needed for VU0
    // 0x459374: 0x4a400322  vaddi.z     $vf12, $vf0, $I
    ctx->pc = 0x459374u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x459378: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x459378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x45937c: 0x48c5a800  ctc2.ni     $a1, $vi21
    ctx->pc = 0x45937cu;
    { uint32_t tmp = GPR_U32(ctx, 5); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x459380: 0x4a0002ff  vnop
    ctx->pc = 0x459380u;
    // NOP operation, no action needed for VU0
    // 0x459384: 0x4a0002ff  vnop
    ctx->pc = 0x459384u;
    // NOP operation, no action needed for VU0
    // 0x459388: 0x4b000362  vaddi.x     $vf13, $vf0, $I
    ctx->pc = 0x459388u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x45938c: 0x42000038  ei
    ctx->pc = 0x45938cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_459390:
    // 0x459390: 0x42000039  di
    ctx->pc = 0x459390u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x459394: 0x40f  sync.p
    ctx->pc = 0x459394u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459398: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x459398u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
    // 0x45939c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x45939cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4593a0: 0x0  nop
    ctx->pc = 0x4593a0u;
    // NOP
    // 0x4593a4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4593A4u;
    {
        const bool branch_taken_0x4593a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4593a4) {
            ctx->pc = 0x459390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_459390;
        }
    }
    ctx->pc = 0x4593ACu;
    // 0x4593ac: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x4593acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4593b0: 0xdba80000  lqc2        $vf8, 0x0($sp)
    ctx->pc = 0x4593b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4593b4: 0xd8490000  lqc2        $vf9, 0x0($v0)
    ctx->pc = 0x4593b4u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4593b8: 0x42000038  ei
    ctx->pc = 0x4593b8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4593bc: 0x1a40004c  blez        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x4593BCu;
    {
        const bool branch_taken_0x4593bc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4593C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4593BCu;
        // 0x4593c0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4593bc) {
            ctx->pc = 0x4594F0u;
            goto label_4594f0;
        }
    }
    ctx->pc = 0x4593C4u;
    // 0x4593c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x4593c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4593c8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4593c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4593cc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4593ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x4593d0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x4593d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4593d4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4593d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4593d8:
    // 0x4593d8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x4593d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4593dc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4593dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x4593e0: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x4593e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4593e4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x4593e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x4593e8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x4593e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4593ec: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x4593ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x4593f0: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x4593f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4593f4: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x4593f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_4593f8:
    // 0x4593f8: 0x42000039  di
    ctx->pc = 0x4593f8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x4593fc: 0x40f  sync.p
    ctx->pc = 0x4593fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x459400: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x459400u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x459404: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x459404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x459408: 0x0  nop
    ctx->pc = 0x459408u;
    // NOP
    // 0x45940c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45940Cu;
    {
        const bool branch_taken_0x45940c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45940c) {
            ctx->pc = 0x4593F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4593f8;
        }
    }
    ctx->pc = 0x459414u;
    // 0x459414: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x459414u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x459418: 0x4b8709fd  vabs.xy     $vf7, $vf1
    ctx->pc = 0x459418u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x45941c: 0x4bea003c  vaddax.xyzw $ACC, $vf0, $vf10x
    ctx->pc = 0x45941cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459420: 0x4b8039cf  vmsubw.xy   $vf7, $vf7, $vf0w
    ctx->pc = 0x459420u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459424: 0x4bca003d  vadday.xyz  $ACC, $vf0, $vf10y
    ctx->pc = 0x459424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x459428: 0x4a2a003e  vaddaz.w    $ACC, $vf0, $vf10z
    ctx->pc = 0x459428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x45942c: 0x4a60088f  vmsubw.zw   $vf2, $vf1, $vf0w
    ctx->pc = 0x45942cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459430: 0x4bcb003c  vaddax.xyz  $ACC, $vf0, $vf11x
    ctx->pc = 0x459430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x459434: 0x4a2b003d  vadday.w    $ACC, $vf0, $vf11y
    ctx->pc = 0x459434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, 0, 0, 0))); }
    // 0x459438: 0x4a6008cf  vmsubw.zw   $vf3, $vf1, $vf0w
    ctx->pc = 0x459438u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x45943c: 0x4a6208af  vmini.zw    $vf2, $vf1, $vf2
    ctx->pc = 0x45943cu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459440: 0x4a6311eb  vmax.zw     $vf7, $vf2, $vf3
    ctx->pc = 0x459440u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, 0, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459444: 0x4be738aa  vmul.xyzw   $vf2, $vf7, $vf7
    ctx->pc = 0x459444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459448: 0x4beb399a  vmulz.xyzw  $vf6, $vf7, $vf11z
    ctx->pc = 0x459448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45944c: 0x4bec3918  vmulx.xyzw  $vf4, $vf7, $vf12x
    ctx->pc = 0x45944cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459450: 0x4bec3959  vmuly.xyzw  $vf5, $vf7, $vf12y
    ctx->pc = 0x459450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x459454: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x459454u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x459458: 0x4be231aa  vmul.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x459458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x45945c: 0x4be222be  vmula.xyzw  $ACC, $vf4, $vf2
    ctx->pc = 0x45945cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459460: 0x4bec391a  vmulz.xyzw  $vf4, $vf7, $vf12z
    ctx->pc = 0x459460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x459464: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x459464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x459468: 0x4be332bd  vmadda.xyzw $ACC, $vf6, $vf3
    ctx->pc = 0x459468u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45946c: 0x4be32abd  vmadda.xyzw $ACC, $vf5, $vf3
    ctx->pc = 0x45946cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459470: 0x4bed38bc  vmaddax.xyzw $ACC, $vf7, $vf13x
    ctx->pc = 0x459470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459474: 0x4be221e9  vmadd.xyzw  $vf7, $vf4, $vf2
    ctx->pc = 0x459474u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x459478: 0xdab40000  lqc2        $vf20, 0x0($s5)
    ctx->pc = 0x459478u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x45947c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x45947cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x459480: 0x4be74c8e  vmsubz.xyzw $vf18, $vf9, $vf7z
    ctx->pc = 0x459480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x459484: 0x4be19499  vmuly.xyzw  $vf18, $vf18, $vf1y
    ctx->pc = 0x459484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x459488: 0x4be749bc  vmulax.xyzw $ACC, $vf9, $vf7x
    ctx->pc = 0x459488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x45948c: 0x4be744ca  vmaddz.xyzw $vf19, $vf8, $vf7z
    ctx->pc = 0x45948cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x459490: 0x4be19cdb  vmulw.xyzw  $vf19, $vf19, $vf1w
    ctx->pc = 0x459490u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x459494: 0x4bf2a56c  vsub.xyzw   $vf21, $vf20, $vf18
    ctx->pc = 0x459494u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x459498: 0x4bf2a5a8  vadd.xyzw   $vf22, $vf20, $vf18
    ctx->pc = 0x459498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x45949c: 0x4bf2a5e8  vadd.xyzw   $vf23, $vf20, $vf18
    ctx->pc = 0x45949cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4594a0: 0x4bf2a62c  vsub.xyzw   $vf24, $vf20, $vf18
    ctx->pc = 0x4594a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4594a4: 0x4bf3ad6c  vsub.xyzw   $vf21, $vf21, $vf19
    ctx->pc = 0x4594a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x4594a8: 0x4bf3b5ac  vsub.xyzw   $vf22, $vf22, $vf19
    ctx->pc = 0x4594a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x4594ac: 0x4bf3bde8  vadd.xyzw   $vf23, $vf23, $vf19
    ctx->pc = 0x4594acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x4594b0: 0x4bf3c628  vadd.xyzw   $vf24, $vf24, $vf19
    ctx->pc = 0x4594b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x4594b4: 0xfad50000  sqc2        $vf21, 0x0($s6)
    ctx->pc = 0x4594b4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x4594b8: 0xfad60010  sqc2        $vf22, 0x10($s6)
    ctx->pc = 0x4594b8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 16), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x4594bc: 0xfad70020  sqc2        $vf23, 0x20($s6)
    ctx->pc = 0x4594bcu;
    WRITE128(ADD32(GPR_U32(ctx, 22), 32), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x4594c0: 0xfad80030  sqc2        $vf24, 0x30($s6)
    ctx->pc = 0x4594c0u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 48), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x4594c4: 0x42000038  ei
    ctx->pc = 0x4594c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x4594c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4594c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4594cc: 0x2c4b021  addu        $s6, $s6, $a0
    ctx->pc = 0x4594ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
    // 0x4594d0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4594d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x4594d4: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x4594d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x4594d8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4594d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x4594dc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4594dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4594e0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4594e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4594e4: 0x14e0ffbc  bnez        $a3, . + 4 + (-0x44 << 2)
    ctx->pc = 0x4594E4u;
    {
        const bool branch_taken_0x4594e4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4594E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4594E4u;
        // 0x4594e8: 0x282a021  addu        $s4, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4594e4) {
            ctx->pc = 0x4593D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4593d8;
        }
    }
    ctx->pc = 0x4594ECu;
    // 0x4594ec: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x4594ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4594f0:
    // 0x4594f0: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x4594f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4594f4: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x4594f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4594f8: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x4594f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4594fc: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x4594fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x459500: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x459500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x459504: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x459504u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x459508: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x459508u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45950c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x45950cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x459510: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x459510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459514: 0x3e00008  jr          $ra
    ctx->pc = 0x459514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x459514u;
        // 0x459518: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45951Cu;
    // 0x45951c: 0x0  nop
    ctx->pc = 0x45951cu;
    // NOP
    ctx->pc = 0x459520u;
}
