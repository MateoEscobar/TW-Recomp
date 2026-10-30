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

// Function: sub_00111AC0
// Address: 0x111ac0 - 0x111c30
void sub_00111AC0_0x111ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111AC0_0x111ac0");
#endif

    switch (ctx->pc) {
        case 0x111ac0u: goto label_111ac0;
        case 0x111ac4u: goto label_111ac4;
        case 0x111ac8u: goto label_111ac8;
        case 0x111accu: goto label_111acc;
        case 0x111ad0u: goto label_111ad0;
        case 0x111ad4u: goto label_111ad4;
        case 0x111ad8u: goto label_111ad8;
        case 0x111adcu: goto label_111adc;
        case 0x111ae0u: goto label_111ae0;
        case 0x111ae4u: goto label_111ae4;
        case 0x111ae8u: goto label_111ae8;
        case 0x111aecu: goto label_111aec;
        case 0x111af0u: goto label_111af0;
        case 0x111af4u: goto label_111af4;
        case 0x111af8u: goto label_111af8;
        case 0x111afcu: goto label_111afc;
        case 0x111b00u: goto label_111b00;
        case 0x111b04u: goto label_111b04;
        case 0x111b08u: goto label_111b08;
        case 0x111b0cu: goto label_111b0c;
        case 0x111b10u: goto label_111b10;
        case 0x111b14u: goto label_111b14;
        case 0x111b18u: goto label_111b18;
        case 0x111b1cu: goto label_111b1c;
        case 0x111b20u: goto label_111b20;
        case 0x111b24u: goto label_111b24;
        case 0x111b28u: goto label_111b28;
        case 0x111b2cu: goto label_111b2c;
        case 0x111b30u: goto label_111b30;
        case 0x111b34u: goto label_111b34;
        case 0x111b38u: goto label_111b38;
        case 0x111b3cu: goto label_111b3c;
        case 0x111b40u: goto label_111b40;
        case 0x111b44u: goto label_111b44;
        case 0x111b48u: goto label_111b48;
        case 0x111b4cu: goto label_111b4c;
        case 0x111b50u: goto label_111b50;
        case 0x111b54u: goto label_111b54;
        case 0x111b58u: goto label_111b58;
        case 0x111b5cu: goto label_111b5c;
        case 0x111b60u: goto label_111b60;
        case 0x111b64u: goto label_111b64;
        case 0x111b68u: goto label_111b68;
        case 0x111b6cu: goto label_111b6c;
        case 0x111b70u: goto label_111b70;
        case 0x111b74u: goto label_111b74;
        case 0x111b78u: goto label_111b78;
        case 0x111b7cu: goto label_111b7c;
        case 0x111b80u: goto label_111b80;
        case 0x111b84u: goto label_111b84;
        case 0x111b88u: goto label_111b88;
        case 0x111b8cu: goto label_111b8c;
        case 0x111b90u: goto label_111b90;
        case 0x111b94u: goto label_111b94;
        case 0x111b98u: goto label_111b98;
        case 0x111b9cu: goto label_111b9c;
        case 0x111ba0u: goto label_111ba0;
        case 0x111ba4u: goto label_111ba4;
        case 0x111ba8u: goto label_111ba8;
        case 0x111bacu: goto label_111bac;
        case 0x111bb0u: goto label_111bb0;
        case 0x111bb4u: goto label_111bb4;
        case 0x111bb8u: goto label_111bb8;
        case 0x111bbcu: goto label_111bbc;
        case 0x111bc0u: goto label_111bc0;
        case 0x111bc4u: goto label_111bc4;
        case 0x111bc8u: goto label_111bc8;
        case 0x111bccu: goto label_111bcc;
        case 0x111bd0u: goto label_111bd0;
        case 0x111bd4u: goto label_111bd4;
        case 0x111bd8u: goto label_111bd8;
        case 0x111bdcu: goto label_111bdc;
        case 0x111be0u: goto label_111be0;
        case 0x111be4u: goto label_111be4;
        case 0x111be8u: goto label_111be8;
        case 0x111becu: goto label_111bec;
        case 0x111bf0u: goto label_111bf0;
        case 0x111bf4u: goto label_111bf4;
        case 0x111bf8u: goto label_111bf8;
        case 0x111bfcu: goto label_111bfc;
        case 0x111c00u: goto label_111c00;
        case 0x111c04u: goto label_111c04;
        case 0x111c08u: goto label_111c08;
        case 0x111c0cu: goto label_111c0c;
        case 0x111c10u: goto label_111c10;
        case 0x111c14u: goto label_111c14;
        case 0x111c18u: goto label_111c18;
        case 0x111c1cu: goto label_111c1c;
        case 0x111c20u: goto label_111c20;
        case 0x111c24u: goto label_111c24;
        case 0x111c28u: goto label_111c28;
        case 0x111c2cu: goto label_111c2c;
        default: break;
    }

    ctx->pc = 0x111ac0u;

