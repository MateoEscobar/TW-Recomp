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

// Function: sub_002C4170
// Address: 0x2c4170 - 0x2c4338
void sub_002C4170_0x2c4170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4170_0x2c4170");
#endif

    switch (ctx->pc) {
        case 0x2c41a8u: goto label_2c41a8;
        case 0x2c41b8u: goto label_2c41b8;
        case 0x2c41d0u: goto label_2c41d0;
        case 0x2c41ecu: goto label_2c41ec;
        case 0x2c4248u: goto label_2c4248;
        case 0x2c426cu: goto label_2c426c;
        case 0x2c4278u: goto label_2c4278;
        case 0x2c42c8u: goto label_2c42c8;
        case 0x2c42f0u: goto label_2c42f0;
        default: break;
    }

    ctx->pc = 0x2c4170u;

    // 0x2c4170: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c4170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c4174: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2c4174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2c4178: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c4178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2c417c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c417cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4180: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c4184: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2c4184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c4188: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2c4188u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2c418c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2c418cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2c4190: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2c4190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2c4194: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2c4194u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4198: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2c4198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c419c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x2c419cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c41a0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2C41A0u;
    SET_GPR_U32(ctx, 31, 0x2C41A8u);
    ctx->pc = 0x2C41A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41A0u;
    // 0x2c41a4: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2C41A0u, 0x2C41A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41A8u;
label_2c41a8:
    // 0x2c41a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c41a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c41acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41b0: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2C41B0u;
    SET_GPR_U32(ctx, 31, 0x2C41B8u);
    ctx->pc = 0x2C41B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41B0u;
    // 0x2c41b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2C41B0u, 0x2C41B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41B8u;
label_2c41b8:
    // 0x2c41b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c41b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41bc: 0x12000045  beqz        $s0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2C41BCu;
    {
        const bool branch_taken_0x2c41bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41BCu;
        // 0x2c41c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41bc) {
            ctx->pc = 0x2C42D4u;
            goto label_2c42d4;
        }
    }
    ctx->pc = 0x2C41C4u;
    // 0x2c41c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c41c8: 0xc0a3792  jal         func_28DE48
    ctx->pc = 0x2C41C8u;
    SET_GPR_U32(ctx, 31, 0x2C41D0u);
    ctx->pc = 0x2C41CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41C8u;
    // 0x2c41cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE48u, 0x2C41C8u, 0x2C41D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41D0u;
label_2c41d0:
    // 0x2c41d0: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2C41D0u;
    {
        const bool branch_taken_0x2c41d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41D0u;
        // 0x2c41d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41d0) {
            ctx->pc = 0x2C42D4u;
            goto label_2c42d4;
        }
    }
    ctx->pc = 0x2C41D8u;
    // 0x2c41d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c41d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c41dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c41e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c41e4: 0xc0888a2  jal         func_222288
    ctx->pc = 0x2C41E4u;
    SET_GPR_U32(ctx, 31, 0x2C41ECu);
    ctx->pc = 0x2C41E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C41E4u;
    // 0x2c41e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222288u, 0x2C41E4u, 0x2C41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C41ECu;
label_2c41ec:
    // 0x2c41ec: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2C41ECu;
    {
        const bool branch_taken_0x2c41ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C41F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C41ECu;
        // 0x2c41f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c41ec) {
            ctx->pc = 0x2C42D4u;
            goto label_2c42d4;
        }
    }
    ctx->pc = 0x2C41F4u;
    // 0x2c41f4: 0x26080090  addiu       $t0, $s0, 0x90
    ctx->pc = 0x2c41f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2c41f8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2c41f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2c41fc: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x2c41fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2c4200: 0x24704b00  addiu       $s0, $v1, 0x4B00
    ctx->pc = 0x2c4200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2c4204: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2c4204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2c4208: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c4208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2c420c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c420cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4210: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c4210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c4214: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2c4214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2c4218: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2c4218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2c421c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2c421cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2c4220: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c4224: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c4224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c4228: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2c4228u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c422c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c422cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4230: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c4230u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4234: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2c4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2c4238: 0x85040002  lh          $a0, 0x2($t0)
    ctx->pc = 0x2c4238u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2c423c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c423cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c4240: 0xc0a7cf2  jal         func_29F3C8
    ctx->pc = 0x2C4240u;
    SET_GPR_U32(ctx, 31, 0x2C4248u);
    ctx->pc = 0x2C4244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4240u;
    // 0x2c4244: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F3C8u, 0x2C4240u, 0x2C4248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4248u;
