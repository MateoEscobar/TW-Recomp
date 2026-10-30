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

// Function: sub_00232C60
// Address: 0x232c60 - 0x2334d0
void sub_00232C60_0x232c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232C60_0x232c60");
#endif

    switch (ctx->pc) {
        case 0x232ca0u: goto label_232ca0;
        case 0x232cc4u: goto label_232cc4;
        case 0x232d14u: goto label_232d14;
        case 0x232d50u: goto label_232d50;
        case 0x232d78u: goto label_232d78;
        case 0x232d84u: goto label_232d84;
        case 0x232db4u: goto label_232db4;
        case 0x232e08u: goto label_232e08;
        case 0x232e14u: goto label_232e14;
        case 0x232e1cu: goto label_232e1c;
        case 0x232e2cu: goto label_232e2c;
        case 0x232e98u: goto label_232e98;
        case 0x232eacu: goto label_232eac;
        case 0x232edcu: goto label_232edc;
        case 0x232f4cu: goto label_232f4c;
        case 0x232f58u: goto label_232f58;
        case 0x232f60u: goto label_232f60;
        case 0x232f7cu: goto label_232f7c;
        case 0x232f98u: goto label_232f98;
        case 0x232fc0u: goto label_232fc0;
        case 0x23302cu: goto label_23302c;
        case 0x233038u: goto label_233038;
        case 0x233040u: goto label_233040;
        case 0x233054u: goto label_233054;
        case 0x233090u: goto label_233090;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330fcu: goto label_2330fc;
        case 0x23310cu: goto label_23310c;
        case 0x233184u: goto label_233184;
        case 0x233190u: goto label_233190;
        case 0x233198u: goto label_233198;
        case 0x2331acu: goto label_2331ac;
        case 0x2331ccu: goto label_2331cc;
        case 0x2331ecu: goto label_2331ec;
        case 0x23320cu: goto label_23320c;
        case 0x23321cu: goto label_23321c;
        case 0x23322cu: goto label_23322c;
        case 0x233248u: goto label_233248;
        case 0x233268u: goto label_233268;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332f8u: goto label_2332f8;
        case 0x233308u: goto label_233308;
        case 0x233338u: goto label_233338;
        case 0x233390u: goto label_233390;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333f0u: goto label_2333f0;
        case 0x233454u: goto label_233454;
        case 0x233460u: goto label_233460;
        case 0x233468u: goto label_233468;
        case 0x233488u: goto label_233488;
        case 0x233494u: goto label_233494;
        default: break;
    }

    ctx->pc = 0x232c60u;

    // 0x232c60: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x232c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x232c64: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x232c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x232c68: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x232c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x232c6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x232c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c70: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x232c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x232c74: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x232c74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232c78: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x232c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x232c7c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x232c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x232c80: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x232c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x232c84: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x232c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x232c88: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x232c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x232c8c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x232c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x232c90: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x232c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x232c94: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x232c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x232c98: 0xc087502  jal         func_21D408
    ctx->pc = 0x232C98u;
    SET_GPR_U32(ctx, 31, 0x232CA0u);
    ctx->pc = 0x232C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C98u;
    // 0x232c9c: 0xafa50058  sw          $a1, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x232C98u, 0x232CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CA0u;
label_232ca0:
    // 0x232ca0: 0x104001fd  beqz        $v0, . + 4 + (0x1FD << 2)
    ctx->pc = 0x232CA0u;
    {
        const bool branch_taken_0x232ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CA0u;
        // 0x232ca4: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ca0) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x232CA8u;
    // 0x232ca8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x232ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x232cac: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x232cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x232cb0: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x232cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x232cb4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x232cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x232cb8: 0x8c83026c  lw          $v1, 0x26C($a0)
    ctx->pc = 0x232cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x232cbc: 0xc0a3fa4  jal         func_28FE90
    ctx->pc = 0x232CBCu;
    SET_GPR_U32(ctx, 31, 0x232CC4u);
    ctx->pc = 0x232CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232CBCu;
    // 0x232cc0: 0xafa30064  sw          $v1, 0x64($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x232CBCu, 0x232CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232CC4u;
label_232cc4:
    // 0x232cc4: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x232cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x232cc8: 0x8e850250  lw          $a1, 0x250($s4)
    ctx->pc = 0x232cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 592)));
    // 0x232ccc: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x232cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x232cd0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x232cd0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232cd4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x232cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x232cd8: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x232cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232cdc: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x232cdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x232ce0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x232ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x232ce4: 0x38c40005  xori        $a0, $a2, 0x5
    ctx->pc = 0x232ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
    // 0x232ce8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x232ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x232cec: 0x4b80a  movz        $s7, $zero, $a0
    ctx->pc = 0x232cecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x232cf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232cf4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x232cf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232cf8: 0x10a00064  beqz        $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x232CF8u;
    {
        const bool branch_taken_0x232cf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x232CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CF8u;
        // 0x232cfc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232cf8) {
            ctx->pc = 0x232E8Cu;
            goto label_232e8c;
        }
    }
    ctx->pc = 0x232D00u;
    // 0x232d00: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x232d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x232d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x232d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d08: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x232d08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x232d0c: 0xc1078f0  jal         func_41E3C0
    ctx->pc = 0x232D0Cu;
    SET_GPR_U32(ctx, 31, 0x232D14u);
    ctx->pc = 0x232D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D0Cu;
    // 0x232d10: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E3C0u, 0x232D0Cu, 0x232D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D14u;