label_111ac0:
    // 0x111ac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x111ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_111ac4:
    // 0x111ac4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x111ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_111ac8:
    // 0x111ac8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x111ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_111acc:
    // 0x111acc: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x111accu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_111ad0:
    // 0x111ad0: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x111ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_111ad4:
    // 0x111ad4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x111ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_111ad8:
    // 0x111ad8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x111ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_111adc:
    // 0x111adc: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x111adcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_111ae0:
    // 0x111ae0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x111ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_111ae4:
    // 0x111ae4: 0x24a57128  addiu       $a1, $a1, 0x7128
    ctx->pc = 0x111ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28968));
label_111ae8:
    // 0x111ae8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x111ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_111aec:
    // 0x111aec: 0x2455aa94  addiu       $s5, $v0, -0x556C
    ctx->pc = 0x111aecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945428));
label_111af0:
    // 0x111af0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x111af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_111af4:
    // 0x111af4: 0x25087140  addiu       $t0, $t0, 0x7140
    ctx->pc = 0x111af4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 28992));
label_111af8:
    // 0x111af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_111afc:
    // 0x111afc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x111afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_111b00:
    // 0x111b00: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x111b00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_111b04:
    // 0x111b04: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x111b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_111b08:
    // 0x111b08: 0x24090032  addiu       $t1, $zero, 0x32
    ctx->pc = 0x111b08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_111b0c:
    // 0x111b0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x111b0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b10:
    // 0x111b10: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x111b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_111b14:
    // 0x111b14: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x111b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_111b18:
    // 0x111b18: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x111b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_111b1c:
    // 0x111b1c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x111b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_111b20:
    // 0x111b20: 0x40f809  jalr        $v0
label_111b24:
    if (ctx->pc == 0x111B24u) {
        ctx->pc = 0x111B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B20u;
        // 0x111b24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B28u;
        goto label_111b28;
    }
    ctx->pc = 0x111B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111B28u);
        ctx->pc = 0x111B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B20u;
        // 0x111b24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B20u, 0x111B28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111B28u;
label_111b28:
    // 0x111b28: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x111b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_111b2c:
    // 0x111b2c: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
label_111b30:
    if (ctx->pc == 0x111B30u) {
        ctx->pc = 0x111B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B2Cu;
        // 0x111b30: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B34u;
        goto label_111b34;
    }
    ctx->pc = 0x111B2Cu;
    {
        const bool branch_taken_0x111b2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x111B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B2Cu;
        // 0x111b30: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111b2c) {
            ctx->pc = 0x111C08u;
            goto label_111c08;
        }
    }
    ctx->pc = 0x111B34u;
label_111b34:
    // 0x111b34: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x111b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_111b38:
    // 0x111b38: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x111b38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_111b3c:
    // 0x111b3c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x111b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_111b40:
    // 0x111b40: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x111b40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_111b44:
    // 0x111b44: 0x8e8a27e4  lw          $t2, 0x27E4($s4)
    ctx->pc = 0x111b44u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_111b48:
    // 0x111b48: 0x3c110054  lui         $s1, 0x54
    ctx->pc = 0x111b48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)84 << 16));
label_111b4c:
    // 0x111b4c: 0x261070f8  addiu       $s0, $s0, 0x70F8
    ctx->pc = 0x111b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28920));
label_111b50:
    // 0x111b50: 0x26317100  addiu       $s1, $s1, 0x7100
    ctx->pc = 0x111b50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28928));
label_111b54:
    // 0x111b54: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x111b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_111b58:
    // 0x111b58: 0x3406f000  ori         $a2, $zero, 0xF000
    ctx->pc = 0x111b58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
label_111b5c:
    // 0x111b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111b60:
    // 0x111b60: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x111b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_111b64:
    // 0x111b64: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x111b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_111b68:
    // 0x111b68: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x111b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b6c:
    // 0x111b6c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x111b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_111b70:
    // 0x111b70: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x111b70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_111b74:
    // 0x111b74: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x111b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_111b78:
    // 0x111b78: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x111b78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111b7c:
    // 0x111b7c: 0x40f809  jalr        $v0
