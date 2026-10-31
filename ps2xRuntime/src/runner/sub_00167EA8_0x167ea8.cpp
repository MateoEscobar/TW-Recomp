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

// Function: sub_00167EA8
// Address: 0x167ea8 - 0x168158
void sub_00167EA8_0x167ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167EA8_0x167ea8");
#endif

    switch (ctx->pc) {
        case 0x167ea8u: goto label_167ea8;
        case 0x167eacu: goto label_167eac;
        case 0x167eb0u: goto label_167eb0;
        case 0x167eb4u: goto label_167eb4;
        case 0x167eb8u: goto label_167eb8;
        case 0x167ebcu: goto label_167ebc;
        case 0x167ec0u: goto label_167ec0;
        case 0x167ec4u: goto label_167ec4;
        case 0x167ec8u: goto label_167ec8;
        case 0x167eccu: goto label_167ecc;
        case 0x167ed0u: goto label_167ed0;
        case 0x167ed4u: goto label_167ed4;
        case 0x167ed8u: goto label_167ed8;
        case 0x167edcu: goto label_167edc;
        case 0x167ee0u: goto label_167ee0;
        case 0x167ee4u: goto label_167ee4;
        case 0x167ee8u: goto label_167ee8;
        case 0x167eecu: goto label_167eec;
        case 0x167ef0u: goto label_167ef0;
        case 0x167ef4u: goto label_167ef4;
        case 0x167ef8u: goto label_167ef8;
        case 0x167efcu: goto label_167efc;
        case 0x167f00u: goto label_167f00;
        case 0x167f04u: goto label_167f04;
        case 0x167f08u: goto label_167f08;
        case 0x167f0cu: goto label_167f0c;
        case 0x167f10u: goto label_167f10;
        case 0x167f14u: goto label_167f14;
        case 0x167f18u: goto label_167f18;
        case 0x167f1cu: goto label_167f1c;
        case 0x167f20u: goto label_167f20;
        case 0x167f24u: goto label_167f24;
        case 0x167f28u: goto label_167f28;
        case 0x167f2cu: goto label_167f2c;
        case 0x167f30u: goto label_167f30;
        case 0x167f34u: goto label_167f34;
        case 0x167f38u: goto label_167f38;
        case 0x167f3cu: goto label_167f3c;
        case 0x167f40u: goto label_167f40;
        case 0x167f44u: goto label_167f44;
        case 0x167f48u: goto label_167f48;
        case 0x167f4cu: goto label_167f4c;
        case 0x167f50u: goto label_167f50;
        case 0x167f54u: goto label_167f54;
        case 0x167f58u: goto label_167f58;
        case 0x167f5cu: goto label_167f5c;
        case 0x167f60u: goto label_167f60;
        case 0x167f64u: goto label_167f64;
        case 0x167f68u: goto label_167f68;
        case 0x167f6cu: goto label_167f6c;
        case 0x167f70u: goto label_167f70;
        case 0x167f74u: goto label_167f74;
        case 0x167f78u: goto label_167f78;
        case 0x167f7cu: goto label_167f7c;
        case 0x167f80u: goto label_167f80;
        case 0x167f84u: goto label_167f84;
        case 0x167f88u: goto label_167f88;
        case 0x167f8cu: goto label_167f8c;
        case 0x167f90u: goto label_167f90;
        case 0x167f94u: goto label_167f94;
        case 0x167f98u: goto label_167f98;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa0u: goto label_167fa0;
        case 0x167fa4u: goto label_167fa4;
        case 0x167fa8u: goto label_167fa8;
        case 0x167facu: goto label_167fac;
        case 0x167fb0u: goto label_167fb0;
        case 0x167fb4u: goto label_167fb4;
        case 0x167fb8u: goto label_167fb8;
        case 0x167fbcu: goto label_167fbc;
        case 0x167fc0u: goto label_167fc0;
        case 0x167fc4u: goto label_167fc4;
        case 0x167fc8u: goto label_167fc8;
        case 0x167fccu: goto label_167fcc;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fd4u: goto label_167fd4;
        case 0x167fd8u: goto label_167fd8;
        case 0x167fdcu: goto label_167fdc;
        case 0x167fe0u: goto label_167fe0;
        case 0x167fe4u: goto label_167fe4;
        case 0x167fe8u: goto label_167fe8;
        case 0x167fecu: goto label_167fec;
        case 0x167ff0u: goto label_167ff0;
        case 0x167ff4u: goto label_167ff4;
        case 0x167ff8u: goto label_167ff8;
        case 0x167ffcu: goto label_167ffc;
        case 0x168000u: goto label_168000;
        case 0x168004u: goto label_168004;
        case 0x168008u: goto label_168008;
        case 0x16800cu: goto label_16800c;
        case 0x168010u: goto label_168010;
        case 0x168014u: goto label_168014;
        case 0x168018u: goto label_168018;
        case 0x16801cu: goto label_16801c;
        case 0x168020u: goto label_168020;
        case 0x168024u: goto label_168024;
        case 0x168028u: goto label_168028;
        case 0x16802cu: goto label_16802c;
        case 0x168030u: goto label_168030;
        case 0x168034u: goto label_168034;
        case 0x168038u: goto label_168038;
        case 0x16803cu: goto label_16803c;
        case 0x168040u: goto label_168040;
        case 0x168044u: goto label_168044;
        case 0x168048u: goto label_168048;
        case 0x16804cu: goto label_16804c;
        case 0x168050u: goto label_168050;
        case 0x168054u: goto label_168054;
        case 0x168058u: goto label_168058;
        case 0x16805cu: goto label_16805c;
        case 0x168060u: goto label_168060;
        case 0x168064u: goto label_168064;
        case 0x168068u: goto label_168068;
        case 0x16806cu: goto label_16806c;
        case 0x168070u: goto label_168070;
        case 0x168074u: goto label_168074;
        case 0x168078u: goto label_168078;
        case 0x16807cu: goto label_16807c;
        case 0x168080u: goto label_168080;
        case 0x168084u: goto label_168084;
        case 0x168088u: goto label_168088;
        case 0x16808cu: goto label_16808c;
        case 0x168090u: goto label_168090;
        case 0x168094u: goto label_168094;
        case 0x168098u: goto label_168098;
        case 0x16809cu: goto label_16809c;
        case 0x1680a0u: goto label_1680a0;
        case 0x1680a4u: goto label_1680a4;
        case 0x1680a8u: goto label_1680a8;
        case 0x1680acu: goto label_1680ac;
        case 0x1680b0u: goto label_1680b0;
        case 0x1680b4u: goto label_1680b4;
        case 0x1680b8u: goto label_1680b8;
        case 0x1680bcu: goto label_1680bc;
        case 0x1680c0u: goto label_1680c0;
        case 0x1680c4u: goto label_1680c4;
        case 0x1680c8u: goto label_1680c8;
        case 0x1680ccu: goto label_1680cc;
        case 0x1680d0u: goto label_1680d0;
        case 0x1680d4u: goto label_1680d4;
        case 0x1680d8u: goto label_1680d8;
        case 0x1680dcu: goto label_1680dc;
        case 0x1680e0u: goto label_1680e0;
        case 0x1680e4u: goto label_1680e4;
        case 0x1680e8u: goto label_1680e8;
        case 0x1680ecu: goto label_1680ec;
        case 0x1680f0u: goto label_1680f0;
        case 0x1680f4u: goto label_1680f4;
        case 0x1680f8u: goto label_1680f8;
        case 0x1680fcu: goto label_1680fc;
        case 0x168100u: goto label_168100;
        case 0x168104u: goto label_168104;
        case 0x168108u: goto label_168108;
        case 0x16810cu: goto label_16810c;
        case 0x168110u: goto label_168110;
        case 0x168114u: goto label_168114;
        case 0x168118u: goto label_168118;
        case 0x16811cu: goto label_16811c;
        case 0x168120u: goto label_168120;
        case 0x168124u: goto label_168124;
        case 0x168128u: goto label_168128;
        case 0x16812cu: goto label_16812c;
        case 0x168130u: goto label_168130;
        case 0x168134u: goto label_168134;
        case 0x168138u: goto label_168138;
        case 0x16813cu: goto label_16813c;
        case 0x168140u: goto label_168140;
        case 0x168144u: goto label_168144;
        case 0x168148u: goto label_168148;
        case 0x16814cu: goto label_16814c;
        case 0x168150u: goto label_168150;
        case 0x168154u: goto label_168154;
        default: break;
    }

    ctx->pc = 0x167ea8u;

