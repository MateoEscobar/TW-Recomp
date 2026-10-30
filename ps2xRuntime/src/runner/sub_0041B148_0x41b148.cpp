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

// Function: sub_0041B148
// Address: 0x41b148 - 0x41b280
void sub_0041B148_0x41b148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B148_0x41b148");
#endif

    switch (ctx->pc) {
        case 0x41b148u: goto label_41b148;
        case 0x41b14cu: goto label_41b14c;
        case 0x41b150u: goto label_41b150;
        case 0x41b154u: goto label_41b154;
        case 0x41b158u: goto label_41b158;
        case 0x41b15cu: goto label_41b15c;
        case 0x41b160u: goto label_41b160;
        case 0x41b164u: goto label_41b164;
        case 0x41b168u: goto label_41b168;
        case 0x41b16cu: goto label_41b16c;
        case 0x41b170u: goto label_41b170;
        case 0x41b174u: goto label_41b174;
        case 0x41b178u: goto label_41b178;
        case 0x41b17cu: goto label_41b17c;
        case 0x41b180u: goto label_41b180;
        case 0x41b184u: goto label_41b184;
        case 0x41b188u: goto label_41b188;
        case 0x41b18cu: goto label_41b18c;
        case 0x41b190u: goto label_41b190;
        case 0x41b194u: goto label_41b194;
        case 0x41b198u: goto label_41b198;
        case 0x41b19cu: goto label_41b19c;
        case 0x41b1a0u: goto label_41b1a0;
        case 0x41b1a4u: goto label_41b1a4;
        case 0x41b1a8u: goto label_41b1a8;
        case 0x41b1acu: goto label_41b1ac;
        case 0x41b1b0u: goto label_41b1b0;
        case 0x41b1b4u: goto label_41b1b4;
        case 0x41b1b8u: goto label_41b1b8;
        case 0x41b1bcu: goto label_41b1bc;
        case 0x41b1c0u: goto label_41b1c0;
        case 0x41b1c4u: goto label_41b1c4;
        case 0x41b1c8u: goto label_41b1c8;
        case 0x41b1ccu: goto label_41b1cc;
        case 0x41b1d0u: goto label_41b1d0;
        case 0x41b1d4u: goto label_41b1d4;
        case 0x41b1d8u: goto label_41b1d8;
        case 0x41b1dcu: goto label_41b1dc;
        case 0x41b1e0u: goto label_41b1e0;
        case 0x41b1e4u: goto label_41b1e4;
        case 0x41b1e8u: goto label_41b1e8;
        case 0x41b1ecu: goto label_41b1ec;
        case 0x41b1f0u: goto label_41b1f0;
        case 0x41b1f4u: goto label_41b1f4;
        case 0x41b1f8u: goto label_41b1f8;
        case 0x41b1fcu: goto label_41b1fc;
        case 0x41b200u: goto label_41b200;
        case 0x41b204u: goto label_41b204;
        case 0x41b208u: goto label_41b208;
        case 0x41b20cu: goto label_41b20c;
        case 0x41b210u: goto label_41b210;
        case 0x41b214u: goto label_41b214;
        case 0x41b218u: goto label_41b218;
        case 0x41b21cu: goto label_41b21c;
        case 0x41b220u: goto label_41b220;
        case 0x41b224u: goto label_41b224;
        case 0x41b228u: goto label_41b228;
        case 0x41b22cu: goto label_41b22c;
        case 0x41b230u: goto label_41b230;
        case 0x41b234u: goto label_41b234;
        case 0x41b238u: goto label_41b238;
        case 0x41b23cu: goto label_41b23c;
        case 0x41b240u: goto label_41b240;
        case 0x41b244u: goto label_41b244;
        case 0x41b248u: goto label_41b248;
        case 0x41b24cu: goto label_41b24c;
        case 0x41b250u: goto label_41b250;
        case 0x41b254u: goto label_41b254;
        case 0x41b258u: goto label_41b258;
        case 0x41b25cu: goto label_41b25c;
        case 0x41b260u: goto label_41b260;
        case 0x41b264u: goto label_41b264;
        case 0x41b268u: goto label_41b268;
        case 0x41b26cu: goto label_41b26c;
        case 0x41b270u: goto label_41b270;
        case 0x41b274u: goto label_41b274;
        case 0x41b278u: goto label_41b278;
        case 0x41b27cu: goto label_41b27c;
        default: break;
    }

    ctx->pc = 0x41b148u;

