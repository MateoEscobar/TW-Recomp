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

// Function: sub_00390B38
// Address: 0x390b38 - 0x390cb8
void sub_00390B38_0x390b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390B38_0x390b38");
#endif

    switch (ctx->pc) {
        case 0x390b38u: goto label_390b38;
        case 0x390b3cu: goto label_390b3c;
        case 0x390b40u: goto label_390b40;
        case 0x390b44u: goto label_390b44;
        case 0x390b48u: goto label_390b48;
        case 0x390b4cu: goto label_390b4c;
        case 0x390b50u: goto label_390b50;
        case 0x390b54u: goto label_390b54;
        case 0x390b58u: goto label_390b58;
        case 0x390b5cu: goto label_390b5c;
        case 0x390b60u: goto label_390b60;
        case 0x390b64u: goto label_390b64;
        case 0x390b68u: goto label_390b68;
        case 0x390b6cu: goto label_390b6c;
        case 0x390b70u: goto label_390b70;
        case 0x390b74u: goto label_390b74;
        case 0x390b78u: goto label_390b78;
        case 0x390b7cu: goto label_390b7c;
        case 0x390b80u: goto label_390b80;
        case 0x390b84u: goto label_390b84;
        case 0x390b88u: goto label_390b88;
        case 0x390b8cu: goto label_390b8c;
        case 0x390b90u: goto label_390b90;
        case 0x390b94u: goto label_390b94;
        case 0x390b98u: goto label_390b98;
        case 0x390b9cu: goto label_390b9c;
        case 0x390ba0u: goto label_390ba0;
        case 0x390ba4u: goto label_390ba4;
        case 0x390ba8u: goto label_390ba8;
        case 0x390bacu: goto label_390bac;
        case 0x390bb0u: goto label_390bb0;
        case 0x390bb4u: goto label_390bb4;
        case 0x390bb8u: goto label_390bb8;
        case 0x390bbcu: goto label_390bbc;
        case 0x390bc0u: goto label_390bc0;
        case 0x390bc4u: goto label_390bc4;
        case 0x390bc8u: goto label_390bc8;
        case 0x390bccu: goto label_390bcc;
        case 0x390bd0u: goto label_390bd0;
        case 0x390bd4u: goto label_390bd4;
        case 0x390bd8u: goto label_390bd8;
        case 0x390bdcu: goto label_390bdc;
        case 0x390be0u: goto label_390be0;
        case 0x390be4u: goto label_390be4;
        case 0x390be8u: goto label_390be8;
        case 0x390becu: goto label_390bec;
        case 0x390bf0u: goto label_390bf0;
        case 0x390bf4u: goto label_390bf4;
        case 0x390bf8u: goto label_390bf8;
        case 0x390bfcu: goto label_390bfc;
        case 0x390c00u: goto label_390c00;
        case 0x390c04u: goto label_390c04;
        case 0x390c08u: goto label_390c08;
        case 0x390c0cu: goto label_390c0c;
        case 0x390c10u: goto label_390c10;
        case 0x390c14u: goto label_390c14;
        case 0x390c18u: goto label_390c18;
        case 0x390c1cu: goto label_390c1c;
        case 0x390c20u: goto label_390c20;
        case 0x390c24u: goto label_390c24;
        case 0x390c28u: goto label_390c28;
        case 0x390c2cu: goto label_390c2c;
        case 0x390c30u: goto label_390c30;
        case 0x390c34u: goto label_390c34;
        case 0x390c38u: goto label_390c38;
        case 0x390c3cu: goto label_390c3c;
        case 0x390c40u: goto label_390c40;
        case 0x390c44u: goto label_390c44;
        case 0x390c48u: goto label_390c48;
        case 0x390c4cu: goto label_390c4c;
        case 0x390c50u: goto label_390c50;
        case 0x390c54u: goto label_390c54;
        case 0x390c58u: goto label_390c58;
        case 0x390c5cu: goto label_390c5c;
        case 0x390c60u: goto label_390c60;
        case 0x390c64u: goto label_390c64;
        case 0x390c68u: goto label_390c68;
        case 0x390c6cu: goto label_390c6c;
        case 0x390c70u: goto label_390c70;
        case 0x390c74u: goto label_390c74;
        case 0x390c78u: goto label_390c78;
        case 0x390c7cu: goto label_390c7c;
        case 0x390c80u: goto label_390c80;
        case 0x390c84u: goto label_390c84;
        case 0x390c88u: goto label_390c88;
        case 0x390c8cu: goto label_390c8c;
        case 0x390c90u: goto label_390c90;
        case 0x390c94u: goto label_390c94;
        case 0x390c98u: goto label_390c98;
        case 0x390c9cu: goto label_390c9c;
        case 0x390ca0u: goto label_390ca0;
        case 0x390ca4u: goto label_390ca4;
        case 0x390ca8u: goto label_390ca8;
        case 0x390cacu: goto label_390cac;
        case 0x390cb0u: goto label_390cb0;
        case 0x390cb4u: goto label_390cb4;
        default: break;
    }

    ctx->pc = 0x390b38u;

