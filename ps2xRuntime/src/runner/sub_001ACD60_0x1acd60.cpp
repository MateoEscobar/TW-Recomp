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

// Function: sub_001ACD60
// Address: 0x1acd60 - 0x1acee0
void sub_001ACD60_0x1acd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACD60_0x1acd60");
#endif

    switch (ctx->pc) {
        case 0x1acd60u: goto label_1acd60;
        case 0x1acd64u: goto label_1acd64;
        case 0x1acd68u: goto label_1acd68;
        case 0x1acd6cu: goto label_1acd6c;
        case 0x1acd70u: goto label_1acd70;
        case 0x1acd74u: goto label_1acd74;
        case 0x1acd78u: goto label_1acd78;
        case 0x1acd7cu: goto label_1acd7c;
        case 0x1acd80u: goto label_1acd80;
        case 0x1acd84u: goto label_1acd84;
        case 0x1acd88u: goto label_1acd88;
        case 0x1acd8cu: goto label_1acd8c;
        case 0x1acd90u: goto label_1acd90;
        case 0x1acd94u: goto label_1acd94;
        case 0x1acd98u: goto label_1acd98;
        case 0x1acd9cu: goto label_1acd9c;
        case 0x1acda0u: goto label_1acda0;
        case 0x1acda4u: goto label_1acda4;
        case 0x1acda8u: goto label_1acda8;
        case 0x1acdacu: goto label_1acdac;
        case 0x1acdb0u: goto label_1acdb0;
        case 0x1acdb4u: goto label_1acdb4;
        case 0x1acdb8u: goto label_1acdb8;
        case 0x1acdbcu: goto label_1acdbc;
        case 0x1acdc0u: goto label_1acdc0;
        case 0x1acdc4u: goto label_1acdc4;
        case 0x1acdc8u: goto label_1acdc8;
        case 0x1acdccu: goto label_1acdcc;
        case 0x1acdd0u: goto label_1acdd0;
        case 0x1acdd4u: goto label_1acdd4;
        case 0x1acdd8u: goto label_1acdd8;
        case 0x1acddcu: goto label_1acddc;
        case 0x1acde0u: goto label_1acde0;
        case 0x1acde4u: goto label_1acde4;
        case 0x1acde8u: goto label_1acde8;
        case 0x1acdecu: goto label_1acdec;
        case 0x1acdf0u: goto label_1acdf0;
        case 0x1acdf4u: goto label_1acdf4;
        case 0x1acdf8u: goto label_1acdf8;
        case 0x1acdfcu: goto label_1acdfc;
        case 0x1ace00u: goto label_1ace00;
        case 0x1ace04u: goto label_1ace04;
        case 0x1ace08u: goto label_1ace08;
        case 0x1ace0cu: goto label_1ace0c;
        case 0x1ace10u: goto label_1ace10;
        case 0x1ace14u: goto label_1ace14;
        case 0x1ace18u: goto label_1ace18;
        case 0x1ace1cu: goto label_1ace1c;
        case 0x1ace20u: goto label_1ace20;
        case 0x1ace24u: goto label_1ace24;
        case 0x1ace28u: goto label_1ace28;
        case 0x1ace2cu: goto label_1ace2c;
        case 0x1ace30u: goto label_1ace30;
        case 0x1ace34u: goto label_1ace34;
        case 0x1ace38u: goto label_1ace38;
        case 0x1ace3cu: goto label_1ace3c;
        case 0x1ace40u: goto label_1ace40;
        case 0x1ace44u: goto label_1ace44;
        case 0x1ace48u: goto label_1ace48;
        case 0x1ace4cu: goto label_1ace4c;
        case 0x1ace50u: goto label_1ace50;
        case 0x1ace54u: goto label_1ace54;
        case 0x1ace58u: goto label_1ace58;
        case 0x1ace5cu: goto label_1ace5c;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace64u: goto label_1ace64;
        case 0x1ace68u: goto label_1ace68;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace74u: goto label_1ace74;
        case 0x1ace78u: goto label_1ace78;
        case 0x1ace7cu: goto label_1ace7c;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace84u: goto label_1ace84;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace8cu: goto label_1ace8c;
        case 0x1ace90u: goto label_1ace90;
        case 0x1ace94u: goto label_1ace94;
        case 0x1ace98u: goto label_1ace98;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1acea0u: goto label_1acea0;
        case 0x1acea4u: goto label_1acea4;
        case 0x1acea8u: goto label_1acea8;
        case 0x1aceacu: goto label_1aceac;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aceb4u: goto label_1aceb4;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acebcu: goto label_1acebc;
        case 0x1acec0u: goto label_1acec0;
        case 0x1acec4u: goto label_1acec4;
        case 0x1acec8u: goto label_1acec8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1aced0u: goto label_1aced0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aced8u: goto label_1aced8;
        case 0x1acedcu: goto label_1acedc;
        default: break;
    }

    ctx->pc = 0x1acd60u;

