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

// Function: sub_004E3A48
// Address: 0x4e3a48 - 0x4e3be8
void sub_004E3A48_0x4e3a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3A48_0x4e3a48");
#endif

    switch (ctx->pc) {
        case 0x4e3a48u: goto label_4e3a48;
        case 0x4e3a4cu: goto label_4e3a4c;
        case 0x4e3a50u: goto label_4e3a50;
        case 0x4e3a54u: goto label_4e3a54;
        case 0x4e3a58u: goto label_4e3a58;
        case 0x4e3a5cu: goto label_4e3a5c;
        case 0x4e3a60u: goto label_4e3a60;
        case 0x4e3a64u: goto label_4e3a64;
        case 0x4e3a68u: goto label_4e3a68;
        case 0x4e3a6cu: goto label_4e3a6c;
        case 0x4e3a70u: goto label_4e3a70;
        case 0x4e3a74u: goto label_4e3a74;
        case 0x4e3a78u: goto label_4e3a78;
        case 0x4e3a7cu: goto label_4e3a7c;
        case 0x4e3a80u: goto label_4e3a80;
        case 0x4e3a84u: goto label_4e3a84;
        case 0x4e3a88u: goto label_4e3a88;
        case 0x4e3a8cu: goto label_4e3a8c;
        case 0x4e3a90u: goto label_4e3a90;
        case 0x4e3a94u: goto label_4e3a94;
        case 0x4e3a98u: goto label_4e3a98;
        case 0x4e3a9cu: goto label_4e3a9c;
        case 0x4e3aa0u: goto label_4e3aa0;
        case 0x4e3aa4u: goto label_4e3aa4;
        case 0x4e3aa8u: goto label_4e3aa8;
        case 0x4e3aacu: goto label_4e3aac;
        case 0x4e3ab0u: goto label_4e3ab0;
        case 0x4e3ab4u: goto label_4e3ab4;
        case 0x4e3ab8u: goto label_4e3ab8;
        case 0x4e3abcu: goto label_4e3abc;
        case 0x4e3ac0u: goto label_4e3ac0;
        case 0x4e3ac4u: goto label_4e3ac4;
        case 0x4e3ac8u: goto label_4e3ac8;
        case 0x4e3accu: goto label_4e3acc;
        case 0x4e3ad0u: goto label_4e3ad0;
        case 0x4e3ad4u: goto label_4e3ad4;
        case 0x4e3ad8u: goto label_4e3ad8;
        case 0x4e3adcu: goto label_4e3adc;
        case 0x4e3ae0u: goto label_4e3ae0;
        case 0x4e3ae4u: goto label_4e3ae4;
        case 0x4e3ae8u: goto label_4e3ae8;
        case 0x4e3aecu: goto label_4e3aec;
        case 0x4e3af0u: goto label_4e3af0;
        case 0x4e3af4u: goto label_4e3af4;
        case 0x4e3af8u: goto label_4e3af8;
        case 0x4e3afcu: goto label_4e3afc;
        case 0x4e3b00u: goto label_4e3b00;
        case 0x4e3b04u: goto label_4e3b04;
        case 0x4e3b08u: goto label_4e3b08;
        case 0x4e3b0cu: goto label_4e3b0c;
        case 0x4e3b10u: goto label_4e3b10;
        case 0x4e3b14u: goto label_4e3b14;
        case 0x4e3b18u: goto label_4e3b18;
        case 0x4e3b1cu: goto label_4e3b1c;
        case 0x4e3b20u: goto label_4e3b20;
        case 0x4e3b24u: goto label_4e3b24;
        case 0x4e3b28u: goto label_4e3b28;
        case 0x4e3b2cu: goto label_4e3b2c;
        case 0x4e3b30u: goto label_4e3b30;
        case 0x4e3b34u: goto label_4e3b34;
        case 0x4e3b38u: goto label_4e3b38;
        case 0x4e3b3cu: goto label_4e3b3c;
        case 0x4e3b40u: goto label_4e3b40;
        case 0x4e3b44u: goto label_4e3b44;
        case 0x4e3b48u: goto label_4e3b48;
        case 0x4e3b4cu: goto label_4e3b4c;
        case 0x4e3b50u: goto label_4e3b50;
        case 0x4e3b54u: goto label_4e3b54;
        case 0x4e3b58u: goto label_4e3b58;
        case 0x4e3b5cu: goto label_4e3b5c;
        case 0x4e3b60u: goto label_4e3b60;
        case 0x4e3b64u: goto label_4e3b64;
        case 0x4e3b68u: goto label_4e3b68;
        case 0x4e3b6cu: goto label_4e3b6c;
        case 0x4e3b70u: goto label_4e3b70;
        case 0x4e3b74u: goto label_4e3b74;
        case 0x4e3b78u: goto label_4e3b78;
        case 0x4e3b7cu: goto label_4e3b7c;
        case 0x4e3b80u: goto label_4e3b80;
        case 0x4e3b84u: goto label_4e3b84;
        case 0x4e3b88u: goto label_4e3b88;
        case 0x4e3b8cu: goto label_4e3b8c;
        case 0x4e3b90u: goto label_4e3b90;
        case 0x4e3b94u: goto label_4e3b94;
        case 0x4e3b98u: goto label_4e3b98;
        case 0x4e3b9cu: goto label_4e3b9c;
        case 0x4e3ba0u: goto label_4e3ba0;
        case 0x4e3ba4u: goto label_4e3ba4;
        case 0x4e3ba8u: goto label_4e3ba8;
        case 0x4e3bacu: goto label_4e3bac;
        case 0x4e3bb0u: goto label_4e3bb0;
        case 0x4e3bb4u: goto label_4e3bb4;
        case 0x4e3bb8u: goto label_4e3bb8;
        case 0x4e3bbcu: goto label_4e3bbc;
        case 0x4e3bc0u: goto label_4e3bc0;
        case 0x4e3bc4u: goto label_4e3bc4;
        case 0x4e3bc8u: goto label_4e3bc8;
        case 0x4e3bccu: goto label_4e3bcc;
        case 0x4e3bd0u: goto label_4e3bd0;
        case 0x4e3bd4u: goto label_4e3bd4;
        case 0x4e3bd8u: goto label_4e3bd8;
        case 0x4e3bdcu: goto label_4e3bdc;
        case 0x4e3be0u: goto label_4e3be0;
        case 0x4e3be4u: goto label_4e3be4;
        default: break;
    }

    ctx->pc = 0x4e3a48u;

