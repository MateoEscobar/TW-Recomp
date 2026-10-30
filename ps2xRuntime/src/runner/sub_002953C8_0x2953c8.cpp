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

// Function: sub_002953C8
// Address: 0x2953c8 - 0x295538
void sub_002953C8_0x2953c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002953C8_0x2953c8");
#endif

    switch (ctx->pc) {
        case 0x295418u: goto label_295418;
        case 0x295420u: goto label_295420;
        case 0x295448u: goto label_295448;
        case 0x295450u: goto label_295450;
        case 0x295484u: goto label_295484;
        case 0x295490u: goto label_295490;
        default: break;
    }

    ctx->pc = 0x2953c8u;

    // 0x2953c8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2953c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2953cc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2953ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2953d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2953d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2953d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2953d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2953d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x2953dc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2953dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2953e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2953e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2953e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2953e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2953e8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2953e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2953ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2953ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2953f0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2953f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2953f4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2953f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x2953f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2953f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2953fc: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2953fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x295400: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x295400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x295404: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x295404u;
    {
        const bool branch_taken_0x295404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295404u;
        // 0x295408: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295404) {
            ctx->pc = 0x2954FCu;
            goto label_2954fc;
        }
    }
    ctx->pc = 0x29540Cu;
    // 0x29540c: 0x266201b4  addiu       $v0, $s3, 0x1B4
    ctx->pc = 0x29540cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x295410: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x295410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x295414: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x295414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_295418:
    // 0x295418: 0xc0a584c  jal         func_296130
    ctx->pc = 0x295418u;
    SET_GPR_U32(ctx, 31, 0x295420u);
    ctx->pc = 0x29541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295418u;
    // 0x29541c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296130u, 0x295418u, 0x295420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295420u;
label_295420:
    // 0x295420: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x295420u;
    {
        const bool branch_taken_0x295420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295420u;
        // 0x295424: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295420) {
            ctx->pc = 0x2954E8u;
            goto label_2954e8;
        }
    }
    ctx->pc = 0x295428u;
    // 0x295428: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x295428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x29542c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x29542cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x295430: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x295430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x295434: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x295434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295438: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x295438u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29543c: 0x245e4b00  addiu       $fp, $v0, 0x4B00
    ctx->pc = 0x29543cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x295440: 0x267201b4  addiu       $s2, $s3, 0x1B4
    ctx->pc = 0x295440u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 436));
    // 0x295444: 0x267101b0  addiu       $s1, $s3, 0x1B0
    ctx->pc = 0x295444u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 432));
label_295448:
    // 0x295448: 0xc0e409a  jal         func_390268
    ctx->pc = 0x295448u;
    SET_GPR_U32(ctx, 31, 0x295450u);
    ctx->pc = 0x29544Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295448u;
    // 0x29544c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x295448u, 0x295450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295450u;
label_295450:
    // 0x295450: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295454: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x295454u;
    {
        const bool branch_taken_0x295454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x295454) {
            ctx->pc = 0x295458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295454u;
            // 0x295458: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2954ACu;
            goto label_2954ac;
        }
    }
    ctx->pc = 0x29545Cu;
    // 0x29545c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x29545cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x295460: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x295460u;
    {
        const bool branch_taken_0x295460 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x295460) {
            ctx->pc = 0x295464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295460u;
            // 0x295464: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2954ACu;
            goto label_2954ac;
        }
    }
    ctx->pc = 0x295468u;
    // 0x295468: 0x84700092  lh          $s0, 0x92($v1)
    ctx->pc = 0x295468u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
    // 0x29546c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29546cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295470: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x295470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295474: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x295474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295478: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x295478u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x29547c: 0xc0a5904  jal         func_296410
    ctx->pc = 0x29547Cu;
    SET_GPR_U32(ctx, 31, 0x295484u);
    ctx->pc = 0x295480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29547Cu;
    // 0x295480: 0x21e8021  addu        $s0, $s0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x29547Cu, 0x295484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295484u;
label_295484:
    // 0x295484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295488: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x295488u;
    SET_GPR_U32(ctx, 31, 0x295490u);
    ctx->pc = 0x29548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295488u;
    // 0x29548c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x295488u, 0x295490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295490u;
label_295490:
    // 0x295490: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x295490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x295494: 0x0  nop
    ctx->pc = 0x295494u;
    // NOP
    // 0x295498: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x295498u;
    {
        const bool branch_taken_0x295498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x295498) {
            ctx->pc = 0x29549Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295498u;
            // 0x29549c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2954ACu;
            goto label_2954ac;
        }
    }
    ctx->pc = 0x2954A0u;
    // 0x2954a0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2954a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2954a4: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x2954a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2954a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2954a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2954ac:
    // 0x2954ac: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x2954acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2954b0: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x2954b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x2954b4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2954B4u;
    {
        const bool branch_taken_0x2954b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2954B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954B4u;
        // 0x2954b8: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954b4) {
            ctx->pc = 0x295448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295448;
        }
    }
    ctx->pc = 0x2954BCu;
    // 0x2954bc: 0x6c0000a  bltz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x2954BCu;
    {
        const bool branch_taken_0x2954bc = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x2954C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954BCu;
        // 0x2954c0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954bc) {
            ctx->pc = 0x2954E8u;
            goto label_2954e8;
        }
    }
    ctx->pc = 0x2954C4u;
    // 0x2954c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2954c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2954c8: 0x400013  mtlo        $v0
    ctx->pc = 0x2954c8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2954cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2954ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2954d0: 0x72c21800  madd        $v1, $s6, $v0
    ctx->pc = 0x2954d0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2954d4: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x2954d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x2954d8: 0x92620272  lbu         $v0, 0x272($s3)
    ctx->pc = 0x2954d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 626)));
    // 0x2954dc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x2954dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2954e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2954E0u;
    {
        const bool branch_taken_0x2954e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2954E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954E0u;
        // 0x2954e4: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954e0) {
            ctx->pc = 0x295500u;
            goto label_295500;
        }
    }
    ctx->pc = 0x2954E8u;
label_2954e8:
    // 0x2954e8: 0x92620271  lbu         $v0, 0x271($s3)
    ctx->pc = 0x2954e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 625)));
    // 0x2954ec: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2954ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2954f0: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x2954f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2954f4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2954F4u;
    {
        const bool branch_taken_0x2954f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2954F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954F4u;
        // 0x2954f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2954f4) {
            ctx->pc = 0x295418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295418;
        }
    }
    ctx->pc = 0x2954FCu;
label_2954fc:
    // 0x2954fc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2954fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_295500:
    // 0x295500: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x295500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x295504: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x295504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x295508: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x295508u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29550c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29550cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x295510: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x295510u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x295514: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x295514u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x295518: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x295518u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29551c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x29551cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x295520: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x295520u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295524: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x295524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x295528: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x295528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29552c: 0x3e00008  jr          $ra
    ctx->pc = 0x29552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29552Cu;
        // 0x295530: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29552Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295534u;
    // 0x295534: 0x0  nop
    ctx->pc = 0x295534u;
    // NOP
    ctx->pc = 0x295538u;
}
