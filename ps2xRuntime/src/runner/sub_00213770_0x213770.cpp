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

// Function: sub_00213770
// Address: 0x213770 - 0x213e68
void sub_00213770_0x213770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213770_0x213770");
#endif

    switch (ctx->pc) {
        case 0x2137a8u: goto label_2137a8;
        case 0x213b50u: goto label_213b50;
        case 0x213b60u: goto label_213b60;
        case 0x213bf0u: goto label_213bf0;
        case 0x213c00u: goto label_213c00;
        case 0x213c10u: goto label_213c10;
        case 0x213c20u: goto label_213c20;
        case 0x213cb4u: goto label_213cb4;
        case 0x213cc4u: goto label_213cc4;
        case 0x213cd4u: goto label_213cd4;
        case 0x213ce4u: goto label_213ce4;
        case 0x213d78u: goto label_213d78;
        case 0x213d88u: goto label_213d88;
        case 0x213d98u: goto label_213d98;
        case 0x213da8u: goto label_213da8;
        case 0x213e3cu: goto label_213e3c;
        case 0x213e4cu: goto label_213e4c;
        default: break;
    }

    ctx->pc = 0x213770u;

    // 0x213770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x213770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x213774: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x213774u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x213778: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x213778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x21377c: 0x2528fec0  addiu       $t0, $t1, -0x140
    ctx->pc = 0x21377cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
    // 0x213780: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x213780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x213784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213788: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x213788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x21378c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21378cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213790: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x213790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x213794: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213798: 0x240700c0  addiu       $a3, $zero, 0xC0
    ctx->pc = 0x213798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x21379c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2137a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2137a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2137a4: 0x0  nop
    ctx->pc = 0x2137a4u;
    // NOP
label_2137a8:
    // 0x2137a8: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x2137a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2137ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2137acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2137b0: 0x2ca30004  sltiu       $v1, $a1, 0x4
    ctx->pc = 0x2137b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2137b4: 0x475018  mult        $t2, $v0, $a3
    ctx->pc = 0x2137b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2137b8: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x2137b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2137bc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2137bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2137c0: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x2137c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x2137c4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2137C4u;
    {
        const bool branch_taken_0x2137c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2137C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137C4u;
        // 0x2137c8: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137c4) {
            ctx->pc = 0x2137A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2137a8;
        }
    }
    ctx->pc = 0x2137CCu;
    // 0x2137cc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2137ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2137d0: 0x8e0640f4  lw          $a2, 0x40F4($s0)
    ctx->pc = 0x2137d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2137d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2137d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2137d8: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2137D8u;
    {
        const bool branch_taken_0x2137d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2137DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2137D8u;
        // 0x2137dc: 0xc4450040  lwc1        $f5, 0x40($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2137d8) {
            ctx->pc = 0x2137E8u;
            goto label_2137e8;
        }
    }
    ctx->pc = 0x2137E0u;
    // 0x2137e0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2137e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2137e4: 0xc4450044  lwc1        $f5, 0x44($v0)
    ctx->pc = 0x2137e4u;
    { uint32_t bits = FAST_READ32(0x510044u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2137e8:
    // 0x2137e8: 0x8e020444  lw          $v0, 0x444($s0)
    ctx->pc = 0x2137e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
    // 0x2137ec: 0x5c400035  bgtzl       $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2137ECu;
    {
        const bool branch_taken_0x2137ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2137ec) {
            ctx->pc = 0x2137F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2137ECu;
            // 0x2137f0: 0x8e030444  lw          $v1, 0x444($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2138C4u;
            goto label_2138c4;
        }
    }
    ctx->pc = 0x2137F4u;
    // 0x2137f4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x2137f8: 0x3c01bdc2  lui         $at, 0xBDC2
    ctx->pc = 0x2137f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48578 << 16));
    // 0x2137fc: 0x34218f5c  ori         $at, $at, 0x8F5C
    ctx->pc = 0x2137fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36700);
    // 0x213800: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213800u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213804: 0xc41818  mult        $v1, $a2, $a0
    ctx->pc = 0x213804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213808: 0x2525fec0  addiu       $a1, $t1, -0x140
    ctx->pc = 0x213808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
    // 0x21380c: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x21380cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213810: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x213814: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x213814u;
    { uint32_t bits = FAST_READ32(0x510048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213818: 0x3c01bd38  lui         $at, 0xBD38
    ctx->pc = 0x213818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48440 << 16));
    // 0x21381c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x21381cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x213820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213824: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x213824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213828: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x213828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x21382c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21382cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x213830: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213834: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x213834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x213838: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x213838u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x21383c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x21383cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x213840: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x213840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x213844: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x213844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x213848: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21384c: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x21384cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213850: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x213850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213854: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213858: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x213858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21385c: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x21385cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213860: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213864: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213868: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x213868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21386c: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x21386cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x213870: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213874: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213874u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213878: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x213878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21387c: 0xe4630038  swc1        $f3, 0x38($v1)
    ctx->pc = 0x21387cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x213880: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213884: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213888: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x213888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21388c: 0xe4420060  swc1        $f2, 0x60($v0)
    ctx->pc = 0x21388cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x213890: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213894: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213898: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x213898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x21389c: 0xe4630068  swc1        $f3, 0x68($v1)
    ctx->pc = 0x21389cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2138a0: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x2138a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2138a4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x2138a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2138a8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2138a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2138ac: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2138acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2138b0: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x2138b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2138b4: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x2138b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2138b8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x2138b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2138bc: 0xe4630098  swc1        $f3, 0x98($v1)
    ctx->pc = 0x2138bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2138c0: 0x8e030444  lw          $v1, 0x444($s0)
    ctx->pc = 0x2138c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1092)));