label_232d14:
    // 0x232d14: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x232d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x232d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232d1c: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232D1Cu;
    {
        const bool branch_taken_0x232d1c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x232D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D1Cu;
        // 0x232d20: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d1c) {
            ctx->pc = 0x232D30u;
            goto label_232d30;
        }
    }
    ctx->pc = 0x232D24u;
    // 0x232d24: 0x82820254  lb          $v0, 0x254($s4)
    ctx->pc = 0x232d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 596)));
    // 0x232d28: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x232d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x232d2c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x232d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_232d30:
    // 0x232d30: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x232D30u;
    {
        const bool branch_taken_0x232d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D30u;
        // 0x232d34: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d30) {
            ctx->pc = 0x232E40u;
            goto label_232e40;
        }
    }
    ctx->pc = 0x232D38u;
    // 0x232d38: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x232d38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x232d3c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232d40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x232d40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x232d44: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x232d44u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x232d48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x232d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232d4c: 0x0  nop
    ctx->pc = 0x232d4cu;
    // NOP
label_232d50:
    // 0x232d50: 0x16e60005  bne         $s7, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x232D50u;
    {
        const bool branch_taken_0x232d50 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 6));
        ctx->pc = 0x232D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D50u;
        // 0x232d54: 0x24730001  addiu       $s3, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d50) {
            ctx->pc = 0x232D68u;
            goto label_232d68;
        }
    }
    ctx->pc = 0x232D58u;
    // 0x232d58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x232d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232d5c: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x232d5cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
    // 0x232d60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x232D60u;
    {
        const bool branch_taken_0x232d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D60u;
        // 0x232d64: 0x27b20040  addiu       $s2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d60) {
            ctx->pc = 0x232DC4u;
            goto label_232dc4;
        }
    }
    ctx->pc = 0x232D68u;
label_232d68:
    // 0x232d68: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x232d68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x232d6c: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x232d6cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
    // 0x232d70: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x232d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x232d74: 0x0  nop
    ctx->pc = 0x232d74u;
    // NOP
label_232d78:
    // 0x232d78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x232d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232d7c: 0xc0a7a72  jal         func_29E9C8
    ctx->pc = 0x232D7Cu;
    SET_GPR_U32(ctx, 31, 0x232D84u);
    ctx->pc = 0x232D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232D7Cu;
    // 0x232d80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x232D7Cu, 0x232D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232D84u;
label_232d84:
    // 0x232d84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232D84u;
    {
        const bool branch_taken_0x232d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232D84u;
        // 0x232d88: 0x2e020008  sltiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x232d84) {
            ctx->pc = 0x232D94u;
            goto label_232d94;
        }
    }
    ctx->pc = 0x232D8Cu;
    // 0x232d8c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x232D8Cu;
    {
        const bool branch_taken_0x232d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232d8c) {
            ctx->pc = 0x232D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232D8Cu;
            // 0x232d90: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232d78;
        }
    }
    ctx->pc = 0x232D94u;
label_232d94:
    // 0x232d94: 0x3a020008  xori        $v0, $s0, 0x8
    ctx->pc = 0x232d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)8);
    // 0x232d98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x232d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x232d9c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x232d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232da0: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x232da0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x232da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232da8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x232da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dac: 0xc0a78d4  jal         func_29E350
    ctx->pc = 0x232DACu;
    SET_GPR_U32(ctx, 31, 0x232DB4u);
    ctx->pc = 0x232DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232DACu;
    // 0x232db0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E350u, 0x232DACu, 0x232DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232DB4u;
label_232db4:
    // 0x232db4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x232db4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x232db8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x232db8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232dbc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x232dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x232dc0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x232dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_232dc4:
    // 0x232dc4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x232dc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x232dc8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x232dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x232dcc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x232dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x232dd0: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x232dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x232dd4: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x232dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x232dd8: 0x24881780  addiu       $t0, $a0, 0x1780
    ctx->pc = 0x232dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 6016));
    // 0x232ddc: 0x8fc9bd30  lw          $t1, -0x42D0($fp)
    ctx->pc = 0x232ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294950192)));
    // 0x232de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232de4: 0x8c440840  lw          $a0, 0x840($v0)
    ctx->pc = 0x232de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    // 0x232de8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x232de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232dec: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x232decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232df0: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x232df0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x232df4: 0xafb50000  sw          $s5, 0x0($sp)
    ctx->pc = 0x232df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 21));
    // 0x232df8: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x232df8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232dfc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x232dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x232e00: 0xc0e6250  jal         func_398940
    ctx->pc = 0x232E00u;
    SET_GPR_U32(ctx, 31, 0x232E08u);
    ctx->pc = 0x232E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E00u;
    // 0x232e04: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x232E00u, 0x232E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E08u;
label_232e08:
    // 0x232e08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x232e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e0c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x232E0Cu;
    SET_GPR_U32(ctx, 31, 0x232E14u);
    ctx->pc = 0x232E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E0Cu;
    // 0x232e10: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x232E0Cu, 0x232E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E14u;
label_232e14:
    // 0x232e14: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x232E14u;
    SET_GPR_U32(ctx, 31, 0x232E1Cu);
    ctx->pc = 0x232E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E14u;
    // 0x232e18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x232E14u, 0x232E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E1Cu;
label_232e1c:
    // 0x232e1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x232E1Cu;
    {
        const bool branch_taken_0x232e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E1Cu;
        // 0x232e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e1c) {
            ctx->pc = 0x232E2Cu;
            goto label_232e2c;
        }
    }
    ctx->pc = 0x232E24u;
    // 0x232e24: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x232E24u;
    SET_GPR_U32(ctx, 31, 0x232E2Cu);
    ctx->pc = 0x232E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E24u;
    // 0x232e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x232E24u, 0x232E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E2Cu;
label_232e2c:
    // 0x232e2c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x232e30: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x232e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232e34: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x232e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x232e38: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x232E38u;
    {
        const bool branch_taken_0x232e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E38u;
        // 0x232e3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e38) {
            ctx->pc = 0x232D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232d50;
        }
    }
    ctx->pc = 0x232E40u;
