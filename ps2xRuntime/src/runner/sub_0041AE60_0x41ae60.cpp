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

// Function: sub_0041AE60
// Address: 0x41ae60 - 0x41af20
void sub_0041AE60_0x41ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041AE60_0x41ae60");
#endif

    switch (ctx->pc) {
        case 0x41ae60u: goto label_41ae60;
        case 0x41ae64u: goto label_41ae64;
        case 0x41ae68u: goto label_41ae68;
        case 0x41ae6cu: goto label_41ae6c;
        case 0x41ae70u: goto label_41ae70;
        case 0x41ae74u: goto label_41ae74;
        case 0x41ae78u: goto label_41ae78;
        case 0x41ae7cu: goto label_41ae7c;
        case 0x41ae80u: goto label_41ae80;
        case 0x41ae84u: goto label_41ae84;
        case 0x41ae88u: goto label_41ae88;
        case 0x41ae8cu: goto label_41ae8c;
        case 0x41ae90u: goto label_41ae90;
        case 0x41ae94u: goto label_41ae94;
        case 0x41ae98u: goto label_41ae98;
        case 0x41ae9cu: goto label_41ae9c;
        case 0x41aea0u: goto label_41aea0;
        case 0x41aea4u: goto label_41aea4;
        case 0x41aea8u: goto label_41aea8;
        case 0x41aeacu: goto label_41aeac;
        case 0x41aeb0u: goto label_41aeb0;
        case 0x41aeb4u: goto label_41aeb4;
        case 0x41aeb8u: goto label_41aeb8;
        case 0x41aebcu: goto label_41aebc;
        case 0x41aec0u: goto label_41aec0;
        case 0x41aec4u: goto label_41aec4;
        case 0x41aec8u: goto label_41aec8;
        case 0x41aeccu: goto label_41aecc;
        case 0x41aed0u: goto label_41aed0;
        case 0x41aed4u: goto label_41aed4;
        case 0x41aed8u: goto label_41aed8;
        case 0x41aedcu: goto label_41aedc;
        case 0x41aee0u: goto label_41aee0;
        case 0x41aee4u: goto label_41aee4;
        case 0x41aee8u: goto label_41aee8;
        case 0x41aeecu: goto label_41aeec;
        case 0x41aef0u: goto label_41aef0;
        case 0x41aef4u: goto label_41aef4;
        case 0x41aef8u: goto label_41aef8;
        case 0x41aefcu: goto label_41aefc;
        case 0x41af00u: goto label_41af00;
        case 0x41af04u: goto label_41af04;
        case 0x41af08u: goto label_41af08;
        case 0x41af0cu: goto label_41af0c;
        case 0x41af10u: goto label_41af10;
        case 0x41af14u: goto label_41af14;
        case 0x41af18u: goto label_41af18;
        case 0x41af1cu: goto label_41af1c;
        default: break;
    }

    ctx->pc = 0x41ae60u;

label_41ae60:
    // 0x41ae60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41ae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_41ae64:
    // 0x41ae64: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x41ae64u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_41ae68:
    // 0x41ae68: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41ae6c:
    // 0x41ae6c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41ae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_41ae70:
    // 0x41ae70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x41ae70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41ae74:
    // 0x41ae74: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_41ae78:
    // 0x41ae78: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x41ae78u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
label_41ae7c:
    // 0x41ae7c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_41ae80:
    if (ctx->pc == 0x41AE80u) {
        ctx->pc = 0x41AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE7Cu;
        // 0x41ae80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE84u;
        goto label_41ae84;
    }
    ctx->pc = 0x41AE7Cu;
    {
        const bool branch_taken_0x41ae7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE7Cu;
        // 0x41ae80: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae7c) {
            ctx->pc = 0x41AF08u;
            goto label_41af08;
        }
    }
    ctx->pc = 0x41AE84u;
label_41ae84:
    // 0x41ae84: 0x808202dc  lb          $v0, 0x2DC($a0)
    ctx->pc = 0x41ae84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 732)));
label_41ae88:
    // 0x41ae88: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_41ae8c:
    if (ctx->pc == 0x41AE8Cu) {
        ctx->pc = 0x41AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE88u;
        // 0x41ae8c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AE90u;
        goto label_41ae90;
    }
    ctx->pc = 0x41AE88u;
    {
        const bool branch_taken_0x41ae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AE88u;
        // 0x41ae8c: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41ae88) {
            ctx->pc = 0x41AF08u;
            goto label_41af08;
        }
    }
    ctx->pc = 0x41AE90u;
