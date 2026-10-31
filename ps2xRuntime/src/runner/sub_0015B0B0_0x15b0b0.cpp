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

// Function: sub_0015B0B0
// Address: 0x15b0b0 - 0x15b268
void sub_0015B0B0_0x15b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B0B0_0x15b0b0");
#endif

    switch (ctx->pc) {
        case 0x15b0b0u: goto label_15b0b0;
        case 0x15b0b4u: goto label_15b0b4;
        case 0x15b0b8u: goto label_15b0b8;
        case 0x15b0bcu: goto label_15b0bc;
        case 0x15b0c0u: goto label_15b0c0;
        case 0x15b0c4u: goto label_15b0c4;
        case 0x15b0c8u: goto label_15b0c8;
        case 0x15b0ccu: goto label_15b0cc;
        case 0x15b0d0u: goto label_15b0d0;
        case 0x15b0d4u: goto label_15b0d4;
        case 0x15b0d8u: goto label_15b0d8;
        case 0x15b0dcu: goto label_15b0dc;
        case 0x15b0e0u: goto label_15b0e0;
        case 0x15b0e4u: goto label_15b0e4;
        case 0x15b0e8u: goto label_15b0e8;
        case 0x15b0ecu: goto label_15b0ec;
        case 0x15b0f0u: goto label_15b0f0;
        case 0x15b0f4u: goto label_15b0f4;
        case 0x15b0f8u: goto label_15b0f8;
        case 0x15b0fcu: goto label_15b0fc;
        case 0x15b100u: goto label_15b100;
        case 0x15b104u: goto label_15b104;
        case 0x15b108u: goto label_15b108;
        case 0x15b10cu: goto label_15b10c;
        case 0x15b110u: goto label_15b110;
        case 0x15b114u: goto label_15b114;
        case 0x15b118u: goto label_15b118;
        case 0x15b11cu: goto label_15b11c;
        case 0x15b120u: goto label_15b120;
        case 0x15b124u: goto label_15b124;
        case 0x15b128u: goto label_15b128;
        case 0x15b12cu: goto label_15b12c;
        case 0x15b130u: goto label_15b130;
        case 0x15b134u: goto label_15b134;
        case 0x15b138u: goto label_15b138;
        case 0x15b13cu: goto label_15b13c;
        case 0x15b140u: goto label_15b140;
        case 0x15b144u: goto label_15b144;
        case 0x15b148u: goto label_15b148;
        case 0x15b14cu: goto label_15b14c;
        case 0x15b150u: goto label_15b150;
        case 0x15b154u: goto label_15b154;
        case 0x15b158u: goto label_15b158;
        case 0x15b15cu: goto label_15b15c;
        case 0x15b160u: goto label_15b160;
        case 0x15b164u: goto label_15b164;
        case 0x15b168u: goto label_15b168;
        case 0x15b16cu: goto label_15b16c;
        case 0x15b170u: goto label_15b170;
        case 0x15b174u: goto label_15b174;
        case 0x15b178u: goto label_15b178;
        case 0x15b17cu: goto label_15b17c;
        case 0x15b180u: goto label_15b180;
        case 0x15b184u: goto label_15b184;
        case 0x15b188u: goto label_15b188;
        case 0x15b18cu: goto label_15b18c;
        case 0x15b190u: goto label_15b190;
        case 0x15b194u: goto label_15b194;
        case 0x15b198u: goto label_15b198;
        case 0x15b19cu: goto label_15b19c;
        case 0x15b1a0u: goto label_15b1a0;
        case 0x15b1a4u: goto label_15b1a4;
        case 0x15b1a8u: goto label_15b1a8;
        case 0x15b1acu: goto label_15b1ac;
        case 0x15b1b0u: goto label_15b1b0;
        case 0x15b1b4u: goto label_15b1b4;
        case 0x15b1b8u: goto label_15b1b8;
        case 0x15b1bcu: goto label_15b1bc;
        case 0x15b1c0u: goto label_15b1c0;
        case 0x15b1c4u: goto label_15b1c4;
        case 0x15b1c8u: goto label_15b1c8;
        case 0x15b1ccu: goto label_15b1cc;
        case 0x15b1d0u: goto label_15b1d0;
        case 0x15b1d4u: goto label_15b1d4;
        case 0x15b1d8u: goto label_15b1d8;
        case 0x15b1dcu: goto label_15b1dc;
        case 0x15b1e0u: goto label_15b1e0;
        case 0x15b1e4u: goto label_15b1e4;
        case 0x15b1e8u: goto label_15b1e8;
        case 0x15b1ecu: goto label_15b1ec;
        case 0x15b1f0u: goto label_15b1f0;
        case 0x15b1f4u: goto label_15b1f4;
        case 0x15b1f8u: goto label_15b1f8;
        case 0x15b1fcu: goto label_15b1fc;
        case 0x15b200u: goto label_15b200;
        case 0x15b204u: goto label_15b204;
        case 0x15b208u: goto label_15b208;
        case 0x15b20cu: goto label_15b20c;
        case 0x15b210u: goto label_15b210;
        case 0x15b214u: goto label_15b214;
        case 0x15b218u: goto label_15b218;
        case 0x15b21cu: goto label_15b21c;
        case 0x15b220u: goto label_15b220;
        case 0x15b224u: goto label_15b224;
        case 0x15b228u: goto label_15b228;
        case 0x15b22cu: goto label_15b22c;
        case 0x15b230u: goto label_15b230;
        case 0x15b234u: goto label_15b234;
        case 0x15b238u: goto label_15b238;
        case 0x15b23cu: goto label_15b23c;
        case 0x15b240u: goto label_15b240;
        case 0x15b244u: goto label_15b244;
        case 0x15b248u: goto label_15b248;
        case 0x15b24cu: goto label_15b24c;
        case 0x15b250u: goto label_15b250;
        case 0x15b254u: goto label_15b254;
        case 0x15b258u: goto label_15b258;
        case 0x15b25cu: goto label_15b25c;
        case 0x15b260u: goto label_15b260;
        case 0x15b264u: goto label_15b264;
        default: break;
    }

    ctx->pc = 0x15b0b0u;

