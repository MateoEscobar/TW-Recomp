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

// Function: sub_0020FFE8
// Address: 0x20ffe8 - 0x2102f0
void sub_0020FFE8_0x20ffe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FFE8_0x20ffe8");
#endif

    switch (ctx->pc) {
        case 0x20ffe8u: goto label_20ffe8;
        case 0x20ffecu: goto label_20ffec;
        case 0x20fff0u: goto label_20fff0;
        case 0x20fff4u: goto label_20fff4;
        case 0x20fff8u: goto label_20fff8;
        case 0x20fffcu: goto label_20fffc;
        case 0x210000u: goto label_210000;
        case 0x210004u: goto label_210004;
        case 0x210008u: goto label_210008;
        case 0x21000cu: goto label_21000c;
        case 0x210010u: goto label_210010;
        case 0x210014u: goto label_210014;
        case 0x210018u: goto label_210018;
        case 0x21001cu: goto label_21001c;
        case 0x210020u: goto label_210020;
        case 0x210024u: goto label_210024;
        case 0x210028u: goto label_210028;
        case 0x21002cu: goto label_21002c;
        case 0x210030u: goto label_210030;
        case 0x210034u: goto label_210034;
        case 0x210038u: goto label_210038;
        case 0x21003cu: goto label_21003c;
        case 0x210040u: goto label_210040;
        case 0x210044u: goto label_210044;
        case 0x210048u: goto label_210048;
        case 0x21004cu: goto label_21004c;
        case 0x210050u: goto label_210050;
        case 0x210054u: goto label_210054;
        case 0x210058u: goto label_210058;
        case 0x21005cu: goto label_21005c;
        case 0x210060u: goto label_210060;
        case 0x210064u: goto label_210064;
        case 0x210068u: goto label_210068;
        case 0x21006cu: goto label_21006c;
        case 0x210070u: goto label_210070;
        case 0x210074u: goto label_210074;
        case 0x210078u: goto label_210078;
        case 0x21007cu: goto label_21007c;
        case 0x210080u: goto label_210080;
        case 0x210084u: goto label_210084;
        case 0x210088u: goto label_210088;
        case 0x21008cu: goto label_21008c;
        case 0x210090u: goto label_210090;
        case 0x210094u: goto label_210094;
        case 0x210098u: goto label_210098;
        case 0x21009cu: goto label_21009c;
        case 0x2100a0u: goto label_2100a0;
        case 0x2100a4u: goto label_2100a4;
        case 0x2100a8u: goto label_2100a8;
        case 0x2100acu: goto label_2100ac;
        case 0x2100b0u: goto label_2100b0;
        case 0x2100b4u: goto label_2100b4;
        case 0x2100b8u: goto label_2100b8;
        case 0x2100bcu: goto label_2100bc;
        case 0x2100c0u: goto label_2100c0;
        case 0x2100c4u: goto label_2100c4;
        case 0x2100c8u: goto label_2100c8;
        case 0x2100ccu: goto label_2100cc;
        case 0x2100d0u: goto label_2100d0;
        case 0x2100d4u: goto label_2100d4;
        case 0x2100d8u: goto label_2100d8;
        case 0x2100dcu: goto label_2100dc;
        case 0x2100e0u: goto label_2100e0;
        case 0x2100e4u: goto label_2100e4;
        case 0x2100e8u: goto label_2100e8;
        case 0x2100ecu: goto label_2100ec;
        case 0x2100f0u: goto label_2100f0;
        case 0x2100f4u: goto label_2100f4;
        case 0x2100f8u: goto label_2100f8;
        case 0x2100fcu: goto label_2100fc;
        case 0x210100u: goto label_210100;
        case 0x210104u: goto label_210104;
        case 0x210108u: goto label_210108;
        case 0x21010cu: goto label_21010c;
        case 0x210110u: goto label_210110;
        case 0x210114u: goto label_210114;
        case 0x210118u: goto label_210118;
        case 0x21011cu: goto label_21011c;
        case 0x210120u: goto label_210120;
        case 0x210124u: goto label_210124;
        case 0x210128u: goto label_210128;
        case 0x21012cu: goto label_21012c;
        case 0x210130u: goto label_210130;
        case 0x210134u: goto label_210134;
        case 0x210138u: goto label_210138;
        case 0x21013cu: goto label_21013c;
        case 0x210140u: goto label_210140;
        case 0x210144u: goto label_210144;
        case 0x210148u: goto label_210148;
        case 0x21014cu: goto label_21014c;
        case 0x210150u: goto label_210150;
        case 0x210154u: goto label_210154;
        case 0x210158u: goto label_210158;
        case 0x21015cu: goto label_21015c;
        case 0x210160u: goto label_210160;
        case 0x210164u: goto label_210164;
        case 0x210168u: goto label_210168;
        case 0x21016cu: goto label_21016c;
        case 0x210170u: goto label_210170;
        case 0x210174u: goto label_210174;
        case 0x210178u: goto label_210178;
        case 0x21017cu: goto label_21017c;
        case 0x210180u: goto label_210180;
        case 0x210184u: goto label_210184;
        case 0x210188u: goto label_210188;
        case 0x21018cu: goto label_21018c;
        case 0x210190u: goto label_210190;
        case 0x210194u: goto label_210194;
        case 0x210198u: goto label_210198;
        case 0x21019cu: goto label_21019c;
        case 0x2101a0u: goto label_2101a0;
        case 0x2101a4u: goto label_2101a4;
        case 0x2101a8u: goto label_2101a8;
        case 0x2101acu: goto label_2101ac;
        case 0x2101b0u: goto label_2101b0;
        case 0x2101b4u: goto label_2101b4;
        case 0x2101b8u: goto label_2101b8;
        case 0x2101bcu: goto label_2101bc;
        case 0x2101c0u: goto label_2101c0;
        case 0x2101c4u: goto label_2101c4;
        case 0x2101c8u: goto label_2101c8;
        case 0x2101ccu: goto label_2101cc;
        case 0x2101d0u: goto label_2101d0;
        case 0x2101d4u: goto label_2101d4;
        case 0x2101d8u: goto label_2101d8;
        case 0x2101dcu: goto label_2101dc;
        case 0x2101e0u: goto label_2101e0;
        case 0x2101e4u: goto label_2101e4;
        case 0x2101e8u: goto label_2101e8;
        case 0x2101ecu: goto label_2101ec;
        case 0x2101f0u: goto label_2101f0;
        case 0x2101f4u: goto label_2101f4;
        case 0x2101f8u: goto label_2101f8;
        case 0x2101fcu: goto label_2101fc;
        case 0x210200u: goto label_210200;
        case 0x210204u: goto label_210204;
        case 0x210208u: goto label_210208;
        case 0x21020cu: goto label_21020c;
        case 0x210210u: goto label_210210;
        case 0x210214u: goto label_210214;
        case 0x210218u: goto label_210218;
        case 0x21021cu: goto label_21021c;
        case 0x210220u: goto label_210220;
        case 0x210224u: goto label_210224;
        case 0x210228u: goto label_210228;
        case 0x21022cu: goto label_21022c;
        case 0x210230u: goto label_210230;
        case 0x210234u: goto label_210234;
        case 0x210238u: goto label_210238;
        case 0x21023cu: goto label_21023c;
        case 0x210240u: goto label_210240;
        case 0x210244u: goto label_210244;
        case 0x210248u: goto label_210248;
        case 0x21024cu: goto label_21024c;
        case 0x210250u: goto label_210250;
        case 0x210254u: goto label_210254;
        case 0x210258u: goto label_210258;
        case 0x21025cu: goto label_21025c;
        case 0x210260u: goto label_210260;
        case 0x210264u: goto label_210264;
        case 0x210268u: goto label_210268;
        case 0x21026cu: goto label_21026c;
        case 0x210270u: goto label_210270;
        case 0x210274u: goto label_210274;
        case 0x210278u: goto label_210278;
        case 0x21027cu: goto label_21027c;
        case 0x210280u: goto label_210280;
        case 0x210284u: goto label_210284;
        case 0x210288u: goto label_210288;
        case 0x21028cu: goto label_21028c;
        case 0x210290u: goto label_210290;
        case 0x210294u: goto label_210294;
        case 0x210298u: goto label_210298;
        case 0x21029cu: goto label_21029c;
        case 0x2102a0u: goto label_2102a0;
        case 0x2102a4u: goto label_2102a4;
        case 0x2102a8u: goto label_2102a8;
        case 0x2102acu: goto label_2102ac;
        case 0x2102b0u: goto label_2102b0;
        case 0x2102b4u: goto label_2102b4;
        case 0x2102b8u: goto label_2102b8;
        case 0x2102bcu: goto label_2102bc;
        case 0x2102c0u: goto label_2102c0;
        case 0x2102c4u: goto label_2102c4;
        case 0x2102c8u: goto label_2102c8;
        case 0x2102ccu: goto label_2102cc;
        case 0x2102d0u: goto label_2102d0;
        case 0x2102d4u: goto label_2102d4;
        case 0x2102d8u: goto label_2102d8;
        case 0x2102dcu: goto label_2102dc;
        case 0x2102e0u: goto label_2102e0;
        case 0x2102e4u: goto label_2102e4;
        case 0x2102e8u: goto label_2102e8;
        case 0x2102ecu: goto label_2102ec;
        default: break;
    }

    ctx->pc = 0x20ffe8u;

