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

// Function: sub_00192AC8
// Address: 0x192ac8 - 0x192b98
void sub_00192AC8_0x192ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192AC8_0x192ac8");
#endif

    switch (ctx->pc) {
        case 0x192ac8u: goto label_192ac8;
        case 0x192accu: goto label_192acc;
        case 0x192ad0u: goto label_192ad0;
        case 0x192ad4u: goto label_192ad4;
        case 0x192ad8u: goto label_192ad8;
        case 0x192adcu: goto label_192adc;
        case 0x192ae0u: goto label_192ae0;
        case 0x192ae4u: goto label_192ae4;
        case 0x192ae8u: goto label_192ae8;
        case 0x192aecu: goto label_192aec;
        case 0x192af0u: goto label_192af0;
        case 0x192af4u: goto label_192af4;
        case 0x192af8u: goto label_192af8;
        case 0x192afcu: goto label_192afc;
        case 0x192b00u: goto label_192b00;
        case 0x192b04u: goto label_192b04;
        case 0x192b08u: goto label_192b08;
        case 0x192b0cu: goto label_192b0c;
        case 0x192b10u: goto label_192b10;
        case 0x192b14u: goto label_192b14;
        case 0x192b18u: goto label_192b18;
        case 0x192b1cu: goto label_192b1c;
        case 0x192b20u: goto label_192b20;
        case 0x192b24u: goto label_192b24;
        case 0x192b28u: goto label_192b28;
        case 0x192b2cu: goto label_192b2c;
        case 0x192b30u: goto label_192b30;
        case 0x192b34u: goto label_192b34;
        case 0x192b38u: goto label_192b38;
        case 0x192b3cu: goto label_192b3c;
        case 0x192b40u: goto label_192b40;
        case 0x192b44u: goto label_192b44;
        case 0x192b48u: goto label_192b48;
        case 0x192b4cu: goto label_192b4c;
        case 0x192b50u: goto label_192b50;
        case 0x192b54u: goto label_192b54;
        case 0x192b58u: goto label_192b58;
        case 0x192b5cu: goto label_192b5c;
        case 0x192b60u: goto label_192b60;
        case 0x192b64u: goto label_192b64;
        case 0x192b68u: goto label_192b68;
        case 0x192b6cu: goto label_192b6c;
        case 0x192b70u: goto label_192b70;
        case 0x192b74u: goto label_192b74;
        case 0x192b78u: goto label_192b78;
        case 0x192b7cu: goto label_192b7c;
        case 0x192b80u: goto label_192b80;
        case 0x192b84u: goto label_192b84;
        case 0x192b88u: goto label_192b88;
        case 0x192b8cu: goto label_192b8c;
        case 0x192b90u: goto label_192b90;
        case 0x192b94u: goto label_192b94;
        default: break;
    }

    ctx->pc = 0x192ac8u;

label_192ac8:
    // 0x192ac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x192ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_192acc:
    // 0x192acc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x192accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192ad0:
    // 0x192ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_192ad4:
    // 0x192ad4: 0x11000016  beqz        $t0, . + 4 + (0x16 << 2)
label_192ad8:
    if (ctx->pc == 0x192AD8u) {
        ctx->pc = 0x192AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AD4u;
        // 0x192ad8: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192ADCu;
        goto label_192adc;
    }
    ctx->pc = 0x192AD4u;
    {
        const bool branch_taken_0x192ad4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x192AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192AD4u;
        // 0x192ad8: 0xa0602d  daddu       $t4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192ad4) {
            ctx->pc = 0x192B30u;
            goto label_192b30;
        }
    }
    ctx->pc = 0x192ADCu;
label_192adc:
    // 0x192adc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x192adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_192ae0:
    // 0x192ae0: 0x61b82  srl         $v1, $a2, 14
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
label_192ae4:
    // 0x192ae4: 0x8c8727e4  lw          $a3, 0x27E4($a0)
    ctx->pc = 0x192ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_192ae8:
    // 0x192ae8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_192aec:
    // 0x192aec: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x192aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_192af0:
    // 0x192af0: 0x306303fc  andi        $v1, $v1, 0x3FC
    ctx->pc = 0x192af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1020);