label_15b0b0:
    // 0x15b0b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_15b0b4:
    // 0x15b0b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15b0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_15b0b8:
    // 0x15b0b8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15b0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15b0bc:
    // 0x15b0bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15b0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_15b0c0:
    // 0x15b0c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_15b0c4:
    // 0x15b0c4: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15b0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15b0c8:
    // 0x15b0c8: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b0cc:
    // 0x15b0cc: 0x84640150  lh          $a0, 0x150($v1)
    ctx->pc = 0x15b0ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 336)));
label_15b0d0:
    // 0x15b0d0: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x15b0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
label_15b0d4:
    // 0x15b0d4: 0x40f809  jalr        $v0
label_15b0d8:
    if (ctx->pc == 0x15B0D8u) {
        ctx->pc = 0x15B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0D4u;
        // 0x15b0d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0DCu;
        goto label_15b0dc;
    }
    ctx->pc = 0x15B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B0DCu);
        ctx->pc = 0x15B0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0D4u;
        // 0x15b0d8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0D4u, 0x15B0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B0DCu;
label_15b0dc:
    // 0x15b0dc: 0x8e055024  lw          $a1, 0x5024($s0)
    ctx->pc = 0x15b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20516)));
label_15b0e0:
    // 0x15b0e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15b0e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b0e4:
    // 0x15b0e4: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15b0e8:
    // 0x15b0e8: 0x84640100  lh          $a0, 0x100($v1)
    ctx->pc = 0x15b0e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_15b0ec:
    // 0x15b0ec: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x15b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_15b0f0:
    // 0x15b0f0: 0x40f809  jalr        $v0
label_15b0f4:
    if (ctx->pc == 0x15B0F4u) {
        ctx->pc = 0x15B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F0u;
        // 0x15b0f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B0F8u;
        goto label_15b0f8;
    }
    ctx->pc = 0x15B0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15B0F8u);
        ctx->pc = 0x15B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F0u;
        // 0x15b0f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B0F0u, 0x15B0F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15B0F8u;
label_15b0f8:
    // 0x15b0f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_15b0fc:
    if (ctx->pc == 0x15B0FCu) {
        ctx->pc = 0x15B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F8u;
        // 0x15b0fc: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B100u;
        goto label_15b100;
    }
    ctx->pc = 0x15B0F8u;
    {
        const bool branch_taken_0x15b0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B0F8u;
        // 0x15b0fc: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b0f8) {
            ctx->pc = 0x15B10Cu;
            goto label_15b10c;
        }
    }
    ctx->pc = 0x15B100u;
label_15b100:
    // 0x15b100: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b104:
    // 0x15b104: 0x10000052  b           . + 4 + (0x52 << 2)