label_4e3a48:
    // 0x4e3a48: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e3a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e3a4c:
    // 0x4e3a4c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e3a50:
    // 0x4e3a50: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e3a54:
    // 0x4e3a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e3a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3a58:
    // 0x4e3a58: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e3a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e3a5c:
    // 0x4e3a5c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e3a5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3a60:
    // 0x4e3a60: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e3a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e3a64:
    // 0x4e3a64: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e3a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e3a68:
    // 0x4e3a68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e3a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e3a6c:
    // 0x4e3a6c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e3a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e3a70:
    // 0x4e3a70: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e3a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e3a74:
    // 0x4e3a74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3a78:
    // 0x4e3a78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e3a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e3a7c:
    // 0x4e3a7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e3a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e3a80:
    // 0x4e3a80: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e3a84:
    if (ctx->pc == 0x4E3A84u) {
        ctx->pc = 0x4E3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A80u;
        // 0x4e3a84: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A88u;
        goto label_4e3a88;
    }
    ctx->pc = 0x4E3A80u;
    {
        const bool branch_taken_0x4e3a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E3A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A80u;
        // 0x4e3a84: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3a80) {
            ctx->pc = 0x4E3ACCu;
            goto label_4e3acc;
        }
    }
    ctx->pc = 0x4E3A88u;
label_4e3a88:
    // 0x4e3a88: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e3a8c:
    if (ctx->pc == 0x4E3A8Cu) {
        ctx->pc = 0x4E3A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3A88u;
        // 0x4e3a8c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3A90u;
        goto label_4e3a90;
    }
    ctx->pc = 0x4E3A88u;
    {
        const bool branch_taken_0x4e3a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3a88) {
            ctx->pc = 0x4E3A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A88u;
            // 0x4e3a8c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3A9Cu;
            goto label_4e3a9c;
        }
    }
    ctx->pc = 0x4E3A90u;
