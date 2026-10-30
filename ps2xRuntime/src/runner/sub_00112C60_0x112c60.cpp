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

// Function: sub_00112C60
// Address: 0x112c60 - 0x112d00
void sub_00112C60_0x112c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112C60_0x112c60");
#endif

    switch (ctx->pc) {
        case 0x112c60u: goto label_112c60;
        case 0x112c64u: goto label_112c64;
        case 0x112c68u: goto label_112c68;
        case 0x112c6cu: goto label_112c6c;
        case 0x112c70u: goto label_112c70;
        case 0x112c74u: goto label_112c74;
        case 0x112c78u: goto label_112c78;
        case 0x112c7cu: goto label_112c7c;
        case 0x112c80u: goto label_112c80;
        case 0x112c84u: goto label_112c84;
        case 0x112c88u: goto label_112c88;
        case 0x112c8cu: goto label_112c8c;
        case 0x112c90u: goto label_112c90;
        case 0x112c94u: goto label_112c94;
        case 0x112c98u: goto label_112c98;
        case 0x112c9cu: goto label_112c9c;
        case 0x112ca0u: goto label_112ca0;
        case 0x112ca4u: goto label_112ca4;
        case 0x112ca8u: goto label_112ca8;
        case 0x112cacu: goto label_112cac;
        case 0x112cb0u: goto label_112cb0;
        case 0x112cb4u: goto label_112cb4;
        case 0x112cb8u: goto label_112cb8;
        case 0x112cbcu: goto label_112cbc;
        case 0x112cc0u: goto label_112cc0;
        case 0x112cc4u: goto label_112cc4;
        case 0x112cc8u: goto label_112cc8;
        case 0x112cccu: goto label_112ccc;
        case 0x112cd0u: goto label_112cd0;
        case 0x112cd4u: goto label_112cd4;
        case 0x112cd8u: goto label_112cd8;
        case 0x112cdcu: goto label_112cdc;
        case 0x112ce0u: goto label_112ce0;
        case 0x112ce4u: goto label_112ce4;
        case 0x112ce8u: goto label_112ce8;
        case 0x112cecu: goto label_112cec;
        case 0x112cf0u: goto label_112cf0;
        case 0x112cf4u: goto label_112cf4;
        case 0x112cf8u: goto label_112cf8;
        case 0x112cfcu: goto label_112cfc;
        default: break;
    }

    ctx->pc = 0x112c60u;

label_112c60:
    // 0x112c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x112c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_112c64:
    // 0x112c64: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x112c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_112c68:
    // 0x112c68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x112c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_112c6c:
    // 0x112c6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x112c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_112c70:
    // 0x112c70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x112c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_112c74:
    // 0x112c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_112c78:
    // 0x112c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112c7c:
    // 0x112c7c: 0x906483b9  lbu         $a0, -0x7C47($v1)
    ctx->pc = 0x112c7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294935481)));
label_112c80:
    // 0x112c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x112c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112c84:
    // 0x112c84: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x112c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_112c88:
    // 0x112c88: 0x92030094  lbu         $v1, 0x94($s0)
    ctx->pc = 0x112c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_112c8c:
    // 0x112c8c: 0x384203e7  xori        $v0, $v0, 0x3E7
    ctx->pc = 0x112c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)999);
label_112c90:
    // 0x112c90: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_112c94:
    if (ctx->pc == 0x112C94u) {
        ctx->pc = 0x112C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C90u;
        // 0x112c94: 0xc2280a  movz        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C98u;
        goto label_112c98;
    }
    ctx->pc = 0x112C90u;
    {
        const bool branch_taken_0x112c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x112C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C90u;
        // 0x112c94: 0xc2280a  movz        $a1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c90) {
            ctx->pc = 0x112CC8u;
            goto label_112cc8;
        }
    }
    ctx->pc = 0x112C98u;
