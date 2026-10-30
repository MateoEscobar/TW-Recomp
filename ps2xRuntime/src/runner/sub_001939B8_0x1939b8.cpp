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

// Function: sub_001939B8
// Address: 0x1939b8 - 0x193c20
void sub_001939B8_0x1939b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001939B8_0x1939b8");
#endif

    switch (ctx->pc) {
        case 0x1939b8u: goto label_1939b8;
        case 0x1939bcu: goto label_1939bc;
        case 0x1939c0u: goto label_1939c0;
        case 0x1939c4u: goto label_1939c4;
        case 0x1939c8u: goto label_1939c8;
        case 0x1939ccu: goto label_1939cc;
        case 0x1939d0u: goto label_1939d0;
        case 0x1939d4u: goto label_1939d4;
        case 0x1939d8u: goto label_1939d8;
        case 0x1939dcu: goto label_1939dc;
        case 0x1939e0u: goto label_1939e0;
        case 0x1939e4u: goto label_1939e4;
        case 0x1939e8u: goto label_1939e8;
        case 0x1939ecu: goto label_1939ec;
        case 0x1939f0u: goto label_1939f0;
        case 0x1939f4u: goto label_1939f4;
        case 0x1939f8u: goto label_1939f8;
        case 0x1939fcu: goto label_1939fc;
        case 0x193a00u: goto label_193a00;
        case 0x193a04u: goto label_193a04;
        case 0x193a08u: goto label_193a08;
        case 0x193a0cu: goto label_193a0c;
        case 0x193a10u: goto label_193a10;
        case 0x193a14u: goto label_193a14;
        case 0x193a18u: goto label_193a18;
        case 0x193a1cu: goto label_193a1c;
        case 0x193a20u: goto label_193a20;
        case 0x193a24u: goto label_193a24;
        case 0x193a28u: goto label_193a28;
        case 0x193a2cu: goto label_193a2c;
        case 0x193a30u: goto label_193a30;
        case 0x193a34u: goto label_193a34;
        case 0x193a38u: goto label_193a38;
        case 0x193a3cu: goto label_193a3c;
        case 0x193a40u: goto label_193a40;
        case 0x193a44u: goto label_193a44;
        case 0x193a48u: goto label_193a48;
        case 0x193a4cu: goto label_193a4c;
        case 0x193a50u: goto label_193a50;
        case 0x193a54u: goto label_193a54;
        case 0x193a58u: goto label_193a58;
        case 0x193a5cu: goto label_193a5c;
        case 0x193a60u: goto label_193a60;
        case 0x193a64u: goto label_193a64;
        case 0x193a68u: goto label_193a68;
        case 0x193a6cu: goto label_193a6c;
        case 0x193a70u: goto label_193a70;
        case 0x193a74u: goto label_193a74;
        case 0x193a78u: goto label_193a78;
        case 0x193a7cu: goto label_193a7c;
        case 0x193a80u: goto label_193a80;
        case 0x193a84u: goto label_193a84;
        case 0x193a88u: goto label_193a88;
        case 0x193a8cu: goto label_193a8c;
        case 0x193a90u: goto label_193a90;
        case 0x193a94u: goto label_193a94;
        case 0x193a98u: goto label_193a98;
        case 0x193a9cu: goto label_193a9c;
        case 0x193aa0u: goto label_193aa0;
        case 0x193aa4u: goto label_193aa4;
        case 0x193aa8u: goto label_193aa8;
        case 0x193aacu: goto label_193aac;
        case 0x193ab0u: goto label_193ab0;
        case 0x193ab4u: goto label_193ab4;
        case 0x193ab8u: goto label_193ab8;
        case 0x193abcu: goto label_193abc;
        case 0x193ac0u: goto label_193ac0;
        case 0x193ac4u: goto label_193ac4;
        case 0x193ac8u: goto label_193ac8;
        case 0x193accu: goto label_193acc;
        case 0x193ad0u: goto label_193ad0;
        case 0x193ad4u: goto label_193ad4;
        case 0x193ad8u: goto label_193ad8;
        case 0x193adcu: goto label_193adc;
        case 0x193ae0u: goto label_193ae0;
        case 0x193ae4u: goto label_193ae4;
        case 0x193ae8u: goto label_193ae8;
        case 0x193aecu: goto label_193aec;
        case 0x193af0u: goto label_193af0;
        case 0x193af4u: goto label_193af4;
        case 0x193af8u: goto label_193af8;
        case 0x193afcu: goto label_193afc;
        case 0x193b00u: goto label_193b00;
        case 0x193b04u: goto label_193b04;
        case 0x193b08u: goto label_193b08;
        case 0x193b0cu: goto label_193b0c;
        case 0x193b10u: goto label_193b10;
        case 0x193b14u: goto label_193b14;
        case 0x193b18u: goto label_193b18;
        case 0x193b1cu: goto label_193b1c;
        case 0x193b20u: goto label_193b20;
        case 0x193b24u: goto label_193b24;
        case 0x193b28u: goto label_193b28;
        case 0x193b2cu: goto label_193b2c;
        case 0x193b30u: goto label_193b30;
        case 0x193b34u: goto label_193b34;
        case 0x193b38u: goto label_193b38;
        case 0x193b3cu: goto label_193b3c;
        case 0x193b40u: goto label_193b40;
        case 0x193b44u: goto label_193b44;
        case 0x193b48u: goto label_193b48;
        case 0x193b4cu: goto label_193b4c;
        case 0x193b50u: goto label_193b50;
        case 0x193b54u: goto label_193b54;
        case 0x193b58u: goto label_193b58;
        case 0x193b5cu: goto label_193b5c;
        case 0x193b60u: goto label_193b60;
        case 0x193b64u: goto label_193b64;
        case 0x193b68u: goto label_193b68;
        case 0x193b6cu: goto label_193b6c;
        case 0x193b70u: goto label_193b70;
        case 0x193b74u: goto label_193b74;
        case 0x193b78u: goto label_193b78;
        case 0x193b7cu: goto label_193b7c;
        case 0x193b80u: goto label_193b80;
        case 0x193b84u: goto label_193b84;
        case 0x193b88u: goto label_193b88;
        case 0x193b8cu: goto label_193b8c;
        case 0x193b90u: goto label_193b90;
        case 0x193b94u: goto label_193b94;
        case 0x193b98u: goto label_193b98;
        case 0x193b9cu: goto label_193b9c;
        case 0x193ba0u: goto label_193ba0;
        case 0x193ba4u: goto label_193ba4;
        case 0x193ba8u: goto label_193ba8;
        case 0x193bacu: goto label_193bac;
        case 0x193bb0u: goto label_193bb0;
        case 0x193bb4u: goto label_193bb4;
        case 0x193bb8u: goto label_193bb8;
        case 0x193bbcu: goto label_193bbc;
        case 0x193bc0u: goto label_193bc0;
        case 0x193bc4u: goto label_193bc4;
        case 0x193bc8u: goto label_193bc8;
        case 0x193bccu: goto label_193bcc;
        case 0x193bd0u: goto label_193bd0;
        case 0x193bd4u: goto label_193bd4;
        case 0x193bd8u: goto label_193bd8;
        case 0x193bdcu: goto label_193bdc;
        case 0x193be0u: goto label_193be0;
        case 0x193be4u: goto label_193be4;
        case 0x193be8u: goto label_193be8;
        case 0x193becu: goto label_193bec;
        case 0x193bf0u: goto label_193bf0;
        case 0x193bf4u: goto label_193bf4;
        case 0x193bf8u: goto label_193bf8;
        case 0x193bfcu: goto label_193bfc;
        case 0x193c00u: goto label_193c00;
        case 0x193c04u: goto label_193c04;
        case 0x193c08u: goto label_193c08;
        case 0x193c0cu: goto label_193c0c;
        case 0x193c10u: goto label_193c10;
        case 0x193c14u: goto label_193c14;
        case 0x193c18u: goto label_193c18;
        case 0x193c1cu: goto label_193c1c;
        default: break;
    }

    ctx->pc = 0x1939b8u;

