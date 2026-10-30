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

// Function: sub_00342B08
// Address: 0x342b08 - 0x342d08
void sub_00342B08_0x342b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342B08_0x342b08");
#endif

    switch (ctx->pc) {
        case 0x342b08u: goto label_342b08;
        case 0x342b0cu: goto label_342b0c;
        case 0x342b10u: goto label_342b10;
        case 0x342b14u: goto label_342b14;
        case 0x342b18u: goto label_342b18;
        case 0x342b1cu: goto label_342b1c;
        case 0x342b20u: goto label_342b20;
        case 0x342b24u: goto label_342b24;
        case 0x342b28u: goto label_342b28;
        case 0x342b2cu: goto label_342b2c;
        case 0x342b30u: goto label_342b30;
        case 0x342b34u: goto label_342b34;
        case 0x342b38u: goto label_342b38;
        case 0x342b3cu: goto label_342b3c;
        case 0x342b40u: goto label_342b40;
        case 0x342b44u: goto label_342b44;
        case 0x342b48u: goto label_342b48;
        case 0x342b4cu: goto label_342b4c;
        case 0x342b50u: goto label_342b50;
        case 0x342b54u: goto label_342b54;
        case 0x342b58u: goto label_342b58;
        case 0x342b5cu: goto label_342b5c;
        case 0x342b60u: goto label_342b60;
        case 0x342b64u: goto label_342b64;
        case 0x342b68u: goto label_342b68;
        case 0x342b6cu: goto label_342b6c;
        case 0x342b70u: goto label_342b70;
        case 0x342b74u: goto label_342b74;
        case 0x342b78u: goto label_342b78;
        case 0x342b7cu: goto label_342b7c;
        case 0x342b80u: goto label_342b80;
        case 0x342b84u: goto label_342b84;
        case 0x342b88u: goto label_342b88;
        case 0x342b8cu: goto label_342b8c;
        case 0x342b90u: goto label_342b90;
        case 0x342b94u: goto label_342b94;
        case 0x342b98u: goto label_342b98;
        case 0x342b9cu: goto label_342b9c;
        case 0x342ba0u: goto label_342ba0;
        case 0x342ba4u: goto label_342ba4;
        case 0x342ba8u: goto label_342ba8;
        case 0x342bacu: goto label_342bac;
        case 0x342bb0u: goto label_342bb0;
        case 0x342bb4u: goto label_342bb4;
        case 0x342bb8u: goto label_342bb8;
        case 0x342bbcu: goto label_342bbc;
        case 0x342bc0u: goto label_342bc0;
        case 0x342bc4u: goto label_342bc4;
        case 0x342bc8u: goto label_342bc8;
        case 0x342bccu: goto label_342bcc;
        case 0x342bd0u: goto label_342bd0;
        case 0x342bd4u: goto label_342bd4;
        case 0x342bd8u: goto label_342bd8;
        case 0x342bdcu: goto label_342bdc;
        case 0x342be0u: goto label_342be0;
        case 0x342be4u: goto label_342be4;
        case 0x342be8u: goto label_342be8;
        case 0x342becu: goto label_342bec;
        case 0x342bf0u: goto label_342bf0;
        case 0x342bf4u: goto label_342bf4;
        case 0x342bf8u: goto label_342bf8;
        case 0x342bfcu: goto label_342bfc;
        case 0x342c00u: goto label_342c00;
        case 0x342c04u: goto label_342c04;
        case 0x342c08u: goto label_342c08;
        case 0x342c0cu: goto label_342c0c;
        case 0x342c10u: goto label_342c10;
        case 0x342c14u: goto label_342c14;
        case 0x342c18u: goto label_342c18;
        case 0x342c1cu: goto label_342c1c;
        case 0x342c20u: goto label_342c20;
        case 0x342c24u: goto label_342c24;
        case 0x342c28u: goto label_342c28;
        case 0x342c2cu: goto label_342c2c;
        case 0x342c30u: goto label_342c30;
        case 0x342c34u: goto label_342c34;
        case 0x342c38u: goto label_342c38;
        case 0x342c3cu: goto label_342c3c;
        case 0x342c40u: goto label_342c40;
        case 0x342c44u: goto label_342c44;
        case 0x342c48u: goto label_342c48;
        case 0x342c4cu: goto label_342c4c;
        case 0x342c50u: goto label_342c50;
        case 0x342c54u: goto label_342c54;
        case 0x342c58u: goto label_342c58;
        case 0x342c5cu: goto label_342c5c;
        case 0x342c60u: goto label_342c60;
        case 0x342c64u: goto label_342c64;
        case 0x342c68u: goto label_342c68;
        case 0x342c6cu: goto label_342c6c;
        case 0x342c70u: goto label_342c70;
        case 0x342c74u: goto label_342c74;
        case 0x342c78u: goto label_342c78;
        case 0x342c7cu: goto label_342c7c;
        case 0x342c80u: goto label_342c80;
        case 0x342c84u: goto label_342c84;
        case 0x342c88u: goto label_342c88;
        case 0x342c8cu: goto label_342c8c;
        case 0x342c90u: goto label_342c90;
        case 0x342c94u: goto label_342c94;
        case 0x342c98u: goto label_342c98;
        case 0x342c9cu: goto label_342c9c;
        case 0x342ca0u: goto label_342ca0;
        case 0x342ca4u: goto label_342ca4;
        case 0x342ca8u: goto label_342ca8;
        case 0x342cacu: goto label_342cac;
        case 0x342cb0u: goto label_342cb0;
        case 0x342cb4u: goto label_342cb4;
        case 0x342cb8u: goto label_342cb8;
        case 0x342cbcu: goto label_342cbc;
        case 0x342cc0u: goto label_342cc0;
        case 0x342cc4u: goto label_342cc4;
        case 0x342cc8u: goto label_342cc8;
        case 0x342cccu: goto label_342ccc;
        case 0x342cd0u: goto label_342cd0;
        case 0x342cd4u: goto label_342cd4;
        case 0x342cd8u: goto label_342cd8;
        case 0x342cdcu: goto label_342cdc;
        case 0x342ce0u: goto label_342ce0;
        case 0x342ce4u: goto label_342ce4;
        case 0x342ce8u: goto label_342ce8;
        case 0x342cecu: goto label_342cec;
        case 0x342cf0u: goto label_342cf0;
        case 0x342cf4u: goto label_342cf4;
        case 0x342cf8u: goto label_342cf8;
        case 0x342cfcu: goto label_342cfc;
        case 0x342d00u: goto label_342d00;
        case 0x342d04u: goto label_342d04;
        default: break;
    }

    ctx->pc = 0x342b08u;

