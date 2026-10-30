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

// Function: sub_0024AF78
// Address: 0x24af78 - 0x24b190
void sub_0024AF78_0x24af78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AF78_0x24af78");
#endif

    switch (ctx->pc) {
        case 0x24af78u: goto label_24af78;
        case 0x24af7cu: goto label_24af7c;
        case 0x24af80u: goto label_24af80;
        case 0x24af84u: goto label_24af84;
        case 0x24af88u: goto label_24af88;
        case 0x24af8cu: goto label_24af8c;
        case 0x24af90u: goto label_24af90;
        case 0x24af94u: goto label_24af94;
        case 0x24af98u: goto label_24af98;
        case 0x24af9cu: goto label_24af9c;
        case 0x24afa0u: goto label_24afa0;
        case 0x24afa4u: goto label_24afa4;
        case 0x24afa8u: goto label_24afa8;
        case 0x24afacu: goto label_24afac;
        case 0x24afb0u: goto label_24afb0;
        case 0x24afb4u: goto label_24afb4;
        case 0x24afb8u: goto label_24afb8;
        case 0x24afbcu: goto label_24afbc;
        case 0x24afc0u: goto label_24afc0;
        case 0x24afc4u: goto label_24afc4;
        case 0x24afc8u: goto label_24afc8;
        case 0x24afccu: goto label_24afcc;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afd4u: goto label_24afd4;
        case 0x24afd8u: goto label_24afd8;
        case 0x24afdcu: goto label_24afdc;
        case 0x24afe0u: goto label_24afe0;
        case 0x24afe4u: goto label_24afe4;
        case 0x24afe8u: goto label_24afe8;
        case 0x24afecu: goto label_24afec;
        case 0x24aff0u: goto label_24aff0;
        case 0x24aff4u: goto label_24aff4;
        case 0x24aff8u: goto label_24aff8;
        case 0x24affcu: goto label_24affc;
        case 0x24b000u: goto label_24b000;
        case 0x24b004u: goto label_24b004;
        case 0x24b008u: goto label_24b008;
        case 0x24b00cu: goto label_24b00c;
        case 0x24b010u: goto label_24b010;
        case 0x24b014u: goto label_24b014;
        case 0x24b018u: goto label_24b018;
        case 0x24b01cu: goto label_24b01c;
        case 0x24b020u: goto label_24b020;
        case 0x24b024u: goto label_24b024;
        case 0x24b028u: goto label_24b028;
        case 0x24b02cu: goto label_24b02c;
        case 0x24b030u: goto label_24b030;
        case 0x24b034u: goto label_24b034;
        case 0x24b038u: goto label_24b038;
        case 0x24b03cu: goto label_24b03c;
        case 0x24b040u: goto label_24b040;
        case 0x24b044u: goto label_24b044;
        case 0x24b048u: goto label_24b048;
        case 0x24b04cu: goto label_24b04c;
        case 0x24b050u: goto label_24b050;
        case 0x24b054u: goto label_24b054;
        case 0x24b058u: goto label_24b058;
        case 0x24b05cu: goto label_24b05c;
        case 0x24b060u: goto label_24b060;
        case 0x24b064u: goto label_24b064;
        case 0x24b068u: goto label_24b068;
        case 0x24b06cu: goto label_24b06c;
        case 0x24b070u: goto label_24b070;
        case 0x24b074u: goto label_24b074;
        case 0x24b078u: goto label_24b078;
        case 0x24b07cu: goto label_24b07c;
        case 0x24b080u: goto label_24b080;
        case 0x24b084u: goto label_24b084;
        case 0x24b088u: goto label_24b088;
        case 0x24b08cu: goto label_24b08c;
        case 0x24b090u: goto label_24b090;
        case 0x24b094u: goto label_24b094;
        case 0x24b098u: goto label_24b098;
        case 0x24b09cu: goto label_24b09c;
        case 0x24b0a0u: goto label_24b0a0;
        case 0x24b0a4u: goto label_24b0a4;
        case 0x24b0a8u: goto label_24b0a8;
        case 0x24b0acu: goto label_24b0ac;
        case 0x24b0b0u: goto label_24b0b0;
        case 0x24b0b4u: goto label_24b0b4;
        case 0x24b0b8u: goto label_24b0b8;
        case 0x24b0bcu: goto label_24b0bc;
        case 0x24b0c0u: goto label_24b0c0;
        case 0x24b0c4u: goto label_24b0c4;
        case 0x24b0c8u: goto label_24b0c8;
        case 0x24b0ccu: goto label_24b0cc;
        case 0x24b0d0u: goto label_24b0d0;
        case 0x24b0d4u: goto label_24b0d4;
        case 0x24b0d8u: goto label_24b0d8;
        case 0x24b0dcu: goto label_24b0dc;
        case 0x24b0e0u: goto label_24b0e0;
        case 0x24b0e4u: goto label_24b0e4;
        case 0x24b0e8u: goto label_24b0e8;
        case 0x24b0ecu: goto label_24b0ec;
        case 0x24b0f0u: goto label_24b0f0;
        case 0x24b0f4u: goto label_24b0f4;
        case 0x24b0f8u: goto label_24b0f8;
        case 0x24b0fcu: goto label_24b0fc;
        case 0x24b100u: goto label_24b100;
        case 0x24b104u: goto label_24b104;
        case 0x24b108u: goto label_24b108;
        case 0x24b10cu: goto label_24b10c;
        case 0x24b110u: goto label_24b110;
        case 0x24b114u: goto label_24b114;
        case 0x24b118u: goto label_24b118;
        case 0x24b11cu: goto label_24b11c;
        case 0x24b120u: goto label_24b120;
        case 0x24b124u: goto label_24b124;
        case 0x24b128u: goto label_24b128;
        case 0x24b12cu: goto label_24b12c;
        case 0x24b130u: goto label_24b130;
        case 0x24b134u: goto label_24b134;
        case 0x24b138u: goto label_24b138;
        case 0x24b13cu: goto label_24b13c;
        case 0x24b140u: goto label_24b140;
        case 0x24b144u: goto label_24b144;
        case 0x24b148u: goto label_24b148;
        case 0x24b14cu: goto label_24b14c;
        case 0x24b150u: goto label_24b150;
        case 0x24b154u: goto label_24b154;
        case 0x24b158u: goto label_24b158;
        case 0x24b15cu: goto label_24b15c;
        case 0x24b160u: goto label_24b160;
        case 0x24b164u: goto label_24b164;
        case 0x24b168u: goto label_24b168;
        case 0x24b16cu: goto label_24b16c;
        case 0x24b170u: goto label_24b170;
        case 0x24b174u: goto label_24b174;
        case 0x24b178u: goto label_24b178;
        case 0x24b17cu: goto label_24b17c;
        case 0x24b180u: goto label_24b180;
        case 0x24b184u: goto label_24b184;
        case 0x24b188u: goto label_24b188;
        case 0x24b18cu: goto label_24b18c;
        default: break;
    }

    ctx->pc = 0x24af78u;