label_2138c4:
    // 0x2138c4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2138c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2138c8: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x2138c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x2138cc: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2138CCu;
    {
        const bool branch_taken_0x2138cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2138D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2138CCu;
        // 0x2138d0: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2138cc) {
            ctx->pc = 0x213990u;
            goto label_213990;
        }
    }
    ctx->pc = 0x2138D4u;
    // 0x2138d4: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x2138d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2138d8: 0x3c01bd38  lui         $at, 0xBD38
    ctx->pc = 0x2138d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48440 << 16));
    // 0x2138dc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2138dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x2138e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2138e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2138e4: 0x2527fec0  addiu       $a3, $t1, -0x140
    ctx->pc = 0x2138e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
    // 0x2138e8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2138e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2138ec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2138ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2138f0: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2138f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2138f4: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x2138f4u;
    { uint32_t bits = FAST_READ32(0x510048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2138f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2138f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2138fc: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2138fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x213900: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x213900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x213904: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213908: 0xc444004c  lwc1        $f4, 0x4C($v0)
    ctx->pc = 0x213908u;
    { uint32_t bits = FAST_READ32(0x51004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21390c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x21390cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213910: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x213910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213914: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x213914u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x213918: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x213918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x21391c: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x21391cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x213920: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x213920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x213924: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213928: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x21392c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x21392cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x213930: 0x3c01bdb8  lui         $at, 0xBDB8
    ctx->pc = 0x213930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48568 << 16));
    // 0x213934: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x213934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x213938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21393c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x21393cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213940: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x213940u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213944: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213948: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x213948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x21394c: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x21394cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213950: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213954: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213958: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x213958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x21395c: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x21395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213960: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213960u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213964: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213968: 0xe4630038  swc1        $f3, 0x38($v1)
    ctx->pc = 0x213968u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x21396c: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x21396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213970: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213970u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213974: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213978: 0xe4420060  swc1        $f2, 0x60($v0)
    ctx->pc = 0x213978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x21397c: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x21397cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213980: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213984: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213988: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x213988u;
    {
        const bool branch_taken_0x213988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213988u;
        // 0x21398c: 0xe4630068  swc1        $f3, 0x68($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213988) {
            ctx->pc = 0x213B20u;
            goto label_213b20;
        }
    }
    ctx->pc = 0x213990u;
label_213990:
    // 0x213990: 0x2462fff6  addiu       $v0, $v1, -0xA
    ctx->pc = 0x213990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x213994: 0x2c42005a  sltiu       $v0, $v0, 0x5A
    ctx->pc = 0x213994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)90) ? 1 : 0);
    // 0x213998: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x213998u;
    {
        const bool branch_taken_0x213998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213998u;
        // 0x21399c: 0x2527fec0  addiu       $a3, $t1, -0x140 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213998) {
            ctx->pc = 0x213A58u;
            goto label_213a58;
        }
    }
    ctx->pc = 0x2139A0u;
    // 0x2139a0: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x2139a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2139a4: 0x3c01bce5  lui         $at, 0xBCE5
    ctx->pc = 0x2139a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48357 << 16));
    // 0x2139a8: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x2139a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
    // 0x2139ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2139acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2139b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2139b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2139b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2139b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2139b8: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2139b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2139bc: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x2139bcu;
    { uint32_t bits = FAST_READ32(0x510048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2139c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2139c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2139c4: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2139c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2139c8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2139c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2139cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2139ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2139d0: 0xc444004c  lwc1        $f4, 0x4C($v0)
    ctx->pc = 0x2139d0u;
    { uint32_t bits = FAST_READ32(0x51004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2139d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2139d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2139d8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2139d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2139dc: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x2139dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x2139e0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2139e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2139e4: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x2139e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x2139e8: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2139e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2139ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2139ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2139f0: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x2139f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x2139f4: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x2139f4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x2139f8: 0x3c01bdb8  lui         $at, 0xBDB8
    ctx->pc = 0x2139f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48568 << 16));
    // 0x2139fc: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x2139fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x213a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213a04: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213a04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213a08: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x213a08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213a0c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213a10: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x213a10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213a14: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213a18: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213a1c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213a20: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x213a20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x213a24: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213a28: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213a2c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213a30: 0xe4630038  swc1        $f3, 0x38($v1)
    ctx->pc = 0x213a30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x213a34: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213a38: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213a3c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213a40: 0xe4420060  swc1        $f2, 0x60($v0)
    ctx->pc = 0x213a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x213a44: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213a48: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213a48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213a4c: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213a50: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x213A50u;
    {
        const bool branch_taken_0x213a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A50u;
        // 0x213a54: 0xe4630068  swc1        $f3, 0x68($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a50) {
            ctx->pc = 0x213B20u;
            goto label_213b20;
        }
    }
    ctx->pc = 0x213A58u;
label_213a58:
    // 0x213a58: 0x2462ff9c  addiu       $v0, $v1, -0x64
    ctx->pc = 0x213a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x213a5c: 0x2c420384  sltiu       $v0, $v0, 0x384
    ctx->pc = 0x213a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)900) ? 1 : 0);
    // 0x213a60: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x213A60u;
    {
        const bool branch_taken_0x213a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x213A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213A60u;
        // 0x213a64: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213a60) {
            ctx->pc = 0x213B40u;
            goto label_213b40;
        }
    }
    ctx->pc = 0x213A68u;
    // 0x213a68: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213a6c: 0x3c01bba3  lui         $at, 0xBBA3
    ctx->pc = 0x213a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48035 << 16));
    // 0x213a70: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x213a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x213a74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213a78: 0x2527fec0  addiu       $a3, $t1, -0x140
    ctx->pc = 0x213a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966976));
    // 0x213a7c: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x213a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213a80: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x213a84: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x213a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213a88: 0xc4430048  lwc1        $f3, 0x48($v0)
    ctx->pc = 0x213a88u;
    { uint32_t bits = FAST_READ32(0x510048u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x213a8c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x213a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x213a90: 0x3c013d2c  lui         $at, 0x3D2C
    ctx->pc = 0x213a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15660 << 16));
    // 0x213a94: 0x34210831  ori         $at, $at, 0x831
    ctx->pc = 0x213a94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2097);
    // 0x213a98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x213a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213a9c: 0xc444004c  lwc1        $f4, 0x4C($v0)
    ctx->pc = 0x213a9cu;
    { uint32_t bits = FAST_READ32(0x51004Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x213aa0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213aa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213aa4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x213aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213aa8: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x213aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x213aac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x213aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x213ab0: 0x3c01bdbc  lui         $at, 0xBDBC
    ctx->pc = 0x213ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48572 << 16));
    // 0x213ab4: 0x34216a7f  ori         $at, $at, 0x6A7F
    ctx->pc = 0x213ab4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27263);
    // 0x213ab8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x213ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213abc: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213ac0: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x213ac0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x213ac4: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x213ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x213ac8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x213ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x213acc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x213accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x213ad0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213ad4: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x213ad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x213ad8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213adc: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x213adcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x213ae0: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213ae4: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213ae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213ae8: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213aec: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x213aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x213af0: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213af4: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213af8: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213afc: 0xe4630038  swc1        $f3, 0x38($v1)
    ctx->pc = 0x213afcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x213b00: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213b04: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213b04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213b08: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213b0c: 0xe4420060  swc1        $f2, 0x60($v0)
    ctx->pc = 0x213b0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x213b10: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213b14: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213b18: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213b1c: 0xe4640068  swc1        $f4, 0x68($v1)
    ctx->pc = 0x213b1cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_213b20:
    // 0x213b20: 0x8e0240f4  lw          $v0, 0x40F4($s0)
    ctx->pc = 0x213b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213b24: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x213b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213b28: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x213b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x213b2c: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x213b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x213b30: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213b34: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x213b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213b38: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x213b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x213b3c: 0xe4640098  swc1        $f4, 0x98($v1)
    ctx->pc = 0x213b3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