label_41b148:
    // 0x41b148: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41b14c:
    // 0x41b14c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x41b14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_41b150:
    // 0x41b150: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x41b150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_41b154:
    // 0x41b154: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41b154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41b158:
    // 0x41b158: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x41b158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_41b15c:
    // 0x41b15c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41b15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41b160:
    // 0x41b160: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41b160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41b164:
    // 0x41b164: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41b164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41b168:
    // 0x41b168: 0xc106c34  jal         func_41B0D0
label_41b16c:
    if (ctx->pc == 0x41B16Cu) {
        ctx->pc = 0x41B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B168u;
        // 0x41b16c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B170u;
        goto label_41b170;
    }
    ctx->pc = 0x41B168u;
    SET_GPR_U32(ctx, 31, 0x41B170u);
    ctx->pc = 0x41B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B168u;
    // 0x41b16c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B0D0u, 0x41B168u, 0x41B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B170u;
label_41b170:
    // 0x41b170: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
label_41b174:
    if (ctx->pc == 0x41B174u) {
        ctx->pc = 0x41B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B170u;
        // 0x41b174: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B178u;
        goto label_41b178;
    }
    ctx->pc = 0x41B170u;
    {
        const bool branch_taken_0x41b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b170) {
            ctx->pc = 0x41B174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B170u;
            // 0x41b174: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B268u;
            goto label_41b268;
        }
    }
    ctx->pc = 0x41B178u;
label_41b178:
    // 0x41b178: 0x5200003b  beql        $s0, $zero, . + 4 + (0x3B << 2)
label_41b17c:
    if (ctx->pc == 0x41B17Cu) {
        ctx->pc = 0x41B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B178u;
        // 0x41b17c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B180u;
        goto label_41b180;
    }
    ctx->pc = 0x41B178u;
    {
        const bool branch_taken_0x41b178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b178) {
            ctx->pc = 0x41B17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B178u;
            // 0x41b17c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B268u;
            goto label_41b268;
        }
    }
    ctx->pc = 0x41B180u;
label_41b180:
    // 0x41b180: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41b180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41b184:
    // 0x41b184: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x41b184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41b188:
    // 0x41b188: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_41b18c:
    // 0x41b18c: 0x40f809  jalr        $v0
label_41b190:
    if (ctx->pc == 0x41B190u) {
        ctx->pc = 0x41B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B18Cu;
        // 0x41b190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B194u;
        goto label_41b194;
    }
    ctx->pc = 0x41B18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B194u);
        ctx->pc = 0x41B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B18Cu;
        // 0x41b190: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B18Cu, 0x41B194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B194u;
label_41b194:
    // 0x41b194: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x41b194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_41b198:
    // 0x41b198: 0xc0e4060  jal         func_390180
label_41b19c:
    if (ctx->pc == 0x41B19Cu) {
        ctx->pc = 0x41B19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B198u;
        // 0x41b19c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1A0u;
        goto label_41b1a0;
    }
    ctx->pc = 0x41B198u;
    SET_GPR_U32(ctx, 31, 0x41B1A0u);
    ctx->pc = 0x41B19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B198u;
    // 0x41b19c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x41B198u, 0x41B1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B1A0u;
label_41b1a0:
    // 0x41b1a0: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_41b1a4:
    if (ctx->pc == 0x41B1A4u) {
        ctx->pc = 0x41B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1A0u;
        // 0x41b1a4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1A8u;
        goto label_41b1a8;
    }
    ctx->pc = 0x41B1A0u;
    {
        const bool branch_taken_0x41b1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1A0u;
        // 0x41b1a4: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b1a0) {
            ctx->pc = 0x41B264u;
            goto label_41b264;
        }
    }
    ctx->pc = 0x41B1A8u;