label_390b38:
    // 0x390b38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x390b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_390b3c:
    // 0x390b3c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x390b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_390b40:
    // 0x390b40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x390b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_390b44:
    // 0x390b44: 0x244252e0  addiu       $v0, $v0, 0x52E0
    ctx->pc = 0x390b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21216));
label_390b48:
    // 0x390b48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x390b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_390b4c:
    // 0x390b4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x390b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390b50:
    // 0x390b50: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x390b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_390b54:
    // 0x390b54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x390b54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390b58:
    // 0x390b58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x390b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_390b5c:
    // 0x390b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x390b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_390b60:
    // 0x390b60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x390b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_390b64:
    // 0x390b64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x390b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_390b68:
    // 0x390b68: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_390b6c:
    if (ctx->pc == 0x390B6Cu) {
        ctx->pc = 0x390B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B68u;
        // 0x390b6c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B70u;
        goto label_390b70;
    }
    ctx->pc = 0x390B68u;
    {
        const bool branch_taken_0x390b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B68u;
        // 0x390b6c: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b68) {
            ctx->pc = 0x390C10u;
            goto label_390c10;
        }
    }
    ctx->pc = 0x390B70u;
label_390b70:
    // 0x390b70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x390b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_390b74:
    // 0x390b74: 0x0  nop
    ctx->pc = 0x390b74u;
    // NOP
label_390b78:
    // 0x390b78: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x390b78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_390b7c:
    // 0x390b7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x390b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_390b80:
    // 0x390b80: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x390b80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_390b84:
    // 0x390b84: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x390b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_390b88:
    // 0x390b88: 0x40f809  jalr        $v0
label_390b8c:
    if (ctx->pc == 0x390B8Cu) {
        ctx->pc = 0x390B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B88u;
        // 0x390b8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B90u;
        goto label_390b90;
    }
    ctx->pc = 0x390B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390B90u);
        ctx->pc = 0x390B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B88u;
        // 0x390b8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390B88u, 0x390B90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390B90u;
label_390b90:
    // 0x390b90: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
label_390b94:
    if (ctx->pc == 0x390B94u) {
        ctx->pc = 0x390B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B90u;
        // 0x390b94: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B98u;
        goto label_390b98;
    }
    ctx->pc = 0x390B90u;
    {
        const bool branch_taken_0x390b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x390b90) {
            ctx->pc = 0x390B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390B90u;
            // 0x390b94: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390C08u;
            goto label_390c08;
        }
    }
    ctx->pc = 0x390B98u;
