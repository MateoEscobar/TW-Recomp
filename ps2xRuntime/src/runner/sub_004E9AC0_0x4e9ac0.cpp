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

// Function: sub_004E9AC0
// Address: 0x4e9ac0 - 0x4e9c60
void sub_004E9AC0_0x4e9ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9AC0_0x4e9ac0");
#endif

    switch (ctx->pc) {
        case 0x4e9ac0u: goto label_4e9ac0;
        case 0x4e9ac4u: goto label_4e9ac4;
        case 0x4e9ac8u: goto label_4e9ac8;
        case 0x4e9accu: goto label_4e9acc;
        case 0x4e9ad0u: goto label_4e9ad0;
        case 0x4e9ad4u: goto label_4e9ad4;
        case 0x4e9ad8u: goto label_4e9ad8;
        case 0x4e9adcu: goto label_4e9adc;
        case 0x4e9ae0u: goto label_4e9ae0;
        case 0x4e9ae4u: goto label_4e9ae4;
        case 0x4e9ae8u: goto label_4e9ae8;
        case 0x4e9aecu: goto label_4e9aec;
        case 0x4e9af0u: goto label_4e9af0;
        case 0x4e9af4u: goto label_4e9af4;
        case 0x4e9af8u: goto label_4e9af8;
        case 0x4e9afcu: goto label_4e9afc;
        case 0x4e9b00u: goto label_4e9b00;
        case 0x4e9b04u: goto label_4e9b04;
        case 0x4e9b08u: goto label_4e9b08;
        case 0x4e9b0cu: goto label_4e9b0c;
        case 0x4e9b10u: goto label_4e9b10;
        case 0x4e9b14u: goto label_4e9b14;
        case 0x4e9b18u: goto label_4e9b18;
        case 0x4e9b1cu: goto label_4e9b1c;
        case 0x4e9b20u: goto label_4e9b20;
        case 0x4e9b24u: goto label_4e9b24;
        case 0x4e9b28u: goto label_4e9b28;
        case 0x4e9b2cu: goto label_4e9b2c;
        case 0x4e9b30u: goto label_4e9b30;
        case 0x4e9b34u: goto label_4e9b34;
        case 0x4e9b38u: goto label_4e9b38;
        case 0x4e9b3cu: goto label_4e9b3c;
        case 0x4e9b40u: goto label_4e9b40;
        case 0x4e9b44u: goto label_4e9b44;
        case 0x4e9b48u: goto label_4e9b48;
        case 0x4e9b4cu: goto label_4e9b4c;
        case 0x4e9b50u: goto label_4e9b50;
        case 0x4e9b54u: goto label_4e9b54;
        case 0x4e9b58u: goto label_4e9b58;
        case 0x4e9b5cu: goto label_4e9b5c;
        case 0x4e9b60u: goto label_4e9b60;
        case 0x4e9b64u: goto label_4e9b64;
        case 0x4e9b68u: goto label_4e9b68;
        case 0x4e9b6cu: goto label_4e9b6c;
        case 0x4e9b70u: goto label_4e9b70;
        case 0x4e9b74u: goto label_4e9b74;
        case 0x4e9b78u: goto label_4e9b78;
        case 0x4e9b7cu: goto label_4e9b7c;
        case 0x4e9b80u: goto label_4e9b80;
        case 0x4e9b84u: goto label_4e9b84;
        case 0x4e9b88u: goto label_4e9b88;
        case 0x4e9b8cu: goto label_4e9b8c;
        case 0x4e9b90u: goto label_4e9b90;
        case 0x4e9b94u: goto label_4e9b94;
        case 0x4e9b98u: goto label_4e9b98;
        case 0x4e9b9cu: goto label_4e9b9c;
        case 0x4e9ba0u: goto label_4e9ba0;
        case 0x4e9ba4u: goto label_4e9ba4;
        case 0x4e9ba8u: goto label_4e9ba8;
        case 0x4e9bacu: goto label_4e9bac;
        case 0x4e9bb0u: goto label_4e9bb0;
        case 0x4e9bb4u: goto label_4e9bb4;
        case 0x4e9bb8u: goto label_4e9bb8;
        case 0x4e9bbcu: goto label_4e9bbc;
        case 0x4e9bc0u: goto label_4e9bc0;
        case 0x4e9bc4u: goto label_4e9bc4;
        case 0x4e9bc8u: goto label_4e9bc8;
        case 0x4e9bccu: goto label_4e9bcc;
        case 0x4e9bd0u: goto label_4e9bd0;
        case 0x4e9bd4u: goto label_4e9bd4;
        case 0x4e9bd8u: goto label_4e9bd8;
        case 0x4e9bdcu: goto label_4e9bdc;
        case 0x4e9be0u: goto label_4e9be0;
        case 0x4e9be4u: goto label_4e9be4;
        case 0x4e9be8u: goto label_4e9be8;
        case 0x4e9becu: goto label_4e9bec;
        case 0x4e9bf0u: goto label_4e9bf0;
        case 0x4e9bf4u: goto label_4e9bf4;
        case 0x4e9bf8u: goto label_4e9bf8;
        case 0x4e9bfcu: goto label_4e9bfc;
        case 0x4e9c00u: goto label_4e9c00;
        case 0x4e9c04u: goto label_4e9c04;
        case 0x4e9c08u: goto label_4e9c08;
        case 0x4e9c0cu: goto label_4e9c0c;
        case 0x4e9c10u: goto label_4e9c10;
        case 0x4e9c14u: goto label_4e9c14;
        case 0x4e9c18u: goto label_4e9c18;
        case 0x4e9c1cu: goto label_4e9c1c;
        case 0x4e9c20u: goto label_4e9c20;
        case 0x4e9c24u: goto label_4e9c24;
        case 0x4e9c28u: goto label_4e9c28;
        case 0x4e9c2cu: goto label_4e9c2c;
        case 0x4e9c30u: goto label_4e9c30;
        case 0x4e9c34u: goto label_4e9c34;
        case 0x4e9c38u: goto label_4e9c38;
        case 0x4e9c3cu: goto label_4e9c3c;
        case 0x4e9c40u: goto label_4e9c40;
        case 0x4e9c44u: goto label_4e9c44;
        case 0x4e9c48u: goto label_4e9c48;
        case 0x4e9c4cu: goto label_4e9c4c;
        case 0x4e9c50u: goto label_4e9c50;
        case 0x4e9c54u: goto label_4e9c54;
        case 0x4e9c58u: goto label_4e9c58;
        case 0x4e9c5cu: goto label_4e9c5c;
        default: break;
    }

    ctx->pc = 0x4e9ac0u;