label_1939b8:
    // 0x1939b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1939b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1939bc:
    // 0x1939bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1939bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1939c0:
    // 0x1939c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1939c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1939c4:
    // 0x1939c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1939c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1939c8:
    // 0x1939c8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1939c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1939cc:
    // 0x1939cc: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x1939ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_1939d0:
    // 0x1939d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1939d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1939d4:
    // 0x1939d4: 0x3c190051  lui         $t9, 0x51
    ctx->pc = 0x1939d4u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)81 << 16));
label_1939d8:
    // 0x1939d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1939d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1939dc:
    // 0x1939dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1939dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1939e0:
    // 0x1939e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1939e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1939e4:
    // 0x1939e4: 0x2672e030  addiu       $s2, $s3, -0x1FD0
    ctx->pc = 0x1939e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959152));
label_1939e8:
    // 0x1939e8: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1939e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1939ec:
    // 0x1939ec: 0x3c180051  lui         $t8, 0x51
    ctx->pc = 0x1939ecu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)81 << 16));
label_1939f0:
    // 0x1939f0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1939f4:
    // 0x1939f4: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x1939f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_1939f8:
    // 0x1939f8: 0xb1980  sll         $v1, $t3, 6
    ctx->pc = 0x1939f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
label_1939fc:
    // 0x1939fc: 0xc604ce14  lwc1        $f4, -0x31EC($s0)
    ctx->pc = 0x1939fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294954516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_193a00:
    // 0x193a00: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_193a04:
    if (ctx->pc == 0x193A04u) {
        ctx->pc = 0x193A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A00u;
        // 0x193a04: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A08u;
        goto label_193a08;
    }
    ctx->pc = 0x193A00u;
    {
        const bool branch_taken_0x193a00 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x193A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A00u;
        // 0x193a04: 0x40602d  daddu       $t4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a00) {
            ctx->pc = 0x193A0Cu;
            goto label_193a0c;
        }
    }
    ctx->pc = 0x193A08u;
