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

// Function: sub_0025F028
// Address: 0x25f028 - 0x25f1b8
void sub_0025F028_0x25f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F028_0x25f028");
#endif

    switch (ctx->pc) {
        case 0x25f028u: goto label_25f028;
        case 0x25f02cu: goto label_25f02c;
        case 0x25f030u: goto label_25f030;
        case 0x25f034u: goto label_25f034;
        case 0x25f038u: goto label_25f038;
        case 0x25f03cu: goto label_25f03c;
        case 0x25f040u: goto label_25f040;
        case 0x25f044u: goto label_25f044;
        case 0x25f048u: goto label_25f048;
        case 0x25f04cu: goto label_25f04c;
        case 0x25f050u: goto label_25f050;
        case 0x25f054u: goto label_25f054;
        case 0x25f058u: goto label_25f058;
        case 0x25f05cu: goto label_25f05c;
        case 0x25f060u: goto label_25f060;
        case 0x25f064u: goto label_25f064;
        case 0x25f068u: goto label_25f068;
        case 0x25f06cu: goto label_25f06c;
        case 0x25f070u: goto label_25f070;
        case 0x25f074u: goto label_25f074;
        case 0x25f078u: goto label_25f078;
        case 0x25f07cu: goto label_25f07c;
        case 0x25f080u: goto label_25f080;
        case 0x25f084u: goto label_25f084;
        case 0x25f088u: goto label_25f088;
        case 0x25f08cu: goto label_25f08c;
        case 0x25f090u: goto label_25f090;
        case 0x25f094u: goto label_25f094;
        case 0x25f098u: goto label_25f098;
        case 0x25f09cu: goto label_25f09c;
        case 0x25f0a0u: goto label_25f0a0;
        case 0x25f0a4u: goto label_25f0a4;
        case 0x25f0a8u: goto label_25f0a8;
        case 0x25f0acu: goto label_25f0ac;
        case 0x25f0b0u: goto label_25f0b0;
        case 0x25f0b4u: goto label_25f0b4;
        case 0x25f0b8u: goto label_25f0b8;
        case 0x25f0bcu: goto label_25f0bc;
        case 0x25f0c0u: goto label_25f0c0;
        case 0x25f0c4u: goto label_25f0c4;
        case 0x25f0c8u: goto label_25f0c8;
        case 0x25f0ccu: goto label_25f0cc;
        case 0x25f0d0u: goto label_25f0d0;
        case 0x25f0d4u: goto label_25f0d4;
        case 0x25f0d8u: goto label_25f0d8;
        case 0x25f0dcu: goto label_25f0dc;
        case 0x25f0e0u: goto label_25f0e0;
        case 0x25f0e4u: goto label_25f0e4;
        case 0x25f0e8u: goto label_25f0e8;
        case 0x25f0ecu: goto label_25f0ec;
        case 0x25f0f0u: goto label_25f0f0;
        case 0x25f0f4u: goto label_25f0f4;
        case 0x25f0f8u: goto label_25f0f8;
        case 0x25f0fcu: goto label_25f0fc;
        case 0x25f100u: goto label_25f100;
        case 0x25f104u: goto label_25f104;
        case 0x25f108u: goto label_25f108;
        case 0x25f10cu: goto label_25f10c;
        case 0x25f110u: goto label_25f110;
        case 0x25f114u: goto label_25f114;
        case 0x25f118u: goto label_25f118;
        case 0x25f11cu: goto label_25f11c;
        case 0x25f120u: goto label_25f120;
        case 0x25f124u: goto label_25f124;
        case 0x25f128u: goto label_25f128;
        case 0x25f12cu: goto label_25f12c;
        case 0x25f130u: goto label_25f130;
        case 0x25f134u: goto label_25f134;
        case 0x25f138u: goto label_25f138;
        case 0x25f13cu: goto label_25f13c;
        case 0x25f140u: goto label_25f140;
        case 0x25f144u: goto label_25f144;
        case 0x25f148u: goto label_25f148;
        case 0x25f14cu: goto label_25f14c;
        case 0x25f150u: goto label_25f150;
        case 0x25f154u: goto label_25f154;
        case 0x25f158u: goto label_25f158;
        case 0x25f15cu: goto label_25f15c;
        case 0x25f160u: goto label_25f160;
        case 0x25f164u: goto label_25f164;
        case 0x25f168u: goto label_25f168;
        case 0x25f16cu: goto label_25f16c;
        case 0x25f170u: goto label_25f170;
        case 0x25f174u: goto label_25f174;
        case 0x25f178u: goto label_25f178;
        case 0x25f17cu: goto label_25f17c;
        case 0x25f180u: goto label_25f180;
        case 0x25f184u: goto label_25f184;
        case 0x25f188u: goto label_25f188;
        case 0x25f18cu: goto label_25f18c;
        case 0x25f190u: goto label_25f190;
        case 0x25f194u: goto label_25f194;
        case 0x25f198u: goto label_25f198;
        case 0x25f19cu: goto label_25f19c;
        case 0x25f1a0u: goto label_25f1a0;
        case 0x25f1a4u: goto label_25f1a4;
        case 0x25f1a8u: goto label_25f1a8;
        case 0x25f1acu: goto label_25f1ac;
        case 0x25f1b0u: goto label_25f1b0;
        case 0x25f1b4u: goto label_25f1b4;
        default: break;
    }

    ctx->pc = 0x25f028u;

