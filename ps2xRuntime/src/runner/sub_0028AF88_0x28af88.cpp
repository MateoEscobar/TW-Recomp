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

// Function: sub_0028AF88
// Address: 0x28af88 - 0x28b358
void sub_0028AF88_0x28af88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AF88_0x28af88");
#endif

    switch (ctx->pc) {
        case 0x28af88u: goto label_28af88;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af90u: goto label_28af90;
        case 0x28af94u: goto label_28af94;
        case 0x28af98u: goto label_28af98;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa0u: goto label_28afa0;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afa8u: goto label_28afa8;
        case 0x28afacu: goto label_28afac;
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0c0u: goto label_28b0c0;
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0c8u: goto label_28b0c8;
        case 0x28b0ccu: goto label_28b0cc;
        case 0x28b0d0u: goto label_28b0d0;
        case 0x28b0d4u: goto label_28b0d4;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b0dcu: goto label_28b0dc;
        case 0x28b0e0u: goto label_28b0e0;
        case 0x28b0e4u: goto label_28b0e4;
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b0ecu: goto label_28b0ec;
        case 0x28b0f0u: goto label_28b0f0;
        case 0x28b0f4u: goto label_28b0f4;
        case 0x28b0f8u: goto label_28b0f8;
        case 0x28b0fcu: goto label_28b0fc;
        case 0x28b100u: goto label_28b100;
        case 0x28b104u: goto label_28b104;
        case 0x28b108u: goto label_28b108;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b110u: goto label_28b110;
        case 0x28b114u: goto label_28b114;
        case 0x28b118u: goto label_28b118;
        case 0x28b11cu: goto label_28b11c;
        case 0x28b120u: goto label_28b120;
        case 0x28b124u: goto label_28b124;
        case 0x28b128u: goto label_28b128;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b130u: goto label_28b130;
        case 0x28b134u: goto label_28b134;
        case 0x28b138u: goto label_28b138;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b140u: goto label_28b140;
        case 0x28b144u: goto label_28b144;
        case 0x28b148u: goto label_28b148;
        case 0x28b14cu: goto label_28b14c;
        case 0x28b150u: goto label_28b150;
        case 0x28b154u: goto label_28b154;
        case 0x28b158u: goto label_28b158;
        case 0x28b15cu: goto label_28b15c;
        case 0x28b160u: goto label_28b160;
        case 0x28b164u: goto label_28b164;
        case 0x28b168u: goto label_28b168;
        case 0x28b16cu: goto label_28b16c;
        case 0x28b170u: goto label_28b170;
        case 0x28b174u: goto label_28b174;
        case 0x28b178u: goto label_28b178;
        case 0x28b17cu: goto label_28b17c;
        case 0x28b180u: goto label_28b180;
        case 0x28b184u: goto label_28b184;
        case 0x28b188u: goto label_28b188;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b190u: goto label_28b190;
        case 0x28b194u: goto label_28b194;
        case 0x28b198u: goto label_28b198;
        case 0x28b19cu: goto label_28b19c;
        case 0x28b1a0u: goto label_28b1a0;
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1bcu: goto label_28b1bc;
        case 0x28b1c0u: goto label_28b1c0;
        case 0x28b1c4u: goto label_28b1c4;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d0u: goto label_28b1d0;
        case 0x28b1d4u: goto label_28b1d4;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        default: break;
    }

    ctx->pc = 0x28af88u;

label_28af88:
    // 0x28af88: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x28af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_28af8c:
    // 0x28af8c: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x28af8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_28af90:
    // 0x28af90: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x28af90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_28af94:
    // 0x28af94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28af94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28af98:
    // 0x28af98: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x28af98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
label_28af9c:
    // 0x28af9c: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x28af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
label_28afa0:
    // 0x28afa0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x28afa0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_28afa4:
    // 0x28afa4: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x28afa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_28afa8:
    // 0x28afa8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x28afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_28afac:
    // 0x28afac: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x28afacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_28afb0:
    // 0x28afb0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x28afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_28afb4:
    // 0x28afb4: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x28afb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
label_28afb8:
    // 0x28afb8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x28afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
label_28afbc:
    // 0x28afbc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x28afbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_28afc0:
    // 0x28afc0: 0xc0a3bd2  jal         func_28EF48
label_28afc4:
    if (ctx->pc == 0x28AFC4u) {
        ctx->pc = 0x28AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC0u;
        // 0x28afc4: 0xe7b50168  swc1        $f21, 0x168($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFC8u;
        goto label_28afc8;
    }
    ctx->pc = 0x28AFC0u;
    SET_GPR_U32(ctx, 31, 0x28AFC8u);
    ctx->pc = 0x28AFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFC0u;
    // 0x28afc4: 0xe7b50168  swc1        $f21, 0x168($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF48u, 0x28AFC0u, 0x28AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AFC8u;
label_28afc8:
    // 0x28afc8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_28afcc:
    // 0x28afcc: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x28afccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_28afd0:
    // 0x28afd0: 0x27be0080  addiu       $fp, $sp, 0x80
    ctx->pc = 0x28afd0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_28afd4:
    // 0x28afd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28afd8:
    // 0x28afd8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x28afd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28afdc:
    // 0x28afdc: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28afe0:
    // 0x28afe0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28afe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_28afe4:
    // 0x28afe4: 0x0  nop
    ctx->pc = 0x28afe4u;
    // NOP
