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

// Function: sub_0022AF48
// Address: 0x22af48 - 0x22b1a0
void sub_0022AF48_0x22af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022AF48_0x22af48");
#endif

    switch (ctx->pc) {
        case 0x22af48u: goto label_22af48;
        case 0x22af4cu: goto label_22af4c;
        case 0x22af50u: goto label_22af50;
        case 0x22af54u: goto label_22af54;
        case 0x22af58u: goto label_22af58;
        case 0x22af5cu: goto label_22af5c;
        case 0x22af60u: goto label_22af60;
        case 0x22af64u: goto label_22af64;
        case 0x22af68u: goto label_22af68;
        case 0x22af6cu: goto label_22af6c;
        case 0x22af70u: goto label_22af70;
        case 0x22af74u: goto label_22af74;
        case 0x22af78u: goto label_22af78;
        case 0x22af7cu: goto label_22af7c;
        case 0x22af80u: goto label_22af80;
        case 0x22af84u: goto label_22af84;
        case 0x22af88u: goto label_22af88;
        case 0x22af8cu: goto label_22af8c;
        case 0x22af90u: goto label_22af90;
        case 0x22af94u: goto label_22af94;
        case 0x22af98u: goto label_22af98;
        case 0x22af9cu: goto label_22af9c;
        case 0x22afa0u: goto label_22afa0;
        case 0x22afa4u: goto label_22afa4;
        case 0x22afa8u: goto label_22afa8;
        case 0x22afacu: goto label_22afac;
        case 0x22afb0u: goto label_22afb0;
        case 0x22afb4u: goto label_22afb4;
        case 0x22afb8u: goto label_22afb8;
        case 0x22afbcu: goto label_22afbc;
        case 0x22afc0u: goto label_22afc0;
        case 0x22afc4u: goto label_22afc4;
        case 0x22afc8u: goto label_22afc8;
        case 0x22afccu: goto label_22afcc;
        case 0x22afd0u: goto label_22afd0;
        case 0x22afd4u: goto label_22afd4;
        case 0x22afd8u: goto label_22afd8;
        case 0x22afdcu: goto label_22afdc;
        case 0x22afe0u: goto label_22afe0;
        case 0x22afe4u: goto label_22afe4;
        case 0x22afe8u: goto label_22afe8;
        case 0x22afecu: goto label_22afec;
        case 0x22aff0u: goto label_22aff0;
        case 0x22aff4u: goto label_22aff4;
        case 0x22aff8u: goto label_22aff8;
        case 0x22affcu: goto label_22affc;
        case 0x22b000u: goto label_22b000;
        case 0x22b004u: goto label_22b004;
        case 0x22b008u: goto label_22b008;
        case 0x22b00cu: goto label_22b00c;
        case 0x22b010u: goto label_22b010;
        case 0x22b014u: goto label_22b014;
        case 0x22b018u: goto label_22b018;
        case 0x22b01cu: goto label_22b01c;
        case 0x22b020u: goto label_22b020;
        case 0x22b024u: goto label_22b024;
        case 0x22b028u: goto label_22b028;
        case 0x22b02cu: goto label_22b02c;
        case 0x22b030u: goto label_22b030;
        case 0x22b034u: goto label_22b034;
        case 0x22b038u: goto label_22b038;
        case 0x22b03cu: goto label_22b03c;
        case 0x22b040u: goto label_22b040;
        case 0x22b044u: goto label_22b044;
        case 0x22b048u: goto label_22b048;
        case 0x22b04cu: goto label_22b04c;
        case 0x22b050u: goto label_22b050;
        case 0x22b054u: goto label_22b054;
        case 0x22b058u: goto label_22b058;
        case 0x22b05cu: goto label_22b05c;
        case 0x22b060u: goto label_22b060;
        case 0x22b064u: goto label_22b064;
        case 0x22b068u: goto label_22b068;
        case 0x22b06cu: goto label_22b06c;
        case 0x22b070u: goto label_22b070;
        case 0x22b074u: goto label_22b074;
        case 0x22b078u: goto label_22b078;
        case 0x22b07cu: goto label_22b07c;
        case 0x22b080u: goto label_22b080;
        case 0x22b084u: goto label_22b084;
        case 0x22b088u: goto label_22b088;
        case 0x22b08cu: goto label_22b08c;
        case 0x22b090u: goto label_22b090;
        case 0x22b094u: goto label_22b094;
        case 0x22b098u: goto label_22b098;
        case 0x22b09cu: goto label_22b09c;
        case 0x22b0a0u: goto label_22b0a0;
        case 0x22b0a4u: goto label_22b0a4;
        case 0x22b0a8u: goto label_22b0a8;
        case 0x22b0acu: goto label_22b0ac;
        case 0x22b0b0u: goto label_22b0b0;
        case 0x22b0b4u: goto label_22b0b4;
        case 0x22b0b8u: goto label_22b0b8;
        case 0x22b0bcu: goto label_22b0bc;
        case 0x22b0c0u: goto label_22b0c0;
        case 0x22b0c4u: goto label_22b0c4;
        case 0x22b0c8u: goto label_22b0c8;
        case 0x22b0ccu: goto label_22b0cc;
        case 0x22b0d0u: goto label_22b0d0;
        case 0x22b0d4u: goto label_22b0d4;
        case 0x22b0d8u: goto label_22b0d8;
        case 0x22b0dcu: goto label_22b0dc;
        case 0x22b0e0u: goto label_22b0e0;
        case 0x22b0e4u: goto label_22b0e4;
        case 0x22b0e8u: goto label_22b0e8;
        case 0x22b0ecu: goto label_22b0ec;
        case 0x22b0f0u: goto label_22b0f0;
        case 0x22b0f4u: goto label_22b0f4;
        case 0x22b0f8u: goto label_22b0f8;
        case 0x22b0fcu: goto label_22b0fc;
        case 0x22b100u: goto label_22b100;
        case 0x22b104u: goto label_22b104;
        case 0x22b108u: goto label_22b108;
        case 0x22b10cu: goto label_22b10c;
        case 0x22b110u: goto label_22b110;
        case 0x22b114u: goto label_22b114;
        case 0x22b118u: goto label_22b118;
        case 0x22b11cu: goto label_22b11c;
        case 0x22b120u: goto label_22b120;
        case 0x22b124u: goto label_22b124;
        case 0x22b128u: goto label_22b128;
        case 0x22b12cu: goto label_22b12c;
        case 0x22b130u: goto label_22b130;
        case 0x22b134u: goto label_22b134;
        case 0x22b138u: goto label_22b138;
        case 0x22b13cu: goto label_22b13c;
        case 0x22b140u: goto label_22b140;
        case 0x22b144u: goto label_22b144;
        case 0x22b148u: goto label_22b148;
        case 0x22b14cu: goto label_22b14c;
        case 0x22b150u: goto label_22b150;
        case 0x22b154u: goto label_22b154;
        case 0x22b158u: goto label_22b158;
        case 0x22b15cu: goto label_22b15c;
        case 0x22b160u: goto label_22b160;
        case 0x22b164u: goto label_22b164;
        case 0x22b168u: goto label_22b168;
        case 0x22b16cu: goto label_22b16c;
        case 0x22b170u: goto label_22b170;
        case 0x22b174u: goto label_22b174;
        case 0x22b178u: goto label_22b178;
        case 0x22b17cu: goto label_22b17c;
        case 0x22b180u: goto label_22b180;
        case 0x22b184u: goto label_22b184;
        case 0x22b188u: goto label_22b188;
        case 0x22b18cu: goto label_22b18c;
        case 0x22b190u: goto label_22b190;
        case 0x22b194u: goto label_22b194;
        case 0x22b198u: goto label_22b198;
        case 0x22b19cu: goto label_22b19c;
        default: break;
    }

    ctx->pc = 0x22af48u;