label_20ffe8:
    // 0x20ffe8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_20ffec:
    // 0x20ffec: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20fff0:
    // 0x20fff0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x20fff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_20fff4:
    // 0x20fff4: 0x2442ecc0  addiu       $v0, $v0, -0x1340
    ctx->pc = 0x20fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962368));
label_20fff8:
    // 0x20fff8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x20fff8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20fffc:
    // 0x20fffc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x20fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_210000:
    // 0x210000: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x210000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_210004:
    // 0x210004: 0x27c44590  addiu       $a0, $fp, 0x4590
    ctx->pc = 0x210004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 17808));
label_210008:
    // 0x210008: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x210008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_21000c:
    // 0x21000c: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x21000cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_210010:
    // 0x210010: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x210010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_210014:
    // 0x210014: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210018:
    // 0x210018: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x210018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_21001c:
    // 0x21001c: 0x27d43480  addiu       $s4, $fp, 0x3480
    ctx->pc = 0x21001cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 13440));
label_210020:
    // 0x210020: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x210020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_210024:
    // 0x210024: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x210024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_210028:
    // 0x210028: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x210028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_21002c:
    // 0x21002c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x21002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_210030:
    // 0x210030: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_210034:
    // 0x210034: 0xc083884  jal         func_20E210
label_210038:
    if (ctx->pc == 0x210038u) {
        ctx->pc = 0x210038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210034u;
        // 0x210038: 0xafc24120  sw          $v0, 0x4120($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21003Cu;
        goto label_21003c;
    }
    ctx->pc = 0x210034u;
    SET_GPR_U32(ctx, 31, 0x21003Cu);
    ctx->pc = 0x210038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210034u;
    // 0x210038: 0xafc24120  sw          $v0, 0x4120($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E210u, 0x210034u, 0x21003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21003Cu;