label_24af78:
    // 0x24af78: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x24af78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_24af7c:
    // 0x24af7c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24af80:
    // 0x24af80: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x24af80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_24af84:
    // 0x24af84: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x24af84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_24af88:
    // 0x24af88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24af88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24af8c:
    // 0x24af8c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x24af8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_24af90:
    // 0x24af90: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x24af90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_24af94:
    // 0x24af94: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x24af94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
label_24af98:
    // 0x24af98: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x24af98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_24af9c:
    // 0x24af9c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x24af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_24afa0:
    // 0x24afa0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x24afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_24afa4:
    // 0x24afa4: 0xc0616ac  jal         func_185AB0
label_24afa8:
    if (ctx->pc == 0x24AFA8u) {
        ctx->pc = 0x24AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFA4u;
        // 0x24afa8: 0x24c50009  addiu       $a1, $a2, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFACu;
        goto label_24afac;
    }
    ctx->pc = 0x24AFA4u;
    SET_GPR_U32(ctx, 31, 0x24AFACu);
    ctx->pc = 0x24AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFA4u;
    // 0x24afa8: 0x24c50009  addiu       $a1, $a2, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x24AFA4u, 0x24AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFACu;
label_24afac:
    // 0x24afac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24afacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24afb0:
    // 0x24afb0: 0x52200071  beql        $s1, $zero, . + 4 + (0x71 << 2)
label_24afb4:
    if (ctx->pc == 0x24AFB4u) {
        ctx->pc = 0x24AFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFB0u;
        // 0x24afb4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFB8u;
        goto label_24afb8;
    }
    ctx->pc = 0x24AFB0u;
    {
        const bool branch_taken_0x24afb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24afb0) {
            ctx->pc = 0x24AFB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24AFB0u;
            // 0x24afb4: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B178u;
            goto label_24b178;
        }
    }
    ctx->pc = 0x24AFB8u;