label_1acd60:
    // 0x1acd60: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x1acd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_1acd64:
    // 0x1acd64: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x1acd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_1acd68:
    // 0x1acd68: 0x7fb20350  sq          $s2, 0x350($sp)
    ctx->pc = 0x1acd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 18));
label_1acd6c:
    // 0x1acd6c: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x1acd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_1acd70:
    // 0x1acd70: 0x7fb30340  sq          $s3, 0x340($sp)
    ctx->pc = 0x1acd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 19));
label_1acd74:
    // 0x1acd74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1acd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1acd78:
    // 0x1acd78: 0x7fb00370  sq          $s0, 0x370($sp)
    ctx->pc = 0x1acd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 16));
label_1acd7c:
    // 0x1acd7c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1acd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1acd80:
    // 0x1acd80: 0x7fb10360  sq          $s1, 0x360($sp)
    ctx->pc = 0x1acd80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 17));
label_1acd84:
    // 0x1acd84: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1acd84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acd88:
    // 0x1acd88: 0x7fb40330  sq          $s4, 0x330($sp)
    ctx->pc = 0x1acd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 20));
label_1acd8c:
    // 0x1acd8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1acd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acd90:
    // 0x1acd90: 0xffbf0320  sd          $ra, 0x320($sp)
    ctx->pc = 0x1acd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 31));
label_1acd94:
    // 0x1acd94: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1acd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1acd98:
    // 0x1acd98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1acd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1acd9c:
    // 0x1acd9c: 0x84870092  lh          $a3, 0x92($a0)
    ctx->pc = 0x1acd9cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 146)));
label_1acda0:
    // 0x1acda0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1acda0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acda4:
    // 0x1acda4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x1acda4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
label_1acda8:
    // 0x1acda8: 0xc089d2a  jal         func_2274A8
label_1acdac:
    if (ctx->pc == 0x1ACDACu) {
        ctx->pc = 0x1ACDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDA8u;
        // 0x1acdac: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDB0u;
        goto label_1acdb0;
    }
    ctx->pc = 0x1ACDA8u;
    SET_GPR_U32(ctx, 31, 0x1ACDB0u);
    ctx->pc = 0x1ACDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACDA8u;
    // 0x1acdac: 0xe23821  addu        $a3, $a3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2274A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2274A8u, 0x1ACDA8u, 0x1ACDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACDB0u;
label_1acdb0:
    // 0x1acdb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1acdb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acdb4:
    // 0x1acdb4: 0x12600040  beqz        $s3, . + 4 + (0x40 << 2)
label_1acdb8:
    if (ctx->pc == 0x1ACDB8u) {
        ctx->pc = 0x1ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB4u;
        // 0x1acdb8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDBCu;
        goto label_1acdbc;
    }
    ctx->pc = 0x1ACDB4u;
    {
        const bool branch_taken_0x1acdb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDB4u;
        // 0x1acdb8: 0x3a0882d  daddu       $s1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdb4) {
            ctx->pc = 0x1ACEB8u;
            goto label_1aceb8;
        }
    }
    ctx->pc = 0x1ACDBCu;
label_1acdbc:
    // 0x1acdbc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1acdbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acdc0:
    // 0x1acdc0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1acdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1acdc4:
    // 0x1acdc4: 0x90a201b2  lbu         $v0, 0x1B2($a1)
    ctx->pc = 0x1acdc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 434)));