label_21003c:
    // 0x21003c: 0x27c443a0  addiu       $a0, $fp, 0x43A0
    ctx->pc = 0x21003cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 17312));
label_210040:
    // 0x210040: 0xc06e410  jal         func_1B9040
label_210044:
    if (ctx->pc == 0x210044u) {
        ctx->pc = 0x210044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210040u;
        // 0x210044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210048u;
        goto label_210048;
    }
    ctx->pc = 0x210040u;
    SET_GPR_U32(ctx, 31, 0x210048u);
    ctx->pc = 0x210044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210040u;
    // 0x210044: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x210040u, 0x210048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210048u;
label_210048:
    // 0x210048: 0x261094a0  addiu       $s0, $s0, -0x6B60
    ctx->pc = 0x210048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294939808));
label_21004c:
    // 0x21004c: 0x27c44230  addiu       $a0, $fp, 0x4230
    ctx->pc = 0x21004cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16944));
label_210050:
    // 0x210050: 0xafd04398  sw          $s0, 0x4398($fp)
    ctx->pc = 0x210050u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 17304), GPR_U32(ctx, 16));
label_210054:
    // 0x210054: 0xc06870c  jal         func_1A1C30
label_210058:
    if (ctx->pc == 0x210058u) {
        ctx->pc = 0x210058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210054u;
        // 0x210058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21005Cu;
        goto label_21005c;
    }
    ctx->pc = 0x210054u;
    SET_GPR_U32(ctx, 31, 0x21005Cu);
    ctx->pc = 0x210058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210054u;
    // 0x210058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210054u, 0x21005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21005Cu;
label_21005c:
    // 0x21005c: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x21005cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_210060:
    // 0x210060: 0x27c44130  addiu       $a0, $fp, 0x4130
    ctx->pc = 0x210060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16688));
label_210064:
    // 0x210064: 0xc06870c  jal         func_1A1C30
label_210068:
    if (ctx->pc == 0x210068u) {
        ctx->pc = 0x210068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210064u;
        // 0x210068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21006Cu;
        goto label_21006c;
    }
    ctx->pc = 0x210064u;
    SET_GPR_U32(ctx, 31, 0x21006Cu);
    ctx->pc = 0x210068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210064u;
    // 0x210068: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210064u, 0x21006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21006Cu;
label_21006c:
    // 0x21006c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21006cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_210070:
    // 0x210070: 0x27c43fe0  addiu       $a0, $fp, 0x3FE0
    ctx->pc = 0x210070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16352));
label_210074:
    // 0x210074: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x210074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
label_210078:
    // 0x210078: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21007c:
    // 0x21007c: 0xc06870c  jal         func_1A1C30
label_210080:
    if (ctx->pc == 0x210080u) {
        ctx->pc = 0x210080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21007Cu;
        // 0x210080: 0xafc24120  sw          $v0, 0x4120($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210084u;
        goto label_210084;
    }
    ctx->pc = 0x21007Cu;
    SET_GPR_U32(ctx, 31, 0x210084u);
    ctx->pc = 0x210080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21007Cu;
    // 0x210080: 0xafc24120  sw          $v0, 0x4120($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x21007Cu, 0x210084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210084u;
label_210084:
    // 0x210084: 0x27c43ee0  addiu       $a0, $fp, 0x3EE0
    ctx->pc = 0x210084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16096));
label_210088:
    // 0x210088: 0xc06870c  jal         func_1A1C30
label_21008c:
    if (ctx->pc == 0x21008Cu) {
        ctx->pc = 0x21008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210088u;
        // 0x21008c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210090u;
        goto label_210090;
    }
    ctx->pc = 0x210088u;
    SET_GPR_U32(ctx, 31, 0x210090u);
    ctx->pc = 0x21008Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210088u;
    // 0x21008c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210088u, 0x210090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210090u;
label_210090:
    // 0x210090: 0x27c43de0  addiu       $a0, $fp, 0x3DE0
    ctx->pc = 0x210090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 15840));
label_210094:
    // 0x210094: 0xc06870c  jal         func_1A1C30
label_210098:
    if (ctx->pc == 0x210098u) {
        ctx->pc = 0x210098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210094u;
        // 0x210098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21009Cu;
        goto label_21009c;
    }
    ctx->pc = 0x210094u;
    SET_GPR_U32(ctx, 31, 0x21009Cu);
    ctx->pc = 0x210098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210094u;
    // 0x210098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210094u, 0x21009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21009Cu;
label_21009c:
    // 0x21009c: 0x27c43ce0  addiu       $a0, $fp, 0x3CE0
    ctx->pc = 0x21009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 15584));
label_2100a0:
    // 0x2100a0: 0xc06870c  jal         func_1A1C30