label_41b1a8:
    // 0x41b1a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b1ac:
    // 0x41b1ac: 0x8e512b04  lw          $s1, 0x2B04($s2)
    ctx->pc = 0x41b1acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b1b0:
    // 0x41b1b0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x41b1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41b1b4:
    // 0x41b1b4: 0x86020048  lh          $v0, 0x48($s0)
    ctx->pc = 0x41b1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 72)));
label_41b1b8:
    // 0x41b1b8: 0x26100048  addiu       $s0, $s0, 0x48
    ctx->pc = 0x41b1b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_41b1bc:
    // 0x41b1bc: 0xc106c34  jal         func_41B0D0
label_41b1c0:
    if (ctx->pc == 0x41B1C0u) {
        ctx->pc = 0x41B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1BCu;
        // 0x41b1c0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1C4u;
        goto label_41b1c4;
    }
    ctx->pc = 0x41B1BCu;
    SET_GPR_U32(ctx, 31, 0x41B1C4u);
    ctx->pc = 0x41B1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B1BCu;
    // 0x41b1c0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B0D0u, 0x41B1BCu, 0x41B1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B1C4u;
label_41b1c4:
    // 0x41b1c4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x41b1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_41b1c8:
    // 0x41b1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41b1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b1cc:
    // 0x41b1cc: 0x60f809  jalr        $v1
label_41b1d0:
    if (ctx->pc == 0x41B1D0u) {
        ctx->pc = 0x41B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1CCu;
        // 0x41b1d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1D4u;
        goto label_41b1d4;
    }
    ctx->pc = 0x41B1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B1D4u);
        ctx->pc = 0x41B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1CCu;
        // 0x41b1d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B1CCu, 0x41B1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B1D4u;
label_41b1d4:
    // 0x41b1d4: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_41b1d8:
    if (ctx->pc == 0x41B1D8u) {
        ctx->pc = 0x41B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1D4u;
        // 0x41b1d8: 0x8e462b04  lw          $a2, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1DCu;
        goto label_41b1dc;
    }
    ctx->pc = 0x41B1D4u;
    {
        const bool branch_taken_0x41b1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1D4u;
        // 0x41b1d8: 0x8e462b04  lw          $a2, 0x2B04($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b1d4) {
            ctx->pc = 0x41B264u;
            goto label_41b264;
        }
    }
    ctx->pc = 0x41B1DCu;
label_41b1dc:
    // 0x41b1dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x41b1dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_41b1e0:
    // 0x41b1e0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b1e4:
    // 0x41b1e4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x41b1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_41b1e8:
    // 0x41b1e8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x41b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_41b1ec:
    // 0x41b1ec: 0x60f809  jalr        $v1
label_41b1f0:
    if (ctx->pc == 0x41B1F0u) {
        ctx->pc = 0x41B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1ECu;
        // 0x41b1f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B1F4u;
        goto label_41b1f4;
    }
    ctx->pc = 0x41B1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B1F4u);
        ctx->pc = 0x41B1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B1ECu;
        // 0x41b1f0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B1ECu, 0x41B1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B1F4u;
label_41b1f4:
    // 0x41b1f4: 0x8e462b04  lw          $a2, 0x2B04($s2)
    ctx->pc = 0x41b1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b1f8:
    // 0x41b1f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41b1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b1fc:
    // 0x41b1fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41b200:
    // 0x41b200: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x41b200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_41b204:
    // 0x41b204: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x41b204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_41b208:
    // 0x41b208: 0x60f809  jalr        $v1
label_41b20c:
    if (ctx->pc == 0x41B20Cu) {
        ctx->pc = 0x41B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B208u;
        // 0x41b20c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B210u;
        goto label_41b210;
    }
    ctx->pc = 0x41B208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B210u);
        ctx->pc = 0x41B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B208u;
        // 0x41b20c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B208u, 0x41B210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B210u;
label_41b210:
    // 0x41b210: 0x8e472b04  lw          $a3, 0x2B04($s2)
    ctx->pc = 0x41b210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11012)));