label_22af48:
    // 0x22af48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_22af4c:
    // 0x22af4c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22af4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_22af50:
    // 0x22af50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22af50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22af54:
    // 0x22af54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22af54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22af58:
    // 0x22af58: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22af58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_22af5c:
    // 0x22af5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22af5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22af60:
    // 0x22af60: 0xc095018  jal         func_254060
label_22af64:
    if (ctx->pc == 0x22AF64u) {
        ctx->pc = 0x22AF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF60u;
        // 0x22af64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF68u;
        goto label_22af68;
    }
    ctx->pc = 0x22AF60u;
    SET_GPR_U32(ctx, 31, 0x22AF68u);
    ctx->pc = 0x22AF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF60u;
    // 0x22af64: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22AF60u, 0x22AF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF68u;
label_22af68:
    // 0x22af68: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x22af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_22af6c:
    // 0x22af6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22af70:
    if (ctx->pc == 0x22AF70u) {
        ctx->pc = 0x22AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF6Cu;
        // 0x22af70: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF74u;
        goto label_22af74;
    }
    ctx->pc = 0x22AF6Cu;
    {
        const bool branch_taken_0x22af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af6c) {
            ctx->pc = 0x22AF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AF6Cu;
            // 0x22af70: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AF84u;
            goto label_22af84;
        }
    }
    ctx->pc = 0x22AF74u;
