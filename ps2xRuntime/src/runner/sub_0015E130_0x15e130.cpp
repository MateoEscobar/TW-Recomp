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

// Function: sub_0015E130
// Address: 0x15e130 - 0x15e238
void sub_0015E130_0x15e130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E130_0x15e130");
#endif

    switch (ctx->pc) {
        case 0x15e130u: goto label_15e130;
        case 0x15e134u: goto label_15e134;
        case 0x15e138u: goto label_15e138;
        case 0x15e13cu: goto label_15e13c;
        case 0x15e140u: goto label_15e140;
        case 0x15e144u: goto label_15e144;
        case 0x15e148u: goto label_15e148;
        case 0x15e14cu: goto label_15e14c;
        case 0x15e150u: goto label_15e150;
        case 0x15e154u: goto label_15e154;
        case 0x15e158u: goto label_15e158;
        case 0x15e15cu: goto label_15e15c;
        case 0x15e160u: goto label_15e160;
        case 0x15e164u: goto label_15e164;
        case 0x15e168u: goto label_15e168;
        case 0x15e16cu: goto label_15e16c;
        case 0x15e170u: goto label_15e170;
        case 0x15e174u: goto label_15e174;
        case 0x15e178u: goto label_15e178;
        case 0x15e17cu: goto label_15e17c;
        case 0x15e180u: goto label_15e180;
        case 0x15e184u: goto label_15e184;
        case 0x15e188u: goto label_15e188;
        case 0x15e18cu: goto label_15e18c;
        case 0x15e190u: goto label_15e190;
        case 0x15e194u: goto label_15e194;
        case 0x15e198u: goto label_15e198;
        case 0x15e19cu: goto label_15e19c;
        case 0x15e1a0u: goto label_15e1a0;
        case 0x15e1a4u: goto label_15e1a4;
        case 0x15e1a8u: goto label_15e1a8;
        case 0x15e1acu: goto label_15e1ac;
        case 0x15e1b0u: goto label_15e1b0;
        case 0x15e1b4u: goto label_15e1b4;
        case 0x15e1b8u: goto label_15e1b8;
        case 0x15e1bcu: goto label_15e1bc;
        case 0x15e1c0u: goto label_15e1c0;
        case 0x15e1c4u: goto label_15e1c4;
        case 0x15e1c8u: goto label_15e1c8;
        case 0x15e1ccu: goto label_15e1cc;
        case 0x15e1d0u: goto label_15e1d0;
        case 0x15e1d4u: goto label_15e1d4;
        case 0x15e1d8u: goto label_15e1d8;
        case 0x15e1dcu: goto label_15e1dc;
        case 0x15e1e0u: goto label_15e1e0;
        case 0x15e1e4u: goto label_15e1e4;
        case 0x15e1e8u: goto label_15e1e8;
        case 0x15e1ecu: goto label_15e1ec;
        case 0x15e1f0u: goto label_15e1f0;
        case 0x15e1f4u: goto label_15e1f4;
        case 0x15e1f8u: goto label_15e1f8;
        case 0x15e1fcu: goto label_15e1fc;
        case 0x15e200u: goto label_15e200;
        case 0x15e204u: goto label_15e204;
        case 0x15e208u: goto label_15e208;
        case 0x15e20cu: goto label_15e20c;
        case 0x15e210u: goto label_15e210;
        case 0x15e214u: goto label_15e214;
        case 0x15e218u: goto label_15e218;
        case 0x15e21cu: goto label_15e21c;
        case 0x15e220u: goto label_15e220;
        case 0x15e224u: goto label_15e224;
        case 0x15e228u: goto label_15e228;
        case 0x15e22cu: goto label_15e22c;
        case 0x15e230u: goto label_15e230;
        case 0x15e234u: goto label_15e234;
        default: break;
    }

    ctx->pc = 0x15e130u;

label_15e130:
    // 0x15e130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15e130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15e134:
    // 0x15e134: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x15e134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_15e138:
    // 0x15e138: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x15e138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_15e13c:
    // 0x15e13c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x15e13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15e140:
    // 0x15e140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15e140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_15e144:
    // 0x15e144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15e144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_15e148:
    // 0x15e148: 0xc08100a  jal         func_204028
label_15e14c:
    if (ctx->pc == 0x15E14Cu) {
        ctx->pc = 0x15E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E148u;
        // 0x15e14c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E150u;
        goto label_15e150;
    }
    ctx->pc = 0x15E148u;
    SET_GPR_U32(ctx, 31, 0x15E150u);
    ctx->pc = 0x15E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E148u;
    // 0x15e14c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204028u, 0x15E148u, 0x15E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E150u;
