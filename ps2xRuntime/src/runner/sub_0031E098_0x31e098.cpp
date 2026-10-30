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

// Function: sub_0031E098
// Address: 0x31e098 - 0x31e270
void sub_0031E098_0x31e098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E098_0x31e098");
#endif

    switch (ctx->pc) {
        case 0x31e098u: goto label_31e098;
        case 0x31e09cu: goto label_31e09c;
        case 0x31e0a0u: goto label_31e0a0;
        case 0x31e0a4u: goto label_31e0a4;
        case 0x31e0a8u: goto label_31e0a8;
        case 0x31e0acu: goto label_31e0ac;
        case 0x31e0b0u: goto label_31e0b0;
        case 0x31e0b4u: goto label_31e0b4;
        case 0x31e0b8u: goto label_31e0b8;
        case 0x31e0bcu: goto label_31e0bc;
        case 0x31e0c0u: goto label_31e0c0;
        case 0x31e0c4u: goto label_31e0c4;
        case 0x31e0c8u: goto label_31e0c8;
        case 0x31e0ccu: goto label_31e0cc;
        case 0x31e0d0u: goto label_31e0d0;
        case 0x31e0d4u: goto label_31e0d4;
        case 0x31e0d8u: goto label_31e0d8;
        case 0x31e0dcu: goto label_31e0dc;
        case 0x31e0e0u: goto label_31e0e0;
        case 0x31e0e4u: goto label_31e0e4;
        case 0x31e0e8u: goto label_31e0e8;
        case 0x31e0ecu: goto label_31e0ec;
        case 0x31e0f0u: goto label_31e0f0;
        case 0x31e0f4u: goto label_31e0f4;
        case 0x31e0f8u: goto label_31e0f8;
        case 0x31e0fcu: goto label_31e0fc;
        case 0x31e100u: goto label_31e100;
        case 0x31e104u: goto label_31e104;
        case 0x31e108u: goto label_31e108;
        case 0x31e10cu: goto label_31e10c;
        case 0x31e110u: goto label_31e110;
        case 0x31e114u: goto label_31e114;
        case 0x31e118u: goto label_31e118;
        case 0x31e11cu: goto label_31e11c;
        case 0x31e120u: goto label_31e120;
        case 0x31e124u: goto label_31e124;
        case 0x31e128u: goto label_31e128;
        case 0x31e12cu: goto label_31e12c;
        case 0x31e130u: goto label_31e130;
        case 0x31e134u: goto label_31e134;
        case 0x31e138u: goto label_31e138;
        case 0x31e13cu: goto label_31e13c;
        case 0x31e140u: goto label_31e140;
        case 0x31e144u: goto label_31e144;
        case 0x31e148u: goto label_31e148;
        case 0x31e14cu: goto label_31e14c;
        case 0x31e150u: goto label_31e150;
        case 0x31e154u: goto label_31e154;
        case 0x31e158u: goto label_31e158;
        case 0x31e15cu: goto label_31e15c;
        case 0x31e160u: goto label_31e160;
        case 0x31e164u: goto label_31e164;
        case 0x31e168u: goto label_31e168;
        case 0x31e16cu: goto label_31e16c;
        case 0x31e170u: goto label_31e170;
        case 0x31e174u: goto label_31e174;
        case 0x31e178u: goto label_31e178;
        case 0x31e17cu: goto label_31e17c;
        case 0x31e180u: goto label_31e180;
        case 0x31e184u: goto label_31e184;
        case 0x31e188u: goto label_31e188;
        case 0x31e18cu: goto label_31e18c;
        case 0x31e190u: goto label_31e190;
        case 0x31e194u: goto label_31e194;
        case 0x31e198u: goto label_31e198;
        case 0x31e19cu: goto label_31e19c;
        case 0x31e1a0u: goto label_31e1a0;
        case 0x31e1a4u: goto label_31e1a4;
        case 0x31e1a8u: goto label_31e1a8;
        case 0x31e1acu: goto label_31e1ac;
        case 0x31e1b0u: goto label_31e1b0;
        case 0x31e1b4u: goto label_31e1b4;
        case 0x31e1b8u: goto label_31e1b8;
        case 0x31e1bcu: goto label_31e1bc;
        case 0x31e1c0u: goto label_31e1c0;
        case 0x31e1c4u: goto label_31e1c4;
        case 0x31e1c8u: goto label_31e1c8;
        case 0x31e1ccu: goto label_31e1cc;
        case 0x31e1d0u: goto label_31e1d0;
        case 0x31e1d4u: goto label_31e1d4;
        case 0x31e1d8u: goto label_31e1d8;
        case 0x31e1dcu: goto label_31e1dc;
        case 0x31e1e0u: goto label_31e1e0;
        case 0x31e1e4u: goto label_31e1e4;
        case 0x31e1e8u: goto label_31e1e8;
        case 0x31e1ecu: goto label_31e1ec;
        case 0x31e1f0u: goto label_31e1f0;
        case 0x31e1f4u: goto label_31e1f4;
        case 0x31e1f8u: goto label_31e1f8;
        case 0x31e1fcu: goto label_31e1fc;
        case 0x31e200u: goto label_31e200;
        case 0x31e204u: goto label_31e204;
        case 0x31e208u: goto label_31e208;
        case 0x31e20cu: goto label_31e20c;
        case 0x31e210u: goto label_31e210;
        case 0x31e214u: goto label_31e214;
        case 0x31e218u: goto label_31e218;
        case 0x31e21cu: goto label_31e21c;
        case 0x31e220u: goto label_31e220;
        case 0x31e224u: goto label_31e224;
        case 0x31e228u: goto label_31e228;
        case 0x31e22cu: goto label_31e22c;
        case 0x31e230u: goto label_31e230;
        case 0x31e234u: goto label_31e234;
        case 0x31e238u: goto label_31e238;
        case 0x31e23cu: goto label_31e23c;
        case 0x31e240u: goto label_31e240;
        case 0x31e244u: goto label_31e244;
        case 0x31e248u: goto label_31e248;
        case 0x31e24cu: goto label_31e24c;
        case 0x31e250u: goto label_31e250;
        case 0x31e254u: goto label_31e254;
        case 0x31e258u: goto label_31e258;
        case 0x31e25cu: goto label_31e25c;
        case 0x31e260u: goto label_31e260;
        case 0x31e264u: goto label_31e264;
        case 0x31e268u: goto label_31e268;
        case 0x31e26cu: goto label_31e26c;
        default: break;
    }

    ctx->pc = 0x31e098u;