label_167ea8:
    // 0x167ea8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x167ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_167eac:
    // 0x167eac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x167eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_167eb0:
    // 0x167eb0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x167eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_167eb4:
    // 0x167eb4: 0x24020130  addiu       $v0, $zero, 0x130
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
label_167eb8:
    // 0x167eb8: 0x6ac03  sra         $s5, $a2, 16
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 6), 16));
label_167ebc:
    // 0x167ebc: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x167ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_167ec0:
    // 0x167ec0: 0x2a21018  mult        $v0, $s5, $v0
    ctx->pc = 0x167ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_167ec4:
    // 0x167ec4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x167ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_167ec8:
    // 0x167ec8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x167ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_167ecc:
    // 0x167ecc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x167eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167ed0:
    // 0x167ed0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x167ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_167ed4:
    // 0x167ed4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x167ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_167ed8:
    // 0x167ed8: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x167ed8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_167edc:
    // 0x167edc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x167edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_167ee0:
    // 0x167ee0: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
label_167ee4:
    // 0x167ee4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x167ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_167ee8:
    // 0x167ee8: 0x2828821  addu        $s1, $s4, $v0
    ctx->pc = 0x167ee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_167eec:
    // 0x167eec: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x167eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_167ef0:
    // 0x167ef0: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x167ef0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_167ef4:
    // 0x167ef4: 0x86330052  lh          $s3, 0x52($s1)
    ctx->pc = 0x167ef4u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 82)));