label_22af74:
    // 0x22af74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22af74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22af78:
    // 0x22af78: 0xc094fb4  jal         func_253ED0
label_22af7c:
    if (ctx->pc == 0x22AF7Cu) {
        ctx->pc = 0x22AF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF78u;
        // 0x22af7c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AF80u;
        goto label_22af80;
    }
    ctx->pc = 0x22AF78u;
    SET_GPR_U32(ctx, 31, 0x22AF80u);
    ctx->pc = 0x22AF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF78u;
    // 0x22af7c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22AF78u, 0x22AF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF80u;
label_22af80:
    // 0x22af80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x22af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22af84:
    // 0x22af84: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22af88:
    // 0x22af88: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x22af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_22af8c:
    // 0x22af8c: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x22af8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_22af90:
    // 0x22af90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22af90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22af94:
    // 0x22af94: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x22af94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_22af98:
    // 0x22af98: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x22af98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_22af9c:
    // 0x22af9c: 0x40f809  jalr        $v0
label_22afa0:
    if (ctx->pc == 0x22AFA0u) {
        ctx->pc = 0x22AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF9Cu;
        // 0x22afa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFA4u;
        goto label_22afa4;
    }
    ctx->pc = 0x22AF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22AFA4u);
        ctx->pc = 0x22AFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF9Cu;
        // 0x22afa0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AF9Cu, 0x22AFA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22AFA4u;
label_22afa4:
    // 0x22afa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22afa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22afa8:
    // 0x22afa8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22afa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22afac:
    // 0x22afac: 0xc08bd3e  jal         func_22F4F8
label_22afb0:
    if (ctx->pc == 0x22AFB0u) {
        ctx->pc = 0x22AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFACu;
        // 0x22afb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFB4u;
        goto label_22afb4;
    }
    ctx->pc = 0x22AFACu;
    SET_GPR_U32(ctx, 31, 0x22AFB4u);
    ctx->pc = 0x22AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFACu;
    // 0x22afb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F4F8u, 0x22AFACu, 0x22AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFB4u;
label_22afb4:
    // 0x22afb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22afb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22afb8:
    // 0x22afb8: 0xc089988  jal         func_226620
label_22afbc:
    if (ctx->pc == 0x22AFBCu) {
        ctx->pc = 0x22AFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFB8u;
        // 0x22afbc: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFC0u;
        goto label_22afc0;
    }
    ctx->pc = 0x22AFB8u;
    SET_GPR_U32(ctx, 31, 0x22AFC0u);
    ctx->pc = 0x22AFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFB8u;
    // 0x22afbc: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22AFB8u, 0x22AFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFC0u;
label_22afc0:
    // 0x22afc0: 0xc0874fa  jal         func_21D3E8
label_22afc4:
    if (ctx->pc == 0x22AFC4u) {
        ctx->pc = 0x22AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFC0u;
        // 0x22afc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFC8u;
        goto label_22afc8;
    }
    ctx->pc = 0x22AFC0u;
    SET_GPR_U32(ctx, 31, 0x22AFC8u);
    ctx->pc = 0x22AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFC0u;
    // 0x22afc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x22AFC0u, 0x22AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFC8u;
label_22afc8:
    // 0x22afc8: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x22afc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_22afcc:
    // 0x22afcc: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