label_213b40:
    // 0x213b40: 0x26110e30  addiu       $s1, $s0, 0xE30
    ctx->pc = 0x213b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3632));
    // 0x213b44: 0x8e0540f4  lw          $a1, 0x40F4($s0)
    ctx->pc = 0x213b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213b48: 0xc071a3a  jal         func_1C68E8
    ctx->pc = 0x213B48u;
    SET_GPR_U32(ctx, 31, 0x213B50u);
    ctx->pc = 0x213B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B48u;
    // 0x213b4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C68E8u, 0x213B48u, 0x213B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B50u;
label_213b50:
    // 0x213b50: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x213B50u;
    {
        const bool branch_taken_0x213b50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213B50u;
        // 0x213b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213b50) {
            ctx->pc = 0x213C00u;
            goto label_213c00;
        }
    }
    ctx->pc = 0x213B58u;
    // 0x213b58: 0xc084dc6  jal         func_213718
    ctx->pc = 0x213B58u;
    SET_GPR_U32(ctx, 31, 0x213B60u);
    ctx->pc = 0x213B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213B58u;
    // 0x213b5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213718u, 0x213B58u, 0x213B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213B60u;
label_213b60:
    // 0x213b60: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213b64: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213b68: 0x240600c0  addiu       $a2, $zero, 0xC0
    ctx->pc = 0x213b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x213b6c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x213b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x213b70: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x213b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x213b74: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x213b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213b78: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x213b78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213b7c: 0x24a5fed0  addiu       $a1, $a1, -0x130
    ctx->pc = 0x213b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966992));
    // 0x213b80: 0x24090240  addiu       $t1, $zero, 0x240
    ctx->pc = 0x213b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x213b84: 0x24a6fff0  addiu       $a2, $a1, -0x10
    ctx->pc = 0x213b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x213b88: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x213b88u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x213b8c: 0x2508fa40  addiu       $t0, $t0, -0x5C0
    ctx->pc = 0x213b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965824));
    // 0x213b90: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x213b90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x213b94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x213b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x213b98: 0x26041130  addiu       $a0, $s0, 0x1130
    ctx->pc = 0x213b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4400));
    // 0x213b9c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x213b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x213ba0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x213ba0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x213ba4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x213ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x213ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bac: 0x7e021230  sq          $v0, 0x1230($s0)
    ctx->pc = 0x213bacu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4656), GPR_VEC(ctx, 2));
    // 0x213bb0: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x213bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x213bb4: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x213bb4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213bb8: 0x8e0640f4  lw          $a2, 0x40F4($s0)
    ctx->pc = 0x213bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213bbc: 0x7a0240e0  lq          $v0, 0x40E0($s0)
    ctx->pc = 0x213bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16608)));
    // 0x213bc0: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x213bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x213bc4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x213bc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x213bc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213bc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213bcc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x213bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213bd0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x213bd0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x213bd4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213bd4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213bd8: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x213bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x213bdc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x213bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x213be0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x213be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x213be4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x213be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x213be8: 0xc068848  jal         func_1A2120
    ctx->pc = 0x213BE8u;
    SET_GPR_U32(ctx, 31, 0x213BF0u);
    ctx->pc = 0x213BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BE8u;
    // 0x213bec: 0xc4cc0110  lwc1        $f12, 0x110($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x213BE8u, 0x213BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213BF0u;
