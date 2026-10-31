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

// Function: sub_00417910
// Address: 0x417910 - 0x417a60
void sub_00417910_0x417910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417910_0x417910");
#endif

    switch (ctx->pc) {
        case 0x417958u: goto label_417958;
        case 0x417978u: goto label_417978;
        case 0x417980u: goto label_417980;
        case 0x4179a4u: goto label_4179a4;
        case 0x4179b0u: goto label_4179b0;
        case 0x4179d0u: goto label_4179d0;
        case 0x4179dcu: goto label_4179dc;
        case 0x4179e8u: goto label_4179e8;
        case 0x417a18u: goto label_417a18;
        default: break;
    }

    ctx->pc = 0x417910u;

    // 0x417910: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x417910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x417914: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x417914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x417918: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x417918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x41791c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x41791cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417920: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x417920u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x417924: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x417924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417928: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x417928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x41792c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x41792cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x417930: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x417930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x417934: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x417934u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x417938: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x417938u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41793c: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x41793cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x417940: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x417940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417944: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x417944u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x417948: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x417948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x41794c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x417950: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x417950u;
    SET_GPR_U32(ctx, 31, 0x417958u);
    ctx->pc = 0x417954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417950u;
    // 0x417954: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x417950u, 0x417958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417958u;
label_417958:
    // 0x417958: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x417958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x41795c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x41795cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x417960: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x417960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x417964: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x417964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x417968: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x417968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x41796c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x41796cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x417970: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x417970u;
    {
        const bool branch_taken_0x417970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x417974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417970u;
        // 0x417974: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x417970) {
            ctx->pc = 0x417A10u;
            goto label_417a10;
        }
    }
    ctx->pc = 0x417978u;
label_417978:
    // 0x417978: 0xc105774  jal         func_415DD0
    ctx->pc = 0x417978u;
    SET_GPR_U32(ctx, 31, 0x417980u);
    ctx->pc = 0x41797Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x417978u;
    // 0x41797c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415DD0u, 0x417978u, 0x417980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417980u;
label_417980:
    // 0x417980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417984: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x417984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x417988: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x417988u;
    {
        const bool branch_taken_0x417988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417988) {
            ctx->pc = 0x41798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417988u;
            // 0x41798c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417A10u;
            goto label_417a10;
        }
    }
    ctx->pc = 0x417990u;
    // 0x417990: 0x960200d0  lhu         $v0, 0xD0($s0)
    ctx->pc = 0x417990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x417994: 0x5454001e  bnel        $v0, $s4, . + 4 + (0x1E << 2)
    ctx->pc = 0x417994u;
    {
        const bool branch_taken_0x417994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x417994) {
            ctx->pc = 0x417998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x417994u;
            // 0x417998: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417A10u;
            goto label_417a10;
        }
    }
    ctx->pc = 0x41799Cu;
    // 0x41799c: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x41799Cu;
    SET_GPR_U32(ctx, 31, 0x4179A4u);
    ctx->pc = 0x4179A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41799Cu;
    // 0x4179a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x41799Cu, 0x4179A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4179A4u;
label_4179a4:
    // 0x4179a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4179a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4179a8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x4179A8u;
    SET_GPR_U32(ctx, 31, 0x4179B0u);
    ctx->pc = 0x4179ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4179A8u;
    // 0x4179ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x4179A8u, 0x4179B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4179B0u;
label_4179b0:
    // 0x4179b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4179b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4179b4: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x4179b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x4179b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x4179b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4179bc: 0x0  nop
    ctx->pc = 0x4179bcu;
    // NOP
    // 0x4179c0: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
    ctx->pc = 0x4179C0u;
    {
        const bool branch_taken_0x4179c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4179c0) {
            ctx->pc = 0x4179C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4179C0u;
            // 0x4179c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x417A10u;
            goto label_417a10;
        }
    }
    ctx->pc = 0x4179C8u;
    // 0x4179c8: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x4179C8u;
    SET_GPR_U32(ctx, 31, 0x4179D0u);
    ctx->pc = 0x4179CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4179C8u;
    // 0x4179cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x4179C8u, 0x4179D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4179D0u;
label_4179d0:
    // 0x4179d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4179d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4179d4: 0xc0cd780  jal         func_335E00
    ctx->pc = 0x4179D4u;
    SET_GPR_U32(ctx, 31, 0x4179DCu);
    ctx->pc = 0x4179D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4179D4u;
    // 0x4179d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x4179D4u, 0x4179DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4179DCu;
label_4179dc:
    // 0x4179dc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x4179dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x4179e0: 0xc0cdd2e  jal         func_3374B8
    ctx->pc = 0x4179E0u;
    SET_GPR_U32(ctx, 31, 0x4179E8u);
    ctx->pc = 0x4179E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4179E0u;
    // 0x4179e4: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x4179E0u, 0x4179E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4179E8u;
label_4179e8:
    // 0x4179e8: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x4179e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4179ec: 0x0  nop
    ctx->pc = 0x4179ecu;
    // NOP
    // 0x4179f0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x4179F0u;
    {
        const bool branch_taken_0x4179f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4179F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4179F0u;
        // 0x4179f4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4179f0) {
            ctx->pc = 0x417A10u;
            goto label_417a10;
        }
    }
    ctx->pc = 0x4179F8u;
    // 0x4179f8: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x4179f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4179fc: 0x0  nop
    ctx->pc = 0x4179fcu;
    // NOP
    // 0x417a00: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x417A00u;
    {
        const bool branch_taken_0x417a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x417a00) {
            ctx->pc = 0x417A10u;
            goto label_417a10;
        }
    }
    ctx->pc = 0x417A08u;
    // 0x417a08: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x417a08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x417a0c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x417a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417a10:
    // 0x417a10: 0xc10574c  jal         func_415D30
    ctx->pc = 0x417A10u;
    SET_GPR_U32(ctx, 31, 0x417A18u);
    ctx->pc = 0x415D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D30u, 0x417A10u, 0x417A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417A18u;
label_417a18:
    // 0x417a18: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x417a18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x417a1c: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x417A1Cu;
    {
        const bool branch_taken_0x417a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A1Cu;
        // 0x417a20: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417a1c) {
            ctx->pc = 0x417978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_417978;
        }
    }
    ctx->pc = 0x417A24u;
    // 0x417a24: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x417a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x417a28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x417a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x417a2c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x417a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x417a30: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x417a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417a34: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x417a34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417a38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417a3c: 0xc7b80080  lwc1        $f24, 0x80($sp)
    ctx->pc = 0x417a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x417a40: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x417a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x417a44: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x417a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x417a48: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x417a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x417a4c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x417a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x417a50: 0x3e00008  jr          $ra
    ctx->pc = 0x417A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417A50u;
        // 0x417a54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417A58u;
    // 0x417a58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x417a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x417a5c: 0x0  nop
    ctx->pc = 0x417a5cu;
    // NOP
    ctx->pc = 0x417a60u;
}