label_342b08:
    // 0x342b08: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x342b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_342b0c:
    // 0x342b0c: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x342b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_342b10:
    // 0x342b10: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x342b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_342b14:
    // 0x342b14: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x342b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_342b18:
    // 0x342b18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x342b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_342b1c:
    // 0x342b1c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x342b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_342b20:
    // 0x342b20: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x342b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_342b24:
    // 0x342b24: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x342b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_342b28:
    // 0x342b28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_342b2c:
    if (ctx->pc == 0x342B2Cu) {
        ctx->pc = 0x342B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B28u;
        // 0x342b2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B30u;
        goto label_342b30;
    }
    ctx->pc = 0x342B28u;
    {
        const bool branch_taken_0x342b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B28u;
        // 0x342b2c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b28) {
            ctx->pc = 0x342B38u;
            goto label_342b38;
        }
    }
    ctx->pc = 0x342B30u;
label_342b30:
    // 0x342b30: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x342b30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_342b34:
    // 0x342b34: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x342b34u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_342b38:
    // 0x342b38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x342b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342b3c:
    // 0x342b3c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x342b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_342b40:
    // 0x342b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x342b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342b44:
    // 0x342b44: 0x846500a0  lh          $a1, 0xA0($v1)
    ctx->pc = 0x342b44u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_342b48:
    // 0x342b48: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x342b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_342b4c:
    // 0x342b4c: 0x40f809  jalr        $v0
label_342b50:
    if (ctx->pc == 0x342B50u) {
        ctx->pc = 0x342B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B4Cu;
        // 0x342b50: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B54u;
        goto label_342b54;
    }
    ctx->pc = 0x342B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342B54u);
        ctx->pc = 0x342B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B4Cu;
        // 0x342b50: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B4Cu, 0x342B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342B54u;
label_342b54:
    // 0x342b54: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x342b54u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342b58:
    // 0x342b58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x342b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_342b5c:
    // 0x342b5c: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x342b5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_342b60:
    // 0x342b60: 0x82460031  lb          $a2, 0x31($s2)
    ctx->pc = 0x342b60u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
label_342b64:
    // 0x342b64: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x342b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_342b68:
    // 0x342b68: 0x10c2003c  beq         $a2, $v0, . + 4 + (0x3C << 2)