label_390b98:
    // 0x390b98: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x390b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_390b9c:
    // 0x390b9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x390b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390ba0:
    // 0x390ba0: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_390ba4:
    if (ctx->pc == 0x390BA4u) {
        ctx->pc = 0x390BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BA0u;
        // 0x390ba4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BA8u;
        goto label_390ba8;
    }
    ctx->pc = 0x390BA0u;
    {
        const bool branch_taken_0x390ba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BA0u;
        // 0x390ba4: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ba0) {
            ctx->pc = 0x390C04u;
            goto label_390c04;
        }
    }
    ctx->pc = 0x390BA8u;
label_390ba8:
    // 0x390ba8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x390ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_390bac:
    // 0x390bac: 0x0  nop
    ctx->pc = 0x390bacu;
    // NOP
label_390bb0:
    // 0x390bb0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x390bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_390bb4:
    // 0x390bb4: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x390bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_390bb8:
    // 0x390bb8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x390bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_390bbc:
    // 0x390bbc: 0x1470000d  bne         $v1, $s0, . + 4 + (0xD << 2)
label_390bc0:
    if (ctx->pc == 0x390BC0u) {
        ctx->pc = 0x390BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BBCu;
        // 0x390bc0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BC4u;
        goto label_390bc4;
    }
    ctx->pc = 0x390BBCu;
    {
        const bool branch_taken_0x390bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        ctx->pc = 0x390BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BBCu;
        // 0x390bc0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bbc) {
            ctx->pc = 0x390BF4u;
            goto label_390bf4;
        }
    }
    ctx->pc = 0x390BC4u;
label_390bc4:
    // 0x390bc4: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x390bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_390bc8:
    // 0x390bc8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x390bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_390bcc:
    // 0x390bcc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x390bccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_390bd0:
    // 0x390bd0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x390bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_390bd4:
    // 0x390bd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x390bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_390bd8:
    // 0x390bd8: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x390bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_390bdc:
    // 0x390bdc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x390bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_390be0:
    // 0x390be0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x390be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_390be4:
    // 0x390be4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x390be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_390be8:
    // 0x390be8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x390be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_390bec:
    // 0x390bec: 0x10000005  b           . + 4 + (0x5 << 2)
label_390bf0:
    if (ctx->pc == 0x390BF0u) {
        ctx->pc = 0x390BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BECu;
        // 0x390bf0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BF4u;
        goto label_390bf4;
    }
    ctx->pc = 0x390BECu;
    {
        const bool branch_taken_0x390bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BECu;
        // 0x390bf0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390bec) {
            ctx->pc = 0x390C04u;
            goto label_390c04;
        }
    }
    ctx->pc = 0x390BF4u;
label_390bf4:
    // 0x390bf4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x390bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_390bf8:
    // 0x390bf8: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x390bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_390bfc:
    // 0x390bfc: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_390c00:
    if (ctx->pc == 0x390C00u) {
        ctx->pc = 0x390C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BFCu;
        // 0x390c00: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C04u;
        goto label_390c04;
    }
    ctx->pc = 0x390BFCu;
    {
        const bool branch_taken_0x390bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390bfc) {
            ctx->pc = 0x390C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390BFCu;
            // 0x390c00: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390bb0;
        }
    }
    ctx->pc = 0x390C04u;
label_390c04:
    // 0x390c04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x390c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_390c08:
    // 0x390c08: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_390c0c:
    if (ctx->pc == 0x390C0Cu) {
        ctx->pc = 0x390C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C08u;
        // 0x390c0c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C10u;
        goto label_390c10;
    }
    ctx->pc = 0x390C08u;
    {
        const bool branch_taken_0x390c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390c08) {
            ctx->pc = 0x390C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390C08u;
            // 0x390c0c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390b78;
        }
    }
    ctx->pc = 0x390C10u;
label_390c10:
    // 0x390c10: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x390c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_390c14:
    // 0x390c14: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x390c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_390c18:
    // 0x390c18: 0x24425340  addiu       $v0, $v0, 0x5340
    ctx->pc = 0x390c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21312));