label_15e150:
    // 0x15e150: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_15e154:
    if (ctx->pc == 0x15E154u) {
        ctx->pc = 0x15E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E150u;
        // 0x15e154: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E158u;
        goto label_15e158;
    }
    ctx->pc = 0x15E150u;
    {
        const bool branch_taken_0x15e150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E150u;
        // 0x15e154: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e150) {
            ctx->pc = 0x15E18Cu;
            goto label_15e18c;
        }
    }
    ctx->pc = 0x15E158u;
label_15e158:
    // 0x15e158: 0x8c515024  lw          $s1, 0x5024($v0)
    ctx->pc = 0x15e158u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15e15c:
    // 0x15e15c: 0x8e300128  lw          $s0, 0x128($s1)
    ctx->pc = 0x15e15cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
label_15e160:
    // 0x15e160: 0x86020048  lh          $v0, 0x48($s0)
    ctx->pc = 0x15e160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_15e164:
    // 0x15e164: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x15e164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_15e168:
    // 0x15e168: 0xc081022  jal         func_204088
label_15e16c:
    if (ctx->pc == 0x15E16Cu) {
        ctx->pc = 0x15E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E168u;
        // 0x15e16c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E170u;
        goto label_15e170;
    }
    ctx->pc = 0x15E168u;
    SET_GPR_U32(ctx, 31, 0x15E170u);
    ctx->pc = 0x15E16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E168u;
    // 0x15e16c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204088u, 0x15E168u, 0x15E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E170u;
label_15e170:
    // 0x15e170: 0xc081032  jal         func_2040C8
label_15e174:
    if (ctx->pc == 0x15E174u) {
        ctx->pc = 0x15E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E170u;
        // 0x15e174: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E178u;
        goto label_15e178;
    }
    ctx->pc = 0x15E170u;
    SET_GPR_U32(ctx, 31, 0x15E178u);
    ctx->pc = 0x15E174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E170u;
    // 0x15e174: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040C8u, 0x15E170u, 0x15E178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E178u;
label_15e178:
    // 0x15e178: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15e178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15e17c:
    // 0x15e17c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e180:
    // 0x15e180: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15e180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15e184:
    // 0x15e184: 0x60f809  jalr        $v1
label_15e188:
    if (ctx->pc == 0x15E188u) {
        ctx->pc = 0x15E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E184u;
        // 0x15e188: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E18Cu;
        goto label_15e18c;
    }
    ctx->pc = 0x15E184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E18Cu);
        ctx->pc = 0x15E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E184u;
        // 0x15e188: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E184u, 0x15E18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E18Cu;
label_15e18c:
    // 0x15e18c: 0xc081308  jal         func_204C20
label_15e190:
    if (ctx->pc == 0x15E190u) {
        ctx->pc = 0x15E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E18Cu;
        // 0x15e190: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E194u;
        goto label_15e194;
    }
    ctx->pc = 0x15E18Cu;
    SET_GPR_U32(ctx, 31, 0x15E194u);
    ctx->pc = 0x15E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E18Cu;
    // 0x15e190: 0x26640020  addiu       $a0, $s3, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204C20u, 0x15E18Cu, 0x15E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E194u;
label_15e194:
    // 0x15e194: 0xc07f882  jal         func_1FE208
label_15e198:
    if (ctx->pc == 0x15E198u) {
        ctx->pc = 0x15E19Cu;
        goto label_15e19c;
    }
    ctx->pc = 0x15E194u;
    SET_GPR_U32(ctx, 31, 0x15E19Cu);
    ctx->pc = 0x1FE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE208u, 0x15E194u, 0x15E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E19Cu;
label_15e19c:
    // 0x15e19c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_15e1a0:
    if (ctx->pc == 0x15E1A0u) {
        ctx->pc = 0x15E1A4u;
        goto label_15e1a4;
    }
    ctx->pc = 0x15E19Cu;
    {
        const bool branch_taken_0x15e19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e19c) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E1A4u;
label_15e1a4:
    // 0x15e1a4: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x15e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_15e1a8:
    // 0x15e1a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_15e1ac:
    if (ctx->pc == 0x15E1ACu) {
        ctx->pc = 0x15E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A8u;
        // 0x15e1ac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1B0u;
        goto label_15e1b0;
    }
    ctx->pc = 0x15E1A8u;
    {
        const bool branch_taken_0x15e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1A8u;
        // 0x15e1ac: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1a8) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E1B0u;
label_15e1b0:
    // 0x15e1b0: 0x8c456694  lw          $a1, 0x6694($v0)
    ctx->pc = 0x15e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26260)));