label_1acdc8:
    // 0x1acdc8: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_1acdcc:
    if (ctx->pc == 0x1ACDCCu) {
        ctx->pc = 0x1ACDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDC8u;
        // 0x1acdcc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDD0u;
        goto label_1acdd0;
    }
    ctx->pc = 0x1ACDC8u;
    {
        const bool branch_taken_0x1acdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acdc8) {
            ctx->pc = 0x1ACDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACDC8u;
            // 0x1acdcc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACEACu;
            goto label_1aceac;
        }
    }
    ctx->pc = 0x1ACDD0u;
label_1acdd0:
    // 0x1acdd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1acdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1acdd4:
    // 0x1acdd4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1acdd8:
    // 0x1acdd8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1acdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1acddc:
    // 0x1acddc: 0x40f809  jalr        $v0
label_1acde0:
    if (ctx->pc == 0x1ACDE0u) {
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDE4u;
        goto label_1acde4;
    }
    ctx->pc = 0x1ACDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACDE4u);
        ctx->pc = 0x1ACDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDDCu;
        // 0x1acde0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDDCu, 0x1ACDE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACDE4u;
label_1acde4:
    // 0x1acde4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1acde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acde8:
    // 0x1acde8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1acde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acdec:
    // 0x1acdec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1acdecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1acdf0:
    // 0x1acdf0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1acdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1acdf4:
    // 0x1acdf4: 0x40f809  jalr        $v0
label_1acdf8:
    if (ctx->pc == 0x1ACDF8u) {
        ctx->pc = 0x1ACDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDF4u;
        // 0x1acdf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACDFCu;
        goto label_1acdfc;
    }
    ctx->pc = 0x1ACDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACDFCu);
        ctx->pc = 0x1ACDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDF4u;
        // 0x1acdf8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACDF4u, 0x1ACDFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACDFCu;
label_1acdfc:
    // 0x1acdfc: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
label_1ace00:
    if (ctx->pc == 0x1ACE00u) {
        ctx->pc = 0x1ACE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACDFCu;
        // 0x1ace00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE04u;
        goto label_1ace04;
    }
    ctx->pc = 0x1ACDFCu;
    {
        const bool branch_taken_0x1acdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acdfc) {
            ctx->pc = 0x1ACE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACDFCu;
            // 0x1ace00: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACEACu;
            goto label_1aceac;
        }
    }
    ctx->pc = 0x1ACE04u;
label_1ace04:
    // 0x1ace04: 0xc087502  jal         func_21D408
label_1ace08:
    if (ctx->pc == 0x1ACE08u) {
        ctx->pc = 0x1ACE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE04u;
        // 0x1ace08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE0Cu;
        goto label_1ace0c;
    }
    ctx->pc = 0x1ACE04u;
    SET_GPR_U32(ctx, 31, 0x1ACE0Cu);
    ctx->pc = 0x1ACE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE04u;
    // 0x1ace08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x1ACE04u, 0x1ACE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE0Cu;
label_1ace0c:
    // 0x1ace0c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1ace0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1ace10:
    // 0x1ace10: 0x38620003  xori        $v0, $v1, 0x3
    ctx->pc = 0x1ace10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_1ace14:
    // 0x1ace14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1ace18:
    if (ctx->pc == 0x1ACE18u) {
        ctx->pc = 0x1ACE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE14u;
        // 0x1ace18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE1Cu;
        goto label_1ace1c;
    }
    ctx->pc = 0x1ACE14u;
    {
        const bool branch_taken_0x1ace14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE14u;
        // 0x1ace18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace14) {
            ctx->pc = 0x1ACE20u;
            goto label_1ace20;
        }
    }
    ctx->pc = 0x1ACE1Cu;
label_1ace1c:
    // 0x1ace1c: 0x283200b  movn        $a0, $s4, $v1
    ctx->pc = 0x1ace1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
label_1ace20:
    // 0x1ace20: 0x54800022  bnel        $a0, $zero, . + 4 + (0x22 << 2)
label_1ace24:
    if (ctx->pc == 0x1ACE24u) {
        ctx->pc = 0x1ACE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE20u;
        // 0x1ace24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE28u;
        goto label_1ace28;
    }
    ctx->pc = 0x1ACE20u;
    {
        const bool branch_taken_0x1ace20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ace20) {
            ctx->pc = 0x1ACE24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACE20u;
            // 0x1ace24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACEACu;
            goto label_1aceac;
        }
    }
    ctx->pc = 0x1ACE28u;