label_15b108:
    if (ctx->pc == 0x15B108u) {
        ctx->pc = 0x15B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B104u;
        // 0x15b108: 0x2442a2b0  addiu       $v0, $v0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B10Cu;
        goto label_15b10c;
    }
    ctx->pc = 0x15B104u;
    {
        const bool branch_taken_0x15b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B104u;
        // 0x15b108: 0x2442a2b0  addiu       $v0, $v0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b104) {
            ctx->pc = 0x15B250u;
            goto label_15b250;
        }
    }
    ctx->pc = 0x15B10Cu;
label_15b10c:
    // 0x15b10c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_15b110:
    if (ctx->pc == 0x15B110u) {
        ctx->pc = 0x15B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B10Cu;
        // 0x15b110: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B114u;
        goto label_15b114;
    }
    ctx->pc = 0x15B10Cu;
    {
        const bool branch_taken_0x15b10c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B10Cu;
        // 0x15b110: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b10c) {
            ctx->pc = 0x15B120u;
            goto label_15b120;
        }
    }
    ctx->pc = 0x15B114u;
label_15b114:
    // 0x15b114: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b118:
    // 0x15b118: 0x1000004d  b           . + 4 + (0x4D << 2)
label_15b11c:
    if (ctx->pc == 0x15B11Cu) {
        ctx->pc = 0x15B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B118u;
        // 0x15b11c: 0x2442b490  addiu       $v0, $v0, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B120u;
        goto label_15b120;
    }
    ctx->pc = 0x15B118u;
    {
        const bool branch_taken_0x15b118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B118u;
        // 0x15b11c: 0x2442b490  addiu       $v0, $v0, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b118) {
            ctx->pc = 0x15B250u;
            goto label_15b250;
        }
    }
    ctx->pc = 0x15B120u;
label_15b120:
    // 0x15b120: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15b120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15b124:
    // 0x15b124: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15b124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15b128:
    // 0x15b128: 0x8c435d80  lw          $v1, 0x5D80($v0)
    ctx->pc = 0x15b128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 23936)));
label_15b12c:
    // 0x15b12c: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
label_15b130:
    if (ctx->pc == 0x15B130u) {
        ctx->pc = 0x15B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B12Cu;
        // 0x15b130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B134u;
        goto label_15b134;
    }
    ctx->pc = 0x15B12Cu;
    {
        const bool branch_taken_0x15b12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x15B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B12Cu;
        // 0x15b130: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b12c) {
            ctx->pc = 0x15B1B0u;
            goto label_15b1b0;
        }
    }
    ctx->pc = 0x15B134u;
label_15b134:
    // 0x15b134: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b138:
    // 0x15b138: 0x8c43c6fc  lw          $v1, -0x3904($v0)
    ctx->pc = 0x15b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952700)));
label_15b13c:
    // 0x15b13c: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_15b140:
    if (ctx->pc == 0x15B140u) {
        ctx->pc = 0x15B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B13Cu;
        // 0x15b140: 0x8ca25d80  lw          $v0, 0x5D80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 23936)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B144u;
        goto label_15b144;
    }
    ctx->pc = 0x15B13Cu;
    {
        const bool branch_taken_0x15b13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B13Cu;
        // 0x15b140: 0x8ca25d80  lw          $v0, 0x5D80($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 23936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b13c) {
            ctx->pc = 0x15B1B4u;
            goto label_15b1b4;
        }
    }
    ctx->pc = 0x15B144u;
label_15b144:
    // 0x15b144: 0xc067b9c  jal         func_19EE70
label_15b148:
    if (ctx->pc == 0x15B148u) {
        ctx->pc = 0x15B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B144u;
        // 0x15b148: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B14Cu;
        goto label_15b14c;
    }
    ctx->pc = 0x15B144u;
    SET_GPR_U32(ctx, 31, 0x15B14Cu);
    ctx->pc = 0x15B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B144u;
    // 0x15b148: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B144u, 0x15B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B14Cu;
label_15b14c:
    // 0x15b14c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b14cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b150:
    // 0x15b150: 0xc067b9c  jal         func_19EE70
label_15b154:
    if (ctx->pc == 0x15B154u) {
        ctx->pc = 0x15B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B150u;
        // 0x15b154: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B158u;
        goto label_15b158;
    }
    ctx->pc = 0x15B150u;
    SET_GPR_U32(ctx, 31, 0x15B158u);
    ctx->pc = 0x15B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B150u;
    // 0x15b154: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B150u, 0x15B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B158u;