label_31e098:
    // 0x31e098: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x31e098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_31e09c:
    // 0x31e09c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_31e0a0:
    // 0x31e0a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x31e0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_31e0a4:
    // 0x31e0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31e0a8:
    // 0x31e0a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x31e0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_31e0ac:
    // 0x31e0ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x31e0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_31e0b0:
    // 0x31e0b0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x31e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_31e0b4:
    // 0x31e0b4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x31e0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_31e0b8:
    // 0x31e0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31e0bc:
    // 0x31e0bc: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x31e0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_31e0c0:
    // 0x31e0c0: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
label_31e0c4:
    if (ctx->pc == 0x31E0C4u) {
        ctx->pc = 0x31E0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0C0u;
        // 0x31e0c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0C8u;
        goto label_31e0c8;
    }
    ctx->pc = 0x31E0C0u;
    {
        const bool branch_taken_0x31e0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e0c0) {
            ctx->pc = 0x31E0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E0C0u;
            // 0x31e0c4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E18Cu;
            goto label_31e18c;
        }
    }
    ctx->pc = 0x31E0C8u;
label_31e0c8:
    // 0x31e0c8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x31e0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_31e0cc:
    // 0x31e0cc: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
label_31e0d0:
    if (ctx->pc == 0x31E0D0u) {
        ctx->pc = 0x31E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0CCu;
        // 0x31e0d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0D4u;
        goto label_31e0d4;
    }
    ctx->pc = 0x31E0CCu;
    {
        const bool branch_taken_0x31e0cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0CCu;
        // 0x31e0d0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0cc) {
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E0D4u;
label_31e0d4:
    // 0x31e0d4: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x31e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_31e0d8:
    // 0x31e0d8: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x31e0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_31e0dc:
    // 0x31e0dc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x31e0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_31e0e0:
    // 0x31e0e0: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_31e0e4:
    if (ctx->pc == 0x31E0E4u) {
        ctx->pc = 0x31E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0E0u;
        // 0x31e0e4: 0x246203e8  addiu       $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0E8u;
        goto label_31e0e8;
    }
    ctx->pc = 0x31E0E0u;
    {
        const bool branch_taken_0x31e0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0E0u;
        // 0x31e0e4: 0x246203e8  addiu       $v0, $v1, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e0e0) {
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E0E8u;
label_31e0e8:
    // 0x31e0e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31e0ec:
    // 0x31e0ec: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x31e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_31e0f0:
    // 0x31e0f0: 0xc0c7758  jal         func_31DD60
label_31e0f4:
    if (ctx->pc == 0x31E0F4u) {
        ctx->pc = 0x31E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0F0u;
        // 0x31e0f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E0F8u;
        goto label_31e0f8;
    }
    ctx->pc = 0x31E0F0u;
    SET_GPR_U32(ctx, 31, 0x31E0F8u);
    ctx->pc = 0x31E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E0F0u;
    // 0x31e0f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD60u, 0x31E0F0u, 0x31E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E0F8u;
label_31e0f8:
    // 0x31e0f8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31e0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e0fc:
    // 0x31e0fc: 0x50520001  beql        $v0, $s2, . + 4 + (0x1 << 2)
label_31e100:
    if (ctx->pc == 0x31E100u) {
        ctx->pc = 0x31E100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E0FCu;
        // 0x31e100: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E104u;
        goto label_31e104;
    }
    ctx->pc = 0x31E0FCu;
    {
        const bool branch_taken_0x31e0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x31e0fc) {
            ctx->pc = 0x31E100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E0FCu;
            // 0x31e100: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E104u;
            goto label_31e104;
        }
    }
    ctx->pc = 0x31E104u;
label_31e104:
    // 0x31e104: 0xc0c7654  jal         func_31D950
label_31e108:
    if (ctx->pc == 0x31E108u) {
        ctx->pc = 0x31E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E104u;
        // 0x31e108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E10Cu;
        goto label_31e10c;
    }
    ctx->pc = 0x31E104u;
    SET_GPR_U32(ctx, 31, 0x31E10Cu);
    ctx->pc = 0x31E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E104u;
    // 0x31e108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D950u, 0x31E104u, 0x31E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E10Cu;
label_31e10c:
    // 0x31e10c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31e110:
    // 0x31e110: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31e114:
    // 0x31e114: 0xc0e40a2  jal         func_390288
label_31e118:
    if (ctx->pc == 0x31E118u) {
        ctx->pc = 0x31E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E114u;
        // 0x31e118: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E11Cu;
        goto label_31e11c;
    }
    ctx->pc = 0x31E114u;
    SET_GPR_U32(ctx, 31, 0x31E11Cu);
    ctx->pc = 0x31E118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E114u;
    // 0x31e118: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x31E114u, 0x31E11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E11Cu;
label_31e11c:
    // 0x31e11c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_31e120:
    if (ctx->pc == 0x31E120u) {
        ctx->pc = 0x31E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E11Cu;
        // 0x31e120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E124u;
        goto label_31e124;
    }
    ctx->pc = 0x31E11Cu;
    {
        const bool branch_taken_0x31e11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E11Cu;
        // 0x31e120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e11c) {
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E124u;
label_31e124:
    // 0x31e124: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x31e124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_31e128:
    // 0x31e128: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x31e128u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_31e12c:
    // 0x31e12c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31e12cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31e130:
    // 0x31e130: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x31e130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_31e134:
    // 0x31e134: 0xc10587a  jal         func_4161E8
label_31e138:
    if (ctx->pc == 0x31E138u) {
        ctx->pc = 0x31E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E134u;
        // 0x31e138: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E13Cu;
        goto label_31e13c;
    }
    ctx->pc = 0x31E134u;
    SET_GPR_U32(ctx, 31, 0x31E13Cu);
    ctx->pc = 0x31E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E134u;
    // 0x31e138: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x31E134u, 0x31E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E13Cu;
label_31e13c:
    // 0x31e13c: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x31e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_31e140:
    // 0x31e140: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e144:
    // 0x31e144: 0xc1067b8  jal         func_419EE0
label_31e148:
    if (ctx->pc == 0x31E148u) {
        ctx->pc = 0x31E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E144u;
        // 0x31e148: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E14Cu;
        goto label_31e14c;
    }
    ctx->pc = 0x31E144u;
    SET_GPR_U32(ctx, 31, 0x31E14Cu);
    ctx->pc = 0x31E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E144u;
    // 0x31e148: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x31E144u, 0x31E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E14Cu;
label_31e14c:
    // 0x31e14c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_31e150:
    if (ctx->pc == 0x31E150u) {
        ctx->pc = 0x31E154u;
        goto label_31e154;
    }
    ctx->pc = 0x31E14Cu;
    {
        const bool branch_taken_0x31e14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e14c) {
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E154u;
label_31e154:
    // 0x31e154: 0xc08a05a  jal         func_228168
label_31e158:
    if (ctx->pc == 0x31E158u) {
        ctx->pc = 0x31E158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E154u;
        // 0x31e158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E15Cu;
        goto label_31e15c;
    }
    ctx->pc = 0x31E154u;
    SET_GPR_U32(ctx, 31, 0x31E15Cu);
    ctx->pc = 0x31E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E154u;
    // 0x31e158: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x31E154u, 0x31E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E15Cu;
label_31e15c:
    // 0x31e15c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_31e160:
    if (ctx->pc == 0x31E160u) {
        ctx->pc = 0x31E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E15Cu;
        // 0x31e160: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E164u;
        goto label_31e164;
    }
    ctx->pc = 0x31E15Cu;
    {
        const bool branch_taken_0x31e15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E15Cu;
        // 0x31e160: 0xc7a10004  lwc1        $f1, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e15c) {
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E164u;
label_31e164:
    // 0x31e164: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x31e164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31e168:
    // 0x31e168: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x31e168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31e16c:
    // 0x31e16c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x31e16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31e170:
    // 0x31e170: 0x0  nop
    ctx->pc = 0x31e170u;
    // NOP
label_31e174:
    // 0x31e174: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31e178:
    if (ctx->pc == 0x31E178u) {
        ctx->pc = 0x31E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E174u;
        // 0x31e178: 0xae320034  sw          $s2, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E17Cu;
        goto label_31e17c;
    }
    ctx->pc = 0x31E174u;
    {
        const bool branch_taken_0x31e174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31e174) {
            ctx->pc = 0x31E178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E174u;
            // 0x31e178: 0xae320034  sw          $s2, 0x34($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E17Cu;
            goto label_31e17c;
        }
    }
    ctx->pc = 0x31E17Cu;
label_31e17c:
    // 0x31e17c: 0xc0c77e4  jal         func_31DF90
label_31e180:
    if (ctx->pc == 0x31E180u) {
        ctx->pc = 0x31E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E17Cu;
        // 0x31e180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E184u;
        goto label_31e184;
    }
    ctx->pc = 0x31E17Cu;
    SET_GPR_U32(ctx, 31, 0x31E184u);
    ctx->pc = 0x31E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E17Cu;
    // 0x31e180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DF90u, 0x31E17Cu, 0x31E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E184u;
label_31e184:
    // 0x31e184: 0x10000030  b           . + 4 + (0x30 << 2)
label_31e188:
    if (ctx->pc == 0x31E188u) {
        ctx->pc = 0x31E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E184u;
        // 0x31e188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E18Cu;
        goto label_31e18c;
    }
    ctx->pc = 0x31E184u;
    {
        const bool branch_taken_0x31e184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E184u;
        // 0x31e188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e184) {
            ctx->pc = 0x31E248u;
            goto label_31e248;
        }
    }
    ctx->pc = 0x31E18Cu;
label_31e18c:
    // 0x31e18c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x31e18cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e190:
    // 0x31e190: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31e190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e194:
    // 0x31e194: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x31e194u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31e198:
    // 0x31e198: 0x24530048  addiu       $s3, $v0, 0x48
    ctx->pc = 0x31e198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31e19c:
    // 0x31e19c: 0x3c14006f  lui         $s4, 0x6F
    ctx->pc = 0x31e19cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)111 << 16));