label_22afd0:
    if (ctx->pc == 0x22AFD0u) {
        ctx->pc = 0x22AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFCCu;
        // 0x22afd0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFD4u;
        goto label_22afd4;
    }
    ctx->pc = 0x22AFCCu;
    {
        const bool branch_taken_0x22afcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFCCu;
        // 0x22afd0: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afcc) {
            ctx->pc = 0x22B184u;
            goto label_22b184;
        }
    }
    ctx->pc = 0x22AFD4u;
label_22afd4:
    // 0x22afd4: 0x860301be  lh          $v1, 0x1BE($s0)
    ctx->pc = 0x22afd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
label_22afd8:
    // 0x22afd8: 0x2444bf50  addiu       $a0, $v0, -0x40B0
    ctx->pc = 0x22afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950736));
label_22afdc:
    // 0x22afdc: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x22afdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_22afe0:
    // 0x22afe0: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_22afe4:
    if (ctx->pc == 0x22AFE4u) {
        ctx->pc = 0x22AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFE0u;
        // 0x22afe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFE8u;
        goto label_22afe8;
    }
    ctx->pc = 0x22AFE0u;
    {
        const bool branch_taken_0x22afe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22AFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFE0u;
        // 0x22afe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afe0) {
            ctx->pc = 0x22B018u;
            goto label_22b018;
        }
    }
    ctx->pc = 0x22AFE8u;
label_22afe8:
    // 0x22afe8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22afec:
    // 0x22afec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_22aff0:
    if (ctx->pc == 0x22AFF0u) {
        ctx->pc = 0x22AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFECu;
        // 0x22aff0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22AFF4u;
        goto label_22aff4;
    }
    ctx->pc = 0x22AFECu;
    {
        const bool branch_taken_0x22afec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFECu;
        // 0x22aff0: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afec) {
            ctx->pc = 0x22B004u;
            goto label_22b004;
        }
    }
    ctx->pc = 0x22AFF4u;
label_22aff4:
    // 0x22aff4: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x22aff4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_22aff8:
    // 0x22aff8: 0x860201c0  lh          $v0, 0x1C0($s0)
    ctx->pc = 0x22aff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 448)));
label_22affc:
    // 0x22affc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_22b000:
    if (ctx->pc == 0x22B000u) {
        ctx->pc = 0x22B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFFCu;
        // 0x22b000: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B004u;
        goto label_22b004;
    }
    ctx->pc = 0x22AFFCu;
    {
        const bool branch_taken_0x22affc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFFCu;
        // 0x22b000: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22affc) {
            ctx->pc = 0x22B014u;
            goto label_22b014;
        }
    }
    ctx->pc = 0x22B004u;
label_22b004:
    // 0x22b004: 0x8e0301c0  lw          $v1, 0x1C0($s0)
    ctx->pc = 0x22b004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_22b008:
    // 0x22b008: 0x24421b90  addiu       $v0, $v0, 0x1B90
    ctx->pc = 0x22b008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7056));
label_22b00c:
    // 0x22b00c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_22b010:
    if (ctx->pc == 0x22B010u) {
        ctx->pc = 0x22B014u;
        goto label_22b014;
    }
    ctx->pc = 0x22B00Cu;
    {
        const bool branch_taken_0x22b00c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22b00c) {
            ctx->pc = 0x22B018u;
            goto label_22b018;
        }
    }
    ctx->pc = 0x22B014u;
label_22b014:
    // 0x22b014: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22b014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b018:
    // 0x22b018: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_22b01c:
    if (ctx->pc == 0x22B01Cu) {
        ctx->pc = 0x22B020u;
        goto label_22b020;
    }
    ctx->pc = 0x22B018u;
    {
        const bool branch_taken_0x22b018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b018) {
            ctx->pc = 0x22B028u;
            goto label_22b028;
        }
    }
    ctx->pc = 0x22B020u;
label_22b020:
    // 0x22b020: 0xc0a007a  jal         func_2801E8
label_22b024:
    if (ctx->pc == 0x22B024u) {
        ctx->pc = 0x22B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B020u;
        // 0x22b024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B028u;
        goto label_22b028;
    }
    ctx->pc = 0x22B020u;
    SET_GPR_U32(ctx, 31, 0x22B028u);
    ctx->pc = 0x22B024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B020u;
    // 0x22b024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2801E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2801E8u, 0x22B020u, 0x22B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B028u;
label_22b028:
    // 0x22b028: 0xc089bdc  jal         func_226F70