label_2100a4:
    if (ctx->pc == 0x2100A4u) {
        ctx->pc = 0x2100A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100A0u;
        // 0x2100a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100A8u;
        goto label_2100a8;
    }
    ctx->pc = 0x2100A0u;
    SET_GPR_U32(ctx, 31, 0x2100A8u);
    ctx->pc = 0x2100A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100A0u;
    // 0x2100a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x2100A0u, 0x2100A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100A8u;
label_2100a8:
    // 0x2100a8: 0x27c43ac0  addiu       $a0, $fp, 0x3AC0
    ctx->pc = 0x2100a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 15040));
label_2100ac:
    // 0x2100ac: 0xc06e410  jal         func_1B9040
label_2100b0:
    if (ctx->pc == 0x2100B0u) {
        ctx->pc = 0x2100B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100ACu;
        // 0x2100b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100B4u;
        goto label_2100b4;
    }
    ctx->pc = 0x2100ACu;
    SET_GPR_U32(ctx, 31, 0x2100B4u);
    ctx->pc = 0x2100B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100ACu;
    // 0x2100b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x2100ACu, 0x2100B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100B4u;
label_2100b4:
    // 0x2100b4: 0x27c23780  addiu       $v0, $fp, 0x3780
    ctx->pc = 0x2100b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 14208));
label_2100b8:
    // 0x2100b8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2100bc:
    if (ctx->pc == 0x2100BCu) {
        ctx->pc = 0x2100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100B8u;
        // 0x2100bc: 0x27d13a80  addiu       $s1, $fp, 0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 14976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100C0u;
        goto label_2100c0;
    }
    ctx->pc = 0x2100B8u;
    {
        const bool branch_taken_0x2100b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100B8u;
        // 0x2100bc: 0x27d13a80  addiu       $s1, $fp, 0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 14976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100b8) {
            ctx->pc = 0x2100F0u;
            goto label_2100f0;
        }
    }
    ctx->pc = 0x2100C0u;
label_2100c0:
    // 0x2100c0: 0x1051000b  beq         $v0, $s1, . + 4 + (0xB << 2)
label_2100c4:
    if (ctx->pc == 0x2100C4u) {
        ctx->pc = 0x2100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C0u;
        // 0x2100c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100C8u;
        goto label_2100c8;
    }
    ctx->pc = 0x2100C0u;
    {
        const bool branch_taken_0x2100c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2100C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C0u;
        // 0x2100c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100c0) {
            ctx->pc = 0x2100F0u;
            goto label_2100f0;
        }
    }
    ctx->pc = 0x2100C8u;
label_2100c8:
    // 0x2100c8: 0x2631ff00  addiu       $s1, $s1, -0x100
    ctx->pc = 0x2100c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
label_2100cc:
    // 0x2100cc: 0x0  nop
    ctx->pc = 0x2100ccu;
    // NOP
label_2100d0:
    // 0x2100d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2100d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2100d4:
    // 0x2100d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2100d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2100d8:
    // 0x2100d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2100d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2100dc:
    // 0x2100dc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x2100dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2100e0:
    // 0x2100e0: 0x60f809  jalr        $v1
label_2100e4:
    if (ctx->pc == 0x2100E4u) {
        ctx->pc = 0x2100E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E0u;
        // 0x2100e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100E8u;
        goto label_2100e8;
    }
    ctx->pc = 0x2100E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2100E8u);
        ctx->pc = 0x2100E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E0u;
        // 0x2100e4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2100E0u, 0x2100E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2100E8u;
label_2100e8:
    // 0x2100e8: 0x1671fff9  bne         $s3, $s1, . + 4 + (-0x7 << 2)
label_2100ec:
    if (ctx->pc == 0x2100ECu) {
        ctx->pc = 0x2100ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E8u;
        // 0x2100ec: 0x2631ff00  addiu       $s1, $s1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100F0u;
        goto label_2100f0;
    }
    ctx->pc = 0x2100E8u;
    {
        const bool branch_taken_0x2100e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x2100ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100E8u;
        // 0x2100ec: 0x2631ff00  addiu       $s1, $s1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100e8) {
            ctx->pc = 0x2100D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2100d0;
        }
    }
    ctx->pc = 0x2100F0u;
label_2100f0:
    // 0x2100f0: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x2100f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_2100f4:
    // 0x2100f4: 0xc06870c  jal         func_1A1C30
label_2100f8:
    if (ctx->pc == 0x2100F8u) {
        ctx->pc = 0x2100F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F4u;
        // 0x2100f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2100FCu;
        goto label_2100fc;
    }
    ctx->pc = 0x2100F4u;
    SET_GPR_U32(ctx, 31, 0x2100FCu);
    ctx->pc = 0x2100F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2100F4u;
    // 0x2100f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x2100F4u, 0x2100FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2100FCu;
label_2100fc:
    // 0x2100fc: 0x26109fd0  addiu       $s0, $s0, -0x6030
    ctx->pc = 0x2100fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942672));
label_210100:
    // 0x210100: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_210104:
    // 0x210104: 0xc06870c  jal         func_1A1C30
label_210108:
    if (ctx->pc == 0x210108u) {
        ctx->pc = 0x210108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210104u;
        // 0x210108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21010Cu;
        goto label_21010c;
    }
    ctx->pc = 0x210104u;
    SET_GPR_U32(ctx, 31, 0x21010Cu);
    ctx->pc = 0x210108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210104u;
    // 0x210108: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210104u, 0x21010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21010Cu;