label_28afe8:
    // 0x28afe8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28afe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28afec:
    // 0x28afec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28afecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_28aff0:
    // 0x28aff0: 0x0  nop
    ctx->pc = 0x28aff0u;
    // NOP
label_28aff4:
    // 0x28aff4: 0x0  nop
    ctx->pc = 0x28aff4u;
    // NOP
label_28aff8:
    // 0x28aff8: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_28affc:
    if (ctx->pc == 0x28AFFCu) {
        ctx->pc = 0x28AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF8u;
        // 0x28affc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B000u;
        goto label_28b000;
    }
    ctx->pc = 0x28AFF8u;
    {
        const bool branch_taken_0x28aff8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x28AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF8u;
        // 0x28affc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aff8) {
            ctx->pc = 0x28AFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28afe8;
        }
    }
    ctx->pc = 0x28B000u;
label_28b000:
    // 0x28b000: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_28b004:
    // 0x28b004: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28b004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28b008:
    // 0x28b008: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b00c:
    // 0x28b00c: 0x2446be58  addiu       $a2, $v0, -0x41A8
    ctx->pc = 0x28b00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950488));
label_28b010:
    // 0x28b010: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b010u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28b014:
    // 0x28b014: 0xc0a728a  jal         func_29CA28
label_28b018:
    if (ctx->pc == 0x28B018u) {
        ctx->pc = 0x28B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B014u;
        // 0x28b018: 0x26750164  addiu       $s5, $s3, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B01Cu;
        goto label_28b01c;
    }
    ctx->pc = 0x28B014u;
    SET_GPR_U32(ctx, 31, 0x28B01Cu);
    ctx->pc = 0x28B018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B014u;
    // 0x28b018: 0x26750164  addiu       $s5, $s3, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CA28u, 0x28B014u, 0x28B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B01Cu;
label_28b01c:
    // 0x28b01c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x28b01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_28b020:
    // 0x28b020: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x28b020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28b024:
    // 0x28b024: 0x24504b00  addiu       $s0, $v0, 0x4B00
    ctx->pc = 0x28b024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_28b028:
    // 0x28b028: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b02c:
    // 0x28b02c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x28b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_28b030:
    // 0x28b030: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x28b030u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
label_28b034:
    // 0x28b034: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x28b034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_28b038:
    // 0x28b038: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x28b038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_28b03c:
    // 0x28b03c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x28b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_28b040:
    // 0x28b040: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28b040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_28b044:
    // 0x28b044: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x28b044u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_28b048:
    // 0x28b048: 0xc137832  jal         func_4DE0C8
label_28b04c:
    if (ctx->pc == 0x28B04Cu) {
        ctx->pc = 0x28B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B048u;
        // 0x28b04c: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B050u;
        goto label_28b050;
    }
    ctx->pc = 0x28B048u;
    SET_GPR_U32(ctx, 31, 0x28B050u);
    ctx->pc = 0x28B04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B048u;
    // 0x28b04c: 0x7fa30070  sq          $v1, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x28B048u, 0x28B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B050u;
label_28b050:
    // 0x28b050: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_28b054:
    if (ctx->pc == 0x28B054u) {
        ctx->pc = 0x28B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B050u;
        // 0x28b054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B058u;
        goto label_28b058;
    }
    ctx->pc = 0x28B050u;
    {
        const bool branch_taken_0x28b050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B050u;
        // 0x28b054: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b050) {
            ctx->pc = 0x28B168u;
            goto label_28b168;
        }
    }
    ctx->pc = 0x28B058u;
label_28b058:
    // 0x28b058: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28b058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_28b05c:
    // 0x28b05c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x28b05cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_28b060:
    // 0x28b060: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28b060u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b064:
    // 0x28b064: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x28b064u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b068:
    // 0x28b068: 0xc137826  jal         func_4DE098
label_28b06c:
    if (ctx->pc == 0x28B06Cu) {
        ctx->pc = 0x28B06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B068u;
        // 0x28b06c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B070u;
        goto label_28b070;
    }
    ctx->pc = 0x28B068u;
    SET_GPR_U32(ctx, 31, 0x28B070u);
    ctx->pc = 0x28B06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B068u;
    // 0x28b06c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28B068u, 0x28B070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B070u;
label_28b070:
    // 0x28b070: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28b070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b074:
    // 0x28b074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28b078:
    // 0x28b078: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x28b078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28b07c:
    // 0x28b07c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28b07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28b080:
    // 0x28b080: 0x50430036  beql        $v0, $v1, . + 4 + (0x36 << 2)
label_28b084:
    if (ctx->pc == 0x28B084u) {
        ctx->pc = 0x28B084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B080u;
        // 0x28b084: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B088u;
        goto label_28b088;
    }
    ctx->pc = 0x28B080u;
    {
        const bool branch_taken_0x28b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28b080) {
            ctx->pc = 0x28B084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B080u;
            // 0x28b084: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B15Cu;
            goto label_28b15c;
        }
    }
    ctx->pc = 0x28B088u;
label_28b088:
    // 0x28b088: 0xc0e409a  jal         func_390268