label_232e40:
    // 0x232e40: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x232e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x232e44: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x232e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x232e48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x232E48u;
    {
        const bool branch_taken_0x232e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E48u;
        // 0x232e4c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e48) {
            ctx->pc = 0x232E5Cu;
            goto label_232e5c;
        }
    }
    ctx->pc = 0x232E50u;
    // 0x232e50: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x232e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x232e54: 0x38820005  xori        $v0, $a0, 0x5
    ctx->pc = 0x232e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)5);
    // 0x232e58: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x232e58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_232e5c:
    // 0x232e5c: 0x5460018f  bnel        $v1, $zero, . + 4 + (0x18F << 2)
    ctx->pc = 0x232E5Cu;
    {
        const bool branch_taken_0x232e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232e5c) {
            ctx->pc = 0x232E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232E5Cu;
            // 0x232e60: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23349Cu;
            goto label_23349c;
        }
    }
    ctx->pc = 0x232E64u;
    // 0x232e64: 0x16e0000a  bnez        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x232E64u;
    {
        const bool branch_taken_0x232e64 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E64u;
        // 0x232e68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e64) {
            ctx->pc = 0x232E90u;
            goto label_232e90;
        }
    }
    ctx->pc = 0x232E6Cu;
    // 0x232e6c: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x232e70: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x232e70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x232e74: 0x24644b00  addiu       $a0, $v1, 0x4B00
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x232e78: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x232e78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x232e7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x232e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x232e80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x232e84: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x232e84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232e88: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x232e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_232e8c:
    // 0x232e8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x232e8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232e90:
    // 0x232e90: 0xc088a42  jal         func_222908
    ctx->pc = 0x232E90u;
    SET_GPR_U32(ctx, 31, 0x232E98u);
    ctx->pc = 0x232E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232E90u;
    // 0x232e94: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222908u, 0x232E90u, 0x232E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232E98u;
label_232e98:
    // 0x232e98: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x232E98u;
    {
        const bool branch_taken_0x232e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232E98u;
        // 0x232e9c: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e98) {
            ctx->pc = 0x232EE4u;
            goto label_232ee4;
        }
    }
    ctx->pc = 0x232EA0u;
    // 0x232ea0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x232ea4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x232EA4u;
    SET_GPR_U32(ctx, 31, 0x232EACu);
    ctx->pc = 0x232EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232EA4u;
    // 0x232ea8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x232EA4u, 0x232EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EACu;
label_232eac:
    // 0x232eac: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x232eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x232eb0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232EB0u;
    {
        const bool branch_taken_0x232eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EB0u;
        // 0x232eb4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232eb0) {
            ctx->pc = 0x232EE4u;
            goto label_232ee4;
        }
    }
    ctx->pc = 0x232EB8u;
    // 0x232eb8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x232eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x232ebc: 0x8c640158  lw          $a0, 0x158($v1)
    ctx->pc = 0x232ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 344)));
    // 0x232ec0: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x232EC0u;
    {
        const bool branch_taken_0x232ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x232ec0) {
            ctx->pc = 0x232EC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232EC0u;
            // 0x232ec4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232EE4u;
            goto label_232ee4;
        }
    }
    ctx->pc = 0x232EC8u;
    // 0x232ec8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x232ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x232ecc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x232eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x232ed0: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x232ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x232ed4: 0xc10904c  jal         func_424130
    ctx->pc = 0x232ED4u;
    SET_GPR_U32(ctx, 31, 0x232EDCu);
    ctx->pc = 0x232ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232ED4u;
    // 0x232ed8: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x232ED4u, 0x232EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232EDCu;
label_232edc:
    // 0x232edc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x232EDCu;
    {
        const bool branch_taken_0x232edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232edc) {
            ctx->pc = 0x232EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232EDCu;
            // 0x232ee0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x232EE4u;
            goto label_232ee4;
        }
    }
    ctx->pc = 0x232EE4u;
label_232ee4:
    // 0x232ee4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x232EE4u;
    {
        const bool branch_taken_0x232ee4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232EE4u;
        // 0x232ee8: 0x26900257  addiu       $s0, $s4, 0x257 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 599));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232ee4) {
            ctx->pc = 0x232F84u;
            goto label_232f84;
        }
    }
    ctx->pc = 0x232EECu;
    // 0x232eec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x232eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232ef0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x232ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x232ef4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232ef8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232efc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x232efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x232f00: 0x8c472c7c  lw          $a3, 0x2C7C($v0)
    ctx->pc = 0x232f00u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x232f04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x232f08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232f0c: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x232f0cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x232f10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x232f14: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x232f14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x232f18: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x232f18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x232f1c: 0x24c6c398  addiu       $a2, $a2, -0x3C68
    ctx->pc = 0x232f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951832));
    // 0x232f20: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x232f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x232f24: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x232f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x232f28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f2c: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x232f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x232f30: 0x8ce40840  lw          $a0, 0x840($a3)
    ctx->pc = 0x232f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x232f34: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x232f34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f38: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x232f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232f3c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x232f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x232f40: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x232f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x232f44: 0xc0e6250  jal         func_398940
    ctx->pc = 0x232F44u;
    SET_GPR_U32(ctx, 31, 0x232F4Cu);
    ctx->pc = 0x232F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F44u;
    // 0x232f48: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x232F44u, 0x232F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F4Cu;
label_232f4c:
    // 0x232f4c: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x232f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x232f50: 0xc0e4060  jal         func_390180
    ctx->pc = 0x232F50u;
    SET_GPR_U32(ctx, 31, 0x232F58u);
    ctx->pc = 0x232F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F50u;
    // 0x232f54: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x232F50u, 0x232F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F58u;