label_21010c:
    // 0x21010c: 0x27d11ac0  addiu       $s1, $fp, 0x1AC0
    ctx->pc = 0x21010cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 6848));
label_210110:
    // 0x210110: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x210110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_210114:
    // 0x210114: 0x27c41ef0  addiu       $a0, $fp, 0x1EF0
    ctx->pc = 0x210114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
label_210118:
    // 0x210118: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_21011c:
    // 0x21011c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x21011cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210120:
    // 0x210120: 0xae820078  sw          $v0, 0x78($s4)
    ctx->pc = 0x210120u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 2));
label_210124:
    // 0x210124: 0x27d31690  addiu       $s3, $fp, 0x1690
    ctx->pc = 0x210124u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 5776));
label_210128:
    // 0x210128: 0xae8200e8  sw          $v0, 0xE8($s4)
    ctx->pc = 0x210128u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 2));
label_21012c:
    // 0x21012c: 0x27d50e30  addiu       $s5, $fp, 0xE30
    ctx->pc = 0x21012cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3632));
label_210130:
    // 0x210130: 0x27d41260  addiu       $s4, $fp, 0x1260
    ctx->pc = 0x210130u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4704));
label_210134:
    // 0x210134: 0xc069860  jal         func_1A6180
label_210138:
    if (ctx->pc == 0x210138u) {
        ctx->pc = 0x210138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210134u;
        // 0x210138: 0x27d70460  addiu       $s7, $fp, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 1120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21013Cu;
        goto label_21013c;
    }
    ctx->pc = 0x210134u;
    SET_GPR_U32(ctx, 31, 0x21013Cu);
    ctx->pc = 0x210138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210134u;
    // 0x210138: 0x27d70460  addiu       $s7, $fp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6180u, 0x210134u, 0x21013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21013Cu;
label_21013c:
    // 0x21013c: 0x27d60400  addiu       $s6, $fp, 0x400
    ctx->pc = 0x21013cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
label_210140:
    // 0x210140: 0xafd01ac0  sw          $s0, 0x1AC0($fp)
    ctx->pc = 0x210140u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6848), GPR_U32(ctx, 16));
label_210144:
    // 0x210144: 0x27c41dc0  addiu       $a0, $fp, 0x1DC0
    ctx->pc = 0x210144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7616));
label_210148:
    // 0x210148: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21014c:
    // 0x21014c: 0xc06870c  jal         func_1A1C30
label_210150:
    if (ctx->pc == 0x210150u) {
        ctx->pc = 0x210150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21014Cu;
        // 0x210150: 0x27d20070  addiu       $s2, $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210154u;
        goto label_210154;
    }
    ctx->pc = 0x21014Cu;
    SET_GPR_U32(ctx, 31, 0x210154u);
    ctx->pc = 0x210150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21014Cu;
    // 0x210150: 0x27d20070  addiu       $s2, $fp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x21014Cu, 0x210154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210154u;
label_210154:
    // 0x210154: 0x27c41bd0  addiu       $a0, $fp, 0x1BD0
    ctx->pc = 0x210154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7120));
label_210158:
    // 0x210158: 0xc06e410  jal         func_1B9040
label_21015c:
    if (ctx->pc == 0x21015Cu) {
        ctx->pc = 0x21015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210158u;
        // 0x21015c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210160u;
        goto label_210160;
    }
    ctx->pc = 0x210158u;
    SET_GPR_U32(ctx, 31, 0x210160u);
    ctx->pc = 0x21015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210158u;
    // 0x21015c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x210158u, 0x210160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210160u;
label_210160:
    // 0x210160: 0x27c41b00  addiu       $a0, $fp, 0x1B00
    ctx->pc = 0x210160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6912));
label_210164:
    // 0x210164: 0xc0733f0  jal         func_1CCFC0
label_210168:
    if (ctx->pc == 0x210168u) {
        ctx->pc = 0x210168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210164u;
        // 0x210168: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21016Cu;
        goto label_21016c;
    }
    ctx->pc = 0x210164u;
    SET_GPR_U32(ctx, 31, 0x21016Cu);
    ctx->pc = 0x210168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210164u;
    // 0x210168: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x210164u, 0x21016Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21016Cu;
label_21016c:
    // 0x21016c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21016cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210170:
    // 0x210170: 0xc06a39e  jal         func_1A8E78
label_210174:
    if (ctx->pc == 0x210174u) {
        ctx->pc = 0x210174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210170u;
        // 0x210174: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210178u;
        goto label_210178;
    }
    ctx->pc = 0x210170u;
    SET_GPR_U32(ctx, 31, 0x210178u);
    ctx->pc = 0x210174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210170u;
    // 0x210174: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x210170u, 0x210178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210178u;
label_210178:
    // 0x210178: 0xafd01690  sw          $s0, 0x1690($fp)
    ctx->pc = 0x210178u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5776), GPR_U32(ctx, 16));
label_21017c:
    // 0x21017c: 0x27c41990  addiu       $a0, $fp, 0x1990
    ctx->pc = 0x21017cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6544));
label_210180:
    // 0x210180: 0xc06870c  jal         func_1A1C30
label_210184:
    if (ctx->pc == 0x210184u) {
        ctx->pc = 0x210184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210180u;
        // 0x210184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210188u;
        goto label_210188;
    }
    ctx->pc = 0x210180u;
    SET_GPR_U32(ctx, 31, 0x210188u);
    ctx->pc = 0x210184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210180u;
    // 0x210184: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210180u, 0x210188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210188u;