label_213bf0:
    // 0x213bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213bf8: 0xc06db90  jal         func_1B6E40
    ctx->pc = 0x213BF8u;
    SET_GPR_U32(ctx, 31, 0x213C00u);
    ctx->pc = 0x213BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213BF8u;
    // 0x213bfc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E40u, 0x213BF8u, 0x213C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C00u;
label_213c00:
    // 0x213c00: 0x26111260  addiu       $s1, $s0, 0x1260
    ctx->pc = 0x213c00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4704));
    // 0x213c04: 0x8e0540f4  lw          $a1, 0x40F4($s0)
    ctx->pc = 0x213c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213c08: 0xc0725b8  jal         func_1C96E0
    ctx->pc = 0x213C08u;
    SET_GPR_U32(ctx, 31, 0x213C10u);
    ctx->pc = 0x213C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C08u;
    // 0x213c0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C96E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C96E0u, 0x213C08u, 0x213C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C10u;
label_213c10:
    // 0x213c10: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x213C10u;
    {
        const bool branch_taken_0x213c10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C10u;
        // 0x213c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213c10) {
            ctx->pc = 0x213CC4u;
            goto label_213cc4;
        }
    }
    ctx->pc = 0x213C18u;
    // 0x213c18: 0xc084dc6  jal         func_213718
    ctx->pc = 0x213C18u;
    SET_GPR_U32(ctx, 31, 0x213C20u);
    ctx->pc = 0x213C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C18u;
    // 0x213c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213718u, 0x213C18u, 0x213C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C20u;