label_112c98:
    // 0x112c98: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_112c9c:
    if (ctx->pc == 0x112C9Cu) {
        ctx->pc = 0x112C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C98u;
        // 0x112c9c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CA0u;
        goto label_112ca0;
    }
    ctx->pc = 0x112C98u;
    {
        const bool branch_taken_0x112c98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C98u;
        // 0x112c9c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c98) {
            ctx->pc = 0x112CACu;
            goto label_112cac;
        }
    }
    ctx->pc = 0x112CA0u;
label_112ca0:
    // 0x112ca0: 0xc046cbc  jal         func_11B2F0
label_112ca4:
    if (ctx->pc == 0x112CA4u) {
        ctx->pc = 0x112CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CA0u;
        // 0x112ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CA8u;
        goto label_112ca8;
    }
    ctx->pc = 0x112CA0u;
    SET_GPR_U32(ctx, 31, 0x112CA8u);
    ctx->pc = 0x112CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CA0u;
    // 0x112ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B2F0u, 0x112CA0u, 0x112CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CA8u;
label_112ca8:
    // 0x112ca8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x112ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_112cac:
    // 0x112cac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x112cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112cb0:
    // 0x112cb0: 0x8c66bce4  lw          $a2, -0x431C($v1)
    ctx->pc = 0x112cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950116)));
label_112cb4:
    // 0x112cb4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112cb8:
    // 0x112cb8: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x112cb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_112cbc:
    // 0x112cbc: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x112cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_112cc0:
    // 0x112cc0: 0x60f809  jalr        $v1
label_112cc4:
    if (ctx->pc == 0x112CC4u) {
        ctx->pc = 0x112CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CC0u;
        // 0x112cc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CC8u;
        goto label_112cc8;
    }
    ctx->pc = 0x112CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112CC8u);
        ctx->pc = 0x112CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CC0u;
        // 0x112cc4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CC0u, 0x112CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112CC8u;
label_112cc8:
    // 0x112cc8: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x112cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_112ccc:
    // 0x112ccc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_112cd0:
    if (ctx->pc == 0x112CD0u) {
        ctx->pc = 0x112CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CCCu;
        // 0x112cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CD4u;
        goto label_112cd4;
    }
    ctx->pc = 0x112CCCu;
    {
        const bool branch_taken_0x112ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CCCu;
        // 0x112cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ccc) {
            ctx->pc = 0x112CE0u;
            goto label_112ce0;
        }
    }
    ctx->pc = 0x112CD4u;
label_112cd4:
    // 0x112cd4: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x112cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_112cd8:
    // 0x112cd8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_112cdc:
    if (ctx->pc == 0x112CDCu) {
        ctx->pc = 0x112CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CD8u;
        // 0x112cdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CE0u;
        goto label_112ce0;
    }
    ctx->pc = 0x112CD8u;
    {
        const bool branch_taken_0x112cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x112cd8) {
            ctx->pc = 0x112CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112CD8u;
            // 0x112cdc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112CF0u;
            goto label_112cf0;
        }
    }
    ctx->pc = 0x112CE0u;
label_112ce0:
    // 0x112ce0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112ce4:
    // 0x112ce4: 0xc044740  jal         func_111D00
label_112ce8:
    if (ctx->pc == 0x112CE8u) {
        ctx->pc = 0x112CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CE4u;
        // 0x112ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CECu;
        goto label_112cec;
    }
    ctx->pc = 0x112CE4u;
    SET_GPR_U32(ctx, 31, 0x112CECu);
    ctx->pc = 0x112CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CE4u;
    // 0x112ce8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D00u, 0x112CE4u, 0x112CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CECu;
label_112cec:
    // 0x112cec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x112cecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_112cf0:
    // 0x112cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x112cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_112cf4:
    // 0x112cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x112cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112cf8:
    // 0x112cf8: 0x3e00008  jr          $ra
label_112cfc:
    if (ctx->pc == 0x112CFCu) {
        ctx->pc = 0x112CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF8u;
        // 0x112cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D00u;
        goto label_fallthrough_0x112cf8;
    }
    ctx->pc = 0x112CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF8u;
        // 0x112cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x112cf8:
    ctx->pc = 0x112D00u;
}