label_4e9ac0:
    // 0x4e9ac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e9ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e9ac4:
    // 0x4e9ac4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e9ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e9ac8:
    // 0x4e9ac8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e9ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e9acc:
    // 0x4e9acc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e9accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9ad0:
    // 0x4e9ad0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e9ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e9ad4:
    // 0x4e9ad4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e9ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9ad8:
    // 0x4e9ad8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e9ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e9adc:
    // 0x4e9adc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e9adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e9ae0:
    // 0x4e9ae0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e9ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e9ae4:
    // 0x4e9ae4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e9ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e9ae8:
    // 0x4e9ae8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e9ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e9aec:
    // 0x4e9aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9af0:
    // 0x4e9af0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9af4:
    // 0x4e9af4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e9af8:
    // 0x4e9af8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e9afc:
    if (ctx->pc == 0x4E9AFCu) {
        ctx->pc = 0x4E9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9AF8u;
        // 0x4e9afc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9B00u;
        goto label_4e9b00;
    }
    ctx->pc = 0x4E9AF8u;
    {
        const bool branch_taken_0x4e9af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9AF8u;
        // 0x4e9afc: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9af8) {
            ctx->pc = 0x4E9B44u;
            goto label_4e9b44;
        }
    }
    ctx->pc = 0x4E9B00u;
label_4e9b00:
    // 0x4e9b00: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e9b04:
    if (ctx->pc == 0x4E9B04u) {
        ctx->pc = 0x4E9B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9B00u;
        // 0x4e9b04: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9B08u;
        goto label_4e9b08;
    }
    ctx->pc = 0x4E9B00u;
    {
        const bool branch_taken_0x4e9b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9b00) {
            ctx->pc = 0x4E9B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9B00u;
            // 0x4e9b04: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9B14u;
            goto label_4e9b14;
        }
    }
    ctx->pc = 0x4E9B08u;