label_167ef8:
    // 0x167ef8: 0xc05b604  jal         func_16D810
label_167efc:
    if (ctx->pc == 0x167EFCu) {
        ctx->pc = 0x167EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EF8u;
        // 0x167efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F00u;
        goto label_167f00;
    }
    ctx->pc = 0x167EF8u;
    SET_GPR_U32(ctx, 31, 0x167F00u);
    ctx->pc = 0x167EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167EF8u;
    // 0x167efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D810u, 0x167EF8u, 0x167F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F00u;
label_167f00:
    // 0x167f00: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x167f00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f04:
    // 0x167f04: 0x3a620006  xori        $v0, $s3, 0x6
    ctx->pc = 0x167f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)6);
label_167f08:
    // 0x167f08: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_167f0c:
    if (ctx->pc == 0x167F0Cu) {
        ctx->pc = 0x167F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F08u;
        // 0x167f0c: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F10u;
        goto label_167f10;
    }
    ctx->pc = 0x167F08u;
    {
        const bool branch_taken_0x167f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f08) {
            ctx->pc = 0x167F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F08u;
            // 0x167f0c: 0x8e2300ac  lw          $v1, 0xAC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F18u;
            goto label_167f18;
        }
    }
    ctx->pc = 0x167F10u;
label_167f10:
    // 0x167f10: 0x10000025  b           . + 4 + (0x25 << 2)
label_167f14:
    if (ctx->pc == 0x167F14u) {
        ctx->pc = 0x167F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F10u;
        // 0x167f14: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F18u;
        goto label_167f18;
    }
    ctx->pc = 0x167F10u;
    {
        const bool branch_taken_0x167f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F10u;
        // 0x167f14: 0x8e300020  lw          $s0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f10) {
            ctx->pc = 0x167FA8u;
            goto label_167fa8;
        }
    }
    ctx->pc = 0x167F18u;