label_193a08:
    // 0x193a08: 0xc6023  negu        $t4, $t4
    ctx->pc = 0x193a08u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_193a0c:
    // 0x193a0c: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x193a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
label_193a10:
    // 0x193a10: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x193a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_193a14:
    // 0x193a14: 0x248d0001  addiu       $t5, $a0, 0x1
    ctx->pc = 0x193a14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_193a18:
    // 0x193a18: 0x93aa0000  lbu         $t2, 0x0($sp)
    ctx->pc = 0x193a18u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_193a1c:
    // 0x193a1c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x193a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_193a20:
    // 0x193a20: 0x93a90001  lbu         $t1, 0x1($sp)
    ctx->pc = 0x193a20u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_193a24:
    // 0x193a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193a28:
    // 0x193a28: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x193a28u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_193a2c:
    // 0x193a2c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x193a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_193a30:
    // 0x193a30: 0x272fce40  addiu       $t7, $t9, -0x31C0
    ctx->pc = 0x193a30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 25), 4294954560));
label_193a34:
    // 0x193a34: 0x270ece30  addiu       $t6, $t8, -0x31D0
    ctx->pc = 0x193a34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 4294954544));
label_193a38:
    // 0x193a38: 0x24a2fffc  addiu       $v0, $a1, -0x4
    ctx->pc = 0x193a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_193a3c:
    // 0x193a3c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_193a40:
    if (ctx->pc == 0x193A40u) {
        ctx->pc = 0x193A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A3Cu;
        // 0x193a40: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A44u;
        goto label_193a44;
    }
    ctx->pc = 0x193A3Cu;
    {
        const bool branch_taken_0x193a3c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193a3c) {
            ctx->pc = 0x193A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A3Cu;
            // 0x193a40: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A44u;
            goto label_193a44;
        }
    }
    ctx->pc = 0x193A44u;