label_192af4:
    // 0x192af4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_192af8:
    // 0x192af8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_192afc:
    // 0x192afc: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x192afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_192b00:
    // 0x192b00: 0x3c090055  lui         $t1, 0x55
    ctx->pc = 0x192b00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)85 << 16));
label_192b04:
    // 0x192b04: 0x84c40060  lh          $a0, 0x60($a2)
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
label_192b08:
    // 0x192b08: 0x24a534c0  addiu       $a1, $a1, 0x34C0
    ctx->pc = 0x192b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13504));
label_192b0c:
    // 0x192b0c: 0x8cc20064  lw          $v0, 0x64($a2)
    ctx->pc = 0x192b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_192b10:
    // 0x192b10: 0x252934d0  addiu       $t1, $t1, 0x34D0
    ctx->pc = 0x192b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13520));
label_192b14:
    // 0x192b14: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x192b14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_192b18:
    // 0x192b18: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x192b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_192b1c:
    // 0x192b1c: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x192b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_192b20:
    // 0x192b20: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x192b20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_192b24:
    // 0x192b24: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x192b24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_192b28:
    // 0x192b28: 0x10000015  b           . + 4 + (0x15 << 2)
label_192b2c:
    if (ctx->pc == 0x192B2Cu) {
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x240a00b8  addiu       $t2, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B30u;
        goto label_192b30;
    }
    ctx->pc = 0x192B28u;
    {
        const bool branch_taken_0x192b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x192B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B28u;
        // 0x192b2c: 0x240a00b8  addiu       $t2, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192b28) {
            ctx->pc = 0x192B80u;
            goto label_192b80;
        }
    }
    ctx->pc = 0x192B30u;
label_192b30:
    // 0x192b30: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x192b30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_192b34:
    // 0x192b34: 0x61b82  srl         $v1, $a2, 14
    ctx->pc = 0x192b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 14));
label_192b38:
    // 0x192b38: 0x8c8727e4  lw          $a3, 0x27E4($a0)
    ctx->pc = 0x192b38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 10212)));
label_192b3c:
    // 0x192b3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x192b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_192b40:
    // 0x192b40: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x192b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_192b44:
    // 0x192b44: 0x306303fc  andi        $v1, $v1, 0x3FC
    ctx->pc = 0x192b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1020);
label_192b48:
    // 0x192b48: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x192b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_192b4c:
    // 0x192b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x192b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_192b50:
    // 0x192b50: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x192b50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_192b54:
    // 0x192b54: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x192b54u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_192b58:
    // 0x192b58: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x192b58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_192b5c:
    // 0x192b5c: 0x24a534c0  addiu       $a1, $a1, 0x34C0
    ctx->pc = 0x192b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13504));
label_192b60:
    // 0x192b60: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x192b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_192b64:
    // 0x192b64: 0x250834d0  addiu       $t0, $t0, 0x34D0
    ctx->pc = 0x192b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13520));
label_192b68:
    // 0x192b68: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x192b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_192b6c:
    // 0x192b6c: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x192b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_192b70:
    // 0x192b70: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x192b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_192b74:
    // 0x192b74: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x192b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_192b78:
    // 0x192b78: 0x240900b2  addiu       $t1, $zero, 0xB2
    ctx->pc = 0x192b78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
label_192b7c:
    // 0x192b7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x192b7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_192b80:
    // 0x192b80: 0x40f809  jalr        $v0
label_192b84:
    if (ctx->pc == 0x192B84u) {
        ctx->pc = 0x192B88u;
        goto label_192b88;
    }
    ctx->pc = 0x192B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192B88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B80u, 0x192B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x192B88u;
label_192b88:
    // 0x192b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_192b8c:
    // 0x192b8c: 0x3e00008  jr          $ra
label_192b90:
    if (ctx->pc == 0x192B90u) {
        ctx->pc = 0x192B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B8Cu;
        // 0x192b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192B94u;
        goto label_192b94;
    }
    ctx->pc = 0x192B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192B8Cu;
        // 0x192b90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192B94u;
label_192b94:
    // 0x192b94: 0x0  nop
    ctx->pc = 0x192b94u;
    // NOP
    ctx->pc = 0x192b98u;
}