label_31e1a0:
    // 0x31e1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31e1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31e1a4:
    // 0x31e1a4: 0x0  nop
    ctx->pc = 0x31e1a4u;
    // NOP
label_31e1a8:
    // 0x31e1a8: 0xc137826  jal         func_4DE098
label_31e1ac:
    if (ctx->pc == 0x31E1ACu) {
        ctx->pc = 0x31E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1A8u;
        // 0x31e1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1B0u;
        goto label_31e1b0;
    }
    ctx->pc = 0x31E1A8u;
    SET_GPR_U32(ctx, 31, 0x31E1B0u);
    ctx->pc = 0x31E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1A8u;
    // 0x31e1ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31E1A8u, 0x31E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1B0u;
label_31e1b0:
    // 0x31e1b0: 0xc0e409a  jal         func_390268
label_31e1b4:
    if (ctx->pc == 0x31E1B4u) {
        ctx->pc = 0x31E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1B0u;
        // 0x31e1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1B8u;
        goto label_31e1b8;
    }
    ctx->pc = 0x31E1B0u;
    SET_GPR_U32(ctx, 31, 0x31E1B8u);
    ctx->pc = 0x31E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1B0u;
    // 0x31e1b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31E1B0u, 0x31E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1B8u;
label_31e1b8:
    // 0x31e1b8: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