label_193a44:
    // 0x193a44: 0x1822021  addu        $a0, $t4, $v0
    ctx->pc = 0x193a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_193a48:
    // 0x193a48: 0x15060002  bne         $t0, $a2, . + 4 + (0x2 << 2)
label_193a4c:
    if (ctx->pc == 0x193A4Cu) {
        ctx->pc = 0x193A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A48u;
        // 0x193a4c: 0x8e1021  addu        $v0, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A50u;
        goto label_193a50;
    }
    ctx->pc = 0x193A48u;
    {
        const bool branch_taken_0x193a48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x193A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A48u;
        // 0x193a4c: 0x8e1021  addu        $v0, $a0, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a48) {
            ctx->pc = 0x193A54u;
            goto label_193a54;
        }
    }
    ctx->pc = 0x193A50u;
label_193a50:
    // 0x193a50: 0x8f1021  addu        $v0, $a0, $t7
    ctx->pc = 0x193a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
label_193a54:
    // 0x193a54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x193a54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_193a58:
    // 0x193a58: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x193a58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_193a5c:
    // 0x193a5c: 0x15060003  bne         $t0, $a2, . + 4 + (0x3 << 2)
label_193a60:
    if (ctx->pc == 0x193A60u) {
        ctx->pc = 0x193A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A5Cu;
        // 0x193a60: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A64u;
        goto label_193a64;
    }
    ctx->pc = 0x193A5Cu;
    {
        const bool branch_taken_0x193a5c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 6));
        ctx->pc = 0x193A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A5Cu;
        // 0x193a60: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a5c) {
            ctx->pc = 0x193A6Cu;
            goto label_193a6c;
        }
    }
    ctx->pc = 0x193A64u;
label_193a64:
    // 0x193a64: 0x10000005  b           . + 4 + (0x5 << 2)
label_193a68:
    if (ctx->pc == 0x193A68u) {
        ctx->pc = 0x193A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A64u;
        // 0x193a68: 0x46052002  mul.s       $f0, $f4, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A6Cu;
        goto label_193a6c;
    }
    ctx->pc = 0x193A64u;
    {
        const bool branch_taken_0x193a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A64u;
        // 0x193a68: 0x46052002  mul.s       $f0, $f4, $f5 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a64) {
            ctx->pc = 0x193A7Cu;
            goto label_193a7c;
        }
    }
    ctx->pc = 0x193A6Cu;
label_193a6c:
    // 0x193a6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193a70:
    // 0x193a70: 0x0  nop
    ctx->pc = 0x193a70u;
    // NOP
label_193a74:
    // 0x193a74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193a74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193a78:
    // 0x193a78: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x193a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_193a7c:
    // 0x193a7c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193a7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_193a80:
    // 0x193a80: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x193a80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_193a84:
    // 0x193a84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193a88:
    // 0x193a88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193a8c:
    // 0x193a8c: 0x0  nop
    ctx->pc = 0x193a8cu;
    // NOP
label_193a90:
    // 0x193a90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_193a94:
    // 0x193a94: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x193a94u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_193a98:
    // 0x193a98: 0x0  nop
    ctx->pc = 0x193a98u;
    // NOP
label_193a9c:
    // 0x193a9c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x193a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_193aa0:
    // 0x193aa0: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x193aa0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_193aa4:
    // 0x193aa4: 0x0  nop
    ctx->pc = 0x193aa4u;
    // NOP