label_28b08c:
    if (ctx->pc == 0x28B08Cu) {
        ctx->pc = 0x28B08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B088u;
        // 0x28b08c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B090u;
        goto label_28b090;
    }
    ctx->pc = 0x28B088u;
    SET_GPR_U32(ctx, 31, 0x28B090u);
    ctx->pc = 0x28B08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B088u;
    // 0x28b08c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B088u, 0x28B090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B090u;
label_28b090:
    // 0x28b090: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b094:
    // 0x28b094: 0xc087502  jal         func_21D408
label_28b098:
    if (ctx->pc == 0x28B098u) {
        ctx->pc = 0x28B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B094u;
        // 0x28b098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B09Cu;
        goto label_28b09c;
    }
    ctx->pc = 0x28B094u;
    SET_GPR_U32(ctx, 31, 0x28B09Cu);
    ctx->pc = 0x28B098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B094u;
    // 0x28b098: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28B094u, 0x28B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B09Cu;
label_28b09c:
    // 0x28b09c: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x28b09cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_28b0a0:
    // 0x28b0a0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28b0a4:
    // 0x28b0a4: 0x86250092  lh          $a1, 0x92($s1)
    ctx->pc = 0x28b0a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_28b0a8:
    // 0x28b0a8: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x28b0a8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28b0ac:
    // 0x28b0ac: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x28b0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_28b0b0:
    // 0x28b0b0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28b0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_28b0b4:
    // 0x28b0b4: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x28b0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
label_28b0b8:
    // 0x28b0b8: 0xc0cdb38  jal         func_336CE0
label_28b0bc:
    if (ctx->pc == 0x28B0BCu) {
        ctx->pc = 0x28B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0B8u;
        // 0x28b0bc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0C0u;
        goto label_28b0c0;
    }
    ctx->pc = 0x28B0B8u;
    SET_GPR_U32(ctx, 31, 0x28B0C0u);
    ctx->pc = 0x28B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0B8u;
    // 0x28b0bc: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28B0B8u, 0x28B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B0C0u;
label_28b0c0:
    // 0x28b0c0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x28b0c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b0c4:
    // 0x28b0c4: 0x0  nop
    ctx->pc = 0x28b0c4u;
    // NOP
label_28b0c8:
    // 0x28b0c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b0cc:
    if (ctx->pc == 0x28B0CCu) {
        ctx->pc = 0x28B0D0u;
        goto label_28b0d0;
    }
    ctx->pc = 0x28B0C8u;
    {
        const bool branch_taken_0x28b0c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b0c8) {
            ctx->pc = 0x28B0E0u;
            goto label_28b0e0;
        }
    }
    ctx->pc = 0x28B0D0u;
label_28b0d0:
    // 0x28b0d0: 0x1616000d  bne         $s0, $s6, . + 4 + (0xD << 2)
label_28b0d4:
    if (ctx->pc == 0x28B0D4u) {
        ctx->pc = 0x28B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0D0u;
        // 0x28b0d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0D8u;
        goto label_28b0d8;
    }
    ctx->pc = 0x28B0D0u;
    {
        const bool branch_taken_0x28b0d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x28B0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0D0u;
        // 0x28b0d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0d0) {
            ctx->pc = 0x28B108u;
            goto label_28b108;
        }
    }
    ctx->pc = 0x28B0D8u;
label_28b0d8:
    // 0x28b0d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_28b0dc:
    if (ctx->pc == 0x28B0DCu) {
        ctx->pc = 0x28B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0D8u;
        // 0x28b0dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0E0u;
        goto label_28b0e0;
    }
    ctx->pc = 0x28B0D8u;
    {
        const bool branch_taken_0x28b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0D8u;
        // 0x28b0dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0d8) {
            ctx->pc = 0x28B0F8u;
            goto label_28b0f8;
        }
    }
    ctx->pc = 0x28B0E0u;
label_28b0e0:
    // 0x28b0e0: 0x16160009  bne         $s0, $s6, . + 4 + (0x9 << 2)
label_28b0e4:
    if (ctx->pc == 0x28B0E4u) {
        ctx->pc = 0x28B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E0u;
        // 0x28b0e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0E8u;
        goto label_28b0e8;
    }
    ctx->pc = 0x28B0E0u;
    {
        const bool branch_taken_0x28b0e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x28B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E0u;
        // 0x28b0e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0e0) {
            ctx->pc = 0x28B108u;
            goto label_28b108;
        }
    }
    ctx->pc = 0x28B0E8u;
label_28b0e8:
    // 0x28b0e8: 0x926202d5  lbu         $v0, 0x2D5($s3)
    ctx->pc = 0x28b0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 725)));
label_28b0ec:
    // 0x28b0ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_28b0f0:
    if (ctx->pc == 0x28B0F0u) {
        ctx->pc = 0x28B0F4u;
        goto label_28b0f4;
    }
    ctx->pc = 0x28B0ECu;
    {
        const bool branch_taken_0x28b0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b0ec) {
            ctx->pc = 0x28B108u;
            goto label_28b108;
        }
    }
    ctx->pc = 0x28B0F4u;
label_28b0f4:
    // 0x28b0f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28b0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_28b0f8:
    // 0x28b0f8: 0xc13788e  jal         func_4DE238