label_25f028:
    // 0x25f028: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x25f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_25f02c:
    // 0x25f02c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x25f02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_25f030:
    // 0x25f030: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x25f030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_25f034:
    // 0x25f034: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25f034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25f038:
    // 0x25f038: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x25f038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_25f03c:
    // 0x25f03c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x25f03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_25f040:
    // 0x25f040: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x25f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_25f044:
    // 0x25f044: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x25f044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_25f048:
    // 0x25f048: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x25f048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_25f04c:
    // 0x25f04c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25f050:
    // 0x25f050: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x25f050u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_25f054:
    // 0x25f054: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x25f054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_25f058:
    // 0x25f058: 0x8e7600d8  lw          $s6, 0xD8($s3)
    ctx->pc = 0x25f058u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
label_25f05c:
    // 0x25f05c: 0x12c00049  beqz        $s6, . + 4 + (0x49 << 2)
label_25f060:
    if (ctx->pc == 0x25F060u) {
        ctx->pc = 0x25F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F05Cu;
        // 0x25f060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F064u;
        goto label_25f064;
    }
    ctx->pc = 0x25F05Cu;
    {
        const bool branch_taken_0x25f05c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F05Cu;
        // 0x25f060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f05c) {
            ctx->pc = 0x25F184u;
            goto label_25f184;
        }
    }
    ctx->pc = 0x25F064u;
label_25f064:
    // 0x25f064: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x25f064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_25f068:
    // 0x25f068: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_25f06c:
    if (ctx->pc == 0x25F06Cu) {
        ctx->pc = 0x25F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F068u;
        // 0x25f06c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F070u;
        goto label_25f070;
    }
    ctx->pc = 0x25F068u;
    {
        const bool branch_taken_0x25f068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F068u;
        // 0x25f06c: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f068) {
            ctx->pc = 0x25F0C8u;
            goto label_25f0c8;
        }
    }
    ctx->pc = 0x25F070u;
label_25f070:
    // 0x25f070: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x25f070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_25f074:
    // 0x25f074: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x25f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
label_25f078:
    // 0x25f078: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25f078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25f07c:
    // 0x25f07c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25f080:
    // 0x25f080: 0x800008  jr          $a0
label_25f084:
    if (ctx->pc == 0x25F084u) {
        ctx->pc = 0x25F088u;
        goto label_25f088;
    }
    ctx->pc = 0x25F080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25F088u: goto label_25f088;
            case 0x25F090u: goto label_25f090;
            case 0x25F098u: goto label_25f098;
            case 0x25F0A0u: goto label_25f0a0;
            case 0x25F0A8u: goto label_25f0a8;
            case 0x25F0B0u: goto label_25f0b0;
            case 0x25F0B8u: goto label_25f0b8;
            case 0x25F0C0u: goto label_25f0c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F080u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x25F088u;
label_25f088:
    // 0x25f088: 0x10000011  b           . + 4 + (0x11 << 2)