label_1ace28:
    // 0x1ace28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ace28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ace2c:
    // 0x1ace2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ace2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace30:
    // 0x1ace30: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1ace30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1ace34:
    // 0x1ace34: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ace34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ace38:
    // 0x1ace38: 0x40f809  jalr        $v0
label_1ace3c:
    if (ctx->pc == 0x1ACE3Cu) {
        ctx->pc = 0x1ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE38u;
        // 0x1ace3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE40u;
        goto label_1ace40;
    }
    ctx->pc = 0x1ACE38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACE40u);
        ctx->pc = 0x1ACE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE38u;
        // 0x1ace3c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE38u, 0x1ACE40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACE40u;
label_1ace40:
    // 0x1ace40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ace40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ace44:
    // 0x1ace44: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1ace44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ace48:
    // 0x1ace48: 0x2c420184  sltiu       $v0, $v0, 0x184
    ctx->pc = 0x1ace48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)388) ? 1 : 0);
label_1ace4c:
    // 0x1ace4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1ace50:
    if (ctx->pc == 0x1ACE50u) {
        ctx->pc = 0x1ACE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE4Cu;
        // 0x1ace50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE54u;
        goto label_1ace54;
    }
    ctx->pc = 0x1ACE4Cu;
    {
        const bool branch_taken_0x1ace4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace4c) {
            ctx->pc = 0x1ACE50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACE4Cu;
            // 0x1ace50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACE64u;
            goto label_1ace64;
        }
    }
    ctx->pc = 0x1ACE54u;
label_1ace54:
    // 0x1ace54: 0xc067b9c  jal         func_19EE70
label_1ace58:
    if (ctx->pc == 0x1ACE58u) {
        ctx->pc = 0x1ACE5Cu;
        goto label_1ace5c;
    }
    ctx->pc = 0x1ACE54u;
    SET_GPR_U32(ctx, 31, 0x1ACE5Cu);
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1ACE54u, 0x1ACE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE5Cu;
label_1ace5c:
    // 0x1ace5c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1ace60:
    if (ctx->pc == 0x1ACE60u) {
        ctx->pc = 0x1ACE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE5Cu;
        // 0x1ace60: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE64u;
        goto label_1ace64;
    }
    ctx->pc = 0x1ACE5Cu;
    {
        const bool branch_taken_0x1ace5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE5Cu;
        // 0x1ace60: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace5c) {
            ctx->pc = 0x1ACEC0u;
            goto label_1acec0;
        }
    }
    ctx->pc = 0x1ACE64u;
label_1ace64:
    // 0x1ace64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ace64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ace68:
    // 0x1ace68: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1ace68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1ace6c:
    // 0x1ace6c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1ace6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1ace70:
    // 0x1ace70: 0x40f809  jalr        $v0
label_1ace74:
    if (ctx->pc == 0x1ACE74u) {
        ctx->pc = 0x1ACE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE70u;
        // 0x1ace74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE78u;
        goto label_1ace78;
    }
    ctx->pc = 0x1ACE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACE78u);
        ctx->pc = 0x1ACE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE70u;
        // 0x1ace74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE70u, 0x1ACE78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACE78u;
label_1ace78:
    // 0x1ace78: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ace7c:
    if (ctx->pc == 0x1ACE7Cu) {
        ctx->pc = 0x1ACE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE78u;
        // 0x1ace7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE80u;
        goto label_1ace80;
    }
    ctx->pc = 0x1ACE78u;
    {
        const bool branch_taken_0x1ace78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE78u;
        // 0x1ace7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace78) {
            ctx->pc = 0x1ACE9Cu;
            goto label_1ace9c;
        }
    }
    ctx->pc = 0x1ACE80u;
label_1ace80:
    // 0x1ace80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ace80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ace84:
    // 0x1ace84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1ace84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1ace88:
    // 0x1ace88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1ace88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1ace8c:
    // 0x1ace8c: 0x40f809  jalr        $v0