label_193aa8:
    // 0x193aa8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x193aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_193aac:
    // 0x193aac: 0x44871800  mtc1        $a3, $f3
    ctx->pc = 0x193aacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_193ab0:
    // 0x193ab0: 0x0  nop
    ctx->pc = 0x193ab0u;
    // NOP
label_193ab4:
    // 0x193ab4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x193ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_193ab8:
    // 0x193ab8: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x193ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_193abc:
    // 0x193abc: 0xe4610020  swc1        $f1, 0x20($v1)
    ctx->pc = 0x193abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_193ac0:
    // 0x193ac0: 0xe4620024  swc1        $f2, 0x24($v1)
    ctx->pc = 0x193ac0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_193ac4:
    // 0x193ac4: 0xe4630028  swc1        $f3, 0x28($v1)
    ctx->pc = 0x193ac4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_193ac8:
    // 0x193ac8: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_193acc:
    // 0x193acc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x193accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_193ad0:
    // 0x193ad0: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x193ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_193ad4:
    // 0x193ad4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_193ad8:
    if (ctx->pc == 0x193AD8u) {
        ctx->pc = 0x193AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AD4u;
        // 0x193ad8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193ADCu;
        goto label_193adc;
    }
    ctx->pc = 0x193AD4u;
    {
        const bool branch_taken_0x193ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AD4u;
        // 0x193ad8: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ad4) {
            ctx->pc = 0x193A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193a38;
        }
    }
    ctx->pc = 0x193ADCu;
label_193adc:
    // 0x193adc: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x193adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_193ae0:
    // 0x193ae0: 0x2c820009  sltiu       $v0, $a0, 0x9
    ctx->pc = 0x193ae0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_193ae4:
    // 0x193ae4: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_193ae8:
    if (ctx->pc == 0x193AE8u) {
        ctx->pc = 0x193AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AE4u;
        // 0x193ae8: 0x2482fffc  addiu       $v0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AECu;
        goto label_193aec;
    }
    ctx->pc = 0x193AE4u;
    {
        const bool branch_taken_0x193ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AE4u;
        // 0x193ae8: 0x2482fffc  addiu       $v0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193ae4) {
            ctx->pc = 0x1939F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1939f8;
        }
    }
    ctx->pc = 0x193AECu;
label_193aec:
    // 0x193aec: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_193af0:
    // 0x193af0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x193af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_193af4:
    // 0x193af4: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_193af8:
    // 0x193af8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193afc:
    // 0x193afc: 0x40f809  jalr        $v0
label_193b00:
    if (ctx->pc == 0x193B00u) {
        ctx->pc = 0x193B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AFCu;
        // 0x193b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B04u;
        goto label_193b04;
    }
    ctx->pc = 0x193AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B04u);
        ctx->pc = 0x193B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AFCu;
        // 0x193b00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AFCu, 0x193B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B04u;
label_193b04:
    // 0x193b04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b08:
    // 0x193b08: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_193b0c:
    // 0x193b0c: 0x40f809  jalr        $v0
label_193b10:
    if (ctx->pc == 0x193B10u) {
        ctx->pc = 0x193B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B0Cu;
        // 0x193b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B14u;
        goto label_193b14;
    }
    ctx->pc = 0x193B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B14u);
        ctx->pc = 0x193B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B0Cu;
        // 0x193b10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B0Cu, 0x193B14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B14u;
label_193b14:
    // 0x193b14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b18:
    // 0x193b18: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x193b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_193b1c:
    // 0x193b1c: 0x40f809  jalr        $v0
label_193b20:
    if (ctx->pc == 0x193B20u) {
        ctx->pc = 0x193B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B1Cu;
        // 0x193b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B24u;
        goto label_193b24;
    }
    ctx->pc = 0x193B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B24u);
        ctx->pc = 0x193B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B1Cu;
        // 0x193b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B1Cu, 0x193B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B24u;
label_193b24:
    // 0x193b24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b28:
    // 0x193b28: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_193b2c:
    // 0x193b2c: 0x40f809  jalr        $v0
