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

// Function: sub_00351468
// Address: 0x351468 - 0x3519f8
void sub_00351468_0x351468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351468_0x351468");
#endif

    switch (ctx->pc) {
        case 0x351508u: goto label_351508;
        case 0x351580u: goto label_351580;
        case 0x351650u: goto label_351650;
        default: break;
    }

    ctx->pc = 0x351468u;

    // 0x351468: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x351468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x35146c: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x35146cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x351470: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x351470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x351474: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x351474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x351478: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x351478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x35147c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35147cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351480: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x351480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x351484: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x351484u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351488: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x351488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x35148c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x35148cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351490: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x351490u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x351494: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x351494u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351498: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x351498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x35149c: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x35149cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x3514a0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x3514a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x3514a4: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x3514a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x3514a8: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x3514a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x3514ac: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x3514acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x3514b0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x3514b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x3514b4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x3514b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x3514b8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x3514b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3514bc: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x3514bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
    // 0x3514c0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3514c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x3514c4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x3514c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3514c8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3514c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3514cc: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x3514ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
    // 0x3514d0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3514d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3514d4: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x3514d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x3514d8: 0xafa800b4  sw          $t0, 0xB4($sp)
    ctx->pc = 0x3514d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 8));
    // 0x3514dc: 0x82a021  addu        $s4, $a0, $v0
    ctx->pc = 0x3514dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3514e0: 0xafa900b8  sw          $t1, 0xB8($sp)
    ctx->pc = 0x3514e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 9));
    // 0x3514e4: 0xafaa00bc  sw          $t2, 0xBC($sp)
    ctx->pc = 0x3514e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 10));
    // 0x3514e8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x3514e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3514ec: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x3514ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x3514f0: 0x10400132  beqz        $v0, . + 4 + (0x132 << 2)
    ctx->pc = 0x3514F0u;
    {
        const bool branch_taken_0x3514f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3514F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3514F0u;
        // 0x3514f4: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3514f0) {
            ctx->pc = 0x3519BCu;
            goto label_3519bc;
        }
    }
    ctx->pc = 0x3514F8u;
    // 0x3514f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x3514f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x3514fc: 0x3c01b727  lui         $at, 0xB727
    ctx->pc = 0x3514fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46887 << 16));
    // 0x351500: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x351500u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x351504: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x351504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_351508:
    // 0x351508: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x351508u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x35150c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35150cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351510: 0x8ea40094  lw          $a0, 0x94($s5)
    ctx->pc = 0x351510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
    // 0x351514: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x351514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x351518: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x351518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x35151c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x35151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x351520: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x351520u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x351524: 0xa61007  srav        $v0, $a2, $a1
    ctx->pc = 0x351524u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
    // 0x351528: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35152c: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x35152cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x351530: 0x5460011e  bnel        $v1, $zero, . + 4 + (0x11E << 2)
    ctx->pc = 0x351530u;
    {
        const bool branch_taken_0x351530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x351530) {
            ctx->pc = 0x351534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351530u;
            // 0x351534: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3519ACu;
            goto label_3519ac;
        }
    }
    ctx->pc = 0x351538u;
    // 0x351538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35153c: 0xa31004  sllv        $v0, $v1, $a1
    ctx->pc = 0x35153cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x351540: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x351540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x351544: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x351548: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x351548u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x35154c: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x35154cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x351550: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x351550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x351554: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x351554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x351558: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x351558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35155c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x35155cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x351560: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x351560u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x351564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x351564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x351568: 0x14400110  bnez        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x351568u;
    {
        const bool branch_taken_0x351568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351568u;
        // 0x35156c: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351568) {
            ctx->pc = 0x3519ACu;
            goto label_3519ac;
        }
    }
    ctx->pc = 0x351570u;
    // 0x351570: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x351570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x351574: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x351574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351578: 0xc0d414e  jal         func_350538
    ctx->pc = 0x351578u;
    SET_GPR_U32(ctx, 31, 0x351580u);
    ctx->pc = 0x35157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351578u;
    // 0x35157c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350538u, 0x351578u, 0x351580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351580u;