label_167f18:
    // 0x167f18: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x167f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_167f1c:
    // 0x167f1c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x167f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_167f20:
    // 0x167f20: 0x246300b4  addiu       $v1, $v1, 0xB4
    ctx->pc = 0x167f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 180));
label_167f24:
    // 0x167f24: 0x2232021  addu        $a0, $s1, $v1
    ctx->pc = 0x167f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_167f28:
    // 0x167f28: 0x90820017  lbu         $v0, 0x17($a0)
    ctx->pc = 0x167f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
label_167f2c:
    // 0x167f2c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x167f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_167f30:
    // 0x167f30: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_167f34:
    if (ctx->pc == 0x167F34u) {
        ctx->pc = 0x167F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F30u;
        // 0x167f34: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F38u;
        goto label_167f38;
    }
    ctx->pc = 0x167F30u;
    {
        const bool branch_taken_0x167f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F30u;
        // 0x167f34: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f30) {
            ctx->pc = 0x167F5Cu;
            goto label_167f5c;
        }
    }
    ctx->pc = 0x167F38u;
label_167f38:
    // 0x167f38: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x167f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_167f3c:
    // 0x167f3c: 0x2610cb40  addiu       $s0, $s0, -0x34C0
    ctx->pc = 0x167f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953792));
label_167f40:
    // 0x167f40: 0x2484b890  addiu       $a0, $a0, -0x4770
    ctx->pc = 0x167f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949008));
label_167f44:
    // 0x167f44: 0xc0cd4ee  jal         func_3353B8
label_167f48:
    if (ctx->pc == 0x167F48u) {
        ctx->pc = 0x167F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F44u;
        // 0x167f48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F4Cu;
        goto label_167f4c;
    }
    ctx->pc = 0x167F44u;
    SET_GPR_U32(ctx, 31, 0x167F4Cu);
    ctx->pc = 0x167F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F44u;
    // 0x167f48: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x167F44u, 0x167F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F4Cu;
label_167f4c:
    // 0x167f4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_167f50:
    // 0x167f50: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x167f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_167f54:
    // 0x167f54: 0x10000014  b           . + 4 + (0x14 << 2)
label_167f58:
    if (ctx->pc == 0x167F58u) {
        ctx->pc = 0x167F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F54u;
        // 0x167f58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F5Cu;
        goto label_167f5c;
    }
    ctx->pc = 0x167F54u;
    {
        const bool branch_taken_0x167f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F54u;
        // 0x167f58: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f54) {
            ctx->pc = 0x167FA8u;
            goto label_167fa8;
        }
    }
    ctx->pc = 0x167F5Cu;
label_167f5c:
    // 0x167f5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x167f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_167f60:
    // 0x167f60: 0x80840018  lb          $a0, 0x18($a0)
    ctx->pc = 0x167f60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_167f64:
    // 0x167f64: 0x8c50cb50  lw          $s0, -0x34B0($v0)
    ctx->pc = 0x167f64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953808)));
label_167f68:
    // 0x167f68: 0x480000f  bltz        $a0, . + 4 + (0xF << 2)
label_167f6c:
    if (ctx->pc == 0x167F6Cu) {
        ctx->pc = 0x167F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F68u;
        // 0x167f6c: 0x24120103  addiu       $s2, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F70u;
        goto label_167f70;
    }
    ctx->pc = 0x167F68u;
    {
        const bool branch_taken_0x167f68 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x167F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F68u;
        // 0x167f6c: 0x24120103  addiu       $s2, $zero, 0x103 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f68) {
            ctx->pc = 0x167FA8u;
            goto label_167fa8;
        }
    }
    ctx->pc = 0x167F70u;
label_167f70:
    // 0x167f70: 0xc05b0e2  jal         func_16C388
