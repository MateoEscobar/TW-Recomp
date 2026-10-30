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

// Function: sub_0031FDC0
// Address: 0x31fdc0 - 0x3200c8
void sub_0031FDC0_0x31fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031FDC0_0x31fdc0");
#endif

    switch (ctx->pc) {
        case 0x31fdc0u: goto label_31fdc0;
        case 0x31fdc4u: goto label_31fdc4;
        case 0x31fdc8u: goto label_31fdc8;
        case 0x31fdccu: goto label_31fdcc;
        case 0x31fdd0u: goto label_31fdd0;
        case 0x31fdd4u: goto label_31fdd4;
        case 0x31fdd8u: goto label_31fdd8;
        case 0x31fddcu: goto label_31fddc;
        case 0x31fde0u: goto label_31fde0;
        case 0x31fde4u: goto label_31fde4;
        case 0x31fde8u: goto label_31fde8;
        case 0x31fdecu: goto label_31fdec;
        case 0x31fdf0u: goto label_31fdf0;
        case 0x31fdf4u: goto label_31fdf4;
        case 0x31fdf8u: goto label_31fdf8;
        case 0x31fdfcu: goto label_31fdfc;
        case 0x31fe00u: goto label_31fe00;
        case 0x31fe04u: goto label_31fe04;
        case 0x31fe08u: goto label_31fe08;
        case 0x31fe0cu: goto label_31fe0c;
        case 0x31fe10u: goto label_31fe10;
        case 0x31fe14u: goto label_31fe14;
        case 0x31fe18u: goto label_31fe18;
        case 0x31fe1cu: goto label_31fe1c;
        case 0x31fe20u: goto label_31fe20;
        case 0x31fe24u: goto label_31fe24;
        case 0x31fe28u: goto label_31fe28;
        case 0x31fe2cu: goto label_31fe2c;
        case 0x31fe30u: goto label_31fe30;
        case 0x31fe34u: goto label_31fe34;
        case 0x31fe38u: goto label_31fe38;
        case 0x31fe3cu: goto label_31fe3c;
        case 0x31fe40u: goto label_31fe40;
        case 0x31fe44u: goto label_31fe44;
        case 0x31fe48u: goto label_31fe48;
        case 0x31fe4cu: goto label_31fe4c;
        case 0x31fe50u: goto label_31fe50;
        case 0x31fe54u: goto label_31fe54;
        case 0x31fe58u: goto label_31fe58;
        case 0x31fe5cu: goto label_31fe5c;
        case 0x31fe60u: goto label_31fe60;
        case 0x31fe64u: goto label_31fe64;
        case 0x31fe68u: goto label_31fe68;
        case 0x31fe6cu: goto label_31fe6c;
        case 0x31fe70u: goto label_31fe70;
        case 0x31fe74u: goto label_31fe74;
        case 0x31fe78u: goto label_31fe78;
        case 0x31fe7cu: goto label_31fe7c;
        case 0x31fe80u: goto label_31fe80;
        case 0x31fe84u: goto label_31fe84;
        case 0x31fe88u: goto label_31fe88;
        case 0x31fe8cu: goto label_31fe8c;
        case 0x31fe90u: goto label_31fe90;
        case 0x31fe94u: goto label_31fe94;
        case 0x31fe98u: goto label_31fe98;
        case 0x31fe9cu: goto label_31fe9c;
        case 0x31fea0u: goto label_31fea0;
        case 0x31fea4u: goto label_31fea4;
        case 0x31fea8u: goto label_31fea8;
        case 0x31feacu: goto label_31feac;
        case 0x31feb0u: goto label_31feb0;
        case 0x31feb4u: goto label_31feb4;
        case 0x31feb8u: goto label_31feb8;
        case 0x31febcu: goto label_31febc;
        case 0x31fec0u: goto label_31fec0;
        case 0x31fec4u: goto label_31fec4;
        case 0x31fec8u: goto label_31fec8;
        case 0x31feccu: goto label_31fecc;
        case 0x31fed0u: goto label_31fed0;
        case 0x31fed4u: goto label_31fed4;
        case 0x31fed8u: goto label_31fed8;
        case 0x31fedcu: goto label_31fedc;
        case 0x31fee0u: goto label_31fee0;
        case 0x31fee4u: goto label_31fee4;
        case 0x31fee8u: goto label_31fee8;
        case 0x31feecu: goto label_31feec;
        case 0x31fef0u: goto label_31fef0;
        case 0x31fef4u: goto label_31fef4;
        case 0x31fef8u: goto label_31fef8;
        case 0x31fefcu: goto label_31fefc;
        case 0x31ff00u: goto label_31ff00;
        case 0x31ff04u: goto label_31ff04;
        case 0x31ff08u: goto label_31ff08;
        case 0x31ff0cu: goto label_31ff0c;
        case 0x31ff10u: goto label_31ff10;
        case 0x31ff14u: goto label_31ff14;
        case 0x31ff18u: goto label_31ff18;
        case 0x31ff1cu: goto label_31ff1c;
        case 0x31ff20u: goto label_31ff20;
        case 0x31ff24u: goto label_31ff24;
        case 0x31ff28u: goto label_31ff28;
        case 0x31ff2cu: goto label_31ff2c;
        case 0x31ff30u: goto label_31ff30;
        case 0x31ff34u: goto label_31ff34;
        case 0x31ff38u: goto label_31ff38;
        case 0x31ff3cu: goto label_31ff3c;
        case 0x31ff40u: goto label_31ff40;
        case 0x31ff44u: goto label_31ff44;
        case 0x31ff48u: goto label_31ff48;
        case 0x31ff4cu: goto label_31ff4c;
        case 0x31ff50u: goto label_31ff50;
        case 0x31ff54u: goto label_31ff54;
        case 0x31ff58u: goto label_31ff58;
        case 0x31ff5cu: goto label_31ff5c;
        case 0x31ff60u: goto label_31ff60;
        case 0x31ff64u: goto label_31ff64;
        case 0x31ff68u: goto label_31ff68;
        case 0x31ff6cu: goto label_31ff6c;
        case 0x31ff70u: goto label_31ff70;
        case 0x31ff74u: goto label_31ff74;
        case 0x31ff78u: goto label_31ff78;
        case 0x31ff7cu: goto label_31ff7c;
        case 0x31ff80u: goto label_31ff80;
        case 0x31ff84u: goto label_31ff84;
        case 0x31ff88u: goto label_31ff88;
        case 0x31ff8cu: goto label_31ff8c;
        case 0x31ff90u: goto label_31ff90;
        case 0x31ff94u: goto label_31ff94;
        case 0x31ff98u: goto label_31ff98;
        case 0x31ff9cu: goto label_31ff9c;
        case 0x31ffa0u: goto label_31ffa0;
        case 0x31ffa4u: goto label_31ffa4;
        case 0x31ffa8u: goto label_31ffa8;
        case 0x31ffacu: goto label_31ffac;
        case 0x31ffb0u: goto label_31ffb0;
        case 0x31ffb4u: goto label_31ffb4;
        case 0x31ffb8u: goto label_31ffb8;
        case 0x31ffbcu: goto label_31ffbc;
        case 0x31ffc0u: goto label_31ffc0;
        case 0x31ffc4u: goto label_31ffc4;
        case 0x31ffc8u: goto label_31ffc8;
        case 0x31ffccu: goto label_31ffcc;
        case 0x31ffd0u: goto label_31ffd0;
        case 0x31ffd4u: goto label_31ffd4;
        case 0x31ffd8u: goto label_31ffd8;
        case 0x31ffdcu: goto label_31ffdc;
        case 0x31ffe0u: goto label_31ffe0;
        case 0x31ffe4u: goto label_31ffe4;
        case 0x31ffe8u: goto label_31ffe8;
        case 0x31ffecu: goto label_31ffec;
        case 0x31fff0u: goto label_31fff0;
        case 0x31fff4u: goto label_31fff4;
        case 0x31fff8u: goto label_31fff8;
        case 0x31fffcu: goto label_31fffc;
        case 0x320000u: goto label_320000;
        case 0x320004u: goto label_320004;
        case 0x320008u: goto label_320008;
        case 0x32000cu: goto label_32000c;
        case 0x320010u: goto label_320010;
        case 0x320014u: goto label_320014;
        case 0x320018u: goto label_320018;
        case 0x32001cu: goto label_32001c;
        case 0x320020u: goto label_320020;
        case 0x320024u: goto label_320024;
        case 0x320028u: goto label_320028;
        case 0x32002cu: goto label_32002c;
        case 0x320030u: goto label_320030;
        case 0x320034u: goto label_320034;
        case 0x320038u: goto label_320038;
        case 0x32003cu: goto label_32003c;
        case 0x320040u: goto label_320040;
        case 0x320044u: goto label_320044;
        case 0x320048u: goto label_320048;
        case 0x32004cu: goto label_32004c;
        case 0x320050u: goto label_320050;
        case 0x320054u: goto label_320054;
        case 0x320058u: goto label_320058;
        case 0x32005cu: goto label_32005c;
        case 0x320060u: goto label_320060;
        case 0x320064u: goto label_320064;
        case 0x320068u: goto label_320068;
        case 0x32006cu: goto label_32006c;
        case 0x320070u: goto label_320070;
        case 0x320074u: goto label_320074;
        case 0x320078u: goto label_320078;
        case 0x32007cu: goto label_32007c;
        case 0x320080u: goto label_320080;
        case 0x320084u: goto label_320084;
        case 0x320088u: goto label_320088;
        case 0x32008cu: goto label_32008c;
        case 0x320090u: goto label_320090;
        case 0x320094u: goto label_320094;
        case 0x320098u: goto label_320098;
        case 0x32009cu: goto label_32009c;
        case 0x3200a0u: goto label_3200a0;
        case 0x3200a4u: goto label_3200a4;
        case 0x3200a8u: goto label_3200a8;
        case 0x3200acu: goto label_3200ac;
        case 0x3200b0u: goto label_3200b0;
        case 0x3200b4u: goto label_3200b4;
        case 0x3200b8u: goto label_3200b8;
        case 0x3200bcu: goto label_3200bc;
        case 0x3200c0u: goto label_3200c0;
        case 0x3200c4u: goto label_3200c4;
        default: break;
    }

    ctx->pc = 0x31fdc0u;