label_31e1bc:
    if (ctx->pc == 0x31E1BCu) {
        ctx->pc = 0x31E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1B8u;
        // 0x31e1bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1C0u;
        goto label_31e1c0;
    }
    ctx->pc = 0x31E1B8u;
    {
        const bool branch_taken_0x31e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e1b8) {
            ctx->pc = 0x31E1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E1B8u;
            // 0x31e1bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E234u;
            goto label_31e234;
        }
    }
    ctx->pc = 0x31E1C0u;
label_31e1c0:
    // 0x31e1c0: 0xc087502  jal         func_21D408
label_31e1c4:
    if (ctx->pc == 0x31E1C4u) {
        ctx->pc = 0x31E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1C0u;
        // 0x31e1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1C8u;
        goto label_31e1c8;
    }
    ctx->pc = 0x31E1C0u;
    SET_GPR_U32(ctx, 31, 0x31E1C8u);
    ctx->pc = 0x31E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E1C0u;
    // 0x31e1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31E1C0u, 0x31E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E1C8u;
label_31e1c8:
    // 0x31e1c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x31e1c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e1cc:
    // 0x31e1cc: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x31e1ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_31e1d0:
    // 0x31e1d0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_31e1d4:
    if (ctx->pc == 0x31E1D4u) {
        ctx->pc = 0x31E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1D0u;
        // 0x31e1d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1D8u;
        goto label_31e1d8;
    }
    ctx->pc = 0x31E1D0u;
    {
        const bool branch_taken_0x31e1d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x31E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1D0u;
        // 0x31e1d4: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1d0) {
            ctx->pc = 0x31E1E4u;
            goto label_31e1e4;
        }
    }
    ctx->pc = 0x31E1D8u;