label_2c4248:
    // 0x2c4248: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c4248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c424c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C424Cu;
    {
        const bool branch_taken_0x2c424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C4250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C424Cu;
        // 0x2c4250: 0x86440092  lh          $a0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c424c) {
            ctx->pc = 0x2C425Cu;
            goto label_2c425c;
        }
    }
    ctx->pc = 0x2C4254u;
    // 0x2c4254: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c4254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c4258: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2c4258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2c425c:
    // 0x2c425c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c425cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4260: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2c4260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2c4264: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2C4264u;
    SET_GPR_U32(ctx, 31, 0x2C426Cu);
    ctx->pc = 0x2C4268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4264u;
    // 0x2c4268: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2C4264u, 0x2C426Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C426Cu;
label_2c426c:
    // 0x2c426c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c426cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c4270: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2C4270u;
    SET_GPR_U32(ctx, 31, 0x2C4278u);
    ctx->pc = 0x2C4274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4270u;
    // 0x2c4274: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2C4270u, 0x2C4278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4278u;
label_2c4278:
    // 0x2c4278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c4278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c427c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C427Cu;
    {
        const bool branch_taken_0x2c427c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C4280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C427Cu;
        // 0x2c4280: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c427c) {
            ctx->pc = 0x2C42CCu;
            goto label_2c42cc;
        }
    }
    ctx->pc = 0x2C4284u;
    // 0x2c4284: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2c4284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2c4288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c4288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c428c: 0x0  nop
    ctx->pc = 0x2c428cu;
    // NOP
    // 0x2c4290: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2c4290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4294: 0x0  nop
    ctx->pc = 0x2c4294u;
    // NOP
    // 0x2c4298: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C4298u;
    {
        const bool branch_taken_0x2c4298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4298u;
        // 0x2c429c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4298) {
            ctx->pc = 0x2C42A4u;
            goto label_2c42a4;
        }
    }
    ctx->pc = 0x2C42A0u;
    // 0x2c42a0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2c42a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c42a4:
    // 0x2c42a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2c42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2c42a8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2c42a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c42ac: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2c42acu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2c42b0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2c42b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2c42b4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c42b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c42b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c42bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42c0: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2C42C0u;
    SET_GPR_U32(ctx, 31, 0x2C42C8u);
    ctx->pc = 0x2C42C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C42C0u;
    // 0x2c42c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2C42C0u, 0x2C42C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42C8u;
label_2c42c8:
    // 0x2c42c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c42cc:
    // 0x2c42cc: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x2c42ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x2c42d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2c42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2c42d4:
    // 0x2c42d4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2c42d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2c42d8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2c42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2c42dc: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2c42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2c42e0: 0x2405007d  addiu       $a1, $zero, 0x7D
    ctx->pc = 0x2c42e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x2c42e4: 0x240600fa  addiu       $a2, $zero, 0xFA
    ctx->pc = 0x2c42e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x2c42e8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2C42E8u;
    SET_GPR_U32(ctx, 31, 0x2C42F0u);
    ctx->pc = 0x2C42ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C42E8u;
    // 0x2c42ec: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2C42E8u, 0x2C42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C42F0u;
label_2c42f0:
    // 0x2c42f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c42f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c42f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c42f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c42f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c42fc: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x2c42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
    // 0x2c4300: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x2c4300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x2c4304: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2c4304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c4308: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2c4308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c430c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2c430cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4310: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2c4310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x2c4314: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4318: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2c431c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2c431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c4320: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2c4320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2c4324: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2c4324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4328: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2c4328u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2c432c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C432Cu;
        // 0x2c4330: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4334u;
    // 0x2c4334: 0x0  nop
    ctx->pc = 0x2c4334u;
    // NOP
    ctx->pc = 0x2c4338u;
}
