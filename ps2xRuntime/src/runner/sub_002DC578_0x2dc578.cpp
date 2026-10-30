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

// Function: sub_002DC578
// Address: 0x2dc578 - 0x2dc708
void sub_002DC578_0x2dc578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC578_0x2dc578");
#endif

    switch (ctx->pc) {
        case 0x2dc5a4u: goto label_2dc5a4;
        case 0x2dc5b8u: goto label_2dc5b8;
        case 0x2dc5ccu: goto label_2dc5cc;
        case 0x2dc5dcu: goto label_2dc5dc;
        case 0x2dc610u: goto label_2dc610;
        case 0x2dc670u: goto label_2dc670;
        case 0x2dc690u: goto label_2dc690;
        case 0x2dc6a8u: goto label_2dc6a8;
        case 0x2dc6e0u: goto label_2dc6e0;
        default: break;
    }

    ctx->pc = 0x2dc578u;

    // 0x2dc578: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2dc578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2dc57c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2dc57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2dc580: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2dc580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2dc584: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc588: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2dc588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2dc58c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dc58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2dc590: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2dc590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2dc594: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2dc594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc598: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc59c: 0xc088edc  jal         func_223B70
    ctx->pc = 0x2DC59Cu;
    SET_GPR_U32(ctx, 31, 0x2DC5A4u);
    ctx->pc = 0x2DC5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC59Cu;
    // 0x2dc5a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x2DC59Cu, 0x2DC5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5A4u;
label_2dc5a4:
    // 0x2dc5a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dc5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dc5a8: 0x5043004f  beql        $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x2DC5A8u;
    {
        const bool branch_taken_0x2dc5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2dc5a8) {
            ctx->pc = 0x2DC5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC5A8u;
            // 0x2dc5ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC6E8u;
            goto label_2dc6e8;
        }
    }
    ctx->pc = 0x2DC5B0u;
    // 0x2dc5b0: 0xc08bfbc  jal         func_22FEF0
    ctx->pc = 0x2DC5B0u;
    SET_GPR_U32(ctx, 31, 0x2DC5B8u);
    ctx->pc = 0x2DC5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5B0u;
    // 0x2dc5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FEF0u, 0x2DC5B0u, 0x2DC5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5B8u;
label_2dc5b8:
    // 0x2dc5b8: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2dc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2dc5bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2dc5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2dc5c0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc5c4: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2DC5C4u;
    SET_GPR_U32(ctx, 31, 0x2DC5CCu);
    ctx->pc = 0x2DC5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5C4u;
    // 0x2dc5c8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DC5C4u, 0x2DC5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5CCu;
label_2dc5cc:
    // 0x2dc5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2dc5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5d4: 0xc0a352c  jal         func_28D4B0
    ctx->pc = 0x2DC5D4u;
    SET_GPR_U32(ctx, 31, 0x2DC5DCu);
    ctx->pc = 0x2DC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC5D4u;
    // 0x2dc5d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DC5D4u, 0x2DC5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC5DCu;
label_2dc5dc:
    // 0x2dc5dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dc5dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5e0: 0x12000041  beqz        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2DC5E0u;
    {
        const bool branch_taken_0x2dc5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5E0u;
        // 0x2dc5e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5e0) {
            ctx->pc = 0x2DC6E8u;
            goto label_2dc6e8;
        }
    }
    ctx->pc = 0x2DC5E8u;
    // 0x2dc5e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2dc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2dc5ec: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x2dc5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2dc5f0: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2dc5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x2dc5f4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2dc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2dc5f8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2dc5f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2dc5fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC5FCu;
    {
        const bool branch_taken_0x2dc5fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5FCu;
        // 0x2dc600: 0x244203e8  addiu       $v0, $v0, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5fc) {
            ctx->pc = 0x2DC610u;
            goto label_2dc610;
        }
    }
    ctx->pc = 0x2DC604u;
    // 0x2dc604: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dc604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc608: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2DC608u;
    SET_GPR_U32(ctx, 31, 0x2DC610u);
    ctx->pc = 0x2DC60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC608u;
    // 0x2dc60c: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DC608u, 0x2DC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC610u;