label_22b02c:
    if (ctx->pc == 0x22B02Cu) {
        ctx->pc = 0x22B02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B028u;
        // 0x22b02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B030u;
        goto label_22b030;
    }
    ctx->pc = 0x22B028u;
    SET_GPR_U32(ctx, 31, 0x22B030u);
    ctx->pc = 0x22B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B028u;
    // 0x22b02c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x22B028u, 0x22B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B030u;
label_22b030:
    // 0x22b030: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_22b034:
    // 0x22b034: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x22b034u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_22b038:
    // 0x22b038: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_22b03c:
    if (ctx->pc == 0x22B03Cu) {
        ctx->pc = 0x22B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B038u;
        // 0x22b03c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B040u;
        goto label_22b040;
    }
    ctx->pc = 0x22B038u;
    {
        const bool branch_taken_0x22b038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B038u;
        // 0x22b03c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b038) {
            ctx->pc = 0x22B184u;
            goto label_22b184;
        }
    }
    ctx->pc = 0x22B040u;
label_22b040:
    // 0x22b040: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x22b040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_22b044:
    // 0x22b044: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x22b044u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_22b048:
    // 0x22b048: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x22b048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_22b04c:
    // 0x22b04c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22b04cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22b050:
    // 0x22b050: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22b054:
    // 0x22b054: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x22b054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_22b058:
    // 0x22b058: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_22b05c:
    if (ctx->pc == 0x22B05Cu) {
        ctx->pc = 0x22B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B058u;
        // 0x22b05c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B060u;
        goto label_22b060;
    }
    ctx->pc = 0x22B058u;
    {
        const bool branch_taken_0x22b058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B058u;
        // 0x22b05c: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b058) {
            ctx->pc = 0x22B184u;
            goto label_22b184;
        }
    }
    ctx->pc = 0x22B060u;
label_22b060:
    // 0x22b060: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x22b060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_22b064:
    // 0x22b064: 0x24719250  addiu       $s1, $v1, -0x6DB0
    ctx->pc = 0x22b064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939216));
label_22b068:
    // 0x22b068: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x22b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_22b06c:
    // 0x22b06c: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_22b070:
    if (ctx->pc == 0x22B070u) {
        ctx->pc = 0x22B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B06Cu;
        // 0x22b070: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B074u;
        goto label_22b074;
    }
    ctx->pc = 0x22B06Cu;
    {
        const bool branch_taken_0x22b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B06Cu;
        // 0x22b070: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b06c) {
            ctx->pc = 0x22B184u;
            goto label_22b184;
        }
    }
    ctx->pc = 0x22B074u;
label_22b074:
    // 0x22b074: 0x908256e2  lbu         $v0, 0x56E2($a0)
    ctx->pc = 0x22b074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22242)));
label_22b078:
    // 0x22b078: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22b07c:
    if (ctx->pc == 0x22B07Cu) {
        ctx->pc = 0x22B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B078u;
        // 0x22b07c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B080u;
        goto label_22b080;
    }
    ctx->pc = 0x22B078u;
    {
        const bool branch_taken_0x22b078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B078u;
        // 0x22b07c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b078) {
            ctx->pc = 0x22B08Cu;
            goto label_22b08c;
        }
    }
    ctx->pc = 0x22B080u;
label_22b080:
    // 0x22b080: 0xc107444  jal         func_41D110
label_22b084:
    if (ctx->pc == 0x22B084u) {
        ctx->pc = 0x22B088u;
        goto label_22b088;
    }
    ctx->pc = 0x22B080u;
    SET_GPR_U32(ctx, 31, 0x22B088u);
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x22B080u, 0x22B088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B088u;
label_22b088:
    // 0x22b088: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x22b088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_22b08c:
    // 0x22b08c: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_22b090:
    if (ctx->pc == 0x22B090u) {
        ctx->pc = 0x22B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B08Cu;
        // 0x22b090: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B094u;
        goto label_22b094;
    }
    ctx->pc = 0x22B08Cu;
    {
        const bool branch_taken_0x22b08c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B08Cu;
        // 0x22b090: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b08c) {
            ctx->pc = 0x22B184u;
            goto label_22b184;
        }
    }
    ctx->pc = 0x22B094u;