label_4e3a90:
    // 0x4e3a90: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e3a94:
    // 0x4e3a94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e3a94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e3a98:
    // 0x4e3a98: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e3a9c:
    // 0x4e3a9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e3a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e3aa0:
    // 0x4e3aa0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e3aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e3aa4:
    // 0x4e3aa4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e3aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e3aa8:
    // 0x4e3aa8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e3aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e3aac:
    // 0x4e3aac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e3aacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e3ab0:
    // 0x4e3ab0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3ab0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e3ab4:
    // 0x4e3ab4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e3ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e3ab8:
    // 0x4e3ab8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e3ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e3abc:
    // 0x4e3abc: 0xc10c1bb  jal         func_4306EC
label_4e3ac0:
    if (ctx->pc == 0x4E3AC0u) {
        ctx->pc = 0x4E3AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3ABCu;
        // 0x4e3ac0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3AC4u;
        goto label_4e3ac4;
    }
    ctx->pc = 0x4E3ABCu;
    SET_GPR_U32(ctx, 31, 0x4E3AC4u);
    ctx->pc = 0x4E3AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3ABCu;
    // 0x4e3ac0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3ABCu, 0x4E3AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3AC4u;
label_4e3ac4:
    // 0x4e3ac4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e3ac8:
    if (ctx->pc == 0x4E3AC8u) {
        ctx->pc = 0x4E3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3AC4u;
        // 0x4e3ac8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3ACCu;
        goto label_4e3acc;
    }
    ctx->pc = 0x4E3AC4u;
    {
        const bool branch_taken_0x4e3ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3AC4u;
        // 0x4e3ac8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3ac4) {
            ctx->pc = 0x4E3BBCu;
            goto label_4e3bbc;
        }
    }
    ctx->pc = 0x4E3ACCu;
label_4e3acc:
    // 0x4e3acc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e3accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e3ad0:
    // 0x4e3ad0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e3ad0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e3ad4:
    // 0x4e3ad4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e3ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e3ad8:
    // 0x4e3ad8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e3ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e3adc:
    // 0x4e3adc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e3adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e3ae0:
    // 0x4e3ae0: 0x24963940  addiu       $s6, $a0, 0x3940
    ctx->pc = 0x4e3ae0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
label_4e3ae4:
    // 0x4e3ae4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e3ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e3ae8:
    // 0x4e3ae8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e3ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e3aec:
    // 0x4e3aec: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e3aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e3af0:
    // 0x4e3af0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e3af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3af4:
    // 0x4e3af4: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e3af4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e3af8:
    // 0x4e3af8: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e3af8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e3afc:
    // 0x4e3afc: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e3afcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e3b00:
    // 0x4e3b00: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e3b04:
    // 0x4e3b04: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e3b08:
    // 0x4e3b08: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e3b08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e3b0c:
    // 0x4e3b0c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e3b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e3b10:
    // 0x4e3b10: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e3b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b14:
    // 0x4e3b14: 0x24a539a8  addiu       $a1, $a1, 0x39A8
    ctx->pc = 0x4e3b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14760));
label_4e3b18:
    // 0x4e3b18: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e3b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b1c:
    // 0x4e3b1c: 0x254a39b0  addiu       $t2, $t2, 0x39B0
    ctx->pc = 0x4e3b1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 14768));
label_4e3b20:
    // 0x4e3b20: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e3b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e3b24:
    // 0x4e3b24: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e3b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e3b28:
    // 0x4e3b28: 0x40f809  jalr        $v0
label_4e3b2c:
    if (ctx->pc == 0x4E3B2Cu) {
        ctx->pc = 0x4E3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B28u;
        // 0x4e3b2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3B30u;
        goto label_4e3b30;
    }
    ctx->pc = 0x4E3B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E3B30u);
        ctx->pc = 0x4E3B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B28u;
        // 0x4e3b2c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3B28u, 0x4E3B30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3B30u;
label_4e3b30:
    // 0x4e3b30: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e3b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e3b34:
    // 0x4e3b34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e3b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b38:
    // 0x4e3b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e3b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b3c:
    // 0x4e3b3c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e3b40:
    // 0x4e3b40: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e3b40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e3b44:
    // 0x4e3b44: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e3b44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e3b48:
    // 0x4e3b48: 0xc10c1bb  jal         func_4306EC
label_4e3b4c:
    if (ctx->pc == 0x4E3B4Cu) {
        ctx->pc = 0x4E3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B48u;
        // 0x4e3b4c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3B50u;
        goto label_4e3b50;
    }
    ctx->pc = 0x4E3B48u;
    SET_GPR_U32(ctx, 31, 0x4E3B50u);
    ctx->pc = 0x4E3B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B48u;
    // 0x4e3b4c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3B48u, 0x4E3B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B50u;