label_167f74:
    if (ctx->pc == 0x167F74u) {
        ctx->pc = 0x167F78u;
        goto label_167f78;
    }
    ctx->pc = 0x167F70u;
    SET_GPR_U32(ctx, 31, 0x167F78u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x167F70u, 0x167F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F78u;
label_167f78:
    // 0x167f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f7c:
    // 0x167f7c: 0xc059856  jal         func_166158
label_167f80:
    if (ctx->pc == 0x167F80u) {
        ctx->pc = 0x167F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F7Cu;
        // 0x167f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F84u;
        goto label_167f84;
    }
    ctx->pc = 0x167F7Cu;
    SET_GPR_U32(ctx, 31, 0x167F84u);
    ctx->pc = 0x167F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F7Cu;
    // 0x167f80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166158u, 0x167F7Cu, 0x167F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F84u;
label_167f84:
    // 0x167f84: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
label_167f88:
    if (ctx->pc == 0x167F88u) {
        ctx->pc = 0x167F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F84u;
        // 0x167f88: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F8Cu;
        goto label_167f8c;
    }
    ctx->pc = 0x167F84u;
    {
        const bool branch_taken_0x167f84 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F84u;
        // 0x167f88: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f84) {
            ctx->pc = 0x167FA8u;
            goto label_167fa8;
        }
    }
    ctx->pc = 0x167F8Cu;
label_167f8c:
    // 0x167f8c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x167f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_167f90:
    // 0x167f90: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x167f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_167f94:
    // 0x167f94: 0x84620092  lh          $v0, 0x92($v1)
    ctx->pc = 0x167f94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 146)));
label_167f98:
    // 0x167f98: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x167f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_167f9c:
    // 0x167f9c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_167fa0:
    // 0x167fa0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x167fa0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_167fa4:
    // 0x167fa4: 0x7ec30000  sq          $v1, 0x0($s6)
    ctx->pc = 0x167fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 3));
label_167fa8:
    // 0x167fa8: 0x86220054  lh          $v0, 0x54($s1)
    ctx->pc = 0x167fa8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 84)));
label_167fac:
    // 0x167fac: 0x123400  sll         $a2, $s2, 16
    ctx->pc = 0x167facu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
label_167fb0:
    // 0x167fb0: 0x86880030  lh          $t0, 0x30($s4)
    ctx->pc = 0x167fb0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_167fb4:
    // 0x167fb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x167fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_167fb8:
    // 0x167fb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167fbc:
    // 0x167fbc: 0x0  nop
    ctx->pc = 0x167fbcu;
    // NOP
label_167fc0:
    // 0x167fc0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x167fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_167fc4:
    // 0x167fc4: 0x86250058  lh          $a1, 0x58($s1)
    ctx->pc = 0x167fc4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 88)));
label_167fc8:
    // 0x167fc8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x167fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_167fcc:
    // 0x167fcc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x167fccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
label_167fd0:
    // 0x167fd0: 0x8e2b001c  lw          $t3, 0x1C($s1)
    ctx->pc = 0x167fd0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_167fd4:
    // 0x167fd4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x167fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_167fd8:
    // 0x167fd8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x167fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_167fdc:
    // 0x167fdc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x167fdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_167fe0:
    // 0x167fe0: 0xc05b618  jal         func_16D860
label_167fe4:
    if (ctx->pc == 0x167FE4u) {
        ctx->pc = 0x167FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FE0u;
        // 0x167fe4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FE8u;
        goto label_167fe8;
    }
    ctx->pc = 0x167FE0u;
    SET_GPR_U32(ctx, 31, 0x167FE8u);
    ctx->pc = 0x167FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FE0u;
    // 0x167fe4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D860u, 0x167FE0u, 0x167FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167FE8u;
label_167fe8:
    // 0x167fe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x167fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167fec:
    // 0x167fec: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