label_31fdc0:
    // 0x31fdc0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x31fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_31fdc4:
    // 0x31fdc4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x31fdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_31fdc8:
    // 0x31fdc8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x31fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_31fdcc:
    // 0x31fdcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31fdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31fdd0:
    // 0x31fdd0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x31fdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_31fdd4:
    // 0x31fdd4: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x31fdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_31fdd8:
    // 0x31fdd8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x31fdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_31fddc:
    // 0x31fddc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x31fddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_31fde0:
    // 0x31fde0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x31fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_31fde4:
    // 0x31fde4: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x31fde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_31fde8:
    // 0x31fde8: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x31fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_31fdec:
    // 0x31fdec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_31fdf0:
    // 0x31fdf0: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x31fdf0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_31fdf4:
    // 0x31fdf4: 0xc05959e  jal         func_165678
label_31fdf8:
    if (ctx->pc == 0x31FDF8u) {
        ctx->pc = 0x31FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FDF4u;
        // 0x31fdf8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FDFCu;
        goto label_31fdfc;
    }
    ctx->pc = 0x31FDF4u;
    SET_GPR_U32(ctx, 31, 0x31FDFCu);
    ctx->pc = 0x31FDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FDF4u;
    // 0x31fdf8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x31FDF4u, 0x31FDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FDFCu;