label_31e1d8:
    // 0x31e1d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31e1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31e1dc:
    // 0x31e1dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_31e1e0:
    if (ctx->pc == 0x31E1E0u) {
        ctx->pc = 0x31E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1DCu;
        // 0x31e1e0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1E4u;
        goto label_31e1e4;
    }
    ctx->pc = 0x31E1DCu;
    {
        const bool branch_taken_0x31e1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1DCu;
        // 0x31e1e0: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e1dc) {
            ctx->pc = 0x31E1E8u;
            goto label_31e1e8;
        }
    }
    ctx->pc = 0x31E1E4u;
label_31e1e4:
    // 0x31e1e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31e1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31e1e8:
    // 0x31e1e8: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
label_31e1ec:
    if (ctx->pc == 0x31E1ECu) {
        ctx->pc = 0x31E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1E8u;
        // 0x31e1ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E1F0u;
        goto label_31e1f0;
    }
    ctx->pc = 0x31E1E8u;
    {
        const bool branch_taken_0x31e1e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e1e8) {
            ctx->pc = 0x31E1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E1E8u;
            // 0x31e1ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E234u;
            goto label_31e234;
        }
    }
    ctx->pc = 0x31E1F0u;
label_31e1f0:
    // 0x31e1f0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x31e1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31e1f4:
    // 0x31e1f4: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x31e1f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_31e1f8:
    // 0x31e1f8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31e1fc:
    // 0x31e1fc: 0x40f809  jalr        $v0