label_213c20:
    // 0x213c20: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213c20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213c24: 0x8e0640f4  lw          $a2, 0x40F4($s0)
    ctx->pc = 0x213c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213c28: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x213c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x213c2c: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x213c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x213c30: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x213c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x213c34: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x213c34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213c38: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x213c38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x213c3c: 0x2463fed0  addiu       $v1, $v1, -0x130
    ctx->pc = 0x213c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966992));
    // 0x213c40: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x213c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213c44: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x213c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x213c48: 0x240a0240  addiu       $t2, $zero, 0x240
    ctx->pc = 0x213c48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x213c4c: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x213c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x213c50: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x213c50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x213c54: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x213c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x213c58: 0x2508fa40  addiu       $t0, $t0, -0x5C0
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965824));
    // 0x213c5c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x213c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x213c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213c64: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x213c64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213c68: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x213c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x213c6c: 0x26041560  addiu       $a0, $s0, 0x1560
    ctx->pc = 0x213c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5472));
    // 0x213c70: 0x7e021660  sq          $v0, 0x1660($s0)
    ctx->pc = 0x213c70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 5728), GPR_VEC(ctx, 2));
    // 0x213c74: 0xacc90020  sw          $t1, 0x20($a2)
    ctx->pc = 0x213c74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 9));
    // 0x213c78: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x213c78u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213c7c: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213c80: 0x7a0240e0  lq          $v0, 0x40E0($s0)
    ctx->pc = 0x213c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16608)));
    // 0x213c84: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x213c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213c88: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x213c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x213c8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213c8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213c90: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x213c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213c94: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x213c94u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x213c98: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213c98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213c9c: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x213c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x213ca0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x213ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x213ca4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x213ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x213ca8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x213ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x213cac: 0xc068848  jal         func_1A2120
    ctx->pc = 0x213CACu;
    SET_GPR_U32(ctx, 31, 0x213CB4u);
    ctx->pc = 0x213CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CACu;
    // 0x213cb0: 0xc46c0140  lwc1        $f12, 0x140($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x213CACu, 0x213CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CB4u;