label_22b094:
    // 0x22b094: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22b094u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22b098:
    // 0x22b098: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x22b098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_22b09c:
    // 0x22b09c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22b09cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22b0a0:
    // 0x22b0a0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b0a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22b0a4:
    // 0x22b0a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x22b0a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_22b0a8:
    // 0x22b0a8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_22b0ac:
    if (ctx->pc == 0x22B0ACu) {
        ctx->pc = 0x22B0B0u;
        goto label_22b0b0;
    }
    ctx->pc = 0x22B0A8u;
    {
        const bool branch_taken_0x22b0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b0a8) {
            ctx->pc = 0x22B110u;
            goto label_22b110;
        }
    }
    ctx->pc = 0x22B0B0u;
label_22b0b0:
    // 0x22b0b0: 0xc073a8e  jal         func_1CEA38
label_22b0b4:
    if (ctx->pc == 0x22B0B4u) {
        ctx->pc = 0x22B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B0u;
        // 0x22b0b4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B0B8u;
        goto label_22b0b8;
    }
    ctx->pc = 0x22B0B0u;
    SET_GPR_U32(ctx, 31, 0x22B0B8u);
    ctx->pc = 0x22B0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0B0u;
    // 0x22b0b4: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22B0B0u, 0x22B0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B0B8u;
label_22b0b8:
    // 0x22b0b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_22b0bc:
    if (ctx->pc == 0x22B0BCu) {
        ctx->pc = 0x22B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B8u;
        // 0x22b0bc: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B0C0u;
        goto label_22b0c0;
    }
    ctx->pc = 0x22B0B8u;
    {
        const bool branch_taken_0x22b0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0B8u;
        // 0x22b0bc: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b0b8) {
            ctx->pc = 0x22B10Cu;
            goto label_22b10c;
        }
    }
    ctx->pc = 0x22B0C0u;
label_22b0c0:
    // 0x22b0c0: 0x3c069fff  lui         $a2, 0x9FFF
    ctx->pc = 0x22b0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40959 << 16));
label_22b0c4:
    // 0x22b0c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x22b0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_22b0c8:
    // 0x22b0c8: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x22b0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
label_22b0cc:
    // 0x22b0cc: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x22b0ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_22b0d0:
    // 0x22b0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b0d4:
    // 0x22b0d4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x22b0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_22b0d8:
    // 0x22b0d8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x22b0d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_22b0dc:
    // 0x22b0dc: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x22b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
label_22b0e0:
    // 0x22b0e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22b0e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22b0e4:
    // 0x22b0e4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22b0e8:
    // 0x22b0e8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x22b0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_22b0ec:
    // 0x22b0ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22b0f0:
    // 0x22b0f0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22b0f4:
    // 0x22b0f4: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x22b0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_22b0f8:
    // 0x22b0f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22b0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22b0fc:
    // 0x22b0fc: 0xc07387a  jal         func_1CE1E8
label_22b100:
    if (ctx->pc == 0x22B100u) {
        ctx->pc = 0x22B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B0FCu;
        // 0x22b100: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B104u;
        goto label_22b104;
    }
    ctx->pc = 0x22B0FCu;
    SET_GPR_U32(ctx, 31, 0x22B104u);
    ctx->pc = 0x22B100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B0FCu;
    // 0x22b100: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22B0FCu, 0x22B104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B104u;
label_22b104:
    // 0x22b104: 0x10000020  b           . + 4 + (0x20 << 2)
label_22b108:
    if (ctx->pc == 0x22B108u) {
        ctx->pc = 0x22B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B104u;
        // 0x22b108: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B10Cu;
        goto label_22b10c;
    }
    ctx->pc = 0x22B104u;
    {
        const bool branch_taken_0x22b104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B104u;
        // 0x22b108: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b104) {
            ctx->pc = 0x22B188u;
            goto label_22b188;
        }
    }
    ctx->pc = 0x22B10Cu;
label_22b10c:
    // 0x22b10c: 0x8e03489c  lw          $v1, 0x489C($s0)
    ctx->pc = 0x22b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
label_22b110:
    // 0x22b110: 0x3404c000  ori         $a0, $zero, 0xC000
    ctx->pc = 0x22b110u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