label_193b30:
    if (ctx->pc == 0x193B30u) {
        ctx->pc = 0x193B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B2Cu;
        // 0x193b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B34u;
        goto label_193b34;
    }
    ctx->pc = 0x193B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B34u);
        ctx->pc = 0x193B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B2Cu;
        // 0x193b30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B2Cu, 0x193B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B34u;
label_193b34:
    // 0x193b34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b38:
    // 0x193b38: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193b3c:
    // 0x193b3c: 0x40f809  jalr        $v0
label_193b40:
    if (ctx->pc == 0x193B40u) {
        ctx->pc = 0x193B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B3Cu;
        // 0x193b40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B44u;
        goto label_193b44;
    }
    ctx->pc = 0x193B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B44u);
        ctx->pc = 0x193B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B3Cu;
        // 0x193b40: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B3Cu, 0x193B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B44u;
label_193b44:
    // 0x193b44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b48:
    // 0x193b48: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_193b4c:
    // 0x193b4c: 0x40f809  jalr        $v0
label_193b50:
    if (ctx->pc == 0x193B50u) {
        ctx->pc = 0x193B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B4Cu;
        // 0x193b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B54u;
        goto label_193b54;
    }
    ctx->pc = 0x193B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B54u);
        ctx->pc = 0x193B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B4Cu;
        // 0x193b50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B4Cu, 0x193B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B54u;
label_193b54:
    // 0x193b54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b58:
    // 0x193b58: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x193b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_193b5c:
    // 0x193b5c: 0x40f809  jalr        $v0
label_193b60:
    if (ctx->pc == 0x193B60u) {
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B64u;
        goto label_193b64;
    }
    ctx->pc = 0x193B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B64u);
        ctx->pc = 0x193B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B5Cu;
        // 0x193b60: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B5Cu, 0x193B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B64u;
label_193b64:
    // 0x193b64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b68:
    // 0x193b68: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_193b6c:
    // 0x193b6c: 0x40f809  jalr        $v0
label_193b70:
    if (ctx->pc == 0x193B70u) {
        ctx->pc = 0x193B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B6Cu;
        // 0x193b70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B74u;
        goto label_193b74;
    }
    ctx->pc = 0x193B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B74u);
        ctx->pc = 0x193B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B6Cu;
        // 0x193b70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B6Cu, 0x193B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B74u;
label_193b74:
    // 0x193b74: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x193b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_193b78:
    // 0x193b78: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x193b78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_193b7c:
    // 0x193b7c: 0x24e7f470  addiu       $a3, $a3, -0xB90
    ctx->pc = 0x193b7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964336));
label_193b80:
    // 0x193b80: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_193b84:
    // 0x193b84: 0x24080180  addiu       $t0, $zero, 0x180
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_193b88:
    // 0x193b88: 0x2665e030  addiu       $a1, $s3, -0x1FD0
    ctx->pc = 0x193b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294959152));
label_193b8c:
    // 0x193b8c: 0x40f809  jalr        $v0
label_193b90:
    if (ctx->pc == 0x193B90u) {
        ctx->pc = 0x193B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B8Cu;
        // 0x193b90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193B94u;
        goto label_193b94;
    }
    ctx->pc = 0x193B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193B94u);
        ctx->pc = 0x193B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B8Cu;
        // 0x193b90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B8Cu, 0x193B94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193B94u;
label_193b94:
    // 0x193b94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193b98:
    // 0x193b98: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_193b9c:
    // 0x193b9c: 0x40f809  jalr        $v0
label_193ba0:
    if (ctx->pc == 0x193BA0u) {
        ctx->pc = 0x193BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B9Cu;
        // 0x193ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BA4u;
        goto label_193ba4;
    }
    ctx->pc = 0x193B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193BA4u);
        ctx->pc = 0x193BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193B9Cu;
        // 0x193ba0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193B9Cu, 0x193BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BA4u;
