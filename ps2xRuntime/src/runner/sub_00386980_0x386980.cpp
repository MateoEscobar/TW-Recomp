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

// Function: sub_00386980
// Address: 0x386980 - 0x386b30
void sub_00386980_0x386980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386980_0x386980");
#endif

    switch (ctx->pc) {
        case 0x386980u: goto label_386980;
        case 0x386984u: goto label_386984;
        case 0x386988u: goto label_386988;
        case 0x38698cu: goto label_38698c;
        case 0x386990u: goto label_386990;
        case 0x386994u: goto label_386994;
        case 0x386998u: goto label_386998;
        case 0x38699cu: goto label_38699c;
        case 0x3869a0u: goto label_3869a0;
        case 0x3869a4u: goto label_3869a4;
        case 0x3869a8u: goto label_3869a8;
        case 0x3869acu: goto label_3869ac;
        case 0x3869b0u: goto label_3869b0;
        case 0x3869b4u: goto label_3869b4;
        case 0x3869b8u: goto label_3869b8;
        case 0x3869bcu: goto label_3869bc;
        case 0x3869c0u: goto label_3869c0;
        case 0x3869c4u: goto label_3869c4;
        case 0x3869c8u: goto label_3869c8;
        case 0x3869ccu: goto label_3869cc;
        case 0x3869d0u: goto label_3869d0;
        case 0x3869d4u: goto label_3869d4;
        case 0x3869d8u: goto label_3869d8;
        case 0x3869dcu: goto label_3869dc;
        case 0x3869e0u: goto label_3869e0;
        case 0x3869e4u: goto label_3869e4;
        case 0x3869e8u: goto label_3869e8;
        case 0x3869ecu: goto label_3869ec;
        case 0x3869f0u: goto label_3869f0;
        case 0x3869f4u: goto label_3869f4;
        case 0x3869f8u: goto label_3869f8;
        case 0x3869fcu: goto label_3869fc;
        case 0x386a00u: goto label_386a00;
        case 0x386a04u: goto label_386a04;
        case 0x386a08u: goto label_386a08;
        case 0x386a0cu: goto label_386a0c;
        case 0x386a10u: goto label_386a10;
        case 0x386a14u: goto label_386a14;
        case 0x386a18u: goto label_386a18;
        case 0x386a1cu: goto label_386a1c;
        case 0x386a20u: goto label_386a20;
        case 0x386a24u: goto label_386a24;
        case 0x386a28u: goto label_386a28;
        case 0x386a2cu: goto label_386a2c;
        case 0x386a30u: goto label_386a30;
        case 0x386a34u: goto label_386a34;
        case 0x386a38u: goto label_386a38;
        case 0x386a3cu: goto label_386a3c;
        case 0x386a40u: goto label_386a40;
        case 0x386a44u: goto label_386a44;
        case 0x386a48u: goto label_386a48;
        case 0x386a4cu: goto label_386a4c;
        case 0x386a50u: goto label_386a50;
        case 0x386a54u: goto label_386a54;
        case 0x386a58u: goto label_386a58;
        case 0x386a5cu: goto label_386a5c;
        case 0x386a60u: goto label_386a60;
        case 0x386a64u: goto label_386a64;
        case 0x386a68u: goto label_386a68;
        case 0x386a6cu: goto label_386a6c;
        case 0x386a70u: goto label_386a70;
        case 0x386a74u: goto label_386a74;
        case 0x386a78u: goto label_386a78;
        case 0x386a7cu: goto label_386a7c;
        case 0x386a80u: goto label_386a80;
        case 0x386a84u: goto label_386a84;
        case 0x386a88u: goto label_386a88;
        case 0x386a8cu: goto label_386a8c;
        case 0x386a90u: goto label_386a90;
        case 0x386a94u: goto label_386a94;
        case 0x386a98u: goto label_386a98;
        case 0x386a9cu: goto label_386a9c;
        case 0x386aa0u: goto label_386aa0;
        case 0x386aa4u: goto label_386aa4;
        case 0x386aa8u: goto label_386aa8;
        case 0x386aacu: goto label_386aac;
        case 0x386ab0u: goto label_386ab0;
        case 0x386ab4u: goto label_386ab4;
        case 0x386ab8u: goto label_386ab8;
        case 0x386abcu: goto label_386abc;
        case 0x386ac0u: goto label_386ac0;
        case 0x386ac4u: goto label_386ac4;
        case 0x386ac8u: goto label_386ac8;
        case 0x386accu: goto label_386acc;
        case 0x386ad0u: goto label_386ad0;
        case 0x386ad4u: goto label_386ad4;
        case 0x386ad8u: goto label_386ad8;
        case 0x386adcu: goto label_386adc;
        case 0x386ae0u: goto label_386ae0;
        case 0x386ae4u: goto label_386ae4;
        case 0x386ae8u: goto label_386ae8;
        case 0x386aecu: goto label_386aec;
        case 0x386af0u: goto label_386af0;
        case 0x386af4u: goto label_386af4;
        case 0x386af8u: goto label_386af8;
        case 0x386afcu: goto label_386afc;
        case 0x386b00u: goto label_386b00;
        case 0x386b04u: goto label_386b04;
        case 0x386b08u: goto label_386b08;
        case 0x386b0cu: goto label_386b0c;
        case 0x386b10u: goto label_386b10;
        case 0x386b14u: goto label_386b14;
        case 0x386b18u: goto label_386b18;
        case 0x386b1cu: goto label_386b1c;
        case 0x386b20u: goto label_386b20;
        case 0x386b24u: goto label_386b24;
        case 0x386b28u: goto label_386b28;
        case 0x386b2cu: goto label_386b2c;
        default: break;
    }

    ctx->pc = 0x386980u;