label_232f58:
    // 0x232f58: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x232F58u;
    SET_GPR_U32(ctx, 31, 0x232F60u);
    ctx->pc = 0x232F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F58u;
    // 0x232f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x232F58u, 0x232F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F60u;
label_232f60:
    // 0x232f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x232f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f64: 0x1200014c  beqz        $s0, . + 4 + (0x14C << 2)
    ctx->pc = 0x232F64u;
    {
        const bool branch_taken_0x232f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F64u;
        // 0x232f68: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f64) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x232F6Cu;
    // 0x232f6c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232f70: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x232f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x232f74: 0xc1078d2  jal         func_41E348
    ctx->pc = 0x232F74u;
    SET_GPR_U32(ctx, 31, 0x232F7Cu);
    ctx->pc = 0x232F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F74u;
    // 0x232f78: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E348u, 0x232F74u, 0x232F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F7Cu;
label_232f7c:
    // 0x232f7c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x232F7Cu;
    {
        const bool branch_taken_0x232f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F7Cu;
        // 0x232f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f7c) {
            ctx->pc = 0x233300u;
            goto label_233300;
        }
    }
    ctx->pc = 0x232F84u;
label_232f84:
    // 0x232f84: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x232f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x232f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x232f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x232f8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f90: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x232F90u;
    SET_GPR_U32(ctx, 31, 0x232F98u);
    ctx->pc = 0x232F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232F90u;
    // 0x232f94: 0x24a5c3a8  addiu       $a1, $a1, -0x3C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x232F90u, 0x232F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232F98u;
label_232f98:
    // 0x232f98: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x232F98u;
    {
        const bool branch_taken_0x232f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232F98u;
        // 0x232f9c: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f98) {
            ctx->pc = 0x233234u;
            goto label_233234;
        }
    }
    ctx->pc = 0x232FA0u;
    // 0x232fa0: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x232fa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x232fa4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x232fa4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x232fa8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x232FA8u;
    {
        const bool branch_taken_0x232fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232FA8u;
        // 0x232fac: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232fa8) {
            ctx->pc = 0x23311Cu;
            goto label_23311c;
        }
    }
    ctx->pc = 0x232FB0u;
    // 0x232fb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fb4: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x232fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x232fb8: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x232FB8u;
    SET_GPR_U32(ctx, 31, 0x232FC0u);
    ctx->pc = 0x232FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232FB8u;
    // 0x232fbc: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x232FB8u, 0x232FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232FC0u;
label_232fc0:
    // 0x232fc0: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x232fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x232fc4: 0x54400135  bnel        $v0, $zero, . + 4 + (0x135 << 2)
    ctx->pc = 0x232FC4u;
    {
        const bool branch_taken_0x232fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232fc4) {
            ctx->pc = 0x232FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x232FC4u;
            // 0x232fc8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23349Cu;
            goto label_23349c;
        }
    }
    ctx->pc = 0x232FCCu;
    // 0x232fcc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x232fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232fd0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x232fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x232fd4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232fd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232fdc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x232fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x232fe0: 0x8c452c7c  lw          $a1, 0x2C7C($v0)
    ctx->pc = 0x232fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x232fe4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x232fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x232fe8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x232fe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x232fec: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x232fecu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x232ff0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x232ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x232ff4: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x232ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x232ff8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x232ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x232ffc: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x232ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x233000: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x233000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x233004: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233008: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23300c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x23300cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233010: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x233010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
    // 0x233014: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x233014u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x233018: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x233018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x23301c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23301cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233020: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x233020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x233024: 0xc0e6250  jal         func_398940
    ctx->pc = 0x233024u;
    SET_GPR_U32(ctx, 31, 0x23302Cu);
    ctx->pc = 0x233028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233024u;
    // 0x233028: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x233024u, 0x23302Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23302Cu;
label_23302c:
    // 0x23302c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x23302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x233030: 0xc0e4060  jal         func_390180
    ctx->pc = 0x233030u;
    SET_GPR_U32(ctx, 31, 0x233038u);
    ctx->pc = 0x233034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233030u;
    // 0x233034: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x233030u, 0x233038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233038u;
label_233038:
    // 0x233038: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x233038u;
    SET_GPR_U32(ctx, 31, 0x233040u);
    ctx->pc = 0x23303Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233038u;
    // 0x23303c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x233038u, 0x233040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233040u;
label_233040:
    // 0x233040: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x233040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233044: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x233048: 0x96450112  lhu         $a1, 0x112($s2)
    ctx->pc = 0x233048u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 274)));
    // 0x23304c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x23304Cu;
    SET_GPR_U32(ctx, 31, 0x233054u);
    ctx->pc = 0x233050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23304Cu;
    // 0x233050: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x23304Cu, 0x233054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233054u;
label_233054:
    // 0x233054: 0x8043005a  lb          $v1, 0x5A($v0)
    ctx->pc = 0x233054u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 90)));
    // 0x233058: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x233058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23305c: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x23305cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x233060: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x233060u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233064: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x233064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233068: 0x0  nop
    ctx->pc = 0x233068u;
    // NOP
    // 0x23306c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23306cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x233070: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x233070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x233074: 0xc4810380  lwc1        $f1, 0x380($a0)
    ctx->pc = 0x233074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233078: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x233078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x23307c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23307cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x233080: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x233084: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x233084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x233088: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x233088u;
    SET_GPR_U32(ctx, 31, 0x233090u);
    ctx->pc = 0x23308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233088u;
    // 0x23308c: 0x73823  negu        $a3, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x233088u, 0x233090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233090u;
