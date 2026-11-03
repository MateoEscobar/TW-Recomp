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

// Function: sub_002978F8
// Address: 0x2978f8 - 0x297a58
void sub_002978F8_0x2978f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002978F8_0x2978f8");
#endif

    switch (ctx->pc) {
        case 0x29791cu: goto label_29791c;
        case 0x297928u: goto label_297928;
        case 0x297938u: goto label_297938;
        case 0x297948u: goto label_297948;
        case 0x297964u: goto label_297964;
        case 0x29797cu: goto label_29797c;
        case 0x297990u: goto label_297990;
        case 0x2979c4u: goto label_2979c4;
        case 0x2979f8u: goto label_2979f8;
        case 0x297a10u: goto label_297a10;
        case 0x297a3cu: goto label_297a3c;
        default: break;
    }

    ctx->pc = 0x2978f8u;

    // 0x2978f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2978f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2978fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2978fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x297900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297904: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x297904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x297908: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x297908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x29790c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x29790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x297910: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x297910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297914: 0xc0a5a72  jal         func_2969C8
    ctx->pc = 0x297914u;
    SET_GPR_U32(ctx, 31, 0x29791Cu);
    ctx->pc = 0x297918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297914u;
    // 0x297918: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969C8u, 0x297914u, 0x29791Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29791Cu;
label_29791c:
    // 0x29791c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x29791cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x297920: 0xc0a5df2  jal         func_2977C8
    ctx->pc = 0x297920u;
    SET_GPR_U32(ctx, 31, 0x297928u);
    ctx->pc = 0x297924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297920u;
    // 0x297924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2977C8u, 0x297920u, 0x297928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297928u;
label_297928:
    // 0x297928: 0x26120284  addiu       $s2, $s0, 0x284
    ctx->pc = 0x297928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x29792c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29792cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297930: 0xc0a5a74  jal         func_2969D0
    ctx->pc = 0x297930u;
    SET_GPR_U32(ctx, 31, 0x297938u);
    ctx->pc = 0x297934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297930u;
    // 0x297934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2969D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2969D0u, 0x297930u, 0x297938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297938u;
label_297938:
    // 0x297938: 0x10530041  beq         $v0, $s3, . + 4 + (0x41 << 2)
    ctx->pc = 0x297938u;
    {
        const bool branch_taken_0x297938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x29793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297938u;
        // 0x29793c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297938) {
            ctx->pc = 0x297A40u;
            goto label_297a40;
        }
    }
    ctx->pc = 0x297940u;
    // 0x297940: 0xc0a6488  jal         func_299220
    ctx->pc = 0x297940u;
    SET_GPR_U32(ctx, 31, 0x297948u);
    ctx->pc = 0x297944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297940u;
    // 0x297944: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299220u, 0x297940u, 0x297948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297948u;
label_297948:
    // 0x297948: 0x86230016  lh          $v1, 0x16($s1)
    ctx->pc = 0x297948u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x29794c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29794cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297950: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x297950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x297954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297958: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x297958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x29795c: 0xc0a5c72  jal         func_2971C8
    ctx->pc = 0x29795Cu;
    SET_GPR_U32(ctx, 31, 0x297964u);
    ctx->pc = 0x297960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29795Cu;
    // 0x297960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2971C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2971C8u, 0x29795Cu, 0x297964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297964u;
label_297964:
    // 0x297964: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x297964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297968: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x297968u;
    {
        const bool branch_taken_0x297968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297968u;
        // 0x29796c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297968) {
            ctx->pc = 0x297A00u;
            goto label_297a00;
        }
    }
    ctx->pc = 0x297970u;
    // 0x297970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x297970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297974: 0xc0a67b8  jal         func_299EE0
    ctx->pc = 0x297974u;
    SET_GPR_U32(ctx, 31, 0x29797Cu);
    ctx->pc = 0x297978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297974u;
    // 0x297978: 0x3c10006f  lui         $s0, 0x6F (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299EE0u, 0x297974u, 0x29797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29797Cu;