label_15b158:
    // 0x15b158: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15b15c:
    // 0x15b15c: 0xc067b9c  jal         func_19EE70
label_15b160:
    if (ctx->pc == 0x15B160u) {
        ctx->pc = 0x15B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B15Cu;
        // 0x15b160: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B164u;
        goto label_15b164;
    }
    ctx->pc = 0x15B15Cu;
    SET_GPR_U32(ctx, 31, 0x15B164u);
    ctx->pc = 0x15B160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B15Cu;
    // 0x15b160: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B15Cu, 0x15B164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B164u;
label_15b164:
    // 0x15b164: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15b164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_15b168:
    // 0x15b168: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b16c:
    // 0x15b16c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x15b16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_15b170:
    // 0x15b170: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x15b170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_15b174:
    // 0x15b174: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15b174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b178:
    // 0x15b178: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15b178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b17c:
    // 0x15b17c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15b180:
    // 0x15b180: 0x2443f188  addiu       $v1, $v0, -0xE78
    ctx->pc = 0x15b180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963592));
label_15b184:
    // 0x15b184: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x15b184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_15b188:
    // 0x15b188: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x15b188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_15b18c:
    // 0x15b18c: 0xb3aa0017  sdl         $t2, 0x17($sp)
    ctx->pc = 0x15b18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b190:
    // 0x15b190: 0xb7aa0010  sdr         $t2, 0x10($sp)
    ctx->pc = 0x15b190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b194:
    // 0x15b194: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b198:
    // 0x15b198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b19c:
    // 0x15b19c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b1a0:
    // 0x15b1a0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b1a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b1a4:
    // 0x15b1a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b1a8:
    // 0x15b1a8: 0x10000022  b           . + 4 + (0x22 << 2)
label_15b1ac:
    if (ctx->pc == 0x15B1ACu) {
        ctx->pc = 0x15B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1A8u;
        // 0x15b1ac: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1B0u;
        goto label_15b1b0;
    }
    ctx->pc = 0x15B1A8u;
    {
        const bool branch_taken_0x15b1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1A8u;
        // 0x15b1ac: 0x27a90010  addiu       $t1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1a8) {
            ctx->pc = 0x15B234u;
            goto label_15b234;
        }
    }
    ctx->pc = 0x15B1B0u;
label_15b1b0:
    // 0x15b1b0: 0x8ca25d80  lw          $v0, 0x5D80($a1)
    ctx->pc = 0x15b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 23936)));
label_15b1b4:
    // 0x15b1b4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_15b1b8:
    if (ctx->pc == 0x15B1B8u) {
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1BCu;
        goto label_15b1bc;
    }
    ctx->pc = 0x15B1B4u;
    {
        const bool branch_taken_0x15b1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1B4u;
        // 0x15b1b8: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1b4) {
            ctx->pc = 0x15B248u;
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B1BCu;
label_15b1bc:
    // 0x15b1bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b1c0:
    // 0x15b1c0: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952704)));
label_15b1c4:
    // 0x15b1c4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_15b1c8:
    if (ctx->pc == 0x15B1C8u) {
        ctx->pc = 0x15B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1C4u;
        // 0x15b1c8: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1CCu;
        goto label_15b1cc;
    }
    ctx->pc = 0x15B1C4u;
    {
        const bool branch_taken_0x15b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1C4u;
        // 0x15b1c8: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b1c4) {
            ctx->pc = 0x15B248u;
            goto label_15b248;
        }
    }
    ctx->pc = 0x15B1CCu;
label_15b1cc:
    // 0x15b1cc: 0xc067b9c  jal         func_19EE70
label_15b1d0:
    if (ctx->pc == 0x15B1D0u) {
        ctx->pc = 0x15B1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1CCu;
        // 0x15b1d0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1D4u;
        goto label_15b1d4;
    }
    ctx->pc = 0x15B1CCu;
    SET_GPR_U32(ctx, 31, 0x15B1D4u);
    ctx->pc = 0x15B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1CCu;
    // 0x15b1d0: 0x240400a0  addiu       $a0, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B1CCu, 0x15B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1D4u;
label_15b1d4:
    // 0x15b1d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15b1d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15b1d8:
    // 0x15b1d8: 0xc067b9c  jal         func_19EE70