label_233090:
    // 0x233090: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x233094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233098: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x233098u;
    SET_GPR_U32(ctx, 31, 0x2330A0u);
    ctx->pc = 0x23309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233098u;
    // 0x23309c: 0x24a5c3b0  addiu       $a1, $a1, -0x3C50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x233098u, 0x2330A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330A0u;
label_2330a0:
    // 0x2330a0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2330A0u;
    {
        const bool branch_taken_0x2330a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330a0) {
            ctx->pc = 0x2330A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330A0u;
            // 0x2330a4: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2330B4u;
            goto label_2330b4;
        }
    }
    ctx->pc = 0x2330A8u;
    // 0x2330a8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x2330a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x2330ac: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2330ACu;
    {
        const bool branch_taken_0x2330ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330ACu;
        // 0x2330b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330ac) {
            ctx->pc = 0x2330F4u;
            goto label_2330f4;
        }
    }
    ctx->pc = 0x2330B4u;
label_2330b4:
    // 0x2330b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2330b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330b8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2330B8u;
    SET_GPR_U32(ctx, 31, 0x2330C0u);
    ctx->pc = 0x2330BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330B8u;
    // 0x2330bc: 0x24a5c3c0  addiu       $a1, $a1, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2330B8u, 0x2330C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330C0u;
label_2330c0:
    // 0x2330c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2330C0u;
    {
        const bool branch_taken_0x2330c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330c0) {
            ctx->pc = 0x2330C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2330C0u;
            // 0x2330c4: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2330D4u;
            goto label_2330d4;
        }
    }
    ctx->pc = 0x2330C8u;
    // 0x2330c8: 0x8e24489c  lw          $a0, 0x489C($s1)
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
    // 0x2330cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2330CCu;
    {
        const bool branch_taken_0x2330cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330CCu;
        // 0x2330d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330cc) {
            ctx->pc = 0x2330F4u;
            goto label_2330f4;
        }
    }
    ctx->pc = 0x2330D4u;
label_2330d4:
    // 0x2330d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2330d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2330d8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2330D8u;
    SET_GPR_U32(ctx, 31, 0x2330E0u);
    ctx->pc = 0x2330DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330D8u;
    // 0x2330dc: 0x24a5c030  addiu       $a1, $a1, -0x3FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2330D8u, 0x2330E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330E0u;
label_2330e0:
    // 0x2330e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2330E0u;
    {
        const bool branch_taken_0x2330e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2330E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330E0u;
        // 0x2330e4: 0x8e24489c  lw          $a0, 0x489C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330e0) {
            ctx->pc = 0x2330F0u;
            goto label_2330f0;
        }
    }
    ctx->pc = 0x2330E8u;
    // 0x2330e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2330E8u;
    {
        const bool branch_taken_0x2330e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2330E8u;
        // 0x2330ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330e8) {
            ctx->pc = 0x2330F4u;
            goto label_2330f4;
        }
    }
    ctx->pc = 0x2330F0u;
label_2330f0:
    // 0x2330f0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2330f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2330f4:
    // 0x2330f4: 0xc1078d2  jal         func_41E348
    ctx->pc = 0x2330F4u;
    SET_GPR_U32(ctx, 31, 0x2330FCu);
    ctx->pc = 0x2330F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2330F4u;
    // 0x2330f8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E348u, 0x2330F4u, 0x2330FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2330FCu;
label_2330fc:
    // 0x2330fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2330fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233100: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233104: 0xc0897f2  jal         func_225FC8
    ctx->pc = 0x233104u;
    SET_GPR_U32(ctx, 31, 0x23310Cu);
    ctx->pc = 0x233108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233104u;
    // 0x233108: 0x2665c3a8  addiu       $a1, $s3, -0x3C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x233104u, 0x23310Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23310Cu;
label_23310c:
    // 0x23310c: 0x124000e2  beqz        $s2, . + 4 + (0xE2 << 2)
    ctx->pc = 0x23310Cu;
    {
        const bool branch_taken_0x23310c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x233110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23310Cu;
        // 0x233110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23310c) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x233114u;
    // 0x233114: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x233114u;
    {
        const bool branch_taken_0x233114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233114) {
            ctx->pc = 0x233224u;
            goto label_233224;
        }
    }
    ctx->pc = 0x23311Cu;
label_23311c:
    // 0x23311c: 0x8e830278  lw          $v1, 0x278($s4)
    ctx->pc = 0x23311cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x233120: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x233124: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x233124u;
    {
        const bool branch_taken_0x233124 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233124u;
        // 0x233128: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233124) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x23312Cu;
    // 0x23312c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23312cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x233130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x233130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x233134: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233138: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x23313c: 0x8c4a2c7c  lw          $t2, 0x2C7C($v0)
    ctx->pc = 0x23313cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x233140: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x233144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x233144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x233148: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x233148u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x23314c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x23314cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x233150: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x233154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233158: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x23315c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x23315cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x233160: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233164: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x233164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233168: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x233168u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23316c: 0x8d440840  lw          $a0, 0x840($t2)
    ctx->pc = 0x23316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 2112)));
    // 0x233170: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x233170u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233174: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x233174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x233178: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x233178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x23317c: 0xc0e6250  jal         func_398940
    ctx->pc = 0x23317Cu;
    SET_GPR_U32(ctx, 31, 0x233184u);
    ctx->pc = 0x233180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23317Cu;
    // 0x233180: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x23317Cu, 0x233184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233184u;
label_233184:
    // 0x233184: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x233184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x233188: 0xc0e4060  jal         func_390180
    ctx->pc = 0x233188u;
    SET_GPR_U32(ctx, 31, 0x233190u);
    ctx->pc = 0x23318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233188u;
    // 0x23318c: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x233188u, 0x233190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233190u;