label_167ff0:
    if (ctx->pc == 0x167FF0u) {
        ctx->pc = 0x167FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FECu;
        // 0x167ff0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FF4u;
        goto label_167ff4;
    }
    ctx->pc = 0x167FECu;
    {
        const bool branch_taken_0x167fec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x167FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FECu;
        // 0x167ff0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fec) {
            ctx->pc = 0x168124u;
            goto label_168124;
        }
    }
    ctx->pc = 0x167FF4u;
label_167ff4:
    // 0x167ff4: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_167ff8:
    if (ctx->pc == 0x167FF8u) {
        ctx->pc = 0x167FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FF4u;
        // 0x167ff8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FFCu;
        goto label_167ffc;
    }
    ctx->pc = 0x167FF4u;
    {
        const bool branch_taken_0x167ff4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x167FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FF4u;
        // 0x167ff8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ff4) {
            ctx->pc = 0x168004u;
            goto label_168004;
        }
    }
    ctx->pc = 0x167FFCu;
label_167ffc:
    // 0x167ffc: 0x1662004a  bne         $s3, $v0, . + 4 + (0x4A << 2)
label_168000:
    if (ctx->pc == 0x168000u) {
        ctx->pc = 0x168000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FFCu;
        // 0x168000: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168004u;
        goto label_168004;
    }
    ctx->pc = 0x167FFCu;
    {
        const bool branch_taken_0x167ffc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x168000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FFCu;
        // 0x168000: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ffc) {
            ctx->pc = 0x168128u;
            goto label_168128;
        }
    }
    ctx->pc = 0x168004u;
label_168004:
    // 0x168004: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x168004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_168008:
    // 0x168008: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_16800c:
    // 0x16800c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168010:
    // 0x168010: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x168010u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_168014:
    // 0x168014: 0x244200b4  addiu       $v0, $v0, 0xB4
    ctx->pc = 0x168014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 180));
label_168018:
    // 0x168018: 0xc087502  jal         func_21D408
label_16801c:
    if (ctx->pc == 0x16801Cu) {
        ctx->pc = 0x16801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168018u;
        // 0x16801c: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168020u;
        goto label_168020;
    }
    ctx->pc = 0x168018u;
    SET_GPR_U32(ctx, 31, 0x168020u);
    ctx->pc = 0x16801Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168018u;
    // 0x16801c: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x168018u, 0x168020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168020u;
label_168020:
    // 0x168020: 0x82040018  lb          $a0, 0x18($s0)
    ctx->pc = 0x168020u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_168024:
    // 0x168024: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
label_168028:
    if (ctx->pc == 0x168028u) {
        ctx->pc = 0x168028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168024u;
        // 0x168028: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16802Cu;
        goto label_16802c;
    }
    ctx->pc = 0x168024u;
    {
        const bool branch_taken_0x168024 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x168028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168024u;
        // 0x168028: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168024) {
            ctx->pc = 0x168048u;
            goto label_168048;
        }
    }
    ctx->pc = 0x16802Cu;
label_16802c:
    // 0x16802c: 0xc05b0e2  jal         func_16C388
label_168030:
    if (ctx->pc == 0x168030u) {
        ctx->pc = 0x168034u;
        goto label_168034;
    }
    ctx->pc = 0x16802Cu;
    SET_GPR_U32(ctx, 31, 0x168034u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x16802Cu, 0x168034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168034u;
label_168034:
    // 0x168034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x168034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168038:
    // 0x168038: 0xc0598c2  jal         func_166308
label_16803c:
    if (ctx->pc == 0x16803Cu) {
        ctx->pc = 0x16803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168038u;
        // 0x16803c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168040u;
        goto label_168040;
    }
    ctx->pc = 0x168038u;
    SET_GPR_U32(ctx, 31, 0x168040u);
    ctx->pc = 0x16803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168038u;
    // 0x16803c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166308u, 0x168038u, 0x168040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168040u;
label_168040:
    // 0x168040: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_168044:
    // 0x168044: 0xa6820210  sh          $v0, 0x210($s4)
    ctx->pc = 0x168044u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 528), (uint16_t)GPR_U32(ctx, 2));