label_25f08c:
    if (ctx->pc == 0x25F08Cu) {
        ctx->pc = 0x25F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F088u;
        // 0x25f08c: 0x24110253  addiu       $s1, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F090u;
        goto label_25f090;
    }
    ctx->pc = 0x25F088u;
    {
        const bool branch_taken_0x25f088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F088u;
        // 0x25f08c: 0x24110253  addiu       $s1, $zero, 0x253 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f088) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F090u;
label_25f090:
    // 0x25f090: 0x1000000f  b           . + 4 + (0xF << 2)
label_25f094:
    if (ctx->pc == 0x25F094u) {
        ctx->pc = 0x25F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F090u;
        // 0x25f094: 0x24110254  addiu       $s1, $zero, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F098u;
        goto label_25f098;
    }
    ctx->pc = 0x25F090u;
    {
        const bool branch_taken_0x25f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F090u;
        // 0x25f094: 0x24110254  addiu       $s1, $zero, 0x254 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 596));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f090) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F098u;
label_25f098:
    // 0x25f098: 0x1000000d  b           . + 4 + (0xD << 2)
label_25f09c:
    if (ctx->pc == 0x25F09Cu) {
        ctx->pc = 0x25F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F098u;
        // 0x25f09c: 0x24110255  addiu       $s1, $zero, 0x255 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 597));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0A0u;
        goto label_25f0a0;
    }
    ctx->pc = 0x25F098u;
    {
        const bool branch_taken_0x25f098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F098u;
        // 0x25f09c: 0x24110255  addiu       $s1, $zero, 0x255 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 597));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f098) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F0A0u;
label_25f0a0:
    // 0x25f0a0: 0x1000000b  b           . + 4 + (0xB << 2)
label_25f0a4:
    if (ctx->pc == 0x25F0A4u) {
        ctx->pc = 0x25F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A0u;
        // 0x25f0a4: 0x24110256  addiu       $s1, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0A8u;
        goto label_25f0a8;
    }
    ctx->pc = 0x25F0A0u;
    {
        const bool branch_taken_0x25f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A0u;
        // 0x25f0a4: 0x24110256  addiu       $s1, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0a0) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F0A8u;
label_25f0a8:
    // 0x25f0a8: 0x10000009  b           . + 4 + (0x9 << 2)
label_25f0ac:
    if (ctx->pc == 0x25F0ACu) {
        ctx->pc = 0x25F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A8u;
        // 0x25f0ac: 0x24110257  addiu       $s1, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0B0u;
        goto label_25f0b0;
    }
    ctx->pc = 0x25F0A8u;
    {
        const bool branch_taken_0x25f0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0A8u;
        // 0x25f0ac: 0x24110257  addiu       $s1, $zero, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 599));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0a8) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F0B0u;
label_25f0b0:
    // 0x25f0b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_25f0b4:
    if (ctx->pc == 0x25F0B4u) {
        ctx->pc = 0x25F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0B0u;
        // 0x25f0b4: 0x24110258  addiu       $s1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0B8u;
        goto label_25f0b8;
    }
    ctx->pc = 0x25F0B0u;
    {
        const bool branch_taken_0x25f0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0B0u;
        // 0x25f0b4: 0x24110258  addiu       $s1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0b0) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F0B8u;
label_25f0b8:
    // 0x25f0b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_25f0bc:
    if (ctx->pc == 0x25F0BCu) {
        ctx->pc = 0x25F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0B8u;
        // 0x25f0bc: 0x24110259  addiu       $s1, $zero, 0x259 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0C0u;
        goto label_25f0c0;
    }
    ctx->pc = 0x25F0B8u;
    {
        const bool branch_taken_0x25f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0B8u;
        // 0x25f0bc: 0x24110259  addiu       $s1, $zero, 0x259 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 601));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0b8) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F0C0u;
label_25f0c0:
    // 0x25f0c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_25f0c4:
    if (ctx->pc == 0x25F0C4u) {
        ctx->pc = 0x25F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C0u;
        // 0x25f0c4: 0x2411025a  addiu       $s1, $zero, 0x25A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0C8u;
        goto label_25f0c8;
    }
    ctx->pc = 0x25F0C0u;
    {
        const bool branch_taken_0x25f0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C0u;
        // 0x25f0c4: 0x2411025a  addiu       $s1, $zero, 0x25A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 602));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0c0) {
            ctx->pc = 0x25F0D0u;
            goto label_25f0d0;
        }
    }
    ctx->pc = 0x25F0C8u;
label_25f0c8:
    // 0x25f0c8: 0x1000002e  b           . + 4 + (0x2E << 2)
label_25f0cc:
    if (ctx->pc == 0x25F0CCu) {
        ctx->pc = 0x25F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C8u;
        // 0x25f0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0D0u;
        goto label_25f0d0;
    }
    ctx->pc = 0x25F0C8u;
    {
        const bool branch_taken_0x25f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0C8u;
        // 0x25f0cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f0c8) {
            ctx->pc = 0x25F184u;
            goto label_25f184;
        }
    }
    ctx->pc = 0x25F0D0u;
label_25f0d0:
    // 0x25f0d0: 0x2623fdaa  addiu       $v1, $s1, -0x256
    ctx->pc = 0x25f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966698));
label_25f0d4:
    // 0x25f0d4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x25f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_25f0d8:
    // 0x25f0d8: 0x2c750004  sltiu       $s5, $v1, 0x4
    ctx->pc = 0x25f0d8u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_25f0dc:
    // 0x25f0dc: 0x3c140010  lui         $s4, 0x10
    ctx->pc = 0x25f0dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16 << 16));
label_25f0e0:
    // 0x25f0e0: 0x55a00b  movn        $s4, $v0, $s5
    ctx->pc = 0x25f0e0u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
label_25f0e4:
    // 0x25f0e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f0e8:
    // 0x25f0e8: 0xc089990  jal         func_226640
label_25f0ec:
    if (ctx->pc == 0x25F0ECu) {
        ctx->pc = 0x25F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0E8u;
        // 0x25f0ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0F0u;
        goto label_25f0f0;
    }
    ctx->pc = 0x25F0E8u;
    SET_GPR_U32(ctx, 31, 0x25F0F0u);
    ctx->pc = 0x25F0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0E8u;
    // 0x25f0ec: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x25F0E8u, 0x25F0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0F0u;
label_25f0f0:
    // 0x25f0f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25f0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25f0f4:
    // 0x25f0f4: 0xc040680  jal         func_101A00
label_25f0f8:
    if (ctx->pc == 0x25F0F8u) {
        ctx->pc = 0x25F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F0F4u;
        // 0x25f0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F0FCu;
        goto label_25f0fc;
    }
    ctx->pc = 0x25F0F4u;
    SET_GPR_U32(ctx, 31, 0x25F0FCu);
    ctx->pc = 0x25F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F0F4u;
    // 0x25f0f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A00u, 0x25F0F4u, 0x25F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F0FCu;
label_25f0fc:
    // 0x25f0fc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x25f0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
label_25f100:
    // 0x25f100: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x25f100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_25f104:
    // 0x25f104: 0xc10b1c6  jal         func_42C718
label_25f108:
    if (ctx->pc == 0x25F108u) {
        ctx->pc = 0x25F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F104u;
        // 0x25f108: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F10Cu;
        goto label_25f10c;
    }
    ctx->pc = 0x25F104u;
    SET_GPR_U32(ctx, 31, 0x25F10Cu);
    ctx->pc = 0x25F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F104u;
    // 0x25f108: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x25F104u, 0x25F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F10Cu;
label_25f10c:
    // 0x25f10c: 0x3c040056  lui         $a0, 0x56
    ctx->pc = 0x25f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)86 << 16));