label_213cb4:
    // 0x213cb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213cbc: 0xc06db90  jal         func_1B6E40
    ctx->pc = 0x213CBCu;
    SET_GPR_U32(ctx, 31, 0x213CC4u);
    ctx->pc = 0x213CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CBCu;
    // 0x213cc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E40u, 0x213CBCu, 0x213CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CC4u;
label_213cc4:
    // 0x213cc4: 0x26111690  addiu       $s1, $s0, 0x1690
    ctx->pc = 0x213cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5776));
    // 0x213cc8: 0x8e0540f4  lw          $a1, 0x40F4($s0)
    ctx->pc = 0x213cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213ccc: 0xc06abe2  jal         func_1AAF88
    ctx->pc = 0x213CCCu;
    SET_GPR_U32(ctx, 31, 0x213CD4u);
    ctx->pc = 0x213CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CCCu;
    // 0x213cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AAF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AAF88u, 0x213CCCu, 0x213CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CD4u;
label_213cd4:
    // 0x213cd4: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x213CD4u;
    {
        const bool branch_taken_0x213cd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213CD4u;
        // 0x213cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213cd4) {
            ctx->pc = 0x213D88u;
            goto label_213d88;
        }
    }
    ctx->pc = 0x213CDCu;
    // 0x213cdc: 0xc084dc6  jal         func_213718
    ctx->pc = 0x213CDCu;
    SET_GPR_U32(ctx, 31, 0x213CE4u);
    ctx->pc = 0x213CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213CDCu;
    // 0x213ce0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213718u, 0x213CDCu, 0x213CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213CE4u;
label_213ce4:
    // 0x213ce4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213ce8: 0x8e0640f4  lw          $a2, 0x40F4($s0)
    ctx->pc = 0x213ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213cec: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x213cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x213cf0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x213cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x213cf4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x213cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x213cf8: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x213cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213cfc: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x213cfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x213d00: 0x2463fed0  addiu       $v1, $v1, -0x130
    ctx->pc = 0x213d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966992));
    // 0x213d04: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x213d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213d08: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x213d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x213d0c: 0x240a0240  addiu       $t2, $zero, 0x240
    ctx->pc = 0x213d0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x213d10: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x213d10u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x213d14: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x213d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x213d18: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x213d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x213d1c: 0x2508fa40  addiu       $t0, $t0, -0x5C0
    ctx->pc = 0x213d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965824));
    // 0x213d20: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x213d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x213d24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d28: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x213d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213d2c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x213d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x213d30: 0x26041990  addiu       $a0, $s0, 0x1990
    ctx->pc = 0x213d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6544));
    // 0x213d34: 0x7e021a90  sq          $v0, 0x1A90($s0)
    ctx->pc = 0x213d34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 6800), GPR_VEC(ctx, 2));
    // 0x213d38: 0xacc90020  sw          $t1, 0x20($a2)
    ctx->pc = 0x213d38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 9));
    // 0x213d3c: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x213d3cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213d40: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213d44: 0x7a0240e0  lq          $v0, 0x40E0($s0)
    ctx->pc = 0x213d44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16608)));
    // 0x213d48: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x213d48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213d4c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x213d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x213d50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213d54: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x213d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213d58: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x213d58u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x213d5c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213d5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213d60: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x213d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x213d64: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x213d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x213d68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x213d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x213d6c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x213d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x213d70: 0xc068848  jal         func_1A2120
    ctx->pc = 0x213D70u;
    SET_GPR_U32(ctx, 31, 0x213D78u);
    ctx->pc = 0x213D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D70u;
    // 0x213d74: 0xc46c0170  lwc1        $f12, 0x170($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x213D70u, 0x213D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D78u;
label_213d78:
    // 0x213d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d7c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213d80: 0xc06db90  jal         func_1B6E40
    ctx->pc = 0x213D80u;
    SET_GPR_U32(ctx, 31, 0x213D88u);
    ctx->pc = 0x213D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D80u;
    // 0x213d84: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E40u, 0x213D80u, 0x213D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D88u;