label_342b6c:
    if (ctx->pc == 0x342B6Cu) {
        ctx->pc = 0x342B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B68u;
        // 0x342b6c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B70u;
        goto label_342b70;
    }
    ctx->pc = 0x342B68u;
    {
        const bool branch_taken_0x342b68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x342B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B68u;
        // 0x342b6c: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342b68) {
            ctx->pc = 0x342C5Cu;
            goto label_342c5c;
        }
    }
    ctx->pc = 0x342B70u;
label_342b70:
    // 0x342b70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x342b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_342b74:
    // 0x342b74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x342b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_342b78:
    // 0x342b78: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x342b78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_342b7c:
    // 0x342b7c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x342b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_342b80:
    // 0x342b80: 0x40f809  jalr        $v0
label_342b84:
    if (ctx->pc == 0x342B84u) {
        ctx->pc = 0x342B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B80u;
        // 0x342b84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B88u;
        goto label_342b88;
    }
    ctx->pc = 0x342B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x342B88u);
        ctx->pc = 0x342B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B80u;
        // 0x342b84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342B80u, 0x342B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x342B88u;
label_342b88:
    // 0x342b88: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x342b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_342b8c:
    // 0x342b8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x342b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_342b90:
    // 0x342b90: 0xc0cd940  jal         func_336500
label_342b94:
    if (ctx->pc == 0x342B94u) {
        ctx->pc = 0x342B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342B90u;
        // 0x342b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342B98u;
        goto label_342b98;
    }
    ctx->pc = 0x342B90u;
    SET_GPR_U32(ctx, 31, 0x342B98u);
    ctx->pc = 0x342B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342B90u;
    // 0x342b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x342B90u, 0x342B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342B98u;
label_342b98:
    // 0x342b98: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x342b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_342b9c:
    // 0x342b9c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x342b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_342ba0:
    // 0x342ba0: 0xc0cd940  jal         func_336500
label_342ba4:
    if (ctx->pc == 0x342BA4u) {
        ctx->pc = 0x342BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342BA0u;
        // 0x342ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342BA8u;
        goto label_342ba8;
    }
    ctx->pc = 0x342BA0u;
    SET_GPR_U32(ctx, 31, 0x342BA8u);
    ctx->pc = 0x342BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342BA0u;
    // 0x342ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x342BA0u, 0x342BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342BA8u;
label_342ba8:
    // 0x342ba8: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x342ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_342bac:
    // 0x342bac: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x342bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_342bb0:
    // 0x342bb0: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x342bb0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_342bb4:
    // 0x342bb4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x342bb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_342bb8:
    // 0x342bb8: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x342bb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_342bbc:
    // 0x342bbc: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x342bbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
label_342bc0:
    // 0x342bc0: 0xda040030  lqc2        $vf4, 0x30($s0)
    ctx->pc = 0x342bc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_342bc4:
    // 0x342bc4: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x342bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342bc8:
    // 0x342bc8: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x342bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342bcc:
    // 0x342bcc: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x342bccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342bd0:
    // 0x342bd0: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x342bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_342bd4:
    // 0x342bd4: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x342bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_342bd8:
    // 0x342bd8: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x342bd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_342bdc:
    // 0x342bdc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x342bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_342be0:
    // 0x342be0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x342be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_342be4:
    // 0x342be4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x342be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342be8:
    // 0x342be8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x342be8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342bec:
    // 0x342bec: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342bf0:
    // 0x342bf0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342bf0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342bf4:
    // 0x342bf4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x342bf4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_342bf8:
    // 0x342bf8: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x342bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
label_342bfc:
    // 0x342bfc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x342bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_342c00:
    // 0x342c00: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x342c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_342c04:
    // 0x342c04: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x342c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_342c08:
    // 0x342c08: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x342c08u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_342c0c:
    // 0x342c0c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x342c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_342c10:
    // 0x342c10: 0xda220010  lqc2        $vf2, 0x10($s1)
    ctx->pc = 0x342c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_342c14:
    // 0x342c14: 0xda230020  lqc2        $vf3, 0x20($s1)
    ctx->pc = 0x342c14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_342c18:
    // 0x342c18: 0xda240030  lqc2        $vf4, 0x30($s1)
    ctx->pc = 0x342c18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
label_342c1c:
    // 0x342c1c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x342c1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342c20:
    // 0x342c20: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x342c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342c24:
    // 0x342c24: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x342c24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_342c28:
    // 0x342c28: 0x4be5204b  vmaddw.xyzw $vf1, $vf4, $vf5w
    ctx->pc = 0x342c28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_342c2c:
    // 0x342c2c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x342c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_342c30:
    // 0x342c30: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x342c30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_342c34:
    // 0x342c34: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x342c34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_342c38:
    // 0x342c38: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x342c38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342c3c:
    // 0x342c3c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x342c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342c40:
    // 0x342c40: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342c44:
    // 0x342c44: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342c44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342c48:
    // 0x342c48: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x342c48u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_342c4c:
    // 0x342c4c: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x342c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_342c50:
    // 0x342c50: 0x7e430050  sq          $v1, 0x50($s2)
    ctx->pc = 0x342c50u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 3));