label_15e1b4:
    // 0x15e1b4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_15e1b8:
    if (ctx->pc == 0x15E1B8u) {
        ctx->pc = 0x15E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1B4u;
        // 0x15e1b8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1BCu;
        goto label_15e1bc;
    }
    ctx->pc = 0x15E1B4u;
    {
        const bool branch_taken_0x15e1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1B4u;
        // 0x15e1b8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e1b4) {
            ctx->pc = 0x15E1F4u;
            goto label_15e1f4;
        }
    }
    ctx->pc = 0x15E1BCu;
label_15e1bc:
    // 0x15e1bc: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x15e1bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15e1c0:
    // 0x15e1c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x15e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15e1c4:
    // 0x15e1c4: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x15e1c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_15e1c8:
    // 0x15e1c8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x15e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_15e1cc:
    // 0x15e1cc: 0x40f809  jalr        $v0
label_15e1d0:
    if (ctx->pc == 0x15E1D0u) {
        ctx->pc = 0x15E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1CCu;
        // 0x15e1d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1D4u;
        goto label_15e1d4;
    }
    ctx->pc = 0x15E1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E1D4u);
        ctx->pc = 0x15E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1CCu;
        // 0x15e1d0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1CCu, 0x15E1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E1D4u;
label_15e1d4:
    // 0x15e1d4: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x15e1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_15e1d8:
    // 0x15e1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e1dc:
    // 0x15e1dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15e1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e1e0:
    // 0x15e1e0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15e1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_15e1e4:
    // 0x15e1e4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15e1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_15e1e8:
    // 0x15e1e8: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x15e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_15e1ec:
    // 0x15e1ec: 0x60f809  jalr        $v1
label_15e1f0:
    if (ctx->pc == 0x15E1F0u) {
        ctx->pc = 0x15E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1ECu;
        // 0x15e1f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E1F4u;
        goto label_15e1f4;
    }
    ctx->pc = 0x15E1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E1F4u);
        ctx->pc = 0x15E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E1ECu;
        // 0x15e1f0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E1ECu, 0x15E1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E1F4u;
label_15e1f4:
    // 0x15e1f4: 0xc080ff6  jal         func_203FD8
label_15e1f8:
    if (ctx->pc == 0x15E1F8u) {
        ctx->pc = 0x15E1FCu;
        goto label_15e1fc;
    }
    ctx->pc = 0x15E1F4u;
    SET_GPR_U32(ctx, 31, 0x15E1FCu);
    ctx->pc = 0x203FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FD8u, 0x15E1F4u, 0x15E1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E1FCu;
label_15e1fc:
    // 0x15e1fc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15e1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15e200:
    // 0x15e200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15e200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15e204:
    // 0x15e204: 0xc06538a  jal         func_194E28
label_15e208:
    if (ctx->pc == 0x15E208u) {
        ctx->pc = 0x15E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E204u;
        // 0x15e208: 0x8c64cdb8  lw          $a0, -0x3248($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954424)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E20Cu;
        goto label_15e20c;
    }
    ctx->pc = 0x15E204u;
    SET_GPR_U32(ctx, 31, 0x15E20Cu);
    ctx->pc = 0x15E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E204u;
    // 0x15e208: 0x8c64cdb8  lw          $a0, -0x3248($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194E28u, 0x15E204u, 0x15E20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E20Cu;
label_15e20c:
    // 0x15e20c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e210:
    // 0x15e210: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e214:
    // 0x15e214: 0xc0517d8  jal         func_145F60
label_15e218:
    if (ctx->pc == 0x15E218u) {
        ctx->pc = 0x15E218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E214u;
        // 0x15e218: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E21Cu;
        goto label_15e21c;
    }
    ctx->pc = 0x15E214u;
    SET_GPR_U32(ctx, 31, 0x15E21Cu);
    ctx->pc = 0x15E218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E214u;
    // 0x15e218: 0x8c44b734  lw          $a0, -0x48CC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15E214u, 0x15E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E21Cu;
label_15e21c:
    // 0x15e21c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x15e21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e220:
    // 0x15e220: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15e220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_15e224:
    // 0x15e224: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15e224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15e228:
    // 0x15e228: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x15e228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_15e22c:
    // 0x15e22c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15e22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15e230:
    // 0x15e230: 0x3e00008  jr          $ra
label_15e234:
    if (ctx->pc == 0x15E234u) {
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E238u;
        goto label_fallthrough_0x15e230;
    }
    ctx->pc = 0x15E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E230u;
        // 0x15e234: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15e230:
    ctx->pc = 0x15E238u;
}