label_233190:
    // 0x233190: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x233190u;
    SET_GPR_U32(ctx, 31, 0x233198u);
    ctx->pc = 0x233194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233190u;
    // 0x233194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x233190u, 0x233198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233198u;
label_233198:
    // 0x233198: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
    // 0x23319c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23319cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331a0: 0x24a5c3b0  addiu       $a1, $a1, -0x3C50
    ctx->pc = 0x2331a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951856));
    // 0x2331a4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2331A4u;
    SET_GPR_U32(ctx, 31, 0x2331ACu);
    ctx->pc = 0x2331A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331A4u;
    // 0x2331a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2331A4u, 0x2331ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331ACu;
label_2331ac:
    // 0x2331ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2331ACu;
    {
        const bool branch_taken_0x2331ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2331ac) {
            ctx->pc = 0x2331B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2331ACu;
            // 0x2331b0: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331C0u;
            goto label_2331c0;
        }
    }
    ctx->pc = 0x2331B4u;
    // 0x2331b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2331b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2331b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2331B8u;
    {
        const bool branch_taken_0x2331b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331B8u;
        // 0x2331bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331b8) {
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x2331C0u;
label_2331c0:
    // 0x2331c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2331c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331c4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2331C4u;
    SET_GPR_U32(ctx, 31, 0x2331CCu);
    ctx->pc = 0x2331C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331C4u;
    // 0x2331c8: 0x24a5c3c0  addiu       $a1, $a1, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2331C4u, 0x2331CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331CCu;
label_2331cc:
    // 0x2331cc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2331CCu;
    {
        const bool branch_taken_0x2331cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2331cc) {
            ctx->pc = 0x2331D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2331CCu;
            // 0x2331d0: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2331E0u;
            goto label_2331e0;
        }
    }
    ctx->pc = 0x2331D4u;
    // 0x2331d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2331d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2331d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2331D8u;
    {
        const bool branch_taken_0x2331d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331D8u;
        // 0x2331dc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331d8) {
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x2331E0u;
label_2331e0:
    // 0x2331e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2331e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331e4: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x2331E4u;
    SET_GPR_U32(ctx, 31, 0x2331ECu);
    ctx->pc = 0x2331E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331E4u;
    // 0x2331e8: 0x24a5c030  addiu       $a1, $a1, -0x3FD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x2331E4u, 0x2331ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331ECu;
label_2331ec:
    // 0x2331ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2331ECu;
    {
        const bool branch_taken_0x2331ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2331F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331ECu;
        // 0x2331f0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331ec) {
            ctx->pc = 0x2331FCu;
            goto label_2331fc;
        }
    }
    ctx->pc = 0x2331F4u;
    // 0x2331f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2331F4u;
    {
        const bool branch_taken_0x2331f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2331F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2331F4u;
        // 0x2331f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2331f4) {
            ctx->pc = 0x233200u;
            goto label_233200;
        }
    }
    ctx->pc = 0x2331FCu;
label_2331fc:
    // 0x2331fc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2331fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_233200:
    // 0x233200: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x233200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x233204: 0xc1078d2  jal         func_41E348
    ctx->pc = 0x233204u;
    SET_GPR_U32(ctx, 31, 0x23320Cu);
    ctx->pc = 0x233208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233204u;
    // 0x233208: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E348u, 0x233204u, 0x23320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23320Cu;
label_23320c:
    // 0x23320c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23320cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233210: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x233210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233214: 0xc0897f2  jal         func_225FC8
    ctx->pc = 0x233214u;
    SET_GPR_U32(ctx, 31, 0x23321Cu);
    ctx->pc = 0x233218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233214u;
    // 0x233218: 0x2665c3a8  addiu       $a1, $s3, -0x3C58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294951848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225FC8u, 0x233214u, 0x23321Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23321Cu;
label_23321c:
    // 0x23321c: 0x1220009e  beqz        $s1, . + 4 + (0x9E << 2)
    ctx->pc = 0x23321Cu;
    {
        const bool branch_taken_0x23321c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x233220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23321Cu;
        // 0x233220: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23321c) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x233224u;
label_233224:
    // 0x233224: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x233224u;
    SET_GPR_U32(ctx, 31, 0x23322Cu);
    ctx->pc = 0x233228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233224u;
    // 0x233228: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x233224u, 0x23322Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23322Cu;
label_23322c:
    // 0x23322c: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x23322Cu;
    {
        const bool branch_taken_0x23322c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23322Cu;
        // 0x233230: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23322c) {
            ctx->pc = 0x23349Cu;
            goto label_23349c;
        }
    }
    ctx->pc = 0x233234u;
label_233234:
    // 0x233234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233238: 0x14620036  bne         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x233238u;
    {
        const bool branch_taken_0x233238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23323Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233238u;
        // 0x23323c: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233238) {
            ctx->pc = 0x233314u;
            goto label_233314;
        }
    }
    ctx->pc = 0x233240u;
    // 0x233240: 0xc08a200  jal         func_228800
    ctx->pc = 0x233240u;
    SET_GPR_U32(ctx, 31, 0x233248u);
    ctx->pc = 0x233244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233240u;
    // 0x233244: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x233240u, 0x233248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233248u;
label_233248:
    // 0x233248: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x23324c: 0x14600031  bnez        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x23324Cu;
    {
        const bool branch_taken_0x23324c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x233250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23324Cu;
        // 0x233250: 0x8fa4005c  lw          $a0, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23324c) {
            ctx->pc = 0x233314u;
            goto label_233314;
        }
    }
    ctx->pc = 0x233254u;
    // 0x233254: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x233254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x233258: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x233258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x23325c: 0x2484e998  addiu       $a0, $a0, -0x1668
    ctx->pc = 0x23325cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961560));
    // 0x233260: 0xc10904c  jal         func_424130
    ctx->pc = 0x233260u;
    SET_GPR_U32(ctx, 31, 0x233268u);
    ctx->pc = 0x233264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233260u;
    // 0x233264: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424130u, 0x233260u, 0x233268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233268u;