label_210188:
    // 0x210188: 0x27c417a0  addiu       $a0, $fp, 0x17A0
    ctx->pc = 0x210188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6048));
label_21018c:
    // 0x21018c: 0xc06e410  jal         func_1B9040
label_210190:
    if (ctx->pc == 0x210190u) {
        ctx->pc = 0x210190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21018Cu;
        // 0x210190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210194u;
        goto label_210194;
    }
    ctx->pc = 0x21018Cu;
    SET_GPR_U32(ctx, 31, 0x210194u);
    ctx->pc = 0x210190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21018Cu;
    // 0x210190: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x21018Cu, 0x210194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210194u;
label_210194:
    // 0x210194: 0x27c416d0  addiu       $a0, $fp, 0x16D0
    ctx->pc = 0x210194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5840));
label_210198:
    // 0x210198: 0xc0733f0  jal         func_1CCFC0
label_21019c:
    if (ctx->pc == 0x21019Cu) {
        ctx->pc = 0x21019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210198u;
        // 0x21019c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101A0u;
        goto label_2101a0;
    }
    ctx->pc = 0x210198u;
    SET_GPR_U32(ctx, 31, 0x2101A0u);
    ctx->pc = 0x21019Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210198u;
    // 0x21019c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x210198u, 0x2101A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101A0u;
label_2101a0:
    // 0x2101a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2101a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2101a4:
    // 0x2101a4: 0xc06a39e  jal         func_1A8E78
label_2101a8:
    if (ctx->pc == 0x2101A8u) {
        ctx->pc = 0x2101A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101A4u;
        // 0x2101a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101ACu;
        goto label_2101ac;
    }
    ctx->pc = 0x2101A4u;
    SET_GPR_U32(ctx, 31, 0x2101ACu);
    ctx->pc = 0x2101A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101A4u;
    // 0x2101a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2101A4u, 0x2101ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101ACu;
label_2101ac:
    // 0x2101ac: 0xafd01260  sw          $s0, 0x1260($fp)
    ctx->pc = 0x2101acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4704), GPR_U32(ctx, 16));
label_2101b0:
    // 0x2101b0: 0x27c41560  addiu       $a0, $fp, 0x1560
    ctx->pc = 0x2101b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5472));
label_2101b4:
    // 0x2101b4: 0xc06870c  jal         func_1A1C30
label_2101b8:
    if (ctx->pc == 0x2101B8u) {
        ctx->pc = 0x2101B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B4u;
        // 0x2101b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101BCu;
        goto label_2101bc;
    }
    ctx->pc = 0x2101B4u;
    SET_GPR_U32(ctx, 31, 0x2101BCu);
    ctx->pc = 0x2101B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101B4u;
    // 0x2101b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x2101B4u, 0x2101BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101BCu;
label_2101bc:
    // 0x2101bc: 0x27c41370  addiu       $a0, $fp, 0x1370
    ctx->pc = 0x2101bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4976));
label_2101c0:
    // 0x2101c0: 0xc06e410  jal         func_1B9040
label_2101c4:
    if (ctx->pc == 0x2101C4u) {
        ctx->pc = 0x2101C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C0u;
        // 0x2101c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101C8u;
        goto label_2101c8;
    }
    ctx->pc = 0x2101C0u;
    SET_GPR_U32(ctx, 31, 0x2101C8u);
    ctx->pc = 0x2101C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101C0u;
    // 0x2101c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x2101C0u, 0x2101C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101C8u;
label_2101c8:
    // 0x2101c8: 0x27c412a0  addiu       $a0, $fp, 0x12A0
    ctx->pc = 0x2101c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4768));
label_2101cc:
    // 0x2101cc: 0xc0733f0  jal         func_1CCFC0
label_2101d0:
    if (ctx->pc == 0x2101D0u) {
        ctx->pc = 0x2101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101CCu;
        // 0x2101d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101D4u;
        goto label_2101d4;
    }
    ctx->pc = 0x2101CCu;
    SET_GPR_U32(ctx, 31, 0x2101D4u);
    ctx->pc = 0x2101D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101CCu;
    // 0x2101d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x2101CCu, 0x2101D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101D4u;
label_2101d4:
    // 0x2101d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2101d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2101d8:
    // 0x2101d8: 0xc06a39e  jal         func_1A8E78
label_2101dc:
    if (ctx->pc == 0x2101DCu) {
        ctx->pc = 0x2101DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101D8u;
        // 0x2101dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101E0u;
        goto label_2101e0;
    }
    ctx->pc = 0x2101D8u;
    SET_GPR_U32(ctx, 31, 0x2101E0u);
    ctx->pc = 0x2101DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101D8u;
    // 0x2101dc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x2101D8u, 0x2101E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101E0u;
label_2101e0:
    // 0x2101e0: 0xafd00e30  sw          $s0, 0xE30($fp)
    ctx->pc = 0x2101e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3632), GPR_U32(ctx, 16));
label_2101e4:
    // 0x2101e4: 0x27c41130  addiu       $a0, $fp, 0x1130
    ctx->pc = 0x2101e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4400));
label_2101e8:
    // 0x2101e8: 0xc06870c  jal         func_1A1C30