label_386980:
    // 0x386980: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x386980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_386984:
    // 0x386984: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x386984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_386988:
    // 0x386988: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x386988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_38698c:
    // 0x38698c: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x38698cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_386990:
    // 0x386990: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x386990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_386994:
    // 0x386994: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x386994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_386998:
    // 0x386998: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x386998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_38699c:
    // 0x38699c: 0x2451dfd8  addiu       $s1, $v0, -0x2028
    ctx->pc = 0x38699cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959064));
label_3869a0:
    // 0x3869a0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3869a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_3869a4:
    // 0x3869a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3869a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3869a8:
    // 0x3869a8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3869a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_3869ac:
    // 0x3869ac: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x3869acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3869b0:
    // 0x3869b0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3869b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3869b4:
    // 0x3869b4: 0x263000e0  addiu       $s0, $s1, 0xE0
    ctx->pc = 0x3869b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_3869b8:
    // 0x3869b8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3869b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3869bc:
    // 0x3869bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3869bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3869c0:
    // 0x3869c0: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3869c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_3869c4:
    // 0x3869c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3869c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3869c8:
    // 0x3869c8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3869c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_3869cc:
    // 0x3869cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3869ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3869d0:
    // 0x3869d0: 0x92440002  lbu         $a0, 0x2($s2)
    ctx->pc = 0x3869d0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_3869d4:
    // 0x3869d4: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x3869d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
label_3869d8:
    // 0x3869d8: 0xa2400003  sb          $zero, 0x3($s2)
    ctx->pc = 0x3869d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 0));
label_3869dc:
    // 0x3869dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3869dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3869e0:
    // 0x3869e0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3869e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3869e4:
    // 0x3869e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3869e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3869e8:
    // 0x3869e8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3869e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3869ec:
    // 0x3869ec: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x3869ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_3869f0:
    // 0x3869f0: 0xc136850  jal         func_4DA140
label_3869f4:
    if (ctx->pc == 0x3869F4u) {
        ctx->pc = 0x3869F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869F0u;
        // 0x3869f4: 0xffa80030  sd          $t0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3869F8u;
        goto label_3869f8;
    }
    ctx->pc = 0x3869F0u;
    SET_GPR_U32(ctx, 31, 0x3869F8u);
    ctx->pc = 0x3869F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3869F0u;
    // 0x3869f4: 0xffa80030  sd          $t0, 0x30($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DA140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DA140u, 0x3869F0u, 0x3869F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3869F8u;
label_3869f8:
    // 0x3869f8: 0x54500002  bnel        $v0, $s0, . + 4 + (0x2 << 2)