label_193ba4:
    // 0x193ba4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193ba8:
    // 0x193ba8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_193bac:
    // 0x193bac: 0x40f809  jalr        $v0
label_193bb0:
    if (ctx->pc == 0x193BB0u) {
        ctx->pc = 0x193BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BACu;
        // 0x193bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BB4u;
        goto label_193bb4;
    }
    ctx->pc = 0x193BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193BB4u);
        ctx->pc = 0x193BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BACu;
        // 0x193bb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BACu, 0x193BB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BB4u;
label_193bb4:
    // 0x193bb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193bb8:
    // 0x193bb8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_193bbc:
    // 0x193bbc: 0x40f809  jalr        $v0
label_193bc0:
    if (ctx->pc == 0x193BC0u) {
        ctx->pc = 0x193BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BBCu;
        // 0x193bc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BC4u;
        goto label_193bc4;
    }
    ctx->pc = 0x193BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193BC4u);
        ctx->pc = 0x193BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BBCu;
        // 0x193bc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BBCu, 0x193BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BC4u;
label_193bc4:
    // 0x193bc4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193bc8:
    // 0x193bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x193bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193bcc:
    // 0x193bcc: 0x40f809  jalr        $v0
label_193bd0:
    if (ctx->pc == 0x193BD0u) {
        ctx->pc = 0x193BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BCCu;
        // 0x193bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BD4u;
        goto label_193bd4;
    }
    ctx->pc = 0x193BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193BD4u);
        ctx->pc = 0x193BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BCCu;
        // 0x193bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BCCu, 0x193BD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BD4u;
label_193bd4:
    // 0x193bd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193bd8:
    // 0x193bd8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x193bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_193bdc:
    // 0x193bdc: 0x40f809  jalr        $v0
label_193be0:
    if (ctx->pc == 0x193BE0u) {
        ctx->pc = 0x193BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BDCu;
        // 0x193be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BE4u;
        goto label_193be4;
    }
    ctx->pc = 0x193BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193BE4u);
        ctx->pc = 0x193BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BDCu;
        // 0x193be0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BDCu, 0x193BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BE4u;
label_193be4:
    // 0x193be4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193be8:
    // 0x193be8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x193be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_193bec:
    // 0x193bec: 0x40f809  jalr        $v0
label_193bf0:
    if (ctx->pc == 0x193BF0u) {
        ctx->pc = 0x193BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BECu;
        // 0x193bf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193BF4u;
        goto label_193bf4;
    }
    ctx->pc = 0x193BECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193BF4u);
        ctx->pc = 0x193BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BECu;
        // 0x193bf0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BECu, 0x193BF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193BF4u;
label_193bf4:
    // 0x193bf4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x193bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_193bf8:
    // 0x193bf8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x193bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_193bfc:
    // 0x193bfc: 0x40f809  jalr        $v0
label_193c00:
    if (ctx->pc == 0x193C00u) {
        ctx->pc = 0x193C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BFCu;
        // 0x193c00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C04u;
        goto label_193c04;
    }
    ctx->pc = 0x193BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193C04u);
        ctx->pc = 0x193C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193BFCu;
        // 0x193c00: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193BFCu, 0x193C04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193C04u;
label_193c04:
    // 0x193c04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x193c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_193c08:
    // 0x193c08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x193c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_193c0c:
    // 0x193c0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x193c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_193c10:
    // 0x193c10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x193c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_193c14:
    // 0x193c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x193c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193c18:
    // 0x193c18: 0x3e00008  jr          $ra
label_193c1c:
    if (ctx->pc == 0x193C1Cu) {
        ctx->pc = 0x193C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C18u;
        // 0x193c1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193C20u;
        goto label_fallthrough_0x193c18;
    }
    ctx->pc = 0x193C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193C18u;
        // 0x193c1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x193c18:
    ctx->pc = 0x193C20u;
}