label_24afb8:
    // 0x24afb8: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x24afb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_24afbc:
    // 0x24afbc: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_24afc0:
    if (ctx->pc == 0x24AFC0u) {
        ctx->pc = 0x24AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFBCu;
        // 0x24afc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFC4u;
        goto label_24afc4;
    }
    ctx->pc = 0x24AFBCu;
    {
        const bool branch_taken_0x24afbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFBCu;
        // 0x24afc0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afbc) {
            ctx->pc = 0x24B174u;
            goto label_24b174;
        }
    }
    ctx->pc = 0x24AFC4u;
label_24afc4:
    // 0x24afc4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x24afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24afc8:
    // 0x24afc8: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x24afc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_24afcc:
    // 0x24afcc: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x24afccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_24afd0:
    // 0x24afd0: 0x60f809  jalr        $v1
label_24afd4:
    if (ctx->pc == 0x24AFD4u) {
        ctx->pc = 0x24AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFD0u;
        // 0x24afd4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFD8u;
        goto label_24afd8;
    }
    ctx->pc = 0x24AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x24AFD8u);
        ctx->pc = 0x24AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFD0u;
        // 0x24afd4: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AFD0u, 0x24AFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AFD8u;
label_24afd8:
    // 0x24afd8: 0x860205d4  lh          $v0, 0x5D4($s0)
    ctx->pc = 0x24afd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1492)));
label_24afdc:
    // 0x24afdc: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x24afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_24afe0:
    // 0x24afe0: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x24afe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_24afe4:
    // 0x24afe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24afe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24afe8:
    // 0x24afe8: 0x24c81730  addiu       $t0, $a2, 0x1730
    ctx->pc = 0x24afe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 5936));
label_24afec:
    // 0x24afec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24afecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24aff0:
    // 0x24aff0: 0x0  nop
    ctx->pc = 0x24aff0u;
    // NOP
label_24aff4:
    // 0x24aff4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24aff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_24aff8:
    // 0x24aff8: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x24aff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24affc:
    // 0x24affc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x24affcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_24b000:
    // 0x24b000: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x24b000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_24b004:
    // 0x24b004: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x24b004u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_24b008:
    // 0x24b008: 0xc4641720  lwc1        $f4, 0x1720($v1)
    ctx->pc = 0x24b008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24b00c:
    // 0x24b00c: 0x0  nop
    ctx->pc = 0x24b00cu;
    // NOP
label_24b010:
    // 0x24b010: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x24b010u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_24b014:
    // 0x24b014: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x24b014u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24b018:
    // 0x24b018: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24b018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24b01c:
    // 0x24b01c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b01cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24b020:
    // 0x24b020: 0x24651720  addiu       $a1, $v1, 0x1720
    ctx->pc = 0x24b020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 5920));
label_24b024:
    // 0x24b024: 0x24871770  addiu       $a3, $a0, 0x1770
    ctx->pc = 0x24b024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6000));
label_24b028:
    // 0x24b028: 0xc4a70004  lwc1        $f7, 0x4($a1)
    ctx->pc = 0x24b028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24b02c:
    // 0x24b02c: 0xc4e90004  lwc1        $f9, 0x4($a3)
    ctx->pc = 0x24b02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_24b030:
    // 0x24b030: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x24b030u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_24b034:
    // 0x24b034: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x24b034u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_24b038:
    // 0x24b038: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x24b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_24b03c:
    // 0x24b03c: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x24b03cu;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_24b040:
    // 0x24b040: 0xc48a1770  lwc1        $f10, 0x1770($a0)
    ctx->pc = 0x24b040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_24b044:
    // 0x24b044: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24b044u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24b048:
    // 0x24b048: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x24b048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24b04c:
    // 0x24b04c: 0x3c013f93  lui         $at, 0x3F93
    ctx->pc = 0x24b04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16275 << 16));
label_24b050:
    // 0x24b050: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x24b050u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_24b054:
    // 0x24b054: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24b058:
    // 0x24b058: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x24b058u;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
label_24b05c:
    // 0x24b05c: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x24b05cu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
label_24b060:
    // 0x24b060: 0xc4e50008  lwc1        $f5, 0x8($a3)
    ctx->pc = 0x24b060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24b064:
    // 0x24b064: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x24b064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b068:
    // 0x24b068: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x24b068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_24b06c:
    // 0x24b06c: 0xc4c81730  lwc1        $f8, 0x1730($a2)
    ctx->pc = 0x24b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 5936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24b070:
    // 0x24b070: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x24b070u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_24b074:
    // 0x24b074: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x24b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24b078:
    // 0x24b078: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x24b078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_24b07c:
    // 0x24b07c: 0x3c013d27  lui         $at, 0x3D27
    ctx->pc = 0x24b07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15655 << 16));