label_213d88:
    // 0x213d88: 0x26111ac0  addiu       $s1, $s0, 0x1AC0
    ctx->pc = 0x213d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6848));
    // 0x213d8c: 0x8e0540f4  lw          $a1, 0x40F4($s0)
    ctx->pc = 0x213d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213d90: 0xc06ab7c  jal         func_1AADF0
    ctx->pc = 0x213D90u;
    SET_GPR_U32(ctx, 31, 0x213D98u);
    ctx->pc = 0x213D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213D90u;
    // 0x213d94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AADF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AADF0u, 0x213D90u, 0x213D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213D98u;
label_213d98:
    // 0x213d98: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x213D98u;
    {
        const bool branch_taken_0x213d98 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x213D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213D98u;
        // 0x213d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213d98) {
            ctx->pc = 0x213E4Cu;
            goto label_213e4c;
        }
    }
    ctx->pc = 0x213DA0u;
    // 0x213da0: 0xc084dc6  jal         func_213718
    ctx->pc = 0x213DA0u;
    SET_GPR_U32(ctx, 31, 0x213DA8u);
    ctx->pc = 0x213DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213DA0u;
    // 0x213da4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213718u, 0x213DA0u, 0x213DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213DA8u;
label_213da8:
    // 0x213da8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x213da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213dac: 0x8e0640f4  lw          $a2, 0x40F4($s0)
    ctx->pc = 0x213dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213db0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x213db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x213db4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x213db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x213db8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x213db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x213dbc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x213dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x213dc0: 0xc53018  mult        $a2, $a2, $a1
    ctx->pc = 0x213dc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x213dc4: 0x2463fed0  addiu       $v1, $v1, -0x130
    ctx->pc = 0x213dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966992));
    // 0x213dc8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x213dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x213dcc: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x213dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x213dd0: 0x240a0240  addiu       $t2, $zero, 0x240
    ctx->pc = 0x213dd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x213dd4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x213dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x213dd8: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x213dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x213ddc: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x213ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x213de0: 0x2508fa40  addiu       $t0, $t0, -0x5C0
    ctx->pc = 0x213de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294965824));
    // 0x213de4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x213de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x213de8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213dec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x213decu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x213df0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x213df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x213df4: 0x26041dc0  addiu       $a0, $s0, 0x1DC0
    ctx->pc = 0x213df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7616));
    // 0x213df8: 0x7e021ec0  sq          $v0, 0x1EC0($s0)
    ctx->pc = 0x213df8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 7872), GPR_VEC(ctx, 2));
    // 0x213dfc: 0xacc90020  sw          $t1, 0x20($a2)
    ctx->pc = 0x213dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 9));
    // 0x213e00: 0x78c70000  lq          $a3, 0x0($a2)
    ctx->pc = 0x213e00u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x213e04: 0x8e0340f4  lw          $v1, 0x40F4($s0)
    ctx->pc = 0x213e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16628)));
    // 0x213e08: 0x7a0240e0  lq          $v0, 0x40E0($s0)
    ctx->pc = 0x213e08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16608)));
    // 0x213e0c: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x213e0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x213e10: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x213e10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x213e14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x213e14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x213e18: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x213e18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x213e1c: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x213e1cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x213e20: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x213e20u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x213e24: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x213e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x213e28: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x213e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x213e2c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x213e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x213e30: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x213e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x213e34: 0xc068848  jal         func_1A2120
    ctx->pc = 0x213E34u;
    SET_GPR_U32(ctx, 31, 0x213E3Cu);
    ctx->pc = 0x213E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E34u;
    // 0x213e38: 0xc46c01d0  lwc1        $f12, 0x1D0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x213E34u, 0x213E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E3Cu;
label_213e3c:
    // 0x213e3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x213e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x213e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e44: 0xc06db90  jal         func_1B6E40
    ctx->pc = 0x213E44u;
    SET_GPR_U32(ctx, 31, 0x213E4Cu);
    ctx->pc = 0x213E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E44u;
    // 0x213e48: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E40u, 0x213E44u, 0x213E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E4Cu;
label_213e4c:
    // 0x213e4c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x213e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e50: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x213e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x213e54: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x213e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x213e58: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x213e58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x213e5c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x213e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x213e60: 0x3e00008  jr          $ra
    ctx->pc = 0x213E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213E60u;
        // 0x213e64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213E68u;
}