label_28b0fc:
    if (ctx->pc == 0x28B0FCu) {
        ctx->pc = 0x28B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0F8u;
        // 0x28b0fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B100u;
        goto label_28b100;
    }
    ctx->pc = 0x28B0F8u;
    SET_GPR_U32(ctx, 31, 0x28B100u);
    ctx->pc = 0x28B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0F8u;
    // 0x28b0fc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE238u, 0x28B0F8u, 0x28B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B100u;
label_28b100:
    // 0x28b100: 0x10000016  b           . + 4 + (0x16 << 2)
label_28b104:
    if (ctx->pc == 0x28B104u) {
        ctx->pc = 0x28B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B100u;
        // 0x28b104: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B108u;
        goto label_28b108;
    }
    ctx->pc = 0x28B100u;
    {
        const bool branch_taken_0x28b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B100u;
        // 0x28b104: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b100) {
            ctx->pc = 0x28B15Cu;
            goto label_28b15c;
        }
    }
    ctx->pc = 0x28B108u;
label_28b108:
    // 0x28b108: 0xc137882  jal         func_4DE208
label_28b10c:
    if (ctx->pc == 0x28B10Cu) {
        ctx->pc = 0x28B10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B108u;
        // 0x28b10c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B110u;
        goto label_28b110;
    }
    ctx->pc = 0x28B108u;
    SET_GPR_U32(ctx, 31, 0x28B110u);
    ctx->pc = 0x28B10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B108u;
    // 0x28b10c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28B108u, 0x28B110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B110u;
label_28b110:
    // 0x28b110: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b114:
    // 0x28b114: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
label_28b118:
    if (ctx->pc == 0x28B118u) {
        ctx->pc = 0x28B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B114u;
        // 0x28b118: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B11Cu;
        goto label_28b11c;
    }
    ctx->pc = 0x28B114u;
    {
        const bool branch_taken_0x28b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28b114) {
            ctx->pc = 0x28B118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B114u;
            // 0x28b118: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B15Cu;
            goto label_28b15c;
        }
    }
    ctx->pc = 0x28B11Cu;
label_28b11c:
    // 0x28b11c: 0xafb10040  sw          $s1, 0x40($sp)
    ctx->pc = 0x28b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 17));
label_28b120:
    // 0x28b120: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28b120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28b124:
    // 0x28b124: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x28b124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28b128:
    // 0x28b128: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x28b128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28b12c:
    // 0x28b12c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x28b12cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_28b130:
    // 0x28b130: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x28b130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_28b134:
    // 0x28b134: 0x40f809  jalr        $v0
label_28b138:
    if (ctx->pc == 0x28B138u) {
        ctx->pc = 0x28B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B134u;
        // 0x28b138: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B13Cu;
        goto label_28b13c;
    }
    ctx->pc = 0x28B134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B13Cu);
        ctx->pc = 0x28B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B134u;
        // 0x28b138: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B134u, 0x28B13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B13Cu;
label_28b13c:
    // 0x28b13c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28b13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b140:
    // 0x28b140: 0xc137882  jal         func_4DE208
label_28b144:
    if (ctx->pc == 0x28B144u) {
        ctx->pc = 0x28B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B140u;
        // 0x28b144: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B148u;
        goto label_28b148;
    }
    ctx->pc = 0x28B140u;
    SET_GPR_U32(ctx, 31, 0x28B148u);
    ctx->pc = 0x28B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B140u;
    // 0x28b144: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28B140u, 0x28B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B148u;
label_28b148:
    // 0x28b148: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_28b14c:
    if (ctx->pc == 0x28B14Cu) {
        ctx->pc = 0x28B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B148u;
        // 0x28b14c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B150u;
        goto label_28b150;
    }
    ctx->pc = 0x28B148u;
    {
        const bool branch_taken_0x28b148 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B148u;
        // 0x28b14c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b148) {
            ctx->pc = 0x28B158u;
            goto label_28b158;
        }
    }
    ctx->pc = 0x28B150u;
label_28b150:
    // 0x28b150: 0xc0a35a8  jal         func_28D6A0
label_28b154:
    if (ctx->pc == 0x28B154u) {
        ctx->pc = 0x28B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B150u;
        // 0x28b154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B158u;
        goto label_28b158;
    }
    ctx->pc = 0x28B150u;
    SET_GPR_U32(ctx, 31, 0x28B158u);
    ctx->pc = 0x28B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B150u;
    // 0x28b154: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D6A0u, 0x28B150u, 0x28B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B158u;
label_28b158:
    // 0x28b158: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x28b158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_28b15c:
    // 0x28b15c: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x28b15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28b160:
    // 0x28b160: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_28b164:
    if (ctx->pc == 0x28B164u) {
        ctx->pc = 0x28B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B160u;
        // 0x28b164: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B168u;
        goto label_28b168;
    }
    ctx->pc = 0x28B160u;
    {
        const bool branch_taken_0x28b160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B160u;
        // 0x28b164: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b160) {
            ctx->pc = 0x28B068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b068;
        }
    }
    ctx->pc = 0x28B168u;