label_2101ec:
    if (ctx->pc == 0x2101ECu) {
        ctx->pc = 0x2101ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101E8u;
        // 0x2101ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101F0u;
        goto label_2101f0;
    }
    ctx->pc = 0x2101E8u;
    SET_GPR_U32(ctx, 31, 0x2101F0u);
    ctx->pc = 0x2101ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101E8u;
    // 0x2101ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x2101E8u, 0x2101F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101F0u;
label_2101f0:
    // 0x2101f0: 0x27c40f40  addiu       $a0, $fp, 0xF40
    ctx->pc = 0x2101f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3904));
label_2101f4:
    // 0x2101f4: 0xc06e410  jal         func_1B9040
label_2101f8:
    if (ctx->pc == 0x2101F8u) {
        ctx->pc = 0x2101F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F4u;
        // 0x2101f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2101FCu;
        goto label_2101fc;
    }
    ctx->pc = 0x2101F4u;
    SET_GPR_U32(ctx, 31, 0x2101FCu);
    ctx->pc = 0x2101F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2101F4u;
    // 0x2101f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x2101F4u, 0x2101FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101FCu;
label_2101fc:
    // 0x2101fc: 0x27c40e70  addiu       $a0, $fp, 0xE70
    ctx->pc = 0x2101fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3696));
label_210200:
    // 0x210200: 0xc0733f0  jal         func_1CCFC0
label_210204:
    if (ctx->pc == 0x210204u) {
        ctx->pc = 0x210204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210200u;
        // 0x210204: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210208u;
        goto label_210208;
    }
    ctx->pc = 0x210200u;
    SET_GPR_U32(ctx, 31, 0x210208u);
    ctx->pc = 0x210204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210200u;
    // 0x210204: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x210200u, 0x210208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210208u;
label_210208:
    // 0x210208: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x210208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_21020c:
    // 0x21020c: 0xc06a39e  jal         func_1A8E78
label_210210:
    if (ctx->pc == 0x210210u) {
        ctx->pc = 0x210210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21020Cu;
        // 0x210210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210214u;
        goto label_210214;
    }
    ctx->pc = 0x21020Cu;
    SET_GPR_U32(ctx, 31, 0x210214u);
    ctx->pc = 0x210210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21020Cu;
    // 0x210210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x21020Cu, 0x210214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210214u;
label_210214:
    // 0x210214: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x210214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_210218:
    // 0x210218: 0x27c40880  addiu       $a0, $fp, 0x880
    ctx->pc = 0x210218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2176));
label_21021c:
    // 0x21021c: 0x2462a4b8  addiu       $v0, $v1, -0x5B48
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943928));
label_210220:
    // 0x210220: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210224:
    // 0x210224: 0xc079bbc  jal         func_1E6EF0
label_210228:
    if (ctx->pc == 0x210228u) {
        ctx->pc = 0x210228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210224u;
        // 0x210228: 0xafc20400  sw          $v0, 0x400($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21022Cu;
        goto label_21022c;
    }
    ctx->pc = 0x210224u;
    SET_GPR_U32(ctx, 31, 0x21022Cu);
    ctx->pc = 0x210228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210224u;
    // 0x210228: 0xafc20400  sw          $v0, 0x400($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x210224u, 0x21022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21022Cu;
label_21022c:
    // 0x21022c: 0xafd00460  sw          $s0, 0x460($fp)
    ctx->pc = 0x21022cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1120), GPR_U32(ctx, 16));
label_210230:
    // 0x210230: 0x27c40760  addiu       $a0, $fp, 0x760
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1888));
label_210234:
    // 0x210234: 0xc06870c  jal         func_1A1C30
label_210238:
    if (ctx->pc == 0x210238u) {
        ctx->pc = 0x210238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210234u;
        // 0x210238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21023Cu;
        goto label_21023c;
    }
    ctx->pc = 0x210234u;
    SET_GPR_U32(ctx, 31, 0x21023Cu);
    ctx->pc = 0x210238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210234u;
    // 0x210238: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x210234u, 0x21023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21023Cu;
label_21023c:
    // 0x21023c: 0x27c40570  addiu       $a0, $fp, 0x570
    ctx->pc = 0x21023cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1392));
label_210240:
    // 0x210240: 0xc06e410  jal         func_1B9040
label_210244:
    if (ctx->pc == 0x210244u) {
        ctx->pc = 0x210244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210240u;
        // 0x210244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210248u;
        goto label_210248;
    }
    ctx->pc = 0x210240u;
    SET_GPR_U32(ctx, 31, 0x210248u);
    ctx->pc = 0x210244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210240u;
    // 0x210244: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x210240u, 0x210248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210248u;
label_210248:
    // 0x210248: 0x27c404a0  addiu       $a0, $fp, 0x4A0
    ctx->pc = 0x210248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1184));
label_21024c:
    // 0x21024c: 0xc0733f0  jal         func_1CCFC0
label_210250:
    if (ctx->pc == 0x210250u) {
        ctx->pc = 0x210250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21024Cu;
        // 0x210250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210254u;
        goto label_210254;
    }
    ctx->pc = 0x21024Cu;
    SET_GPR_U32(ctx, 31, 0x210254u);
    ctx->pc = 0x210250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21024Cu;
    // 0x210250: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x21024Cu, 0x210254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210254u;
label_210254:
    // 0x210254: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x210254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_210258:
    // 0x210258: 0xc06a39e  jal         func_1A8E78