label_31fdfc:
    // 0x31fdfc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x31fdfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fe00:
    // 0x31fe00: 0x128000a4  beqz        $s4, . + 4 + (0xA4 << 2)
label_31fe04:
    if (ctx->pc == 0x31FE04u) {
        ctx->pc = 0x31FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE00u;
        // 0x31fe04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE08u;
        goto label_31fe08;
    }
    ctx->pc = 0x31FE00u;
    {
        const bool branch_taken_0x31fe00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE00u;
        // 0x31fe04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe00) {
            ctx->pc = 0x320094u;
            goto label_320094;
        }
    }
    ctx->pc = 0x31FE08u;
label_31fe08:
    // 0x31fe08: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31fe08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31fe0c:
    // 0x31fe0c: 0xc059856  jal         func_166158
label_31fe10:
    if (ctx->pc == 0x31FE10u) {
        ctx->pc = 0x31FE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE0Cu;
        // 0x31fe10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE14u;
        goto label_31fe14;
    }
    ctx->pc = 0x31FE0Cu;
    SET_GPR_U32(ctx, 31, 0x31FE14u);
    ctx->pc = 0x31FE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE0Cu;
    // 0x31fe10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x31FE0Cu, 0x31FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FE14u;
label_31fe14:
    // 0x31fe14: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x31fe14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_31fe18:
    // 0x31fe18: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
label_31fe1c:
    if (ctx->pc == 0x31FE1Cu) {
        ctx->pc = 0x31FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE18u;
        // 0x31fe1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE20u;
        goto label_31fe20;
    }
    ctx->pc = 0x31FE18u;
    {
        const bool branch_taken_0x31fe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE18u;
        // 0x31fe1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe18) {
            ctx->pc = 0x320094u;
            goto label_320094;
        }
    }
    ctx->pc = 0x31FE20u;
label_31fe20:
    // 0x31fe20: 0x86840092  lh          $a0, 0x92($s4)
    ctx->pc = 0x31fe20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_31fe24:
    // 0x31fe24: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x31fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_31fe28:
    // 0x31fe28: 0x24554b00  addiu       $s5, $v0, 0x4B00
    ctx->pc = 0x31fe28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_31fe2c:
    // 0x31fe2c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_31fe30:
    // 0x31fe30: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31fe30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31fe34:
    // 0x31fe34: 0x2463f250  addiu       $v1, $v1, -0xDB0
    ctx->pc = 0x31fe34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963792));
label_31fe38:
    // 0x31fe38: 0x95b821  addu        $s7, $a0, $s5
    ctx->pc = 0x31fe38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
label_31fe3c:
    // 0x31fe3c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x31fe3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_31fe40:
    // 0x31fe40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x31fe40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_31fe44:
    // 0x31fe44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x31fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_31fe48:
    // 0x31fe48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31fe4c:
    // 0x31fe4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x31fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fe50:
    // 0x31fe50: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x31fe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31fe54:
    // 0x31fe54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x31fe54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fe58:
    // 0x31fe58: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x31fe58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fe5c:
    // 0x31fe5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x31fe5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fe60:
    // 0x31fe60: 0xc0a757c  jal         func_29D5F0
label_31fe64:
    if (ctx->pc == 0x31FE64u) {
        ctx->pc = 0x31FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE60u;
        // 0x31fe64: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE68u;
        goto label_31fe68;
    }
    ctx->pc = 0x31FE60u;
    SET_GPR_U32(ctx, 31, 0x31FE68u);
    ctx->pc = 0x31FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE60u;
    // 0x31fe64: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D5F0u, 0x31FE60u, 0x31FE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FE68u;