label_28b168:
    // 0x28b168: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x28b168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_28b16c:
    // 0x28b16c: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x28b16cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b170:
    // 0x28b170: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x28b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28b174:
    // 0x28b174: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28b174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_28b178:
    // 0x28b178: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28b178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b17c:
    // 0x28b17c: 0x0  nop
    ctx->pc = 0x28b17cu;
    // NOP
label_28b180:
    // 0x28b180: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x28b180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_28b184:
    // 0x28b184: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28b184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_28b188:
    // 0x28b188: 0x0  nop
    ctx->pc = 0x28b188u;
    // NOP
label_28b18c:
    // 0x28b18c: 0x0  nop
    ctx->pc = 0x28b18cu;
    // NOP
label_28b190:
    // 0x28b190: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
label_28b194:
    if (ctx->pc == 0x28B194u) {
        ctx->pc = 0x28B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B190u;
        // 0x28b194: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B198u;
        goto label_28b198;
    }
    ctx->pc = 0x28B190u;
    {
        const bool branch_taken_0x28b190 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x28B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B190u;
        // 0x28b194: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b190) {
            ctx->pc = 0x28B180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b180;
        }
    }
    ctx->pc = 0x28B198u;
label_28b198:
    // 0x28b198: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_28b19c:
    // 0x28b19c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28b19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28b1a0:
    // 0x28b1a0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28b1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b1a4:
    // 0x28b1a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28b1a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28b1a8:
    // 0x28b1a8: 0xc0a71fa  jal         func_29C7E8
label_28b1ac:
    if (ctx->pc == 0x28B1ACu) {
        ctx->pc = 0x28B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1A8u;
        // 0x28b1ac: 0x2446be58  addiu       $a2, $v0, -0x41A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950488));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1B0u;
        goto label_28b1b0;
    }
    ctx->pc = 0x28B1A8u;
    SET_GPR_U32(ctx, 31, 0x28B1B0u);
    ctx->pc = 0x28B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1A8u;
    // 0x28b1ac: 0x2446be58  addiu       $a2, $v0, -0x41A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E8u, 0x28B1A8u, 0x28B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1B0u;
label_28b1b0:
    // 0x28b1b0: 0xc137832  jal         func_4DE0C8
label_28b1b4:
    if (ctx->pc == 0x28B1B4u) {
        ctx->pc = 0x28B1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B0u;
        // 0x28b1b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1B8u;
        goto label_28b1b8;
    }
    ctx->pc = 0x28B1B0u;
    SET_GPR_U32(ctx, 31, 0x28B1B8u);
    ctx->pc = 0x28B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1B0u;
    // 0x28b1b4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x28B1B0u, 0x28B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1B8u;
label_28b1b8:
    // 0x28b1b8: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
label_28b1bc:
    if (ctx->pc == 0x28B1BCu) {
        ctx->pc = 0x28B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B8u;
        // 0x28b1bc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1C0u;
        goto label_28b1c0;
    }
    ctx->pc = 0x28B1B8u;
    {
        const bool branch_taken_0x28b1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B8u;
        // 0x28b1bc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1b8) {
            ctx->pc = 0x28B28Cu;
            goto label_28b28c;
        }
    }
    ctx->pc = 0x28B1C0u;
label_28b1c0:
    // 0x28b1c0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28b1c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_28b1c4:
    // 0x28b1c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28b1c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28b1c8:
    // 0x28b1c8: 0x24574b00  addiu       $s7, $v0, 0x4B00
    ctx->pc = 0x28b1c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_28b1cc:
    // 0x28b1cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28b1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b1d0:
    // 0x28b1d0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x28b1d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28b1d4:
    // 0x28b1d4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28b1d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b1d8:
    // 0x28b1d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x28b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28b1dc:
    // 0x28b1dc: 0x0  nop
    ctx->pc = 0x28b1dcu;
    // NOP
label_28b1e0:
    // 0x28b1e0: 0xc137826  jal         func_4DE098
label_28b1e4:
    if (ctx->pc == 0x28B1E4u) {
        ctx->pc = 0x28B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1E0u;
        // 0x28b1e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1E8u;
        goto label_28b1e8;
    }
    ctx->pc = 0x28B1E0u;
    SET_GPR_U32(ctx, 31, 0x28B1E8u);
    ctx->pc = 0x28B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1E0u;
    // 0x28b1e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28B1E0u, 0x28B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1E8u;
label_28b1e8:
    // 0x28b1e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28b1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b1ec:
    // 0x28b1ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x28b1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_28b1f0:
    // 0x28b1f0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x28b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_28b1f4:
    // 0x28b1f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28b1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28b1f8:
    // 0x28b1f8: 0x10430020  beq         $v0, $v1, . + 4 + (0x20 << 2)
label_28b1fc:
    if (ctx->pc == 0x28B1FCu) {
        ctx->pc = 0x28B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1F8u;
        // 0x28b1fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B200u;
        goto label_28b200;
    }
    ctx->pc = 0x28B1F8u;
    {
        const bool branch_taken_0x28b1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1F8u;
        // 0x28b1fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1f8) {
            ctx->pc = 0x28B27Cu;
            goto label_28b27c;
        }
    }
    ctx->pc = 0x28B200u;
label_28b200:
    // 0x28b200: 0xc137882  jal         func_4DE208