label_4e9b08:
    // 0x4e9b08: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e9b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e9b0c:
    // 0x4e9b0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e9b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e9b10:
    // 0x4e9b10: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e9b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9b14:
    // 0x4e9b14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e9b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e9b18:
    // 0x4e9b18: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e9b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e9b1c:
    // 0x4e9b1c: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e9b20:
    // 0x4e9b20: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e9b20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e9b24:
    // 0x4e9b24: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e9b28:
    // 0x4e9b28: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e9b28u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e9b2c:
    // 0x4e9b2c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e9b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e9b30:
    // 0x4e9b30: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e9b30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e9b34:
    // 0x4e9b34: 0xc10c1bb  jal         func_4306EC
label_4e9b38:
    if (ctx->pc == 0x4E9B38u) {
        ctx->pc = 0x4E9B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9B34u;
        // 0x4e9b38: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9B3Cu;
        goto label_4e9b3c;
    }
    ctx->pc = 0x4E9B34u;
    SET_GPR_U32(ctx, 31, 0x4E9B3Cu);
    ctx->pc = 0x4E9B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9B34u;
    // 0x4e9b38: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9B34u, 0x4E9B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9B3Cu;
label_4e9b3c:
    // 0x4e9b3c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e9b40:
    if (ctx->pc == 0x4E9B40u) {
        ctx->pc = 0x4E9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9B3Cu;
        // 0x4e9b40: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9B44u;
        goto label_4e9b44;
    }
    ctx->pc = 0x4E9B3Cu;
    {
        const bool branch_taken_0x4e9b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9B3Cu;
        // 0x4e9b40: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9b3c) {
            ctx->pc = 0x4E9C34u;
            goto label_4e9c34;
        }
    }
    ctx->pc = 0x4E9B44u;
label_4e9b44:
    // 0x4e9b44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9b48:
    // 0x4e9b48: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e9b48u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e9b4c:
    // 0x4e9b4c: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e9b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e9b50:
    // 0x4e9b50: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e9b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e9b54:
    // 0x4e9b54: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e9b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e9b58:
    // 0x4e9b58: 0x24966df8  addiu       $s6, $a0, 0x6DF8
    ctx->pc = 0x4e9b58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 28152));
label_4e9b5c:
    // 0x4e9b5c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e9b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e9b60:
    // 0x4e9b60: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e9b60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e9b64:
    // 0x4e9b64: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e9b68:
    // 0x4e9b68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e9b6c:
    // 0x4e9b6c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e9b6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e9b70:
    // 0x4e9b70: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e9b70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e9b74:
    // 0x4e9b74: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e9b74u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e9b78:
    // 0x4e9b78: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e9b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e9b7c:
    // 0x4e9b7c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e9b80:
    // 0x4e9b80: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e9b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e9b84:
    // 0x4e9b84: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e9b84u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e9b88:
    // 0x4e9b88: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e9b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e9b8c:
    // 0x4e9b8c: 0x24a56df0  addiu       $a1, $a1, 0x6DF0
    ctx->pc = 0x4e9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28144));
label_4e9b90:
    // 0x4e9b90: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e9b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e9b94:
    // 0x4e9b94: 0x254a6e20  addiu       $t2, $t2, 0x6E20
    ctx->pc = 0x4e9b94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 28192));
label_4e9b98:
    // 0x4e9b98: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e9b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e9b9c:
    // 0x4e9b9c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e9b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e9ba0:
    // 0x4e9ba0: 0x40f809  jalr        $v0
label_4e9ba4:
    if (ctx->pc == 0x4E9BA4u) {
        ctx->pc = 0x4E9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BA0u;
        // 0x4e9ba4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9BA8u;
        goto label_4e9ba8;
    }
    ctx->pc = 0x4E9BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E9BA8u);
        ctx->pc = 0x4E9BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BA0u;
        // 0x4e9ba4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9BA0u, 0x4E9BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9BA8u;
label_4e9ba8:
    // 0x4e9ba8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e9ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9bac:
    // 0x4e9bac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e9bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e9bb0:
    // 0x4e9bb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e9bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9bb4:
    // 0x4e9bb4: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e9bb8:
    // 0x4e9bb8: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e9bb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e9bbc:
    // 0x4e9bbc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e9bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e9bc0:
    // 0x4e9bc0: 0xc10c1bb  jal         func_4306EC
label_4e9bc4:
    if (ctx->pc == 0x4E9BC4u) {
        ctx->pc = 0x4E9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BC0u;
        // 0x4e9bc4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9BC8u;
        goto label_4e9bc8;
    }
    ctx->pc = 0x4E9BC0u;
    SET_GPR_U32(ctx, 31, 0x4E9BC8u);
    ctx->pc = 0x4E9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9BC0u;
    // 0x4e9bc4: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9BC0u, 0x4E9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9BC8u;