label_29797c:
    // 0x29797c: 0x1453000e  bne         $v0, $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x29797Cu;
    {
        const bool branch_taken_0x29797c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x297980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29797Cu;
        // 0x297980: 0x2604b880  addiu       $a0, $s0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29797c) {
            ctx->pc = 0x2979B8u;
            goto label_2979b8;
        }
    }
    ctx->pc = 0x297984u;
    // 0x297984: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x297984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x297988: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x297988u;
    SET_GPR_U32(ctx, 31, 0x297990u);
    ctx->pc = 0x29798Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297988u;
    // 0x29798c: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297988u, 0x297990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297990u;
label_297990:
    // 0x297990: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x297990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x297994: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x297994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x297998: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x297998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29799c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29799Cu;
    {
        const bool branch_taken_0x29799c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29799c) {
            ctx->pc = 0x2979A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29799Cu;
            // 0x2979a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2979A4u;
            goto label_2979a4;
        }
    }
    ctx->pc = 0x2979A4u;
label_2979a4:
    // 0x2979a4: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2979a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2979a8: 0x1012  mflo        $v0
    ctx->pc = 0x2979a8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2979ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2979acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2979b0: 0xa6220016  sh          $v0, 0x16($s1)
    ctx->pc = 0x2979b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x2979b4: 0x2604b880  addiu       $a0, $s0, -0x4780
    ctx->pc = 0x2979b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
label_2979b8:
    // 0x2979b8: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2979b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2979bc: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2979BCu;
    SET_GPR_U32(ctx, 31, 0x2979C4u);
    ctx->pc = 0x2979C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979BCu;
    // 0x2979c0: 0x24060bb8  addiu       $a2, $zero, 0xBB8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2979BCu, 0x2979C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979C4u;
label_2979c4:
    // 0x2979c4: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2979c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2979c8: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2979c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2979cc: 0x443018  mult        $a2, $v0, $a0
    ctx->pc = 0x2979ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2979d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2979D0u;
    {
        const bool branch_taken_0x2979d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2979d0) {
            ctx->pc = 0x2979D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2979D0u;
            // 0x2979d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2979D8u;
            goto label_2979d8;
        }
    }
    ctx->pc = 0x2979D8u;
label_2979d8:
    // 0x2979d8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2979d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2979dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2979dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979e0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2979e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2979e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2979e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2979e8: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2979e8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2979ec: 0x3012  mflo        $a2
    ctx->pc = 0x2979ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x2979f0: 0xc0a5bc2  jal         func_296F08
    ctx->pc = 0x2979F0u;
    SET_GPR_U32(ctx, 31, 0x2979F8u);
    ctx->pc = 0x2979F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979F0u;
    // 0x2979f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296F08u, 0x2979F0u, 0x2979F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979F8u;
label_2979f8:
    // 0x2979f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2979F8u;
    {
        const bool branch_taken_0x2979f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979F8u;
        // 0x2979fc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979f8) {
            ctx->pc = 0x297A40u;
            goto label_297a40;
        }
    }
    ctx->pc = 0x297A00u;
label_297a00:
    // 0x297a00: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x297a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x297a04: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x297a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x297a08: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x297A08u;
    SET_GPR_U32(ctx, 31, 0x297A10u);
    ctx->pc = 0x297A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A08u;
    // 0x297a0c: 0x240607d0  addiu       $a2, $zero, 0x7D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x297A08u, 0x297A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A10u;
label_297a10:
    // 0x297a10: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x297a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x297a14: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x297a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x297a18: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x297a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x297a1c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x297a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x297a20: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x297a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x297a24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x297A24u;
    {
        const bool branch_taken_0x297a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x297a24) {
            ctx->pc = 0x297A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297A24u;
            // 0x297a28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297A2Cu;
            goto label_297a2c;
        }
    }
    ctx->pc = 0x297A2Cu;
label_297a2c:
    // 0x297a2c: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x297a2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x297a30: 0x2812  mflo        $a1
    ctx->pc = 0x297a30u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x297a34: 0xc0a5bf2  jal         func_296FC8
    ctx->pc = 0x297A34u;
    SET_GPR_U32(ctx, 31, 0x297A3Cu);
    ctx->pc = 0x297A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A34u;
    // 0x297a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296FC8u, 0x297A34u, 0x297A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A3Cu;
label_297a3c:
    // 0x297a3c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x297a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_297a40:
    // 0x297a40: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x297a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297a44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x297a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297a48: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x297a48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297a4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297a50: 0x3e00008  jr          $ra
    ctx->pc = 0x297A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A50u;
        // 0x297a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297A58u;
}