label_41b214:
    // 0x41b214: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41b214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41b218:
    // 0x41b218: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41b218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41b21c:
    // 0x41b21c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41b21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41b220:
    // 0x41b220: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41b220u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41b224:
    // 0x41b224: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41b224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41b228:
    // 0x41b228: 0x60f809  jalr        $v1
label_41b22c:
    if (ctx->pc == 0x41B22Cu) {
        ctx->pc = 0x41B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B228u;
        // 0x41b22c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B230u;
        goto label_41b230;
    }
    ctx->pc = 0x41B228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41B230u);
        ctx->pc = 0x41B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B228u;
        // 0x41b22c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B228u, 0x41B230u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B230u;
label_41b230:
    // 0x41b230: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
label_41b234:
    if (ctx->pc == 0x41B234u) {
        ctx->pc = 0x41B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B230u;
        // 0x41b234: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B238u;
        goto label_41b238;
    }
    ctx->pc = 0x41B230u;
    {
        const bool branch_taken_0x41b230 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B230u;
        // 0x41b234: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b230) {
            ctx->pc = 0x41B268u;
            goto label_41b268;
        }
    }
    ctx->pc = 0x41B238u;
label_41b238:
    // 0x41b238: 0xc047e6c  jal         func_11F9B0
label_41b23c:
    if (ctx->pc == 0x41B23Cu) {
        ctx->pc = 0x41B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B238u;
        // 0x41b23c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B240u;
        goto label_41b240;
    }
    ctx->pc = 0x41B238u;
    SET_GPR_U32(ctx, 31, 0x41B240u);
    ctx->pc = 0x41B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B238u;
    // 0x41b23c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x41B238u, 0x41B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B240u;
label_41b240:
    // 0x41b240: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_41b244:
    if (ctx->pc == 0x41B244u) {
        ctx->pc = 0x41B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B240u;
        // 0x41b244: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B248u;
        goto label_41b248;
    }
    ctx->pc = 0x41B240u;
    {
        const bool branch_taken_0x41b240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B240u;
        // 0x41b244: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b240) {
            ctx->pc = 0x41B268u;
            goto label_41b268;
        }
    }
    ctx->pc = 0x41B248u;
label_41b248:
    // 0x41b248: 0xc047e6c  jal         func_11F9B0
label_41b24c:
    if (ctx->pc == 0x41B24Cu) {
        ctx->pc = 0x41B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B248u;
        // 0x41b24c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B250u;
        goto label_41b250;
    }
    ctx->pc = 0x41B248u;
    SET_GPR_U32(ctx, 31, 0x41B250u);
    ctx->pc = 0x41B24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B248u;
    // 0x41b24c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x41B248u, 0x41B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B250u;
label_41b250:
    // 0x41b250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x41b250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41b254:
    // 0x41b254: 0x84640138  lh          $a0, 0x138($v1)
    ctx->pc = 0x41b254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 312)));
label_41b258:
    // 0x41b258: 0x8c65013c  lw          $a1, 0x13C($v1)
    ctx->pc = 0x41b258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 316)));
label_41b25c:
    // 0x41b25c: 0xa0f809  jalr        $a1
label_41b260:
    if (ctx->pc == 0x41B260u) {
        ctx->pc = 0x41B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B25Cu;
        // 0x41b260: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B264u;
        goto label_41b264;
    }
    ctx->pc = 0x41B25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x41B264u);
        ctx->pc = 0x41B260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B25Cu;
        // 0x41b260: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B25Cu, 0x41B264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B264u;
label_41b264:
    // 0x41b264: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x41b264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41b268:
    // 0x41b268: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x41b268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b26c:
    // 0x41b26c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41b26cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b270:
    // 0x41b270: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x41b270u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b274:
    // 0x41b274: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41b274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41b278:
    // 0x41b278: 0x3e00008  jr          $ra
label_41b27c:
    if (ctx->pc == 0x41B27Cu) {
        ctx->pc = 0x41B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B278u;
        // 0x41b27c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B280u;
        goto label_fallthrough_0x41b278;
    }
    ctx->pc = 0x41B278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B278u;
        // 0x41b27c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41b278:
    ctx->pc = 0x41B280u;
}