label_25f110:
    // 0x25f110: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x25f110u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f114:
    // 0x25f114: 0xc041532  jal         func_1054C8
label_25f118:
    if (ctx->pc == 0x25F118u) {
        ctx->pc = 0x25F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F114u;
        // 0x25f118: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F11Cu;
        goto label_25f11c;
    }
    ctx->pc = 0x25F114u;
    SET_GPR_U32(ctx, 31, 0x25F11Cu);
    ctx->pc = 0x25F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F114u;
    // 0x25f118: 0x2484d9f0  addiu       $a0, $a0, -0x2610 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x25F114u, 0x25F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F11Cu;
label_25f11c:
    // 0x25f11c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x25f11cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f120:
    // 0x25f120: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_25f124:
    if (ctx->pc == 0x25F124u) {
        ctx->pc = 0x25F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F120u;
        // 0x25f124: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F128u;
        goto label_25f128;
    }
    ctx->pc = 0x25F120u;
    {
        const bool branch_taken_0x25f120 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x25F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F120u;
        // 0x25f124: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25f120) {
            ctx->pc = 0x25F174u;
            goto label_25f174;
        }
    }
    ctx->pc = 0x25F128u;
label_25f128:
    // 0x25f128: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x25f128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_25f12c:
    // 0x25f12c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x25f12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_25f130:
    // 0x25f130: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x25f130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_25f134:
    // 0x25f134: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25f134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_25f138:
    // 0x25f138: 0x15800b  movn        $s0, $zero, $s5
    ctx->pc = 0x25f138u;
    if (GPR_U64(ctx, 21) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_25f13c:
    // 0x25f13c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x25f13cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_25f140:
    // 0x25f140: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x25f140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_25f144:
    // 0x25f144: 0x40f809  jalr        $v0
label_25f148:
    if (ctx->pc == 0x25F148u) {
        ctx->pc = 0x25F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F144u;
        // 0x25f148: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F14Cu;
        goto label_25f14c;
    }
    ctx->pc = 0x25F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25F14Cu);
        ctx->pc = 0x25F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F144u;
        // 0x25f148: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F144u, 0x25F14Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25F14Cu;