label_31fe68:
    // 0x31fe68: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x31fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_31fe6c:
    // 0x31fe6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x31fe6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fe70:
    // 0x31fe70: 0x1260004a  beqz        $s3, . + 4 + (0x4A << 2)
label_31fe74:
    if (ctx->pc == 0x31FE74u) {
        ctx->pc = 0x31FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE70u;
        // 0x31fe74: 0x2471f2f0  addiu       $s1, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE78u;
        goto label_31fe78;
    }
    ctx->pc = 0x31FE70u;
    {
        const bool branch_taken_0x31fe70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE70u;
        // 0x31fe74: 0x2471f2f0  addiu       $s1, $v1, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fe70) {
            ctx->pc = 0x31FF9Cu;
            goto label_31ff9c;
        }
    }
    ctx->pc = 0x31FE78u;
label_31fe78:
    // 0x31fe78: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31fe7c:
    // 0x31fe7c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x31fe7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31fe80:
    // 0x31fe80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31fe80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31fe84:
    // 0x31fe84: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x31fe84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_31fe88:
    // 0x31fe88: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x31fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_31fe8c:
    // 0x31fe8c: 0x40f809  jalr        $v0
label_31fe90:
    if (ctx->pc == 0x31FE90u) {
        ctx->pc = 0x31FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE8Cu;
        // 0x31fe90: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FE94u;
        goto label_31fe94;
    }
    ctx->pc = 0x31FE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FE94u);
        ctx->pc = 0x31FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE8Cu;
        // 0x31fe90: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FE8Cu, 0x31FE94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FE94u;
label_31fe94:
    // 0x31fe94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31fe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31fe98:
    // 0x31fe98: 0xc0594ba  jal         func_1652E8
label_31fe9c:
    if (ctx->pc == 0x31FE9Cu) {
        ctx->pc = 0x31FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FE98u;
        // 0x31fe9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEA0u;
        goto label_31fea0;
    }
    ctx->pc = 0x31FE98u;
    SET_GPR_U32(ctx, 31, 0x31FEA0u);
    ctx->pc = 0x31FE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FE98u;
    // 0x31fe9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1652E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1652E8u, 0x31FE98u, 0x31FEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FEA0u;
label_31fea0:
    // 0x31fea0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_31fea4:
    if (ctx->pc == 0x31FEA4u) {
        ctx->pc = 0x31FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEA0u;
        // 0x31fea4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEA8u;
        goto label_31fea8;
    }
    ctx->pc = 0x31FEA0u;
    {
        const bool branch_taken_0x31fea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fea0) {
            ctx->pc = 0x31FEA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FEA0u;
            // 0x31fea4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FEB4u;
            goto label_31feb4;
        }
    }
    ctx->pc = 0x31FEA8u;
label_31fea8:
    // 0x31fea8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x31fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_31feac:
    // 0x31feac: 0x10000079  b           . + 4 + (0x79 << 2)
label_31feb0:
    if (ctx->pc == 0x31FEB0u) {
        ctx->pc = 0x31FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEACu;
        // 0x31feb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEB4u;
        goto label_31feb4;
    }
    ctx->pc = 0x31FEACu;
    {
        const bool branch_taken_0x31feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEACu;
        // 0x31feb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31feac) {
            ctx->pc = 0x320094u;
            goto label_320094;
        }
    }
    ctx->pc = 0x31FEB4u;
label_31feb4:
    // 0x31feb4: 0x2a0f02d  daddu       $fp, $s5, $zero
    ctx->pc = 0x31feb4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31feb8:
    // 0x31feb8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x31feb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_31febc:
    // 0x31febc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x31febcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31fec0:
    // 0x31fec0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31fec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fec4:
    // 0x31fec4: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31fec4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31fec8:
    // 0x31fec8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x31fec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31fecc:
    // 0x31fecc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31feccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31fed0:
    // 0x31fed0: 0xc137826  jal         func_4DE098
label_31fed4:
    if (ctx->pc == 0x31FED4u) {
        ctx->pc = 0x31FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FED0u;
        // 0x31fed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FED8u;
        goto label_31fed8;
    }
    ctx->pc = 0x31FED0u;
    SET_GPR_U32(ctx, 31, 0x31FED8u);
    ctx->pc = 0x31FED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FED0u;
    // 0x31fed4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31FED0u, 0x31FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FED8u;
label_31fed8:
    // 0x31fed8: 0xc0e409a  jal         func_390268
label_31fedc:
    if (ctx->pc == 0x31FEDCu) {
        ctx->pc = 0x31FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FED8u;
        // 0x31fedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEE0u;
        goto label_31fee0;
    }
    ctx->pc = 0x31FED8u;
    SET_GPR_U32(ctx, 31, 0x31FEE0u);
    ctx->pc = 0x31FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FED8u;
    // 0x31fedc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31FED8u, 0x31FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FEE0u;