label_24b080:
    // 0x24b080: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x24b080u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
label_24b084:
    // 0x24b084: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24b084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24b088:
    // 0x24b088: 0x46144a42  mul.s       $f9, $f9, $f20
    ctx->pc = 0x24b088u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[20]);
label_24b08c:
    // 0x24b08c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x24b08cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_24b090:
    // 0x24b090: 0xc7ab0000  lwc1        $f11, 0x0($sp)
    ctx->pc = 0x24b090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_24b094:
    // 0x24b094: 0x461439c2  mul.s       $f7, $f7, $f20
    ctx->pc = 0x24b094u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[20]);
label_24b098:
    // 0x24b098: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x24b098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_24b09c:
    // 0x24b09c: 0x46144202  mul.s       $f8, $f8, $f20
    ctx->pc = 0x24b09cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[20]);
label_24b0a0:
    // 0x24b0a0: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x24b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_24b0a4:
    // 0x24b0a4: 0x46145282  mul.s       $f10, $f10, $f20
    ctx->pc = 0x24b0a4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[20]);
label_24b0a8:
    // 0x24b0a8: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x24b0a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_24b0ac:
    // 0x24b0ac: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x24b0acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
label_24b0b0:
    // 0x24b0b0: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x24b0b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_24b0b4:
    // 0x24b0b4: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x24b0b4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_24b0b8:
    // 0x24b0b8: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x24b0b8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_24b0bc:
    // 0x24b0bc: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x24b0bcu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_24b0c0:
    // 0x24b0c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24b0c4:
    // 0x24b0c4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x24b0c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_24b0c8:
    // 0x24b0c8: 0xe7aa0050  swc1        $f10, 0x50($sp)
    ctx->pc = 0x24b0c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_24b0cc:
    // 0x24b0cc: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x24b0ccu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_24b0d0:
    // 0x24b0d0: 0xe7a90058  swc1        $f9, 0x58($sp)
    ctx->pc = 0x24b0d0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_24b0d4:
    // 0x24b0d4: 0xe7ab0060  swc1        $f11, 0x60($sp)
    ctx->pc = 0x24b0d4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_24b0d8:
    // 0x24b0d8: 0xe4660004  swc1        $f6, 0x4($v1)
    ctx->pc = 0x24b0d8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_24b0dc:
    // 0x24b0dc: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x24b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_24b0e0:
    // 0x24b0e0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x24b0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b0e4:
    // 0x24b0e4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x24b0e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_24b0e8:
    // 0x24b0e8: 0xc107458  jal         func_41D160
label_24b0ec:
    if (ctx->pc == 0x24B0ECu) {
        ctx->pc = 0x24B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0E8u;
        // 0x24b0ec: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0F0u;
        goto label_24b0f0;
    }
    ctx->pc = 0x24B0E8u;
    SET_GPR_U32(ctx, 31, 0x24B0F0u);
    ctx->pc = 0x24B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B0E8u;
    // 0x24b0ec: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D160u, 0x24B0E8u, 0x24B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B0F0u;
label_24b0f0:
    // 0x24b0f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_24b0f4:
    if (ctx->pc == 0x24B0F4u) {
        ctx->pc = 0x24B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0F0u;
        // 0x24b0f4: 0x27a200b0  addiu       $v0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B0F8u;
        goto label_24b0f8;
    }
    ctx->pc = 0x24B0F0u;
    {
        const bool branch_taken_0x24b0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B0F0u;
        // 0x24b0f4: 0x27a200b0  addiu       $v0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b0f0) {
            ctx->pc = 0x24B114u;
            goto label_24b114;
        }
    }
    ctx->pc = 0x24B0F8u;
label_24b0f8:
    // 0x24b0f8: 0xa3a000b0  sb          $zero, 0xB0($sp)
    ctx->pc = 0x24b0f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 0));
label_24b0fc:
    // 0x24b0fc: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x24b0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_24b100:
    // 0x24b100: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x24b100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_24b104:
    // 0x24b104: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x24b104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
label_24b108:
    // 0x24b108: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x24b108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24b10c:
    // 0x24b10c: 0x10000009  b           . + 4 + (0x9 << 2)