label_21025c:
    if (ctx->pc == 0x21025Cu) {
        ctx->pc = 0x21025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210258u;
        // 0x21025c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210260u;
        goto label_210260;
    }
    ctx->pc = 0x210258u;
    SET_GPR_U32(ctx, 31, 0x210260u);
    ctx->pc = 0x21025Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210258u;
    // 0x21025c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x210258u, 0x210260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210260u;
label_210260:
    // 0x210260: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x210260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_210264:
    // 0x210264: 0xc06a39e  jal         func_1A8E78
label_210268:
    if (ctx->pc == 0x210268u) {
        ctx->pc = 0x210268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210264u;
        // 0x210268: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21026Cu;
        goto label_21026c;
    }
    ctx->pc = 0x210264u;
    SET_GPR_U32(ctx, 31, 0x21026Cu);
    ctx->pc = 0x210268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210264u;
    // 0x210268: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x210264u, 0x21026Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21026Cu;
label_21026c:
    // 0x21026c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21026cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_210270:
    // 0x210270: 0x27c402a0  addiu       $a0, $fp, 0x2A0
    ctx->pc = 0x210270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 672));
label_210274:
    // 0x210274: 0x2462a930  addiu       $v0, $v1, -0x56D0
    ctx->pc = 0x210274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945072));
label_210278:
    // 0x210278: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_21027c:
    // 0x21027c: 0xc0733f0  jal         func_1CCFC0
label_210280:
    if (ctx->pc == 0x210280u) {
        ctx->pc = 0x210280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21027Cu;
        // 0x210280: 0xafc20070  sw          $v0, 0x70($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210284u;
        goto label_210284;
    }
    ctx->pc = 0x21027Cu;
    SET_GPR_U32(ctx, 31, 0x210284u);
    ctx->pc = 0x210280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21027Cu;
    // 0x210280: 0xafc20070  sw          $v0, 0x70($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x21027Cu, 0x210284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210284u;
label_210284:
    // 0x210284: 0x27c400b0  addiu       $a0, $fp, 0xB0
    ctx->pc = 0x210284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
label_210288:
    // 0x210288: 0xc06e410  jal         func_1B9040
label_21028c:
    if (ctx->pc == 0x21028Cu) {
        ctx->pc = 0x21028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210288u;
        // 0x21028c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210290u;
        goto label_210290;
    }
    ctx->pc = 0x210288u;
    SET_GPR_U32(ctx, 31, 0x210290u);
    ctx->pc = 0x21028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210288u;
    // 0x21028c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x210288u, 0x210290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210290u;
label_210290:
    // 0x210290: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_210294:
    // 0x210294: 0xc06a39e  jal         func_1A8E78
label_210298:
    if (ctx->pc == 0x210298u) {
        ctx->pc = 0x210298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210294u;
        // 0x210298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21029Cu;
        goto label_21029c;
    }
    ctx->pc = 0x210294u;
    SET_GPR_U32(ctx, 31, 0x21029Cu);
    ctx->pc = 0x210298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210294u;
    // 0x210298: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x210294u, 0x21029Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21029Cu;
label_21029c:
    // 0x21029c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2102a0:
    // 0x2102a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2102a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2102a4:
    // 0x2102a4: 0x244294a0  addiu       $v0, $v0, -0x6B60
    ctx->pc = 0x2102a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939808));
label_2102a8:
    // 0x2102a8: 0xafc20068  sw          $v0, 0x68($fp)
    ctx->pc = 0x2102a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 2));
label_2102ac:
    // 0x2102ac: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2102acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2102b0:
    // 0x2102b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2102b4:
    if (ctx->pc == 0x2102B4u) {
        ctx->pc = 0x2102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B0u;
        // 0x2102b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102B8u;
        goto label_2102b8;
    }
    ctx->pc = 0x2102B0u;
    {
        const bool branch_taken_0x2102b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B0u;
        // 0x2102b4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102b0) {
            ctx->pc = 0x2102C4u;
            goto label_2102c4;
        }
    }
    ctx->pc = 0x2102B8u;
label_2102b8:
    // 0x2102b8: 0xc10b208  jal         func_42C820
label_2102bc:
    if (ctx->pc == 0x2102BCu) {
        ctx->pc = 0x2102BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B8u;
        // 0x2102bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102C0u;
        goto label_2102c0;
    }
    ctx->pc = 0x2102B8u;
    SET_GPR_U32(ctx, 31, 0x2102C0u);
    ctx->pc = 0x2102BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2102B8u;
    // 0x2102bc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x2102B8u, 0x2102C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2102C0u;
label_2102c0:
    // 0x2102c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2102c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2102c4:
    // 0x2102c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2102c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2102c8:
    // 0x2102c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2102c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2102cc:
    // 0x2102cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2102ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2102d0:
    // 0x2102d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2102d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2102d4:
    // 0x2102d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2102d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2102d8:
    // 0x2102d8: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2102d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2102dc:
    // 0x2102dc: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2102dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2102e0:
    // 0x2102e0: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2102e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2102e4:
    // 0x2102e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2102e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2102e8:
    // 0x2102e8: 0x3e00008  jr          $ra
label_2102ec:
    if (ctx->pc == 0x2102ECu) {
        ctx->pc = 0x2102ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102E8u;
        // 0x2102ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2102F0u;
        goto label_fallthrough_0x2102e8;
    }
    ctx->pc = 0x2102E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2102ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102E8u;
        // 0x2102ec: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2102E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2102e8:
    ctx->pc = 0x2102F0u;
}
