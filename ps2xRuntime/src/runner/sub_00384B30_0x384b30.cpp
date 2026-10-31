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

// Function: sub_00384B30
// Address: 0x384b30 - 0x384bc0
void sub_00384B30_0x384b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384B30_0x384b30");
#endif

    switch (ctx->pc) {
        case 0x384b30u: goto label_384b30;
        case 0x384b34u: goto label_384b34;
        case 0x384b38u: goto label_384b38;
        case 0x384b3cu: goto label_384b3c;
        case 0x384b40u: goto label_384b40;
        case 0x384b44u: goto label_384b44;
        case 0x384b48u: goto label_384b48;
        case 0x384b4cu: goto label_384b4c;
        case 0x384b50u: goto label_384b50;
        case 0x384b54u: goto label_384b54;
        case 0x384b58u: goto label_384b58;
        case 0x384b5cu: goto label_384b5c;
        case 0x384b60u: goto label_384b60;
        case 0x384b64u: goto label_384b64;
        case 0x384b68u: goto label_384b68;
        case 0x384b6cu: goto label_384b6c;
        case 0x384b70u: goto label_384b70;
        case 0x384b74u: goto label_384b74;
        case 0x384b78u: goto label_384b78;
        case 0x384b7cu: goto label_384b7c;
        case 0x384b80u: goto label_384b80;
        case 0x384b84u: goto label_384b84;
        case 0x384b88u: goto label_384b88;
        case 0x384b8cu: goto label_384b8c;
        case 0x384b90u: goto label_384b90;
        case 0x384b94u: goto label_384b94;
        case 0x384b98u: goto label_384b98;
        case 0x384b9cu: goto label_384b9c;
        case 0x384ba0u: goto label_384ba0;
        case 0x384ba4u: goto label_384ba4;
        case 0x384ba8u: goto label_384ba8;
        case 0x384bacu: goto label_384bac;
        case 0x384bb0u: goto label_384bb0;
        case 0x384bb4u: goto label_384bb4;
        case 0x384bb8u: goto label_384bb8;
        case 0x384bbcu: goto label_384bbc;
        default: break;
    }

    ctx->pc = 0x384b30u;

label_384b30:
    // 0x384b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x384b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_384b34:
    // 0x384b34: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x384b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_384b38:
    // 0x384b38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x384b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_384b3c:
    // 0x384b3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x384b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_384b40:
    // 0x384b40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x384b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_384b44:
    // 0x384b44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_384b48:
    // 0x384b48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_384b4c:
    // 0x384b4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x384b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_384b50:
    // 0x384b50: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
label_384b54:
    if (ctx->pc == 0x384B54u) {
        ctx->pc = 0x384B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B50u;
        // 0x384b54: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B58u;
        goto label_384b58;
    }
    ctx->pc = 0x384B50u;
    {
        const bool branch_taken_0x384b50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B50u;
        // 0x384b54: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b50) {
            ctx->pc = 0x384B8Cu;
            goto label_384b8c;
        }
    }
    ctx->pc = 0x384B58u;
label_384b58:
    // 0x384b58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x384b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_384b5c:
    // 0x384b5c: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x384b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_384b60:
    // 0x384b60: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x384b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_384b64:
    // 0x384b64: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x384b64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_384b68:
    // 0x384b68: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x384b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_384b6c:
    // 0x384b6c: 0x40f809  jalr        $v0
label_384b70:
    if (ctx->pc == 0x384B70u) {
        ctx->pc = 0x384B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B6Cu;
        // 0x384b70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B74u;
        goto label_384b74;
    }
    ctx->pc = 0x384B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x384B74u);
        ctx->pc = 0x384B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B6Cu;
        // 0x384b70: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B6Cu, 0x384B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384B74u;
label_384b74:
    // 0x384b74: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x384b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_384b78:
    // 0x384b78: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x384b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_384b7c:
    // 0x384b7c: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_384b80:
    if (ctx->pc == 0x384B80u) {
        ctx->pc = 0x384B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B7Cu;
        // 0x384b80: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B84u;
        goto label_384b84;
    }
    ctx->pc = 0x384B7Cu;
    {
        const bool branch_taken_0x384b7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x384B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B7Cu;
        // 0x384b80: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b7c) {
            ctx->pc = 0x384BA4u;
            goto label_384ba4;
        }
    }
    ctx->pc = 0x384B84u;
label_384b84:
    // 0x384b84: 0x10000006  b           . + 4 + (0x6 << 2)
label_384b88:
    if (ctx->pc == 0x384B88u) {
        ctx->pc = 0x384B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B84u;
        // 0x384b88: 0xae12007c  sw          $s2, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B8Cu;
        goto label_384b8c;
    }
    ctx->pc = 0x384B84u;
    {
        const bool branch_taken_0x384b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B84u;
        // 0x384b88: 0xae12007c  sw          $s2, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b84) {
            ctx->pc = 0x384BA0u;
            goto label_384ba0;
        }
    }
    ctx->pc = 0x384B8Cu;
label_384b8c:
    // 0x384b8c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x384b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_384b90:
    // 0x384b90: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x384b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_384b94:
    // 0x384b94: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_384b98:
    if (ctx->pc == 0x384B98u) {
        ctx->pc = 0x384B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B94u;
        // 0x384b98: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384B9Cu;
        goto label_384b9c;
    }
    ctx->pc = 0x384B94u;
    {
        const bool branch_taken_0x384b94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x384B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B94u;
        // 0x384b98: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384b94) {
            ctx->pc = 0x384BA4u;
            goto label_384ba4;
        }
    }
    ctx->pc = 0x384B9Cu;
label_384b9c:
    // 0x384b9c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x384b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
label_384ba0:
    // 0x384ba0: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x384ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_384ba4:
    // 0x384ba4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x384ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_384ba8:
    // 0x384ba8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x384ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_384bac:
    // 0x384bac: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x384bacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_384bb0:
    // 0x384bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_384bb4:
    // 0x384bb4: 0x3e00008  jr          $ra
label_384bb8:
    if (ctx->pc == 0x384BB8u) {
        ctx->pc = 0x384BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BB4u;
        // 0x384bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384BBCu;
        goto label_384bbc;
    }
    ctx->pc = 0x384BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BB4u;
        // 0x384bb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384BBCu;
label_384bbc:
    // 0x384bbc: 0x0  nop
    ctx->pc = 0x384bbcu;
    // NOP
    ctx->pc = 0x384bc0u;
}