label_25f14c:
    // 0x25f14c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x25f14cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_25f150:
    // 0x25f150: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x25f150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_25f154:
    // 0x25f154: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x25f154u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25f158:
    // 0x25f158: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x25f158u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25f15c:
    // 0x25f15c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x25f15cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25f160:
    // 0x25f160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25f160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25f164:
    // 0x25f164: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x25f164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25f168:
    // 0x25f168: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x25f168u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_25f16c:
    // 0x25f16c: 0xc041890  jal         func_106240
label_25f170:
    if (ctx->pc == 0x25F170u) {
        ctx->pc = 0x25F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F16Cu;
        // 0x25f170: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F174u;
        goto label_25f174;
    }
    ctx->pc = 0x25F16Cu;
    SET_GPR_U32(ctx, 31, 0x25F174u);
    ctx->pc = 0x25F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F16Cu;
    // 0x25f170: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106240u, 0x25F16Cu, 0x25F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F174u;
label_25f174:
    // 0x25f174: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x25f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25f178:
    // 0x25f178: 0xc05d4f6  jal         func_1753D8
label_25f17c:
    if (ctx->pc == 0x25F17Cu) {
        ctx->pc = 0x25F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F178u;
        // 0x25f17c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F180u;
        goto label_25f180;
    }
    ctx->pc = 0x25F178u;
    SET_GPR_U32(ctx, 31, 0x25F180u);
    ctx->pc = 0x25F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25F178u;
    // 0x25f17c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x25F178u, 0x25F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25F180u;
label_25f180:
    // 0x25f180: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x25f180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_25f184:
    // 0x25f184: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x25f184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_25f188:
    // 0x25f188: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x25f188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_25f18c:
    // 0x25f18c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x25f18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_25f190:
    // 0x25f190: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x25f190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_25f194:
    // 0x25f194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25f194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25f198:
    // 0x25f198: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x25f198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25f19c:
    // 0x25f19c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x25f19cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25f1a0:
    // 0x25f1a0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x25f1a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25f1a4:
    // 0x25f1a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25f1a8:
    // 0x25f1a8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x25f1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_25f1ac:
    // 0x25f1ac: 0x3e00008  jr          $ra
label_25f1b0:
    if (ctx->pc == 0x25F1B0u) {
        ctx->pc = 0x25F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1ACu;
        // 0x25f1b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25F1B4u;
        goto label_25f1b4;
    }
    ctx->pc = 0x25F1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F1ACu;
        // 0x25f1b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F1B4u;
label_25f1b4:
    // 0x25f1b4: 0x0  nop
    ctx->pc = 0x25f1b4u;
    // NOP
    ctx->pc = 0x25f1b8u;
}