label_3869fc:
    if (ctx->pc == 0x3869FCu) {
        ctx->pc = 0x3869FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3869F8u;
        // 0x3869fc: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386A00u;
        goto label_386a00;
    }
    ctx->pc = 0x3869F8u;
    {
        const bool branch_taken_0x3869f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3869f8) {
            ctx->pc = 0x3869FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3869F8u;
            // 0x3869fc: 0xdc420000  ld          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x386A04u;
            goto label_386a04;
        }
    }
    ctx->pc = 0x386A00u;
label_386a00:
    // 0x386a00: 0xde2200d8  ld          $v0, 0xD8($s1)
    ctx->pc = 0x386a00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 216)));
label_386a04:
    // 0x386a04: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x386a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_386a08:
    // 0x386a08: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x386a08u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_386a0c:
    // 0x386a0c: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x386a0cu;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_386a10:
    // 0x386a10: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x386a10u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_386a14:
    // 0x386a14: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x386a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_386a18:
    // 0x386a18: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x386a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_386a1c:
    // 0x386a1c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x386a1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_386a20:
    // 0x386a20: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x386a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_386a24:
    // 0x386a24: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_386a28:
    if (ctx->pc == 0x386A28u) {
        ctx->pc = 0x386A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A24u;
        // 0x386a28: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386A2Cu;
        goto label_386a2c;
    }
    ctx->pc = 0x386A24u;
    {
        const bool branch_taken_0x386a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x386A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A24u;
        // 0x386a28: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386a24) {
            ctx->pc = 0x386AD8u;
            goto label_386ad8;
        }
    }
    ctx->pc = 0x386A2Cu;
label_386a2c:
    // 0x386a2c: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x386a2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_386a30:
    // 0x386a30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x386a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_386a34:
    // 0x386a34: 0x8fc7b9c0  lw          $a3, -0x4640($fp)
    ctx->pc = 0x386a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949312)));
label_386a38:
    // 0x386a38: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x386a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_386a3c:
    // 0x386a3c: 0x2457df58  addiu       $s7, $v0, -0x20A8
    ctx->pc = 0x386a3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958936));
label_386a40:
    // 0x386a40: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x386a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_386a44:
    // 0x386a44: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x386a44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_386a48:
    // 0x386a48: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x386a48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_386a4c:
    // 0x386a4c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x386a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_386a50:
    // 0x386a50: 0x14b080  sll         $s6, $s4, 2
    ctx->pc = 0x386a50u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_386a54:
    // 0x386a54: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x386a54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_386a58:
    // 0x386a58: 0x3c0a0058  lui         $t2, 0x58
    ctx->pc = 0x386a58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)88 << 16));
label_386a5c:
    // 0x386a5c: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x386a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_386a60:
    // 0x386a60: 0x3a880  sll         $s5, $v1, 2
    ctx->pc = 0x386a60u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_386a64:
    // 0x386a64: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x386a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_386a68:
    // 0x386a68: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x386a68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_386a6c:
    // 0x386a6c: 0x254adf88  addiu       $t2, $t2, -0x2078
    ctx->pc = 0x386a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958984));
label_386a70:
    // 0x386a70: 0x24a5df80  addiu       $a1, $a1, -0x2080
    ctx->pc = 0x386a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958976));
label_386a74:
    // 0x386a74: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x386a74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_386a78:
    // 0x386a78: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x386a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_386a7c:
    // 0x386a7c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x386a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_386a80:
    // 0x386a80: 0x40f809  jalr        $v0
label_386a84:
    if (ctx->pc == 0x386A84u) {
        ctx->pc = 0x386A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A80u;
        // 0x386a84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386A88u;
        goto label_386a88;
    }
    ctx->pc = 0x386A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x386A88u);
        ctx->pc = 0x386A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A80u;
        // 0x386a84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386A80u, 0x386A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386A88u;
label_386a88:
    // 0x386a88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_386a8c:
    // 0x386a8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x386a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_386a90:
    // 0x386a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x386a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386a94:
    // 0x386a94: 0xc10c1bb  jal         func_4306EC