label_168048:
    // 0x168048: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x168048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_16804c:
    // 0x16804c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x16804cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_168050:
    // 0x168050: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_168054:
    if (ctx->pc == 0x168054u) {
        ctx->pc = 0x168054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168050u;
        // 0x168054: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168058u;
        goto label_168058;
    }
    ctx->pc = 0x168050u;
    {
        const bool branch_taken_0x168050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x168054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168050u;
        // 0x168054: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168050) {
            ctx->pc = 0x16806Cu;
            goto label_16806c;
        }
    }
    ctx->pc = 0x168058u;
label_168058:
    // 0x168058: 0x92030016  lbu         $v1, 0x16($s0)
    ctx->pc = 0x168058u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_16805c:
    // 0x16805c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16805cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_168060:
    // 0x168060: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_168064:
    if (ctx->pc == 0x168064u) {
        ctx->pc = 0x168064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168060u;
        // 0x168064: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168068u;
        goto label_168068;
    }
    ctx->pc = 0x168060u;
    {
        const bool branch_taken_0x168060 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x168064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168060u;
        // 0x168064: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168060) {
            ctx->pc = 0x168114u;
            goto label_168114;
        }
    }
    ctx->pc = 0x168068u;
label_168068:
    // 0x168068: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x168068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_16806c:
    // 0x16806c: 0x82040019  lb          $a0, 0x19($s0)
    ctx->pc = 0x16806cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
label_168070:
    // 0x168070: 0x4800010  bltz        $a0, . + 4 + (0x10 << 2)
label_168074:
    if (ctx->pc == 0x168074u) {
        ctx->pc = 0x168074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168070u;
        // 0x168074: 0x8c51bd30  lw          $s1, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168078u;
        goto label_168078;
    }
    ctx->pc = 0x168070u;
    {
        const bool branch_taken_0x168070 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x168074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168070u;
        // 0x168074: 0x8c51bd30  lw          $s1, -0x42D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168070) {
            ctx->pc = 0x1680B4u;
            goto label_1680b4;
        }
    }
    ctx->pc = 0x168078u;
label_168078:
    // 0x168078: 0xc05b0e2  jal         func_16C388
label_16807c:
    if (ctx->pc == 0x16807Cu) {
        ctx->pc = 0x168080u;
        goto label_168080;
    }
    ctx->pc = 0x168078u;
    SET_GPR_U32(ctx, 31, 0x168080u);
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x168078u, 0x168080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168080u;
label_168080:
    // 0x168080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x168080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168084:
    // 0x168084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x168084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168088:
    // 0x168088: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x168088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16808c:
    // 0x16808c: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_168090:
    if (ctx->pc == 0x168090u) {
        ctx->pc = 0x168090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16808Cu;
        // 0x168090: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168094u;
        goto label_168094;
    }
    ctx->pc = 0x16808Cu;
    {
        const bool branch_taken_0x16808c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16808c) {
            ctx->pc = 0x168090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16808Cu;
            // 0x168090: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1680B8u;
            goto label_1680b8;
        }
    }
    ctx->pc = 0x168094u;
label_168094:
    // 0x168094: 0xc05959e  jal         func_165678
label_168098:
    if (ctx->pc == 0x168098u) {
        ctx->pc = 0x16809Cu;
        goto label_16809c;
    }
    ctx->pc = 0x168094u;
    SET_GPR_U32(ctx, 31, 0x16809Cu);
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x168094u, 0x16809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16809Cu;
label_16809c:
    // 0x16809c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1680a0:
    // 0x1680a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1680a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1680a4:
    // 0x1680a4: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1680a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1680a8:
    // 0x1680a8: 0xa0f809  jalr        $a1
label_1680ac:
    if (ctx->pc == 0x1680ACu) {
        ctx->pc = 0x1680ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680A8u;
        // 0x1680ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1680B0u;
        goto label_1680b0;
    }
    ctx->pc = 0x1680A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1680B0u);
        ctx->pc = 0x1680ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680A8u;
        // 0x1680ac: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680A8u, 0x1680B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1680B0u;