label_351580:
    // 0x351580: 0x1040010a  beqz        $v0, . + 4 + (0x10A << 2)
    ctx->pc = 0x351580u;
    {
        const bool branch_taken_0x351580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351580u;
        // 0x351584: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351580) {
            ctx->pc = 0x3519ACu;
            goto label_3519ac;
        }
    }
    ctx->pc = 0x351588u;
    // 0x351588: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x351588u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35158c: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x35158cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x351590: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x351590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x351594: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x351594u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x351598: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x351598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x35159c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x35159cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3515a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3515a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3515a4: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x3515a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3515a8: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x3515a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3515ac: 0x459021  addu        $s2, $v0, $a1
    ctx->pc = 0x3515acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3515b0: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x3515b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3515b4: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x3515b4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3515b8: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3515b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3515bc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3515bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3515c0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x3515c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3515c4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x3515c4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3515c8: 0x4be112ac  vsub.xyzw   $vf10, $vf2, $vf1
    ctx->pc = 0x3515c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3515cc: 0x4be11aec  vsub.xyzw   $vf11, $vf3, $vf1
    ctx->pc = 0x3515ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = PS2_VBLEND(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3515d0: 0x4bcb52fe  vopmula.xyz $ACC, $vf10, $vf11
    ctx->pc = 0x3515d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3515d4: 0x4bca5b2e  vopmsub.xyz $vf12, $vf11, $vf10
    ctx->pc = 0x3515d4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3515d8: 0x4bcc636a  vmul.xyz    $vf13, $vf12, $vf12
    ctx->pc = 0x3515d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3515dc: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x3515dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3515e0: 0x4b0d6b41  vaddy.x     $vf13, $vf13, $vf13y
    ctx->pc = 0x3515e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3515e4: 0x4b0d6b42  vaddz.x     $vf13, $vf13, $vf13z
    ctx->pc = 0x3515e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x3515e8: 0x4bc162aa  vmul.xyz    $vf10, $vf12, $vf1
    ctx->pc = 0x3515e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3515ec: 0x4a6d03be  vrsqrt      $Q, $vf0w, $vf13x
    ctx->pc = 0x3515ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x3515f0: 0x4a2a6300  vaddx.w     $vf12, $vf12, $vf10x
    ctx->pc = 0x3515f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3515f4: 0x4a2a6301  vaddy.w     $vf12, $vf12, $vf10y
    ctx->pc = 0x3515f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3515f8: 0x4a2a6302  vaddz.w     $vf12, $vf12, $vf10z
    ctx->pc = 0x3515f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3515fc: 0x4a0003bf  vwaitq
    ctx->pc = 0x3515fcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x351600: 0x4be0631c  vmulq.xyzw  $vf12, $vf12, $Q
    ctx->pc = 0x351600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x351604: 0x48236000  qmfc2.ni    $v1, $vf12
    ctx->pc = 0x351604u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x351608: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x351608u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x35160c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x35160cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351610: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x351610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351614: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x351614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351618: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x351618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35161c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x35161cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x351620: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x351620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x351624: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x351624u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351628: 0x0  nop
    ctx->pc = 0x351628u;
    // NOP
    // 0x35162c: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x35162cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x351630: 0x0  nop
    ctx->pc = 0x351630u;
    // NOP
    // 0x351634: 0x450100dc  bc1t        . + 4 + (0xDC << 2)
    ctx->pc = 0x351634u;
    {
        const bool branch_taken_0x351634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x351638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351634u;
        // 0x351638: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351634) {
            ctx->pc = 0x3519A8u;
            goto label_3519a8;
        }
    }
    ctx->pc = 0x35163Cu;
    // 0x35163c: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x35163cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x351640: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x351640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x351644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x351644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x351648: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x351648u;
    SET_GPR_U32(ctx, 31, 0x351650u);
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x351648u, 0x351650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351650u;
label_351650:
    // 0x351650: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x351650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x351654: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x351654u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x351658: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x351658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35165c: 0x0  nop
    ctx->pc = 0x35165cu;
    // NOP
    // 0x351660: 0x450100d2  bc1t        . + 4 + (0xD2 << 2)
    ctx->pc = 0x351660u;
    {
        const bool branch_taken_0x351660 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x351664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351660u;
        // 0x351664: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351660) {
            ctx->pc = 0x3519ACu;
            goto label_3519ac;
        }
    }
    ctx->pc = 0x351668u;
    // 0x351668: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x351668u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35166c: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x35166cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351670: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x351670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351674: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x351674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x351678: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x351678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35167c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x35167cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351680: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x351680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351684: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x351684u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x351688: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x351688u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35168c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x35168cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x351690: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x351690u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x351694: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x351694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x351698: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x351698u;
    {
        const bool branch_taken_0x351698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351698u;
        // 0x35169c: 0x46010041  sub.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x351698) {
            ctx->pc = 0x3516D0u;
            goto label_3516d0;
        }
    }
    ctx->pc = 0x3516A0u;
    // 0x3516a0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x3516a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3516a4: 0x0  nop
    ctx->pc = 0x3516a4u;
    // NOP
    // 0x3516a8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3516A8u;
    {
        const bool branch_taken_0x3516a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3516a8) {
            ctx->pc = 0x3516D4u;
            goto label_3516d4;
        }
    }
    ctx->pc = 0x3516B0u;
    // 0x3516b0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3516b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x3516b4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3516b4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3516b8: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x3516b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3516bc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3516bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3516c0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x3516c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3516c4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3516c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3516c8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3516c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x3516cc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3516ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3516d0:
    // 0x3516d0: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x3516d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3516d4:
    // 0x3516d4: 0x0  nop
    ctx->pc = 0x3516d4u;
    // NOP
    // 0x3516d8: 0x450100b4  bc1t        . + 4 + (0xB4 << 2)
    ctx->pc = 0x3516D8u;
    {
        const bool branch_taken_0x3516d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3516DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516D8u;
        // 0x3516dc: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516d8) {
            ctx->pc = 0x3519ACu;
            goto label_3519ac;
        }
    }
    ctx->pc = 0x3516E0u;
    // 0x3516e0: 0x4601b081  sub.s       $f2, $f22, $f1
    ctx->pc = 0x3516e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x3516e4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x3516e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x3516e8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3516e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3516ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3516ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3516f0: 0x0  nop
    ctx->pc = 0x3516f0u;
    // NOP
    // 0x3516f4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3516f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3516f8: 0x0  nop
    ctx->pc = 0x3516f8u;
    // NOP
    // 0x3516fc: 0x450000aa  bc1f        . + 4 + (0xAA << 2)
    ctx->pc = 0x3516FCu;
    {
        const bool branch_taken_0x3516fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x351700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3516FCu;
        // 0x351700: 0x7ba60010  lq          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516fc) {
            ctx->pc = 0x3519A8u;
            goto label_3519a8;
        }
    }
    ctx->pc = 0x351704u;
    // 0x351704: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x351704u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351708: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x351708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x35170c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x35170cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x351710: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x351710u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351714: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x351714u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x351718: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x351718u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35171c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x35171cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x351720: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x351720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x351724: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x351724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x351728: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x351728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35172c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x35172cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351730: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x351730u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x351734: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351734u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351738: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x351738u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x35173c: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x35173cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351740: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x351740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x351744: 0x7fa80020  sq          $t0, 0x20($sp)
    ctx->pc = 0x351744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 8));
    // 0x351748: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x351748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    // 0x35174c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x35174cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x351750: 0x7a440000  lq          $a0, 0x0($s2)
    ctx->pc = 0x351750u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x351754: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x351754u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351758: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x351758u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x35175c: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x35175cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351760: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x351760u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x351764: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x351764u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351768: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x351768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x35176c: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x35176cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x351770: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x351770u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x351774: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x351774u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351778: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x351778u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x35177c: 0x7fa40070  sq          $a0, 0x70($sp)
    ctx->pc = 0x35177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 4));
    // 0x351780: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x351780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x351784: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x351784u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x351788: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x351788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x35178c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x35178cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351790: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x351790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351794: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x351794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351798: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x351798u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x35179c: 0x7fa40060  sq          $a0, 0x60($sp)
    ctx->pc = 0x35179cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 4));
    // 0x3517a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3517a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3517a4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3517a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3517a8: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x3517a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3517ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3517acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3517b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3517b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3517b4: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3517b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3517b8: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3517b8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3517bc: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x3517bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3517c0: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3517c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
    // 0x3517c4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3517c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3517c8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x3517c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x3517cc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3517ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3517d0: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x3517d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3517d4: 0x48271000  qmfc2.ni    $a3, $vf2
    ctx->pc = 0x3517d4u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3517d8: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3517d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x3517dc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3517dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x3517e0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3517e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3517e4: 0x7a240000  lq          $a0, 0x0($s1)
    ctx->pc = 0x3517e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3517e8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3517e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x3517ec: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3517ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3517f0: 0x4bc208ac  vsub.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x3517f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3517f4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x3517f4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x3517f8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x3517f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x3517fc: 0x7fa50060  sq          $a1, 0x60($sp)
    ctx->pc = 0x3517fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 5));
    // 0x351800: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x351800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x351804: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x351804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x351808: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x351808u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x35180c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x35180cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x351810: 0x4bc110ae  vopmsub.xyz $vf2, $vf2, $vf1
    ctx->pc = 0x351810u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351814: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x351814u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x351818: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x351818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x35181c: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x35181cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x351820: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x351820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x351824: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x351824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x351828: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x351828u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x35182c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x35182cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x351830: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x351830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351834: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x351834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351838: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x351838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35183c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x35183cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351840: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x351840u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x351844: 0x7fa70090  sq          $a3, 0x90($sp)
    ctx->pc = 0x351844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 7));
    // 0x351848: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x351848u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35184c: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x35184cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x351850: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x351850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x351854: 0x0  nop
    ctx->pc = 0x351854u;
    // NOP
    // 0x351858: 0x45000029  bc1f        . + 4 + (0x29 << 2)
    ctx->pc = 0x351858u;
    {
        const bool branch_taken_0x351858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351858u;
        // 0x35185c: 0x7fa30090  sq          $v1, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351858) {
            ctx->pc = 0x351900u;
            goto label_351900;
        }
    }
    ctx->pc = 0x351860u;
    // 0x351860: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x351860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x351864: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x351864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x351868: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x351868u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x35186c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x35186cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351870: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x351870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351874: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x351874u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351878: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x351878u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x35187c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x35187cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x351880: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x351880u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351884: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x351884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351888: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x351888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35188c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x35188cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351890: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x351890u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x351894: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x351894u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x351898: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x351898u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35189c: 0x0  nop
    ctx->pc = 0x35189cu;
    // NOP
    // 0x3518a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3518a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3518a4: 0x0  nop
    ctx->pc = 0x3518a4u;
    // NOP
    // 0x3518a8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x3518A8u;
    {
        const bool branch_taken_0x3518a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3518a8) {
            ctx->pc = 0x351900u;
            goto label_351900;
        }
    }
    ctx->pc = 0x3518B0u;
    // 0x3518b0: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x3518b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3518b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3518b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3518b8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x3518b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x3518bc: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3518bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3518c0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3518c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3518c4: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3518c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3518c8: 0x48261800  qmfc2.ni    $a2, $vf3
    ctx->pc = 0x3518c8u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3518cc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3518ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x3518d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3518d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3518d4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3518d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3518d8: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3518d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3518dc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3518dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x3518e0: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3518e0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x3518e4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3518e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3518e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3518e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3518ec: 0x0  nop
    ctx->pc = 0x3518ecu;
    // NOP
    // 0x3518f0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3518f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3518f4: 0x0  nop
    ctx->pc = 0x3518f4u;
    // NOP
    // 0x3518f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3518F8u;
    {
        const bool branch_taken_0x3518f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3518f8) {
            ctx->pc = 0x3518FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3518F8u;
            // 0x3518fc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351900u;
            goto label_351900;
        }
    }
    ctx->pc = 0x351900u;