label_390c1c:
    // 0x390c1c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x390c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_390c20:
    // 0x390c20: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x390c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_390c24:
    // 0x390c24: 0x26100c70  addiu       $s0, $s0, 0xC70
    ctx->pc = 0x390c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3184));
label_390c28:
    // 0x390c28: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x390c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_390c2c:
    // 0x390c2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x390c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390c30:
    // 0x390c30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x390c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_390c34:
    // 0x390c34: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x390c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_390c38:
    // 0x390c38: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x390c38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_390c3c:
    // 0x390c3c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x390c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_390c40:
    // 0x390c40: 0x60f809  jalr        $v1
label_390c44:
    if (ctx->pc == 0x390C44u) {
        ctx->pc = 0x390C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C40u;
        // 0x390c44: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C48u;
        goto label_390c48;
    }
    ctx->pc = 0x390C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390C48u);
        ctx->pc = 0x390C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C40u;
        // 0x390c44: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390C40u, 0x390C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390C48u;
label_390c48:
    // 0x390c48: 0x8e6827e4  lw          $t0, 0x27E4($s3)
    ctx->pc = 0x390c48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10212)));
label_390c4c:
    // 0x390c4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x390c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_390c50:
    // 0x390c50: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x390c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_390c54:
    // 0x390c54: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x390c54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_390c58:
    // 0x390c58: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x390c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_390c5c:
    // 0x390c5c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x390c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_390c60:
    // 0x390c60: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x390c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_390c64:
    // 0x390c64: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x390c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_390c68:
    // 0x390c68: 0x60f809  jalr        $v1
label_390c6c:
    if (ctx->pc == 0x390C6Cu) {
        ctx->pc = 0x390C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C68u;
        // 0x390c6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C70u;
        goto label_390c70;
    }
    ctx->pc = 0x390C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x390C70u);
        ctx->pc = 0x390C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C68u;
        // 0x390c6c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390C68u, 0x390C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390C70u;
label_390c70:
    // 0x390c70: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x390c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_390c74:
    // 0x390c74: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x390c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_390c78:
    // 0x390c78: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x390c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_390c7c:
    // 0x390c7c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x390c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_390c80:
    // 0x390c80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x390c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_390c84:
    // 0x390c84: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x390c84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_390c88:
    // 0x390c88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_390c8c:
    if (ctx->pc == 0x390C8Cu) {
        ctx->pc = 0x390C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C88u;
        // 0x390c8c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C90u;
        goto label_390c90;
    }
    ctx->pc = 0x390C88u;
    {
        const bool branch_taken_0x390c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x390C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C88u;
        // 0x390c8c: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c88) {
            ctx->pc = 0x390C98u;
            goto label_390c98;
        }
    }
    ctx->pc = 0x390C90u;
label_390c90:
    // 0x390c90: 0xc10b208  jal         func_42C820
label_390c94:
    if (ctx->pc == 0x390C94u) {
        ctx->pc = 0x390C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C90u;
        // 0x390c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C98u;
        goto label_390c98;
    }
    ctx->pc = 0x390C90u;
    SET_GPR_U32(ctx, 31, 0x390C98u);
    ctx->pc = 0x390C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390C90u;
    // 0x390c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x390C90u, 0x390C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390C98u;
label_390c98:
    // 0x390c98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x390c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_390c9c:
    // 0x390c9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x390c9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390ca0:
    // 0x390ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x390ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390ca4:
    // 0x390ca4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x390ca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_390ca8:
    // 0x390ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x390ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_390cac:
    // 0x390cac: 0x3e00008  jr          $ra
label_390cb0:
    if (ctx->pc == 0x390CB0u) {
        ctx->pc = 0x390CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CACu;
        // 0x390cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390CB4u;
        goto label_390cb4;
    }
    ctx->pc = 0x390CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CACu;
        // 0x390cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390CB4u;
label_390cb4:
    // 0x390cb4: 0x0  nop
    ctx->pc = 0x390cb4u;
    // NOP
    ctx->pc = 0x390cb8u;
}
