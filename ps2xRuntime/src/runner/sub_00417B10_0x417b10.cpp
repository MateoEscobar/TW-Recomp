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

// Function: sub_00417B10
// Address: 0x417b10 - 0x417b88
void sub_00417B10_0x417b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417B10_0x417b10");
#endif

    switch (ctx->pc) {
        case 0x417b10u: goto label_417b10;
        case 0x417b14u: goto label_417b14;
        case 0x417b18u: goto label_417b18;
        case 0x417b1cu: goto label_417b1c;
        case 0x417b20u: goto label_417b20;
        case 0x417b24u: goto label_417b24;
        case 0x417b28u: goto label_417b28;
        case 0x417b2cu: goto label_417b2c;
        case 0x417b30u: goto label_417b30;
        case 0x417b34u: goto label_417b34;
        case 0x417b38u: goto label_417b38;
        case 0x417b3cu: goto label_417b3c;
        case 0x417b40u: goto label_417b40;
        case 0x417b44u: goto label_417b44;
        case 0x417b48u: goto label_417b48;
        case 0x417b4cu: goto label_417b4c;
        case 0x417b50u: goto label_417b50;
        case 0x417b54u: goto label_417b54;
        case 0x417b58u: goto label_417b58;
        case 0x417b5cu: goto label_417b5c;
        case 0x417b60u: goto label_417b60;
        case 0x417b64u: goto label_417b64;
        case 0x417b68u: goto label_417b68;
        case 0x417b6cu: goto label_417b6c;
        case 0x417b70u: goto label_417b70;
        case 0x417b74u: goto label_417b74;
        case 0x417b78u: goto label_417b78;
        case 0x417b7cu: goto label_417b7c;
        case 0x417b80u: goto label_417b80;
        case 0x417b84u: goto label_417b84;
        default: break;
    }

    ctx->pc = 0x417b10u;

label_417b10:
    // 0x417b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x417b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_417b14:
    // 0x417b14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x417b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_417b18:
    // 0x417b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x417b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_417b1c:
    // 0x417b1c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x417b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_417b20:
    // 0x417b20: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x417b20u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_417b24:
    // 0x417b24: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x417b24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_417b28:
    // 0x417b28: 0x24a5a9c0  addiu       $a1, $a1, -0x5640
    ctx->pc = 0x417b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945216));
label_417b2c:
    // 0x417b2c: 0x2508a9d8  addiu       $t0, $t0, -0x5628
    ctx->pc = 0x417b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945240));
label_417b30:
    // 0x417b30: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x417b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_417b34:
    // 0x417b34: 0x24061c1c  addiu       $a2, $zero, 0x1C1C
    ctx->pc = 0x417b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7196));
label_417b38:
    // 0x417b38: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x417b38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_417b3c:
    // 0x417b3c: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x417b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_417b40:
    // 0x417b40: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x417b40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_417b44:
    // 0x417b44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x417b44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417b48:
    // 0x417b48: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x417b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_417b4c:
    // 0x417b4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x417b4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417b50:
    // 0x417b50: 0x40f809  jalr        $v0
label_417b54:
    if (ctx->pc == 0x417B54u) {
        ctx->pc = 0x417B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B50u;
        // 0x417b54: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417B58u;
        goto label_417b58;
    }
    ctx->pc = 0x417B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x417B58u);
        ctx->pc = 0x417B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B50u;
        // 0x417b54: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417B50u, 0x417B58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x417B58u;
label_417b58:
    // 0x417b58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417b5c:
    // 0x417b5c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_417b60:
    if (ctx->pc == 0x417B60u) {
        ctx->pc = 0x417B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B5Cu;
        // 0x417b60: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417B64u;
        goto label_417b64;
    }
    ctx->pc = 0x417B5Cu;
    {
        const bool branch_taken_0x417b5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x417B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B5Cu;
        // 0x417b60: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417b5c) {
            ctx->pc = 0x417B74u;
            goto label_417b74;
        }
    }
    ctx->pc = 0x417B64u;
label_417b64:
    // 0x417b64: 0xc105ee2  jal         func_417B88
label_417b68:
    if (ctx->pc == 0x417B68u) {
        ctx->pc = 0x417B6Cu;
        goto label_417b6c;
    }
    ctx->pc = 0x417B64u;
    SET_GPR_U32(ctx, 31, 0x417B6Cu);
    ctx->pc = 0x417B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417B88u, 0x417B64u, 0x417B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x417B6Cu;
label_417b6c:
    // 0x417b6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417b70:
    // 0x417b70: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x417b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_417b74:
    // 0x417b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x417b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_417b78:
    // 0x417b78: 0xac44719c  sw          $a0, 0x719C($v0)
    ctx->pc = 0x417b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29084), GPR_U32(ctx, 4));
label_417b7c:
    // 0x417b7c: 0x3e00008  jr          $ra
label_417b80:
    if (ctx->pc == 0x417B80u) {
        ctx->pc = 0x417B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B7Cu;
        // 0x417b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x417B84u;
        goto label_417b84;
    }
    ctx->pc = 0x417B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x417B7Cu;
        // 0x417b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x417B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x417B84u;
label_417b84:
    // 0x417b84: 0x0  nop
    ctx->pc = 0x417b84u;
    // NOP
    ctx->pc = 0x417b88u;
}