label_15b1dc:
    if (ctx->pc == 0x15B1DCu) {
        ctx->pc = 0x15B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1D8u;
        // 0x15b1dc: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1E0u;
        goto label_15b1e0;
    }
    ctx->pc = 0x15B1D8u;
    SET_GPR_U32(ctx, 31, 0x15B1E0u);
    ctx->pc = 0x15B1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1D8u;
    // 0x15b1dc: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B1D8u, 0x15B1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1E0u;
label_15b1e0:
    // 0x15b1e0: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x15b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
label_15b1e4:
    // 0x15b1e4: 0xc067b9c  jal         func_19EE70
label_15b1e8:
    if (ctx->pc == 0x15B1E8u) {
        ctx->pc = 0x15B1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B1E4u;
        // 0x15b1e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B1ECu;
        goto label_15b1ec;
    }
    ctx->pc = 0x15B1E4u;
    SET_GPR_U32(ctx, 31, 0x15B1ECu);
    ctx->pc = 0x15B1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B1E4u;
    // 0x15b1e8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15B1E4u, 0x15B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B1ECu;
label_15b1ec:
    // 0x15b1ec: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x15b1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_15b1f0:
    // 0x15b1f0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_15b1f4:
    // 0x15b1f4: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x15b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_15b1f8:
    // 0x15b1f8: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x15b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_15b1fc:
    // 0x15b1fc: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x15b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b200:
    // 0x15b200: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x15b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b204:
    // 0x15b204: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_15b208:
    // 0x15b208: 0x244af1a8  addiu       $t2, $v0, -0xE58
    ctx->pc = 0x15b208u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963624));
label_15b20c:
    // 0x15b20c: 0x694b0007  ldl         $t3, 0x7($t2)
    ctx->pc = 0x15b20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_15b210:
    // 0x15b210: 0x6d4b0000  ldr         $t3, 0x0($t2)
    ctx->pc = 0x15b210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_15b214:
    // 0x15b214: 0xb3ab0027  sdl         $t3, 0x27($sp)
    ctx->pc = 0x15b214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b218:
    // 0x15b218: 0xb7ab0020  sdr         $t3, 0x20($sp)
    ctx->pc = 0x15b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_15b21c:
    // 0x15b21c: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
label_15b220:
    // 0x15b220: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15b224:
    // 0x15b224: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15b224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15b228:
    // 0x15b228: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15b228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15b22c:
    // 0x15b22c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15b22cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15b230:
    // 0x15b230: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x15b230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_15b234:
    // 0x15b234: 0xc071c4a  jal         func_1C7128
label_15b238:
    if (ctx->pc == 0x15B238u) {
        ctx->pc = 0x15B23Cu;
        goto label_15b23c;
    }
    ctx->pc = 0x15B234u;
    SET_GPR_U32(ctx, 31, 0x15B23Cu);
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15B234u, 0x15B23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B23Cu;
label_15b23c:
    // 0x15b23c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15b23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15b240:
    // 0x15b240: 0x10000004  b           . + 4 + (0x4 << 2)
label_15b244:
    if (ctx->pc == 0x15B244u) {
        ctx->pc = 0x15B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B240u;
        // 0x15b244: 0xac40c734  sw          $zero, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B248u;
        goto label_15b248;
    }
    ctx->pc = 0x15B240u;
    {
        const bool branch_taken_0x15b240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B240u;
        // 0x15b244: 0xac40c734  sw          $zero, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b240) {
            ctx->pc = 0x15B254u;
            goto label_15b254;
        }
    }
    ctx->pc = 0x15B248u;
label_15b248:
    // 0x15b248: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15b248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_15b24c:
    // 0x15b24c: 0x2442b268  addiu       $v0, $v0, -0x4D98
    ctx->pc = 0x15b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947432));
label_15b250:
    // 0x15b250: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15b250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15b254:
    // 0x15b254: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15b254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15b258:
    // 0x15b258: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15b258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15b25c:
    // 0x15b25c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15b25cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15b260:
    // 0x15b260: 0x3e00008  jr          $ra
label_15b264:
    if (ctx->pc == 0x15B264u) {
        ctx->pc = 0x15B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B260u;
        // 0x15b264: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15B268u;
        goto label_fallthrough_0x15b260;
    }
    ctx->pc = 0x15B260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B260u;
        // 0x15b264: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15b260:
    ctx->pc = 0x15B268u;
}