label_28b204:
    if (ctx->pc == 0x28B204u) {
        ctx->pc = 0x28B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B200u;
        // 0x28b204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B208u;
        goto label_28b208;
    }
    ctx->pc = 0x28B200u;
    SET_GPR_U32(ctx, 31, 0x28B208u);
    ctx->pc = 0x28B204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B200u;
    // 0x28b204: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE208u, 0x28B200u, 0x28B208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B208u;
label_28b208:
    // 0x28b208: 0x5456001d  bnel        $v0, $s6, . + 4 + (0x1D << 2)
label_28b20c:
    if (ctx->pc == 0x28B20Cu) {
        ctx->pc = 0x28B20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B208u;
        // 0x28b20c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B210u;
        goto label_28b210;
    }
    ctx->pc = 0x28B208u;
    {
        const bool branch_taken_0x28b208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x28b208) {
            ctx->pc = 0x28B20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B208u;
            // 0x28b20c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B280u;
            goto label_28b280;
        }
    }
    ctx->pc = 0x28B210u;
label_28b210:
    // 0x28b210: 0xc0e409a  jal         func_390268
label_28b214:
    if (ctx->pc == 0x28B214u) {
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B210u;
        // 0x28b214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B218u;
        goto label_28b218;
    }
    ctx->pc = 0x28B210u;
    SET_GPR_U32(ctx, 31, 0x28B218u);
    ctx->pc = 0x28B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B210u;
    // 0x28b214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B210u, 0x28B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B218u;
label_28b218:
    // 0x28b218: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b21c:
    // 0x28b21c: 0xc087502  jal         func_21D408
label_28b220:
    if (ctx->pc == 0x28B220u) {
        ctx->pc = 0x28B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B21Cu;
        // 0x28b220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B224u;
        goto label_28b224;
    }
    ctx->pc = 0x28B21Cu;
    SET_GPR_U32(ctx, 31, 0x28B224u);
    ctx->pc = 0x28B220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B21Cu;
    // 0x28b220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28B21Cu, 0x28B224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B224u;
label_28b224:
    // 0x28b224: 0x86050092  lh          $a1, 0x92($s0)
    ctx->pc = 0x28b224u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_28b228:
    // 0x28b228: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x28b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_28b22c:
    // 0x28b22c: 0x904302d4  lbu         $v1, 0x2D4($v0)
    ctx->pc = 0x28b22cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 724)));
label_28b230:
    // 0x28b230: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_28b234:
    // 0x28b234: 0x3802b  sltu        $s0, $zero, $v1
    ctx->pc = 0x28b234u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28b238:
    // 0x28b238: 0xc0cdb38  jal         func_336CE0
label_28b23c:
    if (ctx->pc == 0x28B23Cu) {
        ctx->pc = 0x28B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B238u;
        // 0x28b23c: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B240u;
        goto label_28b240;
    }
    ctx->pc = 0x28B238u;
    SET_GPR_U32(ctx, 31, 0x28B240u);
    ctx->pc = 0x28B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B238u;
    // 0x28b23c: 0xb72821  addu        $a1, $a1, $s7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x28B238u, 0x28B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B240u;
label_28b240:
    // 0x28b240: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x28b240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28b244:
    // 0x28b244: 0x0  nop
    ctx->pc = 0x28b244u;
    // NOP
label_28b248:
    // 0x28b248: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_28b24c:
    if (ctx->pc == 0x28B24Cu) {
        ctx->pc = 0x28B250u;
        goto label_28b250;
    }
    ctx->pc = 0x28B248u;
    {
        const bool branch_taken_0x28b248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28b248) {
            ctx->pc = 0x28B260u;
            goto label_28b260;
        }
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0x1214000a  beq         $s0, $s4, . + 4 + (0xA << 2)
label_28b254:
    if (ctx->pc == 0x28B254u) {
        ctx->pc = 0x28B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B250u;
        // 0x28b254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B258u;
        goto label_28b258;
    }
    ctx->pc = 0x28B250u;
    {
        const bool branch_taken_0x28b250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x28B254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B250u;
        // 0x28b254: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b250) {
            ctx->pc = 0x28B27Cu;
            goto label_28b27c;
        }
    }
    ctx->pc = 0x28B258u;
label_28b258:
    // 0x28b258: 0x10000006  b           . + 4 + (0x6 << 2)
label_28b25c:
    if (ctx->pc == 0x28B25Cu) {
        ctx->pc = 0x28B260u;
        goto label_28b260;
    }
    ctx->pc = 0x28B258u;
    {
        const bool branch_taken_0x28b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b258) {
            ctx->pc = 0x28B274u;
            goto label_28b274;
        }
    }
    ctx->pc = 0x28B260u;
label_28b260:
    // 0x28b260: 0x16140004  bne         $s0, $s4, . + 4 + (0x4 << 2)
label_28b264:
    if (ctx->pc == 0x28B264u) {
        ctx->pc = 0x28B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B260u;
        // 0x28b264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B268u;
        goto label_28b268;
    }
    ctx->pc = 0x28B260u;
    {
        const bool branch_taken_0x28b260 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        ctx->pc = 0x28B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B260u;
        // 0x28b264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b260) {
            ctx->pc = 0x28B274u;
            goto label_28b274;
        }
    }
    ctx->pc = 0x28B268u;