label_31fee0:
    // 0x31fee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31fee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31fee4:
    // 0x31fee4: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_31fee8:
    if (ctx->pc == 0x31FEE8u) {
        ctx->pc = 0x31FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEE4u;
        // 0x31fee8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEECu;
        goto label_31feec;
    }
    ctx->pc = 0x31FEE4u;
    {
        const bool branch_taken_0x31fee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fee4) {
            ctx->pc = 0x31FEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FEE4u;
            // 0x31fee8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FEECu;
label_31feec:
    // 0x31feec: 0x5214001a  beql        $s0, $s4, . + 4 + (0x1A << 2)
label_31fef0:
    if (ctx->pc == 0x31FEF0u) {
        ctx->pc = 0x31FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FEECu;
        // 0x31fef0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FEF4u;
        goto label_31fef4;
    }
    ctx->pc = 0x31FEECu;
    {
        const bool branch_taken_0x31feec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x31feec) {
            ctx->pc = 0x31FEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FEECu;
            // 0x31fef0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FEF4u;
label_31fef4:
    // 0x31fef4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x31fef4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_31fef8:
    // 0x31fef8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31fef8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31fefc:
    // 0x31fefc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31fefcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31ff00:
    // 0x31ff00: 0x50560015  beql        $v0, $s6, . + 4 + (0x15 << 2)
label_31ff04:
    if (ctx->pc == 0x31FF04u) {
        ctx->pc = 0x31FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF00u;
        // 0x31ff04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF08u;
        goto label_31ff08;
    }
    ctx->pc = 0x31FF00u;
    {
        const bool branch_taken_0x31ff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x31ff00) {
            ctx->pc = 0x31FF04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF00u;
            // 0x31ff04: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FF08u;
label_31ff08:
    // 0x31ff08: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x31ff08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_31ff0c:
    // 0x31ff0c: 0x52020012  beql        $s0, $v0, . + 4 + (0x12 << 2)
label_31ff10:
    if (ctx->pc == 0x31FF10u) {
        ctx->pc = 0x31FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF0Cu;
        // 0x31ff10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF14u;
        goto label_31ff14;
    }
    ctx->pc = 0x31FF0Cu;
    {
        const bool branch_taken_0x31ff0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ff0c) {
            ctx->pc = 0x31FF10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF0Cu;
            // 0x31ff10: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FF14u;
label_31ff14:
    // 0x31ff14: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x31ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_31ff18:
    // 0x31ff18: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
label_31ff1c:
    if (ctx->pc == 0x31FF1Cu) {
        ctx->pc = 0x31FF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF18u;
        // 0x31ff1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF20u;
        goto label_31ff20;
    }
    ctx->pc = 0x31FF18u;
    {
        const bool branch_taken_0x31ff18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ff18) {
            ctx->pc = 0x31FF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF18u;
            // 0x31ff1c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF58u;
            goto label_31ff58;
        }
    }
    ctx->pc = 0x31FF20u;
label_31ff20:
    // 0x31ff20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ff24:
    // 0x31ff24: 0xc0c7ec6  jal         func_31FB18
label_31ff28:
    if (ctx->pc == 0x31FF28u) {
        ctx->pc = 0x31FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF24u;
        // 0x31ff28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF2Cu;
        goto label_31ff2c;
    }
    ctx->pc = 0x31FF24u;
    SET_GPR_U32(ctx, 31, 0x31FF2Cu);
    ctx->pc = 0x31FF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF24u;
    // 0x31ff28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB18u, 0x31FF24u, 0x31FF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF2Cu;
label_31ff2c:
    // 0x31ff2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_31ff30:
    if (ctx->pc == 0x31FF30u) {
        ctx->pc = 0x31FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF2Cu;
        // 0x31ff30: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF34u;
        goto label_31ff34;
    }
    ctx->pc = 0x31FF2Cu;
    {
        const bool branch_taken_0x31ff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF2Cu;
        // 0x31ff30: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff2c) {
            ctx->pc = 0x31FF54u;
            goto label_31ff54;
        }
    }
    ctx->pc = 0x31FF34u;
label_31ff34:
    // 0x31ff34: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x31ff34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
label_31ff38:
    // 0x31ff38: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x31ff38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_31ff3c:
    // 0x31ff3c: 0xc0cdb38  jal         func_336CE0
label_31ff40:
    if (ctx->pc == 0x31FF40u) {
        ctx->pc = 0x31FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF3Cu;
        // 0x31ff40: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF44u;
        goto label_31ff44;
    }
    ctx->pc = 0x31FF3Cu;
    SET_GPR_U32(ctx, 31, 0x31FF44u);
    ctx->pc = 0x31FF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FF3Cu;
    // 0x31ff40: 0x9e2021  addu        $a0, $a0, $fp (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x31FF3Cu, 0x31FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FF44u;
label_31ff44:
    // 0x31ff44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x31ff44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31ff48:
    // 0x31ff48: 0x0  nop
    ctx->pc = 0x31ff48u;
    // NOP
label_31ff4c:
    // 0x31ff4c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_31ff50:
    if (ctx->pc == 0x31FF50u) {
        ctx->pc = 0x31FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF4Cu;
        // 0x31ff50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF54u;
        goto label_31ff54;
    }
    ctx->pc = 0x31FF4Cu;
    {
        const bool branch_taken_0x31ff4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31ff4c) {
            ctx->pc = 0x31FF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FF4Cu;
            // 0x31ff50: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FF6Cu;
            goto label_31ff6c;
        }
    }
    ctx->pc = 0x31FF54u;
label_31ff54:
    // 0x31ff54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31ff54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_31ff58:
    // 0x31ff58: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x31ff58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_31ff5c:
    // 0x31ff5c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_31ff60:
    if (ctx->pc == 0x31FF60u) {
        ctx->pc = 0x31FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF5Cu;
        // 0x31ff60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF64u;
        goto label_31ff64;
    }
    ctx->pc = 0x31FF5Cu;
    {
        const bool branch_taken_0x31ff5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF5Cu;
        // 0x31ff60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff5c) {
            ctx->pc = 0x31FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31fed0;
        }
    }
    ctx->pc = 0x31FF64u;
