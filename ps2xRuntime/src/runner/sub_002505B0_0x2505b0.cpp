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

// Function: sub_002505B0
// Address: 0x2505b0 - 0x250708
void sub_002505B0_0x2505b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002505B0_0x2505b0");
#endif

    switch (ctx->pc) {
        case 0x250620u: goto label_250620;
        case 0x250640u: goto label_250640;
        case 0x250678u: goto label_250678;
        default: break;
    }

    ctx->pc = 0x2505b0u;

    // 0x2505b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2505b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2505b4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2505b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x2505b8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2505b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2505bc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2505bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2505c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2505c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2505c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2505c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505c8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2505c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2505cc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2505ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2505d0: 0x8c51a234  lw          $s1, -0x5DCC($v0)
    ctx->pc = 0x2505d0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x6CA234u));
    // 0x2505d4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2505d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2505d8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2505d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2505dc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2505dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2505e0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2505e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2505e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2505e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2505e8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2505e8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2505ec: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2505ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x2505f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2505f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2505f4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2505F4u;
    {
        const bool branch_taken_0x2505f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2505F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505F4u;
        // 0x2505f8: 0xe7b50098  swc1        $f21, 0x98($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505f4) {
            ctx->pc = 0x250604u;
            goto label_250604;
        }
    }
    ctx->pc = 0x2505FCu;
    // 0x2505fc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2505FCu;
    {
        const bool branch_taken_0x2505fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2505FCu;
        // 0x250600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2505fc) {
            ctx->pc = 0x2506D4u;
            goto label_2506d4;
        }
    }
    ctx->pc = 0x250604u;
label_250604:
    // 0x250604: 0x3c16006d  lui         $s6, 0x6D
    ctx->pc = 0x250604u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)109 << 16));
    // 0x250608: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x250608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x25060c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x25060cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x250610: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x250610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x250614: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x250614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250618: 0x86300000  lh          $s0, 0x0($s1)
    ctx->pc = 0x250618u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25061c: 0x0  nop
    ctx->pc = 0x25061cu;
    // NOP
label_250620:
    // 0x250620: 0x1a000021  blez        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x250620u;
    {
        const bool branch_taken_0x250620 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x250620) {
            ctx->pc = 0x2506A8u;
            goto label_2506a8;
        }
    }
    ctx->pc = 0x250628u;
    // 0x250628: 0x3c013e38  lui         $at, 0x3E38
    ctx->pc = 0x250628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15928 << 16));
    // 0x25062c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x25062cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x250630: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x250630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x250634: 0x26b2a240  addiu       $s2, $s5, -0x5DC0
    ctx->pc = 0x250634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4294943296));
    // 0x250638: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x250638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25063c: 0x0  nop
    ctx->pc = 0x25063cu;
    // NOP
label_250640:
    // 0x250640: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x250640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x250644: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x250644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x250648: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x250648u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25064c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x25064cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x250650: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x250650u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x250654: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x250654u;
    {
        const bool branch_taken_0x250654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x250654) {
            ctx->pc = 0x250658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250654u;
            // 0x250658: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25065Cu;
            goto label_25065c;
        }
    }
    ctx->pc = 0x25065Cu;
label_25065c:
    // 0x25065c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x25065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x250660: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x250660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250664: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x250664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250668: 0x3010  mfhi        $a2
    ctx->pc = 0x250668u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x25066c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x25066cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x250670: 0xc0940e6  jal         func_250398
    ctx->pc = 0x250670u;
    SET_GPR_U32(ctx, 31, 0x250678u);
    ctx->pc = 0x250674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250670u;
    // 0x250674: 0x1063021  addu        $a2, $t0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250398u, 0x250670u, 0x250678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250678u;
label_250678:
    // 0x250678: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x250678u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25067c: 0x0  nop
    ctx->pc = 0x25067cu;
    // NOP
    // 0x250680: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x250680u;
    {
        const bool branch_taken_0x250680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x250680) {
            ctx->pc = 0x2506A0u;
            goto label_2506a0;
        }
    }
    ctx->pc = 0x250688u;
    // 0x250688: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x250688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25068c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x25068cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250690: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x250690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250694: 0x0  nop
    ctx->pc = 0x250694u;
    // NOP
    // 0x250698: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x250698u;
    {
        const bool branch_taken_0x250698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250698u;
        // 0x25069c: 0x7e420000  sq          $v0, 0x0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250698) {
            ctx->pc = 0x2506A8u;
            goto label_2506a8;
        }
    }
    ctx->pc = 0x2506A0u;
label_2506a0:
    // 0x2506a0: 0x5e00ffe7  bgtzl       $s0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2506A0u;
    {
        const bool branch_taken_0x2506a0 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2506a0) {
            ctx->pc = 0x2506A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2506A0u;
            // 0x2506a4: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250640;
        }
    }
    ctx->pc = 0x2506A8u;
label_2506a8:
    // 0x2506a8: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x2506a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2506ac: 0x0  nop
    ctx->pc = 0x2506acu;
    // NOP
    // 0x2506b0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2506B0u;
    {
        const bool branch_taken_0x2506b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2506B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2506B0u;
        // 0x2506b4: 0x26c4a240  addiu       $a0, $s6, -0x5DC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2506b0) {
            ctx->pc = 0x2506C8u;
            goto label_2506c8;
        }
    }
    ctx->pc = 0x2506B8u;
    // 0x2506b8: 0x8e310020  lw          $s1, 0x20($s1)
    ctx->pc = 0x2506b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2506bc: 0x5620ffd8  bnel        $s1, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2506BCu;
    {
        const bool branch_taken_0x2506bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2506bc) {
            ctx->pc = 0x2506C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2506BCu;
            // 0x2506c0: 0x86300000  lh          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250620;
        }
    }
    ctx->pc = 0x2506C4u;
    // 0x2506c4: 0x26c4a240  addiu       $a0, $s6, -0x5DC0
    ctx->pc = 0x2506c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294943296));
label_2506c8:
    // 0x2506c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2506c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2506cc: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x2506ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2506d0: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x2506d0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
label_2506d4:
    // 0x2506d4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2506d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2506d8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2506d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2506dc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2506dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2506e0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2506e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2506e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2506e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2506e8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2506e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2506ec: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2506ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2506f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2506f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2506f4: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2506f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2506f8: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2506f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2506fc: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2506fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x250700: 0x3e00008  jr          $ra
    ctx->pc = 0x250700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250700u;
        // 0x250704: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250708u;
}