label_4e3b50:
    // 0x4e3b50: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e3b54:
    if (ctx->pc == 0x4E3B54u) {
        ctx->pc = 0x4E3B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B50u;
        // 0x4e3b54: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3B58u;
        goto label_4e3b58;
    }
    ctx->pc = 0x4E3B50u;
    {
        const bool branch_taken_0x4e3b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3b50) {
            ctx->pc = 0x4E3B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3B50u;
            // 0x4e3b54: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3B64u;
            goto label_4e3b64;
        }
    }
    ctx->pc = 0x4E3B58u;
label_4e3b58:
    // 0x4e3b58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e3b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e3b5c:
    // 0x4e3b5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e3b60:
    // 0x4e3b60: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e3b60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e3b64:
    // 0x4e3b64: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e3b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e3b68:
    // 0x4e3b68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b6c:
    // 0x4e3b6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e3b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b70:
    // 0x4e3b70: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e3b70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e3b74:
    // 0x4e3b74: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e3b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e3b78:
    // 0x4e3b78: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3b78u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e3b7c:
    // 0x4e3b7c: 0xc10c1bb  jal         func_4306EC
label_4e3b80:
    if (ctx->pc == 0x4E3B80u) {
        ctx->pc = 0x4E3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B7Cu;
        // 0x4e3b80: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3B84u;
        goto label_4e3b84;
    }
    ctx->pc = 0x4E3B7Cu;
    SET_GPR_U32(ctx, 31, 0x4E3B84u);
    ctx->pc = 0x4E3B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B7Cu;
    // 0x4e3b80: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3B7Cu, 0x4E3B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B84u;
label_4e3b84:
    // 0x4e3b84: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e3b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e3b88:
    // 0x4e3b88: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e3b8c:
    if (ctx->pc == 0x4E3B8Cu) {
        ctx->pc = 0x4E3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B88u;
        // 0x4e3b8c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3B90u;
        goto label_4e3b90;
    }
    ctx->pc = 0x4E3B88u;
    {
        const bool branch_taken_0x4e3b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B88u;
        // 0x4e3b8c: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b88) {
            ctx->pc = 0x4E3BACu;
            goto label_4e3bac;
        }
    }
    ctx->pc = 0x4E3B90u;
label_4e3b90:
    // 0x4e3b90: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e3b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b94:
    // 0x4e3b94: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e3b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e3b98:
    // 0x4e3b98: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e3b9c:
    // 0x4e3b9c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e3b9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e3ba0:
    // 0x4e3ba0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e3ba4:
    // 0x4e3ba4: 0x60f809  jalr        $v1
label_4e3ba8:
    if (ctx->pc == 0x4E3BA8u) {
        ctx->pc = 0x4E3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3BA4u;
        // 0x4e3ba8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3BACu;
        goto label_4e3bac;
    }
    ctx->pc = 0x4E3BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E3BACu);
        ctx->pc = 0x4E3BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3BA4u;
        // 0x4e3ba8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3BA4u, 0x4E3BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3BACu;
label_4e3bac:
    // 0x4e3bac: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e3bb0:
    // 0x4e3bb0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e3bb4:
    // 0x4e3bb4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e3bb8:
    // 0x4e3bb8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e3bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e3bbc:
    // 0x4e3bbc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e3bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e3bc0:
    // 0x4e3bc0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e3bc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e3bc4:
    // 0x4e3bc4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e3bc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e3bc8:
    // 0x4e3bc8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e3bc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e3bcc:
    // 0x4e3bcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e3bccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e3bd0:
    // 0x4e3bd0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e3bd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3bd4:
    // 0x4e3bd4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e3bd4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3bd8:
    // 0x4e3bd8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e3bd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3bdc:
    // 0x4e3bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e3bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3be0:
    // 0x4e3be0: 0x3e00008  jr          $ra
label_4e3be4:
    if (ctx->pc == 0x4E3BE4u) {
        ctx->pc = 0x4E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3BE0u;
        // 0x4e3be4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3BE8u;
        goto label_fallthrough_0x4e3be0;
    }
    ctx->pc = 0x4E3BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3BE0u;
        // 0x4e3be4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e3be0:
    ctx->pc = 0x4E3BE8u;
}