label_1ace90:
    if (ctx->pc == 0x1ACE90u) {
        ctx->pc = 0x1ACE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE8Cu;
        // 0x1ace90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE94u;
        goto label_1ace94;
    }
    ctx->pc = 0x1ACE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACE94u);
        ctx->pc = 0x1ACE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE8Cu;
        // 0x1ace90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACE8Cu, 0x1ACE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACE94u;
label_1ace94:
    // 0x1ace94: 0x1000000a  b           . + 4 + (0xA << 2)
label_1ace98:
    if (ctx->pc == 0x1ACE98u) {
        ctx->pc = 0x1ACE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE94u;
        // 0x1ace98: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACE9Cu;
        goto label_1ace9c;
    }
    ctx->pc = 0x1ACE94u;
    {
        const bool branch_taken_0x1ace94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE94u;
        // 0x1ace98: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace94) {
            ctx->pc = 0x1ACEC0u;
            goto label_1acec0;
        }
    }
    ctx->pc = 0x1ACE9Cu;
label_1ace9c:
    // 0x1ace9c: 0xc067b9c  jal         func_19EE70
label_1acea0:
    if (ctx->pc == 0x1ACEA0u) {
        ctx->pc = 0x1ACEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE9Cu;
        // 0x1acea0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEA4u;
        goto label_1acea4;
    }
    ctx->pc = 0x1ACE9Cu;
    SET_GPR_U32(ctx, 31, 0x1ACEA4u);
    ctx->pc = 0x1ACEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACE9Cu;
    // 0x1acea0: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1ACE9Cu, 0x1ACEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACEA4u;
label_1acea4:
    // 0x1acea4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1acea8:
    if (ctx->pc == 0x1ACEA8u) {
        ctx->pc = 0x1ACEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEA4u;
        // 0x1acea8: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEACu;
        goto label_1aceac;
    }
    ctx->pc = 0x1ACEA4u;
    {
        const bool branch_taken_0x1acea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEA4u;
        // 0x1acea8: 0x7bb00370  lq          $s0, 0x370($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acea4) {
            ctx->pc = 0x1ACEC0u;
            goto label_1acec0;
        }
    }
    ctx->pc = 0x1ACEACu;
label_1aceac:
    // 0x1aceac: 0x253102b  sltu        $v0, $s2, $s3
    ctx->pc = 0x1aceacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_1aceb0:
    // 0x1aceb0: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_1aceb4:
    if (ctx->pc == 0x1ACEB4u) {
        ctx->pc = 0x1ACEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEB0u;
        // 0x1aceb4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEB8u;
        goto label_1aceb8;
    }
    ctx->pc = 0x1ACEB0u;
    {
        const bool branch_taken_0x1aceb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEB0u;
        // 0x1aceb4: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aceb0) {
            ctx->pc = 0x1ACDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1acdc0;
        }
    }
    ctx->pc = 0x1ACEB8u;
label_1aceb8:
    // 0x1aceb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1aceb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1acebc:
    // 0x1acebc: 0x7bb00370  lq          $s0, 0x370($sp)
    ctx->pc = 0x1acebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_1acec0:
    // 0x1acec0: 0x7bb10360  lq          $s1, 0x360($sp)
    ctx->pc = 0x1acec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_1acec4:
    // 0x1acec4: 0x7bb20350  lq          $s2, 0x350($sp)
    ctx->pc = 0x1acec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_1acec8:
    // 0x1acec8: 0x7bb30340  lq          $s3, 0x340($sp)
    ctx->pc = 0x1acec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_1acecc:
    // 0x1acecc: 0x7bb40330  lq          $s4, 0x330($sp)
    ctx->pc = 0x1aceccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_1aced0:
    // 0x1aced0: 0xdfbf0320  ld          $ra, 0x320($sp)
    ctx->pc = 0x1aced0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 800)));
label_1aced4:
    // 0x1aced4: 0x3e00008  jr          $ra
label_1aced8:
    if (ctx->pc == 0x1ACED8u) {
        ctx->pc = 0x1ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACED4u;
        // 0x1aced8: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEDCu;
        goto label_1acedc;
    }
    ctx->pc = 0x1ACED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACED4u;
        // 0x1aced8: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0x0  nop
    ctx->pc = 0x1acedcu;
    // NOP
    ctx->pc = 0x1acee0u;
}