label_31ff64:
    // 0x31ff64: 0x10000048  b           . + 4 + (0x48 << 2)
label_31ff68:
    if (ctx->pc == 0x31FF68u) {
        ctx->pc = 0x31FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF64u;
        // 0x31ff68: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF6Cu;
        goto label_31ff6c;
    }
    ctx->pc = 0x31FF64u;
    {
        const bool branch_taken_0x31ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF64u;
        // 0x31ff68: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff64) {
            ctx->pc = 0x320088u;
            goto label_320088;
        }
    }
    ctx->pc = 0x31FF6Cu;
label_31ff6c:
    // 0x31ff6c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31ff6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31ff70:
    // 0x31ff70: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31ff74:
    // 0x31ff74: 0x40f809  jalr        $v0
label_31ff78:
    if (ctx->pc == 0x31FF78u) {
        ctx->pc = 0x31FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF74u;
        // 0x31ff78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF7Cu;
        goto label_31ff7c;
    }
    ctx->pc = 0x31FF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FF7Cu);
        ctx->pc = 0x31FF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF74u;
        // 0x31ff78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF74u, 0x31FF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FF7Cu;
label_31ff7c:
    // 0x31ff7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31ff7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31ff80:
    // 0x31ff80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31ff80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ff84:
    // 0x31ff84: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x31ff84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_31ff88:
    // 0x31ff88: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x31ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_31ff8c:
    // 0x31ff8c: 0x40f809  jalr        $v0
label_31ff90:
    if (ctx->pc == 0x31FF90u) {
        ctx->pc = 0x31FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF8Cu;
        // 0x31ff90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF94u;
        goto label_31ff94;
    }
    ctx->pc = 0x31FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31FF94u);
        ctx->pc = 0x31FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF8Cu;
        // 0x31ff90: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FF8Cu, 0x31FF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31FF94u;
label_31ff94:
    // 0x31ff94: 0x10000033  b           . + 4 + (0x33 << 2)
label_31ff98:
    if (ctx->pc == 0x31FF98u) {
        ctx->pc = 0x31FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF94u;
        // 0x31ff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FF9Cu;
        goto label_31ff9c;
    }
    ctx->pc = 0x31FF94u;
    {
        const bool branch_taken_0x31ff94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FF94u;
        // 0x31ff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ff94) {
            ctx->pc = 0x320064u;
            goto label_320064;
        }
    }
    ctx->pc = 0x31FF9Cu;
label_31ff9c:
    // 0x31ff9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x31ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31ffa0:
    // 0x31ffa0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x31ffa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ffa4:
    // 0x31ffa4: 0x24550048  addiu       $s5, $v0, 0x48
    ctx->pc = 0x31ffa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_31ffa8:
    // 0x31ffa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x31ffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_31ffac:
    // 0x31ffac: 0x0  nop
    ctx->pc = 0x31ffacu;
    // NOP
label_31ffb0:
    // 0x31ffb0: 0xc137826  jal         func_4DE098
label_31ffb4:
    if (ctx->pc == 0x31FFB4u) {
        ctx->pc = 0x31FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFB0u;
        // 0x31ffb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFB8u;
        goto label_31ffb8;
    }
    ctx->pc = 0x31FFB0u;
    SET_GPR_U32(ctx, 31, 0x31FFB8u);
    ctx->pc = 0x31FFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FFB0u;
    // 0x31ffb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31FFB0u, 0x31FFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFB8u;
label_31ffb8:
    // 0x31ffb8: 0xc0e409a  jal         func_390268
label_31ffbc:
    if (ctx->pc == 0x31FFBCu) {
        ctx->pc = 0x31FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFB8u;
        // 0x31ffbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFC0u;
        goto label_31ffc0;
    }
    ctx->pc = 0x31FFB8u;
    SET_GPR_U32(ctx, 31, 0x31FFC0u);
    ctx->pc = 0x31FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FFB8u;
    // 0x31ffbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31FFB8u, 0x31FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FFC0u;
label_31ffc0:
    // 0x31ffc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31ffc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ffc4:
    // 0x31ffc4: 0x5220002c  beql        $s1, $zero, . + 4 + (0x2C << 2)