label_2dc610:
    // 0x2dc610: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dc610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc614: 0x8082002e  lb          $v0, 0x2E($a0)
    ctx->pc = 0x2dc614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 46)));
    // 0x2dc618: 0x1c400033  bgtz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2DC618u;
    {
        const bool branch_taken_0x2dc618 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DC61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC618u;
        // 0x2dc61c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc618) {
            ctx->pc = 0x2DC6E8u;
            goto label_2dc6e8;
        }
    }
    ctx->pc = 0x2DC620u;
    // 0x2dc620: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2dc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x2dc624: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2DC624u;
    {
        const bool branch_taken_0x2dc624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc624) {
            ctx->pc = 0x2DC628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC624u;
            // 0x2dc628: 0x86430092  lh          $v1, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC650u;
            goto label_2dc650;
        }
    }
    ctx->pc = 0x2DC62Cu;
    // 0x2dc62c: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2dc62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2dc630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dc630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2dc634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2dc638: 0x2c63001e  sltiu       $v1, $v1, 0x1E
    ctx->pc = 0x2dc638u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x2dc63c: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2DC63Cu;
    {
        const bool branch_taken_0x2dc63c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC63Cu;
        // 0x2dc640: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc63c) {
            ctx->pc = 0x2DC6E4u;
            goto label_2dc6e4;
        }
    }
    ctx->pc = 0x2DC644u;
    // 0x2dc644: 0xac800284  sw          $zero, 0x284($a0)
    ctx->pc = 0x2dc644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 644), GPR_U32(ctx, 0));
    // 0x2dc648: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x2dc648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x2dc64c: 0x86430092  lh          $v1, 0x92($s2)
    ctx->pc = 0x2dc64cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2dc650:
    // 0x2dc650: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2dc650u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x2dc654: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2dc654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x2dc658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc65c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2dc65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2dc660: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2dc660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2dc664: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2dc664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc668: 0xc087420  jal         func_21D080
    ctx->pc = 0x2DC668u;
    SET_GPR_U32(ctx, 31, 0x2DC670u);
    ctx->pc = 0x2DC66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC668u;
    // 0x2dc66c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x2DC668u, 0x2DC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC670u;
label_2dc670:
    // 0x2dc670: 0xc6340028  lwc1        $f20, 0x28($s1)
    ctx->pc = 0x2dc670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc674: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2dc674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2dc678: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2dc678u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc67c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dc67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc680: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x2dc680u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x2dc684: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2dc684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc688: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2DC688u;
    SET_GPR_U32(ctx, 31, 0x2DC690u);
    ctx->pc = 0x2DC68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC688u;
    // 0x2dc68c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DC688u, 0x2DC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC690u;
label_2dc690:
    // 0x2dc690: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2dc690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc694: 0x0  nop
    ctx->pc = 0x2dc694u;
    // NOP
    // 0x2dc698: 0x45010013  bc1t        . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC698u;
    {
        const bool branch_taken_0x2dc698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC698u;
        // 0x2dc69c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc698) {
            ctx->pc = 0x2DC6E8u;
            goto label_2dc6e8;
        }
    }
    ctx->pc = 0x2DC6A0u;
    // 0x2dc6a0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2DC6A0u;
    SET_GPR_U32(ctx, 31, 0x2DC6A8u);
    ctx->pc = 0x2DC6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6A0u;
    // 0x2dc6a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DC6A0u, 0x2DC6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6A8u;
label_2dc6a8:
    // 0x2dc6a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dc6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6ac: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2DC6ACu;
    {
        const bool branch_taken_0x2dc6ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6ACu;
        // 0x2dc6b0: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc6ac) {
            ctx->pc = 0x2DC6E0u;
            goto label_2dc6e0;
        }
    }
    ctx->pc = 0x2DC6B4u;
    // 0x2dc6b4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x2dc6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x2dc6b8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2dc6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dc6bc: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2dc6bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
    // 0x2dc6c0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2dc6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc6c4: 0x2480a  movz        $t1, $zero, $v0
    ctx->pc = 0x2dc6c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x2dc6c8: 0x8e270024  lw          $a3, 0x24($s1)
    ctx->pc = 0x2dc6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2dc6cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2dc6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6d0: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x2dc6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dc6d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc6d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc6d8: 0xc0bee7a  jal         func_2FB9E8
    ctx->pc = 0x2DC6D8u;
    SET_GPR_U32(ctx, 31, 0x2DC6E0u);
    ctx->pc = 0x2DC6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC6D8u;
    // 0x2dc6dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DC6D8u, 0x2DC6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC6E0u;
label_2dc6e0:
    // 0x2dc6e0: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x2dc6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_2dc6e4:
    // 0x2dc6e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc6e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc6e8:
    // 0x2dc6e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2dc6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2dc6ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2dc6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2dc6f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2dc6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc6f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dc6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc6f8: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2dc6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dc6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC6FCu;
        // 0x2dc700: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC704u;
    // 0x2dc704: 0x0  nop
    ctx->pc = 0x2dc704u;
    // NOP
    ctx->pc = 0x2dc708u;
}