label_351900:
    // 0x351900: 0x1120002a  beqz        $t1, . + 4 + (0x2A << 2)
    ctx->pc = 0x351900u;
    {
        const bool branch_taken_0x351900 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x351904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351900u;
        // 0x351904: 0x8fa600c0  lw          $a2, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351900) {
            ctx->pc = 0x3519ACu;
            goto label_3519ac;
        }
    }
    ctx->pc = 0x351908u;
    // 0x351908: 0x12e0000f  beqz        $s7, . + 4 + (0xF << 2)
    ctx->pc = 0x351908u;
    {
        const bool branch_taken_0x351908 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x35190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351908u;
        // 0x35190c: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351908) {
            ctx->pc = 0x351948u;
            goto label_351948;
        }
    }
    ctx->pc = 0x351910u;
    // 0x351910: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x351910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x351914: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x351914u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351918: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x351918u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x35191c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x35191cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351920: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x351920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x351924: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x351924u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x351928: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x351928u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35192c: 0x0  nop
    ctx->pc = 0x35192cu;
    // NOP
    // 0x351930: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x351930u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x351934: 0x0  nop
    ctx->pc = 0x351934u;
    // NOP
    // 0x351938: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x351938u;
    {
        const bool branch_taken_0x351938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351938u;
        // 0x35193c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351938) {
            ctx->pc = 0x351948u;
            goto label_351948;
        }
    }
    ctx->pc = 0x351940u;
    // 0x351940: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x351940u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x351944: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x351944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_351948:
    // 0x351948: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x351948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35194c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x35194cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x351950: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x351950u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x351954: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x351954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351958: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x351958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x35195c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x35195cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x351960: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x351960u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x351964: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x351964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x351968: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x351968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x35196c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x35196cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x351970: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x351970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x351974: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x351974u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x351978: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x351978u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x35197c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x35197cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x351980: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x351980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x351984: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x351984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x351988: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x351988u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x35198c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x35198cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x351990: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x351990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x351994: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x351994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x351998: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x351998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x35199c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3519a0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3519a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x3519a4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x3519a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_3519a8:
    // 0x3519a8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3519a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3519ac:
    // 0x3519ac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3519acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3519b0: 0x2c6102b  sltu        $v0, $s6, $a2
    ctx->pc = 0x3519b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3519b4: 0x1440fed4  bnez        $v0, . + 4 + (-0x12C << 2)
    ctx->pc = 0x3519B4u;
    {
        const bool branch_taken_0x3519b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3519B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519B4u;
        // 0x3519b8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3519b4) {
            ctx->pc = 0x351508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_351508;
        }
    }
    ctx->pc = 0x3519BCu;
label_3519bc:
    // 0x3519bc: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x3519bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3519c0: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x3519c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3519c4: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x3519c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3519c8: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x3519c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3519cc: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x3519ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3519d0: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x3519d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3519d4: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x3519d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3519d8: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x3519d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3519dc: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x3519dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3519e0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x3519e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3519e4: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x3519e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3519e8: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x3519e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3519ec: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x3519ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3519f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3519F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3519F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3519F0u;
        // 0x3519f4: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3519F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3519F8u;
}