label_233268:
    // 0x233268: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x233268u;
    {
        const bool branch_taken_0x233268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233268u;
        // 0x23326c: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x233268) {
            ctx->pc = 0x233310u;
            goto label_233310;
        }
    }
    ctx->pc = 0x233270u;
    // 0x233270: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x233274: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x233274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x233278: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23327c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x233280: 0x8c472c7c  lw          $a3, 0x2C7C($v0)
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x233284: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x233284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x233288: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x233288u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23328c: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x233290: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x233290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x233294: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x233294u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x233298: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x233298u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x23329c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23329cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332a0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2332a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2332a4: 0x24c6c3d0  addiu       $a2, $a2, -0x3C30
    ctx->pc = 0x2332a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951888));
    // 0x2332a8: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x2332a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x2332ac: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x2332acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2332b0: 0x8ce40840  lw          $a0, 0x840($a3)
    ctx->pc = 0x2332b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x2332b4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x2332b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332b8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2332b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2332bc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2332bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2332c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2332c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2332c4: 0xc0e6250  jal         func_398940
    ctx->pc = 0x2332C4u;
    SET_GPR_U32(ctx, 31, 0x2332CCu);
    ctx->pc = 0x2332C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332C4u;
    // 0x2332c8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x2332C4u, 0x2332CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332CCu;
label_2332cc:
    // 0x2332cc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2332ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2332d0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2332D0u;
    SET_GPR_U32(ctx, 31, 0x2332D8u);
    ctx->pc = 0x2332D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332D0u;
    // 0x2332d4: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2332D0u, 0x2332D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332D8u;
label_2332d8:
    // 0x2332d8: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x2332D8u;
    SET_GPR_U32(ctx, 31, 0x2332E0u);
    ctx->pc = 0x2332DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332D8u;
    // 0x2332dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x2332D8u, 0x2332E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332E0u;
label_2332e0:
    // 0x2332e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2332e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2332e4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2332e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2332e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2332e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2332ec: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2332ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x2332f0: 0xc1078d2  jal         func_41E348
    ctx->pc = 0x2332F0u;
    SET_GPR_U32(ctx, 31, 0x2332F8u);
    ctx->pc = 0x2332F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2332F0u;
    // 0x2332f4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E348u, 0x2332F0u, 0x2332F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2332F8u;
label_2332f8:
    // 0x2332f8: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2332F8u;
    {
        const bool branch_taken_0x2332f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332F8u;
        // 0x2332fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332f8) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x233300u;
label_233300:
    // 0x233300: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x233300u;
    SET_GPR_U32(ctx, 31, 0x233308u);
    ctx->pc = 0x233304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233300u;
    // 0x233304: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x233300u, 0x233308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233308u;
label_233308:
    // 0x233308: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x233308u;
    {
        const bool branch_taken_0x233308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233308u;
        // 0x23330c: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233308) {
            ctx->pc = 0x23349Cu;
            goto label_23349c;
        }
    }
    ctx->pc = 0x233310u;
label_233310:
    // 0x233310: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x233310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_233314:
    // 0x233314: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x233314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x233318: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x23331c: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23331Cu;
    {
        const bool branch_taken_0x23331c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23331Cu;
        // 0x233320: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23331c) {
            ctx->pc = 0x233374u;
            goto label_233374;
        }
    }
    ctx->pc = 0x233324u;
    // 0x233324: 0x8e820370  lw          $v0, 0x370($s4)
    ctx->pc = 0x233324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
    // 0x233328: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x233328u;
    {
        const bool branch_taken_0x233328 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233328) {
            ctx->pc = 0x2333F0u;
            goto label_2333f0;
        }
    }
    ctx->pc = 0x233330u;
    // 0x233330: 0xc08a200  jal         func_228800
    ctx->pc = 0x233330u;
    SET_GPR_U32(ctx, 31, 0x233338u);
    ctx->pc = 0x233334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233330u;
    // 0x233334: 0x8e8400cc  lw          $a0, 0xCC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x233330u, 0x233338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233338u;
label_233338:
    // 0x233338: 0x9044011b  lbu         $a0, 0x11B($v0)
    ctx->pc = 0x233338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x23333c: 0xc6810370  lwc1        $f1, 0x370($s4)
    ctx->pc = 0x23333cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233340: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x233340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x233344: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x233348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23334c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x23334cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x233350: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x233350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x233354: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x233358: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x233358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23335c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x23335cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x233360: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x233360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x233364: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x233364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x233368: 0x11102a  slt         $v0, $zero, $s1
    ctx->pc = 0x233368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x23336c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x23336Cu;
    {
        const bool branch_taken_0x23336c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23336Cu;
        // 0x233370: 0xa2880a  movz        $s1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23336c) {
            ctx->pc = 0x2333F0u;
            goto label_2333f0;
        }
    }
    ctx->pc = 0x233374u;
label_233374:
    // 0x233374: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x233374u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x233378: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x233378u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23337c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x23337Cu;
    {
        const bool branch_taken_0x23337c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23337c) {
            ctx->pc = 0x233380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23337Cu;
            // 0x233380: 0x8e910370  lw          $s1, 0x370($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2333F0u;
            goto label_2333f0;
        }
    }
    ctx->pc = 0x233384u;
    // 0x233384: 0x8e8400cc  lw          $a0, 0xCC($s4)
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x233388: 0xc08a200  jal         func_228800
    ctx->pc = 0x233388u;
    SET_GPR_U32(ctx, 31, 0x233390u);
    ctx->pc = 0x23338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233388u;
    // 0x23338c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x233388u, 0x233390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233390u;