label_31ffc8:
    if (ctx->pc == 0x31FFC8u) {
        ctx->pc = 0x31FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFC4u;
        // 0x31ffc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFCCu;
        goto label_31ffcc;
    }
    ctx->pc = 0x31FFC4u;
    {
        const bool branch_taken_0x31ffc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x31ffc4) {
            ctx->pc = 0x31FFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FFC4u;
            // 0x31ffc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x31FFCCu;
label_31ffcc:
    // 0x31ffcc: 0x5234002a  beql        $s1, $s4, . + 4 + (0x2A << 2)
label_31ffd0:
    if (ctx->pc == 0x31FFD0u) {
        ctx->pc = 0x31FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFCCu;
        // 0x31ffd0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFD4u;
        goto label_31ffd4;
    }
    ctx->pc = 0x31FFCCu;
    {
        const bool branch_taken_0x31ffcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x31ffcc) {
            ctx->pc = 0x31FFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FFCCu;
            // 0x31ffd0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x31FFD4u;
label_31ffd4:
    // 0x31ffd4: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x31ffd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_31ffd8:
    // 0x31ffd8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x31ffd8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31ffdc:
    // 0x31ffdc: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_31ffe0:
    if (ctx->pc == 0x31FFE0u) {
        ctx->pc = 0x31FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFDCu;
        // 0x31ffe0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFE4u;
        goto label_31ffe4;
    }
    ctx->pc = 0x31FFDCu;
    {
        const bool branch_taken_0x31ffdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFDCu;
        // 0x31ffe0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ffdc) {
            ctx->pc = 0x320074u;
            goto label_320074;
        }
    }
    ctx->pc = 0x31FFE4u;
label_31ffe4:
    // 0x31ffe4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x31ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_31ffe8:
    // 0x31ffe8: 0x52220023  beql        $s1, $v0, . + 4 + (0x23 << 2)
label_31ffec:
    if (ctx->pc == 0x31FFECu) {
        ctx->pc = 0x31FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFE8u;
        // 0x31ffec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFF0u;
        goto label_31fff0;
    }
    ctx->pc = 0x31FFE8u;
    {
        const bool branch_taken_0x31ffe8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x31ffe8) {
            ctx->pc = 0x31FFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FFE8u;
            // 0x31ffec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x31FFF0u;
label_31fff0:
    // 0x31fff0: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x31fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_31fff4:
    // 0x31fff4: 0x1222001f  beq         $s1, $v0, . + 4 + (0x1F << 2)
label_31fff8:
    if (ctx->pc == 0x31FFF8u) {
        ctx->pc = 0x31FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFF4u;
        // 0x31fff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31FFFCu;
        goto label_31fffc;
    }
    ctx->pc = 0x31FFF4u;
    {
        const bool branch_taken_0x31fff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x31FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFF4u;
        // 0x31fff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fff4) {
            ctx->pc = 0x320074u;
            goto label_320074;
        }
    }
    ctx->pc = 0x31FFFCu;
label_31fffc:
    // 0x31fffc: 0xc0c7ec6  jal         func_31FB18
label_320000:
    if (ctx->pc == 0x320000u) {
        ctx->pc = 0x320000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FFFCu;
        // 0x320000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320004u;
        goto label_320004;
    }
    ctx->pc = 0x31FFFCu;
    SET_GPR_U32(ctx, 31, 0x320004u);
    ctx->pc = 0x320000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FFFCu;
    // 0x320000: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FB18u, 0x31FFFCu, 0x320004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320004u;
label_320004:
    // 0x320004: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_320008:
    if (ctx->pc == 0x320008u) {
        ctx->pc = 0x320008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320004u;
        // 0x320008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32000Cu;
        goto label_32000c;
    }
    ctx->pc = 0x320004u;
    {
        const bool branch_taken_0x320004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x320008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320004u;
        // 0x320008: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320004) {
            ctx->pc = 0x320074u;
            goto label_320074;
        }
    }
    ctx->pc = 0x32000Cu;
label_32000c:
    // 0x32000c: 0xc088fa8  jal         func_223EA0
label_320010:
    if (ctx->pc == 0x320010u) {
        ctx->pc = 0x320010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32000Cu;
        // 0x320010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320014u;
        goto label_320014;
    }
    ctx->pc = 0x32000Cu;
    SET_GPR_U32(ctx, 31, 0x320014u);
    ctx->pc = 0x320010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32000Cu;
    // 0x320010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223EA0u, 0x32000Cu, 0x320014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320014u;
label_320014:
    // 0x320014: 0x50500006  beql        $v0, $s0, . + 4 + (0x6 << 2)
label_320018:
    if (ctx->pc == 0x320018u) {
        ctx->pc = 0x320018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320014u;
        // 0x320018: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32001Cu;
        goto label_32001c;
    }
    ctx->pc = 0x320014u;
    {
        const bool branch_taken_0x320014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x320014) {
            ctx->pc = 0x320018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320014u;
            // 0x320018: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320030u;
            goto label_320030;
        }
    }
    ctx->pc = 0x32001Cu;
label_32001c:
    // 0x32001c: 0xc089000  jal         func_224000
label_320020:
    if (ctx->pc == 0x320020u) {
        ctx->pc = 0x320020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32001Cu;
        // 0x320020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320024u;
        goto label_320024;
    }
    ctx->pc = 0x32001Cu;
    SET_GPR_U32(ctx, 31, 0x320024u);
    ctx->pc = 0x320020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32001Cu;
    // 0x320020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x32001Cu, 0x320024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320024u;