label_41ae90:
    // 0x41ae90: 0x248502dc  addiu       $a1, $a0, 0x2DC
    ctx->pc = 0x41ae90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 732));
label_41ae94:
    // 0x41ae94: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41ae94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41ae98:
    // 0x41ae98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x41ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41ae9c:
    // 0x41ae9c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x41ae9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_41aea0:
    // 0x41aea0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x41aea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_41aea4:
    // 0x41aea4: 0x40f809  jalr        $v0
label_41aea8:
    if (ctx->pc == 0x41AEA8u) {
        ctx->pc = 0x41AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEA4u;
        // 0x41aea8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AEACu;
        goto label_41aeac;
    }
    ctx->pc = 0x41AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41AEACu);
        ctx->pc = 0x41AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEA4u;
        // 0x41aea8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AEA4u, 0x41AEACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AEACu;
label_41aeac:
    // 0x41aeac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_41aeb0:
    if (ctx->pc == 0x41AEB0u) {
        ctx->pc = 0x41AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEACu;
        // 0x41aeb0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AEB4u;
        goto label_41aeb4;
    }
    ctx->pc = 0x41AEACu;
    {
        const bool branch_taken_0x41aeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEACu;
        // 0x41aeb0: 0x8e062b04  lw          $a2, 0x2B04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41aeac) {
            ctx->pc = 0x41AF08u;
            goto label_41af08;
        }
    }
    ctx->pc = 0x41AEB4u;
label_41aeb4:
    // 0x41aeb4: 0x86250030  lh          $a1, 0x30($s1)
    ctx->pc = 0x41aeb4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_41aeb8:
    // 0x41aeb8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41aeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41aebc:
    // 0x41aebc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x41aebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_41aec0:
    // 0x41aec0: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x41aec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_41aec4:
    // 0x41aec4: 0x60f809  jalr        $v1
label_41aec8:
    if (ctx->pc == 0x41AEC8u) {
        ctx->pc = 0x41AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEC4u;
        // 0x41aec8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AECCu;
        goto label_41aecc;
    }
    ctx->pc = 0x41AEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41AECCu);
        ctx->pc = 0x41AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEC4u;
        // 0x41aec8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AEC4u, 0x41AECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AECCu;
label_41aecc:
    // 0x41aecc: 0x8e062b04  lw          $a2, 0x2B04($s0)
    ctx->pc = 0x41aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41aed0:
    // 0x41aed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41aed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41aed4:
    // 0x41aed4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x41aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41aed8:
    // 0x41aed8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x41aed8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_41aedc:
    // 0x41aedc: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x41aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_41aee0:
    // 0x41aee0: 0x60f809  jalr        $v1
label_41aee4:
    if (ctx->pc == 0x41AEE4u) {
        ctx->pc = 0x41AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEE0u;
        // 0x41aee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AEE8u;
        goto label_41aee8;
    }
    ctx->pc = 0x41AEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41AEE8u);
        ctx->pc = 0x41AEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AEE0u;
        // 0x41aee4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AEE0u, 0x41AEE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AEE8u;
label_41aee8:
    // 0x41aee8: 0x8e072b04  lw          $a3, 0x2B04($s0)
    ctx->pc = 0x41aee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_41aeec:
    // 0x41aeec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x41aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41aef0:
    // 0x41aef0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41aef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41aef4:
    // 0x41aef4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x41aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_41aef8:
    // 0x41aef8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x41aef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
label_41aefc:
    // 0x41aefc: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x41aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_41af00:
    // 0x41af00: 0x60f809  jalr        $v1
label_41af04:
    if (ctx->pc == 0x41AF04u) {
        ctx->pc = 0x41AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF00u;
        // 0x41af04: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF08u;
        goto label_41af08;
    }
    ctx->pc = 0x41AF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x41AF08u);
        ctx->pc = 0x41AF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF00u;
        // 0x41af04: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AF00u, 0x41AF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41AF08u;
label_41af08:
    // 0x41af08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41af08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41af0c:
    // 0x41af0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41af0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41af10:
    // 0x41af10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41af10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41af14:
    // 0x41af14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41af14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41af18:
    // 0x41af18: 0x3e00008  jr          $ra
label_41af1c:
    if (ctx->pc == 0x41AF1Cu) {
        ctx->pc = 0x41AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF18u;
        // 0x41af1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41AF20u;
        goto label_fallthrough_0x41af18;
    }
    ctx->pc = 0x41AF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41AF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41AF18u;
        // 0x41af1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41AF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x41af18:
    ctx->pc = 0x41AF20u;
}