label_233390:
    // 0x233390: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x233390u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x233394: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x233398: 0x8e02489c  lw          $v0, 0x489C($s0)
    ctx->pc = 0x233398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x23339c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2333a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2333a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2333a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2333a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2333a8: 0x80460009  lb          $a2, 0x9($v0)
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 9)));
    // 0x2333ac: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2333ACu;
    SET_GPR_U32(ctx, 31, 0x2333B4u);
    ctx->pc = 0x2333B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333ACu;
    // 0x2333b0: 0x80450008  lb          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2333ACu, 0x2333B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333B4u;
label_2333b4:
    // 0x2333b4: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x2333b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2333b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2333bc: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2333bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x2333c0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2333c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2333c4: 0xc107908  jal         func_41E420
    ctx->pc = 0x2333C4u;
    SET_GPR_U32(ctx, 31, 0x2333CCu);
    ctx->pc = 0x2333C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333C4u;
    // 0x2333c8: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E420u, 0x2333C4u, 0x2333CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333CCu;
label_2333cc:
    // 0x2333cc: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x2333ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x2333d0: 0x51182a  slt         $v1, $v0, $s1
    ctx->pc = 0x2333d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2333d4: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x2333d4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x2333d8: 0x8e850380  lw          $a1, 0x380($s4)
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
    // 0x2333dc: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2333dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2333e0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2333e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2333e4: 0x113823  negu        $a3, $s1
    ctx->pc = 0x2333e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x2333e8: 0xc10796c  jal         func_41E5B0
    ctx->pc = 0x2333E8u;
    SET_GPR_U32(ctx, 31, 0x2333F0u);
    ctx->pc = 0x2333ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2333E8u;
    // 0x2333ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E5B0u, 0x2333E8u, 0x2333F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2333F0u;
label_2333f0:
    // 0x2333f0: 0x1a200029  blez        $s1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2333F0u;
    {
        const bool branch_taken_0x2333f0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2333F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333F0u;
        // 0x2333f4: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333f0) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x2333F8u;
    // 0x2333f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2333f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2333fc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2333fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x233400: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x233404: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x233404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x233408: 0x8c472c7c  lw          $a3, 0x2C7C($v0)
    ctx->pc = 0x233408u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x23340c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x233410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x233410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x233414: 0x8c89bd30  lw          $t1, -0x42D0($a0)
    ctx->pc = 0x233414u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x233418: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x233418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x23341c: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x23341cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x233420: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x233420u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x233424: 0x24c6c3d8  addiu       $a2, $a2, -0x3C28
    ctx->pc = 0x233424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951896));
    // 0x233428: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x233428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x23342c: 0x25081780  addiu       $t0, $t0, 0x1780
    ctx->pc = 0x23342cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6016));
    // 0x233430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233434: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x233434u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x233438: 0x8ce40840  lw          $a0, 0x840($a3)
    ctx->pc = 0x233438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2112)));
    // 0x23343c: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x23343cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233440: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233444: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x233444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x233448: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x233448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x23344c: 0xc0e6250  jal         func_398940
    ctx->pc = 0x23344Cu;
    SET_GPR_U32(ctx, 31, 0x233454u);
    ctx->pc = 0x233450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23344Cu;
    // 0x233450: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x23344Cu, 0x233454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233454u;
label_233454:
    // 0x233454: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x233454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x233458: 0xc0e4060  jal         func_390180
    ctx->pc = 0x233458u;
    SET_GPR_U32(ctx, 31, 0x233460u);
    ctx->pc = 0x23345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233458u;
    // 0x23345c: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x233458u, 0x233460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233460u;
label_233460:
    // 0x233460: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x233460u;
    SET_GPR_U32(ctx, 31, 0x233468u);
    ctx->pc = 0x233464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233460u;
    // 0x233464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x233460u, 0x233468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233468u;
label_233468:
    // 0x233468: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23346c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23346Cu;
    {
        const bool branch_taken_0x23346c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x233470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23346Cu;
        // 0x233470: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23346c) {
            ctx->pc = 0x233494u;
            goto label_233494;
        }
    }
    ctx->pc = 0x233474u;
    // 0x233474: 0xae110124  sw          $s1, 0x124($s0)
    ctx->pc = 0x233474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 17));
    // 0x233478: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x233478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x23347c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23347cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x233480: 0xc1078d2  jal         func_41E348
    ctx->pc = 0x233480u;
    SET_GPR_U32(ctx, 31, 0x233488u);
    ctx->pc = 0x233484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233480u;
    // 0x233484: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E348u, 0x233480u, 0x233488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233488u;
label_233488:
    // 0x233488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23348c: 0xc0e5748  jal         func_395D20
    ctx->pc = 0x23348Cu;
    SET_GPR_U32(ctx, 31, 0x233494u);
    ctx->pc = 0x233490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23348Cu;
    // 0x233490: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395D20u, 0x23348Cu, 0x233494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233494u;
label_233494:
    // 0x233494: 0xae800370  sw          $zero, 0x370($s4)
    ctx->pc = 0x233494u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 880), GPR_U32(ctx, 0));
label_233498:
    // 0x233498: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x233498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_23349c:
    // 0x23349c: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x23349cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2334a0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2334a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2334a4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2334a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2334a8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2334a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2334ac: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2334acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2334b0: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2334b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2334b4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2334b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2334b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2334b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2334bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2334bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2334c0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x2334c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2334c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2334C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334C4u;
        // 0x2334c8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2334CCu;
    // 0x2334cc: 0x0  nop
    ctx->pc = 0x2334ccu;
    // NOP
    ctx->pc = 0x2334d0u;
}