label_28b268:
    // 0x28b268: 0x926202d5  lbu         $v0, 0x2D5($s3)
    ctx->pc = 0x28b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 725)));
label_28b26c:
    // 0x28b26c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_28b270:
    if (ctx->pc == 0x28B270u) {
        ctx->pc = 0x28B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B26Cu;
        // 0x28b270: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B274u;
        goto label_28b274;
    }
    ctx->pc = 0x28B26Cu;
    {
        const bool branch_taken_0x28b26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b26c) {
            ctx->pc = 0x28B270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B26Cu;
            // 0x28b270: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B280u;
            goto label_28b280;
        }
    }
    ctx->pc = 0x28B274u;
label_28b274:
    // 0x28b274: 0xc13786a  jal         func_4DE1A8
label_28b278:
    if (ctx->pc == 0x28B278u) {
        ctx->pc = 0x28B278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B274u;
        // 0x28b278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B27Cu;
        goto label_28b27c;
    }
    ctx->pc = 0x28B274u;
    SET_GPR_U32(ctx, 31, 0x28B27Cu);
    ctx->pc = 0x28B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B274u;
    // 0x28b278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE1A8u, 0x28B274u, 0x28B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B27Cu;
label_28b27c:
    // 0x28b27c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28b27cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28b280:
    // 0x28b280: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x28b280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28b284:
    // 0x28b284: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_28b288:
    if (ctx->pc == 0x28B288u) {
        ctx->pc = 0x28B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B284u;
        // 0x28b288: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B28Cu;
        goto label_28b28c;
    }
    ctx->pc = 0x28B284u;
    {
        const bool branch_taken_0x28b284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B284u;
        // 0x28b288: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b284) {
            ctx->pc = 0x28B1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b1e0;
        }
    }
    ctx->pc = 0x28B28Cu;
label_28b28c:
    // 0x28b28c: 0xc137832  jal         func_4DE0C8
label_28b290:
    if (ctx->pc == 0x28B290u) {
        ctx->pc = 0x28B290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B28Cu;
        // 0x28b290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B294u;
        goto label_28b294;
    }
    ctx->pc = 0x28B28Cu;
    SET_GPR_U32(ctx, 31, 0x28B294u);
    ctx->pc = 0x28B290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B28Cu;
    // 0x28b290: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0C8u, 0x28B28Cu, 0x28B294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B294u;
label_28b294:
    // 0x28b294: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_28b298:
    if (ctx->pc == 0x28B298u) {
        ctx->pc = 0x28B29Cu;
        goto label_28b29c;
    }
    ctx->pc = 0x28B294u;
    {
        const bool branch_taken_0x28b294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b294) {
            ctx->pc = 0x28B304u;
            goto label_28b304;
        }
    }
    ctx->pc = 0x28B29Cu;
label_28b29c:
    // 0x28b29c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28b29cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b2a0:
    // 0x28b2a0: 0xc13b69a  jal         func_4EDA68
label_28b2a4:
    if (ctx->pc == 0x28B2A4u) {
        ctx->pc = 0x28B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2A0u;
        // 0x28b2a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2A8u;
        goto label_28b2a8;
    }
    ctx->pc = 0x28B2A0u;
    SET_GPR_U32(ctx, 31, 0x28B2A8u);
    ctx->pc = 0x28B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2A0u;
    // 0x28b2a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDA68u, 0x28B2A0u, 0x28B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2A8u;
label_28b2a8:
    // 0x28b2a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28b2a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b2ac:
    // 0x28b2ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28b2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28b2b0:
    // 0x28b2b0: 0xc137826  jal         func_4DE098
label_28b2b4:
    if (ctx->pc == 0x28B2B4u) {
        ctx->pc = 0x28B2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2B0u;
        // 0x28b2b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2B8u;
        goto label_28b2b8;
    }
    ctx->pc = 0x28B2B0u;
    SET_GPR_U32(ctx, 31, 0x28B2B8u);
    ctx->pc = 0x28B2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2B0u;
    // 0x28b2b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x28B2B0u, 0x28B2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2B8u;
label_28b2b8:
    // 0x28b2b8: 0xc0e409a  jal         func_390268
label_28b2bc:
    if (ctx->pc == 0x28B2BCu) {
        ctx->pc = 0x28B2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2B8u;
        // 0x28b2bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2C0u;
        goto label_28b2c0;
    }
    ctx->pc = 0x28B2B8u;
    SET_GPR_U32(ctx, 31, 0x28B2C0u);
    ctx->pc = 0x28B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2B8u;
    // 0x28b2bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28B2B8u, 0x28B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2C0u;
label_28b2c0:
    // 0x28b2c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b2c4:
    // 0x28b2c4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
label_28b2c8:
    if (ctx->pc == 0x28B2C8u) {
        ctx->pc = 0x28B2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2C4u;
        // 0x28b2c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2CCu;
        goto label_28b2cc;
    }
    ctx->pc = 0x28B2C4u;
    {
        const bool branch_taken_0x28b2c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b2c4) {
            ctx->pc = 0x28B2C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B2C4u;
            // 0x28b2c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B2F0u;
            goto label_28b2f0;
        }
    }
    ctx->pc = 0x28B2CCu;