label_320024:
    // 0x320024: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
label_320028:
    if (ctx->pc == 0x320028u) {
        ctx->pc = 0x320028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320024u;
        // 0x320028: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32002Cu;
        goto label_32002c;
    }
    ctx->pc = 0x320024u;
    {
        const bool branch_taken_0x320024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x320028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320024u;
        // 0x320028: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320024) {
            ctx->pc = 0x320078u;
            goto label_320078;
        }
    }
    ctx->pc = 0x32002Cu;
label_32002c:
    // 0x32002c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x32002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_320030:
    // 0x320030: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x320030u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_320034:
    // 0x320034: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x320034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_320038:
    // 0x320038: 0x40f809  jalr        $v0
label_32003c:
    if (ctx->pc == 0x32003Cu) {
        ctx->pc = 0x32003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320038u;
        // 0x32003c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320040u;
        goto label_320040;
    }
    ctx->pc = 0x320038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320040u);
        ctx->pc = 0x32003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320038u;
        // 0x32003c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320038u, 0x320040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320040u;
label_320040:
    // 0x320040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x320040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_320044:
    // 0x320044: 0xc089bfc  jal         func_226FF0
label_320048:
    if (ctx->pc == 0x320048u) {
        ctx->pc = 0x320048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320044u;
        // 0x320048: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32004Cu;
        goto label_32004c;
    }
    ctx->pc = 0x320044u;
    SET_GPR_U32(ctx, 31, 0x32004Cu);
    ctx->pc = 0x320048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320044u;
    // 0x320048: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x320044u, 0x32004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32004Cu;
label_32004c:
    // 0x32004c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x32004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_320050:
    // 0x320050: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x320050u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_320054:
    // 0x320054: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x320054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_320058:
    // 0x320058: 0xa0f809  jalr        $a1
label_32005c:
    if (ctx->pc == 0x32005Cu) {
        ctx->pc = 0x32005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320058u;
        // 0x32005c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320060u;
        goto label_320060;
    }
    ctx->pc = 0x320058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x320060u);
        ctx->pc = 0x32005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320058u;
        // 0x32005c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320058u, 0x320060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320060u;
label_320060:
    // 0x320060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x320060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320064:
    // 0x320064: 0xc0b758c  jal         func_2DD630
label_320068:
    if (ctx->pc == 0x320068u) {
        ctx->pc = 0x320068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320064u;
        // 0x320068: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32006Cu;
        goto label_32006c;
    }
    ctx->pc = 0x320064u;
    SET_GPR_U32(ctx, 31, 0x32006Cu);
    ctx->pc = 0x320068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320064u;
    // 0x320068: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD630u, 0x320064u, 0x32006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32006Cu;
label_32006c:
    // 0x32006c: 0x10000006  b           . + 4 + (0x6 << 2)
label_320070:
    if (ctx->pc == 0x320070u) {
        ctx->pc = 0x320070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32006Cu;
        // 0x320070: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320074u;
        goto label_320074;
    }
    ctx->pc = 0x32006Cu;
    {
        const bool branch_taken_0x32006c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32006Cu;
        // 0x320070: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32006c) {
            ctx->pc = 0x320088u;
            goto label_320088;
        }
    }
    ctx->pc = 0x320074u;
label_320074:
    // 0x320074: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x320074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_320078:
    // 0x320078: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x320078u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_32007c:
    // 0x32007c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_320080:
    if (ctx->pc == 0x320080u) {
        ctx->pc = 0x320080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32007Cu;
        // 0x320080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320084u;
        goto label_320084;
    }
    ctx->pc = 0x32007Cu;
    {
        const bool branch_taken_0x32007c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32007Cu;
        // 0x320080: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32007c) {
            ctx->pc = 0x31FFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ffb0;
        }
    }
    ctx->pc = 0x320084u;
label_320084:
    // 0x320084: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x320084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_320088:
    // 0x320088: 0x2443f2f0  addiu       $v1, $v0, -0xD10
    ctx->pc = 0x320088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963952));
label_32008c:
    // 0x32008c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x32008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_320090:
    // 0x320090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x320090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_320094:
    // 0x320094: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x320094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_320098:
    // 0x320098: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x320098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_32009c:
    // 0x32009c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x32009cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3200a0:
    // 0x3200a0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x3200a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3200a4:
    // 0x3200a4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x3200a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3200a8:
    // 0x3200a8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3200a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3200ac:
    // 0x3200ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3200acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3200b0:
    // 0x3200b0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x3200b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3200b4:
    // 0x3200b4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3200b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3200b8:
    // 0x3200b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3200b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3200bc:
    // 0x3200bc: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x3200bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3200c0:
    // 0x3200c0: 0x3e00008  jr          $ra
label_3200c4:
    if (ctx->pc == 0x3200C4u) {
        ctx->pc = 0x3200C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200C0u;
        // 0x3200c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3200C8u;
        goto label_fallthrough_0x3200c0;
    }
    ctx->pc = 0x3200C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3200C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3200C0u;
        // 0x3200c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3200C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3200c0:
    ctx->pc = 0x3200C8u;
}