label_24b110:
    if (ctx->pc == 0x24B110u) {
        ctx->pc = 0x24B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B10Cu;
        // 0x24b110: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B114u;
        goto label_24b114;
    }
    ctx->pc = 0x24B10Cu;
    {
        const bool branch_taken_0x24b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B10Cu;
        // 0x24b110: 0xafa300a4  sw          $v1, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b10c) {
            ctx->pc = 0x24B134u;
            goto label_24b134;
        }
    }
    ctx->pc = 0x24B114u;
label_24b114:
    // 0x24b114: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x24b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_24b118:
    // 0x24b118: 0x27a300b4  addiu       $v1, $sp, 0xB4
    ctx->pc = 0x24b118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_24b11c:
    // 0x24b11c: 0xa3a200b4  sb          $v0, 0xB4($sp)
    ctx->pc = 0x24b11cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 180), (uint8_t)GPR_U32(ctx, 2));
label_24b120:
    // 0x24b120: 0xa0720003  sb          $s2, 0x3($v1)
    ctx->pc = 0x24b120u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 18));
label_24b124:
    // 0x24b124: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x24b124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_24b128:
    // 0x24b128: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x24b128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24b12c:
    // 0x24b12c: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x24b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_24b130:
    // 0x24b130: 0xafa400a4  sw          $a0, 0xA4($sp)
    ctx->pc = 0x24b130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 4));
label_24b134:
    // 0x24b134: 0xc060b58  jal         func_182D60
label_24b138:
    if (ctx->pc == 0x24B138u) {
        ctx->pc = 0x24B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B134u;
        // 0x24b138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B13Cu;
        goto label_24b13c;
    }
    ctx->pc = 0x24B134u;
    SET_GPR_U32(ctx, 31, 0x24B13Cu);
    ctx->pc = 0x24B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B134u;
    // 0x24b138: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x24B134u, 0x24B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B13Cu;
label_24b13c:
    // 0x24b13c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24b13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24b140:
    // 0x24b140: 0xc06078e  jal         func_181E38
label_24b144:
    if (ctx->pc == 0x24B144u) {
        ctx->pc = 0x24B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B140u;
        // 0x24b144: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B148u;
        goto label_24b148;
    }
    ctx->pc = 0x24B140u;
    SET_GPR_U32(ctx, 31, 0x24B148u);
    ctx->pc = 0x24B144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B140u;
    // 0x24b144: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x24B140u, 0x24B148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B148u;
label_24b148:
    // 0x24b148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24b148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24b14c:
    // 0x24b14c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x24b14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_24b150:
    // 0x24b150: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x24b150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_24b154:
    // 0x24b154: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x24b154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_24b158:
    // 0x24b158: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x24b158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_24b15c:
    // 0x24b15c: 0xb3a3009b  sdl         $v1, 0x9B($sp)
    ctx->pc = 0x24b15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24b160:
    // 0x24b160: 0xb7a30094  sdr         $v1, 0x94($sp)
    ctx->pc = 0x24b160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24b164:
    // 0x24b164: 0xb3a600a3  sdl         $a2, 0xA3($sp)
    ctx->pc = 0x24b164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24b168:
    // 0x24b168: 0xb7a6009c  sdr         $a2, 0x9C($sp)
    ctx->pc = 0x24b168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24b16c:
    // 0x24b16c: 0xc060b78  jal         func_182DE0
label_24b170:
    if (ctx->pc == 0x24B170u) {
        ctx->pc = 0x24B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B16Cu;
        // 0x24b170: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B174u;
        goto label_24b174;
    }
    ctx->pc = 0x24B16Cu;
    SET_GPR_U32(ctx, 31, 0x24B174u);
    ctx->pc = 0x24B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B16Cu;
    // 0x24b170: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x24B16Cu, 0x24B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B174u;
label_24b174:
    // 0x24b174: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x24b174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_24b178:
    // 0x24b178: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x24b178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_24b17c:
    // 0x24b17c: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x24b17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_24b180:
    // 0x24b180: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x24b180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_24b184:
    // 0x24b184: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x24b184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_24b188:
    // 0x24b188: 0x3e00008  jr          $ra
label_24b18c:
    if (ctx->pc == 0x24B18Cu) {
        ctx->pc = 0x24B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B188u;
        // 0x24b18c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B190u;
        goto label_fallthrough_0x24b188;
    }
    ctx->pc = 0x24B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B188u;
        // 0x24b18c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x24b188:
    ctx->pc = 0x24B190u;
}