label_31e200:
    if (ctx->pc == 0x31E200u) {
        ctx->pc = 0x31E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1FCu;
        // 0x31e200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E204u;
        goto label_31e204;
    }
    ctx->pc = 0x31E1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31E204u);
        ctx->pc = 0x31E200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E1FCu;
        // 0x31e200: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E1FCu, 0x31E204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31E204u;
label_31e204:
    // 0x31e204: 0x5455000b  bnel        $v0, $s5, . + 4 + (0xB << 2)
label_31e208:
    if (ctx->pc == 0x31E208u) {
        ctx->pc = 0x31E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E204u;
        // 0x31e208: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E20Cu;
        goto label_31e20c;
    }
    ctx->pc = 0x31E204u;
    {
        const bool branch_taken_0x31e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x31e204) {
            ctx->pc = 0x31E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E204u;
            // 0x31e208: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E234u;
            goto label_31e234;
        }
    }
    ctx->pc = 0x31E20Cu;
label_31e20c:
    // 0x31e20c: 0x2684b8a0  addiu       $a0, $s4, -0x4760
    ctx->pc = 0x31e20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949024));
label_31e210:
    // 0x31e210: 0xc0cd4ee  jal         func_3353B8
label_31e214:
    if (ctx->pc == 0x31E214u) {
        ctx->pc = 0x31E214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E210u;
        // 0x31e214: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E218u;
        goto label_31e218;
    }
    ctx->pc = 0x31E210u;
    SET_GPR_U32(ctx, 31, 0x31E218u);
    ctx->pc = 0x31E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E210u;
    // 0x31e214: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x31E210u, 0x31E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E218u;
label_31e218:
    // 0x31e218: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x31e218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31e21c:
    // 0x31e21c: 0xc0b6eba  jal         func_2DBAE8
label_31e220:
    if (ctx->pc == 0x31E220u) {
        ctx->pc = 0x31E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E21Cu;
        // 0x31e220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E224u;
        goto label_31e224;
    }
    ctx->pc = 0x31E21Cu;
    SET_GPR_U32(ctx, 31, 0x31E224u);
    ctx->pc = 0x31E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E21Cu;
    // 0x31e220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBAE8u, 0x31E21Cu, 0x31E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E224u;
label_31e224:
    // 0x31e224: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x31e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_31e228:
    // 0x31e228: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x31e228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_31e22c:
    // 0x31e22c: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x31e22cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_31e230:
    // 0x31e230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31e230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31e234:
    // 0x31e234: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x31e234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31e238:
    // 0x31e238: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_31e23c:
    if (ctx->pc == 0x31E23Cu) {
        ctx->pc = 0x31E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E238u;
        // 0x31e23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E240u;
        goto label_31e240;
    }
    ctx->pc = 0x31E238u;
    {
        const bool branch_taken_0x31e238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e238) {
            ctx->pc = 0x31E23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E238u;
            // 0x31e23c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e1a8;
        }
    }
    ctx->pc = 0x31E240u;
label_31e240:
    // 0x31e240: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x31e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_31e244:
    // 0x31e244: 0x12100a  movz        $v0, $zero, $s2
    ctx->pc = 0x31e244u;
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_31e248:
    // 0x31e248: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x31e248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31e24c:
    // 0x31e24c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31e24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31e250:
    // 0x31e250: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x31e250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31e254:
    // 0x31e254: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x31e254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31e258:
    // 0x31e258: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x31e258u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31e25c:
    // 0x31e25c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31e25cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_31e260:
    // 0x31e260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31e264:
    // 0x31e264: 0x3e00008  jr          $ra
label_31e268:
    if (ctx->pc == 0x31E268u) {
        ctx->pc = 0x31E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E264u;
        // 0x31e268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31E26Cu;
        goto label_31e26c;
    }
    ctx->pc = 0x31E264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E264u;
        // 0x31e268: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E26Cu;
label_31e26c:
    // 0x31e26c: 0x0  nop
    ctx->pc = 0x31e26cu;
    // NOP
    ctx->pc = 0x31e270u;
}