label_111b80:
    if (ctx->pc == 0x111B80u) {
        ctx->pc = 0x111B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B7Cu;
        // 0x111b80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111B84u;
        goto label_111b84;
    }
    ctx->pc = 0x111B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111B84u);
        ctx->pc = 0x111B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111B7Cu;
        // 0x111b80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111B7Cu, 0x111B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111B84u;
label_111b84:
    // 0x111b84: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x111b84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_111b88:
    // 0x111b88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x111b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_111b8c:
    // 0x111b8c: 0x8e8c27e4  lw          $t4, 0x27E4($s4)
    ctx->pc = 0x111b8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10212)));
label_111b90:
    // 0x111b90: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x111b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_111b94:
    // 0x111b94: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x111b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_111b98:
    // 0x111b98: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x111b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_111b9c:
    // 0x111b9c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x111b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_111ba0:
    // 0x111ba0: 0x24090021  addiu       $t1, $zero, 0x21
    ctx->pc = 0x111ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_111ba4:
    // 0x111ba4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x111ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_111ba8:
    // 0x111ba8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x111ba8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bac:
    // 0x111bac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x111bacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_111bb0:
    // 0x111bb0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x111bb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bb4:
    // 0x111bb4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x111bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_111bb8:
    // 0x111bb8: 0x40f809  jalr        $v0
label_111bbc:
    if (ctx->pc == 0x111BBCu) {
        ctx->pc = 0x111BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB8u;
        // 0x111bbc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BC0u;
        goto label_111bc0;
    }
    ctx->pc = 0x111BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x111BC0u);
        ctx->pc = 0x111BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BB8u;
        // 0x111bbc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111BB8u, 0x111BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x111BC0u;
label_111bc0:
    // 0x111bc0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x111bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_111bc4:
    // 0x111bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x111bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bc8:
    // 0x111bc8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_111bcc:
    if (ctx->pc == 0x111BCCu) {
        ctx->pc = 0x111BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BC8u;
        // 0x111bcc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111BD0u;
        goto label_111bd0;
    }
    ctx->pc = 0x111BC8u;
    {
        const bool branch_taken_0x111bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BC8u;
        // 0x111bcc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bc8) {
            ctx->pc = 0x111C04u;
            goto label_111c04;
        }
    }
    ctx->pc = 0x111BD0u;
label_111bd0:
    // 0x111bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x111bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_111bd4:
    // 0x111bd4: 0x0  nop
    ctx->pc = 0x111bd4u;
    // NOP
label_111bd8:
    // 0x111bd8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x111bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_111bdc:
    // 0x111bdc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x111bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_111be0:
    // 0x111be0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x111be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_111be4:
    // 0x111be4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x111be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_111be8:
    // 0x111be8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x111be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_111bec:
    // 0x111bec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x111becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_111bf0:
    // 0x111bf0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x111bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_111bf4:
    // 0x111bf4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x111bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_111bf8:
    // 0x111bf8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x111bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_111bfc:
    // 0x111bfc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_111c00:
    if (ctx->pc == 0x111C00u) {
        ctx->pc = 0x111C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BFCu;
        // 0x111c00: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C04u;
        goto label_111c04;
    }
    ctx->pc = 0x111BFCu;
    {
        const bool branch_taken_0x111bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BFCu;
        // 0x111c00: 0x24c600f0  addiu       $a2, $a2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bfc) {
            ctx->pc = 0x111BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111bd8;
        }
    }
    ctx->pc = 0x111C04u;
label_111c04:
    // 0x111c04: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x111c04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_111c08:
    // 0x111c08: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x111c08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_111c0c:
    // 0x111c0c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x111c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_111c10:
    // 0x111c10: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x111c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_111c14:
    // 0x111c14: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x111c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_111c18:
    // 0x111c18: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x111c18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_111c1c:
    // 0x111c1c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x111c1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_111c20:
    // 0x111c20: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x111c20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_111c24:
    // 0x111c24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111c28:
    // 0x111c28: 0x3e00008  jr          $ra
label_111c2c:
    if (ctx->pc == 0x111C2Cu) {
        ctx->pc = 0x111C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C28u;
        // 0x111c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x111C30u;
        goto label_fallthrough_0x111c28;
    }
    ctx->pc = 0x111C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C28u;
        // 0x111c2c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x111c28:
    ctx->pc = 0x111C30u;
}