label_1680b0:
    // 0x1680b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1680b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1680b4:
    // 0x1680b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1680b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1680b8:
    // 0x1680b8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1680bc:
    // 0x1680bc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1680bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1680c0:
    // 0x1680c0: 0x40f809  jalr        $v0
label_1680c4:
    if (ctx->pc == 0x1680C4u) {
        ctx->pc = 0x1680C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680C0u;
        // 0x1680c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1680C8u;
        goto label_1680c8;
    }
    ctx->pc = 0x1680C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1680C8u);
        ctx->pc = 0x1680C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680C0u;
        // 0x1680c4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1680C0u, 0x1680C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1680C8u;
label_1680c8:
    // 0x1680c8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1680c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1680cc:
    // 0x1680cc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1680d0:
    // 0x1680d0: 0x92050016  lbu         $a1, 0x16($s0)
    ctx->pc = 0x1680d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_1680d4:
    // 0x1680d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1680d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1680d8:
    // 0x1680d8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1680d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1680dc:
    // 0x1680dc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1680dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1680e0:
    // 0x1680e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1680e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1680e4:
    // 0x1680e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1680e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1680e8:
    // 0x1680e8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1680e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1680ec:
    // 0x1680ec: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1680ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1680f0:
    // 0x1680f0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1680f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1680f4:
    // 0x1680f4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1680f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1680f8:
    // 0x1680f8: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1680f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1680fc:
    // 0x1680fc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1680fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_168100:
    // 0x168100: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x168100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_168104:
    // 0x168104: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x168104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_168108:
    // 0x168108: 0xc0b0b60  jal         func_2C2D80
label_16810c:
    if (ctx->pc == 0x16810Cu) {
        ctx->pc = 0x16810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168108u;
        // 0x16810c: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168110u;
        goto label_168110;
    }
    ctx->pc = 0x168108u;
    SET_GPR_U32(ctx, 31, 0x168110u);
    ctx->pc = 0x16810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168108u;
    // 0x16810c: 0x8e070004  lw          $a3, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2D80u, 0x168108u, 0x168110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168110u;
label_168110:
    // 0x168110: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x168110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_168114:
    // 0x168114: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_168118:
    if (ctx->pc == 0x168118u) {
        ctx->pc = 0x168118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168114u;
        // 0x168118: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16811Cu;
        goto label_16811c;
    }
    ctx->pc = 0x168114u;
    {
        const bool branch_taken_0x168114 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x168118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168114u;
        // 0x168118: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168114) {
            ctx->pc = 0x168128u;
            goto label_168128;
        }
    }
    ctx->pc = 0x16811Cu;
label_16811c:
    // 0x16811c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_168120:
    // 0x168120: 0xa282028d  sb          $v0, 0x28D($s4)
    ctx->pc = 0x168120u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 653), (uint8_t)GPR_U32(ctx, 2));
label_168124:
    // 0x168124: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x168124u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_168128:
    // 0x168128: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x168128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_16812c:
    // 0x16812c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x16812cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_168130:
    // 0x168130: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x168130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_168134:
    // 0x168134: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x168134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_168138:
    // 0x168138: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x168138u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_16813c:
    // 0x16813c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x16813cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_168140:
    // 0x168140: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x168140u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_168144:
    // 0x168144: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x168144u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_168148:
    // 0x168148: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_16814c:
    // 0x16814c: 0x3e00008  jr          $ra
label_168150:
    if (ctx->pc == 0x168150u) {
        ctx->pc = 0x168150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16814Cu;
        // 0x168150: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168154u;
        goto label_168154;
    }
    ctx->pc = 0x16814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16814Cu;
        // 0x168150: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168154u;
label_168154:
    // 0x168154: 0x0  nop
    ctx->pc = 0x168154u;
    // NOP
    ctx->pc = 0x168158u;
}