label_28b2cc:
    // 0x28b2cc: 0x808201b0  lb          $v0, 0x1B0($a0)
    ctx->pc = 0x28b2ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 432)));
label_28b2d0:
    // 0x28b2d0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28b2d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_28b2d4:
    // 0x28b2d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_28b2d8:
    if (ctx->pc == 0x28B2D8u) {
        ctx->pc = 0x28B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D4u;
        // 0x28b2d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2DCu;
        goto label_28b2dc;
    }
    ctx->pc = 0x28B2D4u;
    {
        const bool branch_taken_0x28b2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D4u;
        // 0x28b2d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d4) {
            ctx->pc = 0x28B2F0u;
            goto label_28b2f0;
        }
    }
    ctx->pc = 0x28B2DCu;
label_28b2dc:
    // 0x28b2dc: 0xc087502  jal         func_21D408
label_28b2e0:
    if (ctx->pc == 0x28B2E0u) {
        ctx->pc = 0x28B2E4u;
        goto label_28b2e4;
    }
    ctx->pc = 0x28B2DCu;
    SET_GPR_U32(ctx, 31, 0x28B2E4u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28B2DCu, 0x28B2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2E4u;
label_28b2e4:
    // 0x28b2e4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28b2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28b2e8:
    // 0x28b2e8: 0xc0a3bc8  jal         func_28EF20
label_28b2ec:
    if (ctx->pc == 0x28B2ECu) {
        ctx->pc = 0x28B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2E8u;
        // 0x28b2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2F0u;
        goto label_28b2f0;
    }
    ctx->pc = 0x28B2E8u;
    SET_GPR_U32(ctx, 31, 0x28B2F0u);
    ctx->pc = 0x28B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2E8u;
    // 0x28b2ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EF20u, 0x28B2E8u, 0x28B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B2F0u;
label_28b2f0:
    // 0x28b2f0: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x28b2f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_28b2f4:
    // 0x28b2f4: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_28b2f8:
    if (ctx->pc == 0x28B2F8u) {
        ctx->pc = 0x28B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F4u;
        // 0x28b2f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2FCu;
        goto label_28b2fc;
    }
    ctx->pc = 0x28B2F4u;
    {
        const bool branch_taken_0x28b2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b2f4) {
            ctx->pc = 0x28B2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B2F4u;
            // 0x28b2f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B2B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b2b0;
        }
    }
    ctx->pc = 0x28B2FCu;
label_28b2fc:
    // 0x28b2fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_28b300:
    if (ctx->pc == 0x28B300u) {
        ctx->pc = 0x28B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2FCu;
        // 0x28b300: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B304u;
        goto label_28b304;
    }
    ctx->pc = 0x28B2FCu;
    {
        const bool branch_taken_0x28b2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2FCu;
        // 0x28b300: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2fc) {
            ctx->pc = 0x28B310u;
            goto label_28b310;
        }
    }
    ctx->pc = 0x28B304u;
label_28b304:
    // 0x28b304: 0xc13782a  jal         func_4DE0A8
label_28b308:
    if (ctx->pc == 0x28B308u) {
        ctx->pc = 0x28B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B304u;
        // 0x28b308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B30Cu;
        goto label_28b30c;
    }
    ctx->pc = 0x28B304u;
    SET_GPR_U32(ctx, 31, 0x28B30Cu);
    ctx->pc = 0x28B308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B304u;
    // 0x28b308: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE0A8u, 0x28B304u, 0x28B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B30Cu;
label_28b30c:
    // 0x28b30c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x28b30cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_28b310:
    // 0x28b310: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_28b314:
    // 0x28b314: 0xc06cd84  jal         func_1B3610
label_28b318:
    if (ctx->pc == 0x28B318u) {
        ctx->pc = 0x28B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B314u;
        // 0x28b318: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B31Cu;
        goto label_28b31c;
    }
    ctx->pc = 0x28B314u;
    SET_GPR_U32(ctx, 31, 0x28B31Cu);
    ctx->pc = 0x28B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B314u;
    // 0x28b318: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3610u, 0x28B314u, 0x28B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B31Cu;
label_28b31c:
    // 0x28b31c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x28b31cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_28b320:
    // 0x28b320: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x28b320u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_28b324:
    // 0x28b324: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x28b324u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_28b328:
    // 0x28b328: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x28b328u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_28b32c:
    // 0x28b32c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x28b32cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_28b330:
    // 0x28b330: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x28b330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_28b334:
    // 0x28b334: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x28b334u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_28b338:
    // 0x28b338: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x28b338u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28b33c:
    // 0x28b33c: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x28b33cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_28b340:
    // 0x28b340: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x28b340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_28b344:
    // 0x28b344: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x28b344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28b348:
    // 0x28b348: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x28b348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28b34c:
    // 0x28b34c: 0x3e00008  jr          $ra
label_28b350:
    if (ctx->pc == 0x28B350u) {
        ctx->pc = 0x28B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B34Cu;
        // 0x28b350: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B354u;
        goto label_28b354;
    }
    ctx->pc = 0x28B34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B34Cu;
        // 0x28b350: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B354u;
label_28b354:
    // 0x28b354: 0x0  nop
    ctx->pc = 0x28b354u;
    // NOP
    ctx->pc = 0x28b358u;
}