label_22b114:
    // 0x22b114: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x22b114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_22b118:
    // 0x22b118: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22b118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22b11c:
    // 0x22b11c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x22b11cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_22b120:
    // 0x22b120: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x22b120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_22b124:
    // 0x22b124: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x22b124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_22b128:
    // 0x22b128: 0x54450017  bnel        $v0, $a1, . + 4 + (0x17 << 2)
label_22b12c:
    if (ctx->pc == 0x22B12Cu) {
        ctx->pc = 0x22B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B128u;
        // 0x22b12c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B130u;
        goto label_22b130;
    }
    ctx->pc = 0x22B128u;
    {
        const bool branch_taken_0x22b128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x22b128) {
            ctx->pc = 0x22B12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B128u;
            // 0x22b12c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B188u;
            goto label_22b188;
        }
    }
    ctx->pc = 0x22B130u;
label_22b130:
    // 0x22b130: 0xc073a8e  jal         func_1CEA38
label_22b134:
    if (ctx->pc == 0x22B134u) {
        ctx->pc = 0x22B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B130u;
        // 0x22b134: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B138u;
        goto label_22b138;
    }
    ctx->pc = 0x22B130u;
    SET_GPR_U32(ctx, 31, 0x22B138u);
    ctx->pc = 0x22B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B130u;
    // 0x22b134: 0x24040019  addiu       $a0, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA38u, 0x22B130u, 0x22B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B138u;
label_22b138:
    // 0x22b138: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22b13c:
    if (ctx->pc == 0x22B13Cu) {
        ctx->pc = 0x22B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B138u;
        // 0x22b13c: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B140u;
        goto label_22b140;
    }
    ctx->pc = 0x22B138u;
    {
        const bool branch_taken_0x22b138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B138u;
        // 0x22b13c: 0x8e07489c  lw          $a3, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b138) {
            ctx->pc = 0x22B184u;
            goto label_22b184;
        }
    }
    ctx->pc = 0x22B140u;
label_22b140:
    // 0x22b140: 0x3c069fff  lui         $a2, 0x9FFF
    ctx->pc = 0x22b140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40959 << 16));
label_22b144:
    // 0x22b144: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x22b144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_22b148:
    // 0x22b148: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x22b148u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
label_22b14c:
    // 0x22b14c: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x22b14cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_22b150:
    // 0x22b150: 0x26449250  addiu       $a0, $s2, -0x6DB0
    ctx->pc = 0x22b150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939216));
label_22b154:
    // 0x22b154: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x22b154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_22b158:
    // 0x22b158: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x22b158u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_22b15c:
    // 0x22b15c: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x22b15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
label_22b160:
    // 0x22b160: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22b160u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_22b164:
    // 0x22b164: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22b168:
    // 0x22b168: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x22b168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_22b16c:
    // 0x22b16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_22b170:
    // 0x22b170: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x22b170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_22b174:
    // 0x22b174: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x22b174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
label_22b178:
    // 0x22b178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22b178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_22b17c:
    // 0x22b17c: 0xc07387a  jal         func_1CE1E8
label_22b180:
    if (ctx->pc == 0x22B180u) {
        ctx->pc = 0x22B180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B17Cu;
        // 0x22b180: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B184u;
        goto label_22b184;
    }
    ctx->pc = 0x22B17Cu;
    SET_GPR_U32(ctx, 31, 0x22B184u);
    ctx->pc = 0x22B180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B17Cu;
    // 0x22b180: 0xfce30000  sd          $v1, 0x0($a3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE1E8u, 0x22B17Cu, 0x22B184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B184u;
label_22b184:
    // 0x22b184: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22b184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b188:
    // 0x22b188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22b188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b18c:
    // 0x22b18c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22b18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22b190:
    // 0x22b190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22b194:
    // 0x22b194: 0x3e00008  jr          $ra
label_22b198:
    if (ctx->pc == 0x22B198u) {
        ctx->pc = 0x22B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B194u;
        // 0x22b198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B19Cu;
        goto label_22b19c;
    }
    ctx->pc = 0x22B194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B194u;
        // 0x22b198: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B19Cu;
label_22b19c:
    // 0x22b19c: 0x0  nop
    ctx->pc = 0x22b19cu;
    // NOP
    ctx->pc = 0x22b1a0u;
}