label_386a98:
    if (ctx->pc == 0x386A98u) {
        ctx->pc = 0x386A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386A94u;
        // 0x386a98: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386A9Cu;
        goto label_386a9c;
    }
    ctx->pc = 0x386A94u;
    SET_GPR_U32(ctx, 31, 0x386A9Cu);
    ctx->pc = 0x386A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386A94u;
    // 0x386a98: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x386A94u, 0x386A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386A9Cu;
label_386a9c:
    // 0x386a9c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x386a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_386aa0:
    // 0x386aa0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_386aa4:
    if (ctx->pc == 0x386AA4u) {
        ctx->pc = 0x386AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AA0u;
        // 0x386aa4: 0x8fc8b9c0  lw          $t0, -0x4640($fp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386AA8u;
        goto label_386aa8;
    }
    ctx->pc = 0x386AA0u;
    {
        const bool branch_taken_0x386aa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x386AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AA0u;
        // 0x386aa4: 0x8fc8b9c0  lw          $t0, -0x4640($fp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386aa0) {
            ctx->pc = 0x386AC4u;
            goto label_386ac4;
        }
    }
    ctx->pc = 0x386AA8u;
label_386aa8:
    // 0x386aa8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x386aa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_386aac:
    // 0x386aac: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x386aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_386ab0:
    // 0x386ab0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x386ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_386ab4:
    // 0x386ab4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x386ab4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_386ab8:
    // 0x386ab8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x386ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_386abc:
    // 0x386abc: 0x60f809  jalr        $v1
label_386ac0:
    if (ctx->pc == 0x386AC0u) {
        ctx->pc = 0x386AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386ABCu;
        // 0x386ac0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386AC4u;
        goto label_386ac4;
    }
    ctx->pc = 0x386ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x386AC4u);
        ctx->pc = 0x386AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386ABCu;
        // 0x386ac0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386ABCu, 0x386AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x386AC4u;
label_386ac4:
    // 0x386ac4: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x386ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_386ac8:
    // 0x386ac8: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x386ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_386acc:
    // 0x386acc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x386accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_386ad0:
    // 0x386ad0: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x386ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_386ad4:
    // 0x386ad4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x386ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_386ad8:
    // 0x386ad8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x386ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_386adc:
    // 0x386adc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386ae0:
    // 0x386ae0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x386ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_386ae4:
    // 0x386ae4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x386ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_386ae8:
    // 0x386ae8: 0xc13c7e2  jal         func_4F1F88
label_386aec:
    if (ctx->pc == 0x386AECu) {
        ctx->pc = 0x386AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386AE8u;
        // 0x386aec: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386AF0u;
        goto label_386af0;
    }
    ctx->pc = 0x386AE8u;
    SET_GPR_U32(ctx, 31, 0x386AF0u);
    ctx->pc = 0x386AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386AE8u;
    // 0x386aec: 0x27a70038  addiu       $a3, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1F88u, 0x386AE8u, 0x386AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386AF0u;
label_386af0:
    // 0x386af0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x386af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_386af4:
    // 0x386af4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x386af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_386af8:
    // 0x386af8: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x386af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_386afc:
    // 0x386afc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x386afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_386b00:
    // 0x386b00: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x386b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_386b04:
    // 0x386b04: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x386b04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_386b08:
    // 0x386b08: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x386b08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_386b0c:
    // 0x386b0c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x386b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_386b10:
    // 0x386b10: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x386b10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_386b14:
    // 0x386b14: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x386b14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_386b18:
    // 0x386b18: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x386b18u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_386b1c:
    // 0x386b1c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x386b1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_386b20:
    // 0x386b20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x386b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_386b24:
    // 0x386b24: 0x3e00008  jr          $ra
label_386b28:
    if (ctx->pc == 0x386B28u) {
        ctx->pc = 0x386B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B24u;
        // 0x386b28: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x386B2Cu;
        goto label_386b2c;
    }
    ctx->pc = 0x386B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386B24u;
        // 0x386b28: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x386B2Cu;
label_386b2c:
    // 0x386b2c: 0x0  nop
    ctx->pc = 0x386b2cu;
    // NOP
    ctx->pc = 0x386b30u;
}