label_4e9bc8:
    // 0x4e9bc8: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e9bcc:
    if (ctx->pc == 0x4E9BCCu) {
        ctx->pc = 0x4E9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BC8u;
        // 0x4e9bcc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9BD0u;
        goto label_4e9bd0;
    }
    ctx->pc = 0x4E9BC8u;
    {
        const bool branch_taken_0x4e9bc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e9bc8) {
            ctx->pc = 0x4E9BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E9BC8u;
            // 0x4e9bcc: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E9BDCu;
            goto label_4e9bdc;
        }
    }
    ctx->pc = 0x4E9BD0u;
label_4e9bd0:
    // 0x4e9bd0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e9bd4:
    // 0x4e9bd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e9bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e9bd8:
    // 0x4e9bd8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e9bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e9bdc:
    // 0x4e9bdc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e9bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e9be0:
    // 0x4e9be0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e9be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e9be4:
    // 0x4e9be4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e9be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e9be8:
    // 0x4e9be8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e9be8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e9bec:
    // 0x4e9bec: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e9becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e9bf0:
    // 0x4e9bf0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e9bf0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e9bf4:
    // 0x4e9bf4: 0xc10c1bb  jal         func_4306EC
label_4e9bf8:
    if (ctx->pc == 0x4E9BF8u) {
        ctx->pc = 0x4E9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9BF4u;
        // 0x4e9bf8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9BFCu;
        goto label_4e9bfc;
    }
    ctx->pc = 0x4E9BF4u;
    SET_GPR_U32(ctx, 31, 0x4E9BFCu);
    ctx->pc = 0x4E9BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9BF4u;
    // 0x4e9bf8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E9BF4u, 0x4E9BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9BFCu;
label_4e9bfc:
    // 0x4e9bfc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e9bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e9c00:
    // 0x4e9c00: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e9c04:
    if (ctx->pc == 0x4E9C04u) {
        ctx->pc = 0x4E9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C00u;
        // 0x4e9c04: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9C08u;
        goto label_4e9c08;
    }
    ctx->pc = 0x4E9C00u;
    {
        const bool branch_taken_0x4e9c00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C00u;
        // 0x4e9c04: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9c00) {
            ctx->pc = 0x4E9C24u;
            goto label_4e9c24;
        }
    }
    ctx->pc = 0x4E9C08u;
label_4e9c08:
    // 0x4e9c08: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e9c08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e9c0c:
    // 0x4e9c0c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e9c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e9c10:
    // 0x4e9c10: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9c14:
    // 0x4e9c14: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9c18:
    // 0x4e9c18: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9c1c:
    // 0x4e9c1c: 0x60f809  jalr        $v1
label_4e9c20:
    if (ctx->pc == 0x4E9C20u) {
        ctx->pc = 0x4E9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C1Cu;
        // 0x4e9c20: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9C24u;
        goto label_4e9c24;
    }
    ctx->pc = 0x4E9C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9C24u);
        ctx->pc = 0x4E9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C1Cu;
        // 0x4e9c20: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9C1Cu, 0x4E9C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9C24u;
label_4e9c24:
    // 0x4e9c24: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e9c28:
    // 0x4e9c28: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e9c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e9c2c:
    // 0x4e9c2c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e9c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e9c30:
    // 0x4e9c30: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e9c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e9c34:
    // 0x4e9c34: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e9c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e9c38:
    // 0x4e9c38: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e9c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e9c3c:
    // 0x4e9c3c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e9c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e9c40:
    // 0x4e9c40: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e9c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e9c44:
    // 0x4e9c44: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e9c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e9c48:
    // 0x4e9c48: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e9c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9c4c:
    // 0x4e9c4c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e9c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9c50:
    // 0x4e9c50: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e9c50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9c54:
    // 0x4e9c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9c58:
    // 0x4e9c58: 0x3e00008  jr          $ra
label_4e9c5c:
    if (ctx->pc == 0x4E9C5Cu) {
        ctx->pc = 0x4E9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C58u;
        // 0x4e9c5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9C60u;
        goto label_fallthrough_0x4e9c58;
    }
    ctx->pc = 0x4E9C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9C58u;
        // 0x4e9c5c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e9c58:
    ctx->pc = 0x4E9C60u;
}