label_342c54:
    // 0x342c54: 0x1000001d  b           . + 4 + (0x1D << 2)
label_342c58:
    if (ctx->pc == 0x342C58u) {
        ctx->pc = 0x342C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C54u;
        // 0x342c58: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342C5Cu;
        goto label_342c5c;
    }
    ctx->pc = 0x342C54u;
    {
        const bool branch_taken_0x342c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x342C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C54u;
        // 0x342c58: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c54) {
            ctx->pc = 0x342CCCu;
            goto label_342ccc;
        }
    }
    ctx->pc = 0x342C5Cu;
label_342c5c:
    // 0x342c5c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x342c5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_342c60:
    // 0x342c60: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x342c60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_342c64:
    // 0x342c64: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x342c64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342c68:
    // 0x342c68: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x342c68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_342c6c:
    // 0x342c6c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x342c6cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_342c70:
    // 0x342c70: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x342c70u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_342c74:
    // 0x342c74: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x342c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_342c78:
    // 0x342c78: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x342c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_342c7c:
    // 0x342c7c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x342c7cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342c80:
    // 0x342c80: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x342c80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_342c84:
    // 0x342c84: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x342c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_342c88:
    // 0x342c88: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x342c88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342c8c:
    // 0x342c8c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x342c8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_342c90:
    // 0x342c90: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x342c90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_342c94:
    // 0x342c94: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x342c94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_342c98:
    // 0x342c98: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x342c98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_342c9c:
    // 0x342c9c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x342c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_342ca0:
    // 0x342ca0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x342ca0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_342ca4:
    // 0x342ca4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x342ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_342ca8:
    // 0x342ca8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x342ca8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_342cac:
    // 0x342cac: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x342cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_342cb0:
    // 0x342cb0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x342cb0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_342cb4:
    // 0x342cb4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x342cb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_342cb8:
    // 0x342cb8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x342cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_342cbc:
    // 0x342cbc: 0x7e430050  sq          $v1, 0x50($s2)
    ctx->pc = 0x342cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 3));
label_342cc0:
    // 0x342cc0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x342cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_342cc4:
    // 0x342cc4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x342cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_342cc8:
    // 0x342cc8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x342cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_342ccc:
    // 0x342ccc: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x342cccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_342cd0:
    // 0x342cd0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x342cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_342cd4:
    // 0x342cd4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_342cd8:
    if (ctx->pc == 0x342CD8u) {
        ctx->pc = 0x342CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CD4u;
        // 0x342cd8: 0x96420032  lhu         $v0, 0x32($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342CDCu;
        goto label_342cdc;
    }
    ctx->pc = 0x342CD4u;
    {
        const bool branch_taken_0x342cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x342cd4) {
            ctx->pc = 0x342CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342CD4u;
            // 0x342cd8: 0x96420032  lhu         $v0, 0x32($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342CE8u;
            goto label_342ce8;
        }
    }
    ctx->pc = 0x342CDCu;
label_342cdc:
    // 0x342cdc: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x342cdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
label_342ce0:
    // 0x342ce0: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x342ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_342ce4:
    // 0x342ce4: 0x96420032  lhu         $v0, 0x32($s2)
    ctx->pc = 0x342ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 50)));
label_342ce8:
    // 0x342ce8: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x342ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_342cec:
    // 0x342cec: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x342cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
label_342cf0:
    // 0x342cf0: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x342cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_342cf4:
    // 0x342cf4: 0xa6420032  sh          $v0, 0x32($s2)
    ctx->pc = 0x342cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 50), (uint16_t)GPR_U32(ctx, 2));
label_342cf8:
    // 0x342cf8: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x342cf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_342cfc:
    // 0x342cfc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x342cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_342d00:
    // 0x342d00: 0x3e00008  jr          $ra
label_342d04:
    if (ctx->pc == 0x342D04u) {
        ctx->pc = 0x342D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D00u;
        // 0x342d04: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x342D08u;
        goto label_fallthrough_0x342d00;
    }
    ctx->pc = 0x342D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342D00u;
        // 0x342d04: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x342d00:
    ctx->pc = 0x342D08u;
}
