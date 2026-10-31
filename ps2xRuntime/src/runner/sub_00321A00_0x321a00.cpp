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

// Function: sub_00321A00
// Address: 0x321a00 - 0x321a70
void sub_00321A00_0x321a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321A00_0x321a00");
#endif

    switch (ctx->pc) {
        case 0x321a00u: goto label_321a00;
        case 0x321a04u: goto label_321a04;
        case 0x321a08u: goto label_321a08;
        case 0x321a0cu: goto label_321a0c;
        case 0x321a10u: goto label_321a10;
        case 0x321a14u: goto label_321a14;
        case 0x321a18u: goto label_321a18;
        case 0x321a1cu: goto label_321a1c;
        case 0x321a20u: goto label_321a20;
        case 0x321a24u: goto label_321a24;
        case 0x321a28u: goto label_321a28;
        case 0x321a2cu: goto label_321a2c;
        case 0x321a30u: goto label_321a30;
        case 0x321a34u: goto label_321a34;
        case 0x321a38u: goto label_321a38;
        case 0x321a3cu: goto label_321a3c;
        case 0x321a40u: goto label_321a40;
        case 0x321a44u: goto label_321a44;
        case 0x321a48u: goto label_321a48;
        case 0x321a4cu: goto label_321a4c;
        case 0x321a50u: goto label_321a50;
        case 0x321a54u: goto label_321a54;
        case 0x321a58u: goto label_321a58;
        case 0x321a5cu: goto label_321a5c;
        case 0x321a60u: goto label_321a60;
        case 0x321a64u: goto label_321a64;
        case 0x321a68u: goto label_321a68;
        case 0x321a6cu: goto label_321a6c;
        default: break;
    }

    ctx->pc = 0x321a00u;

label_321a00:
    // 0x321a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x321a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_321a04:
    // 0x321a04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x321a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_321a08:
    // 0x321a08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x321a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_321a0c:
    // 0x321a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x321a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_321a10:
    // 0x321a10: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x321a10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
label_321a14:
    // 0x321a14: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_321a18:
    if (ctx->pc == 0x321A18u) {
        ctx->pc = 0x321A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A14u;
        // 0x321a18: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A1Cu;
        goto label_321a1c;
    }
    ctx->pc = 0x321A14u;
    {
        const bool branch_taken_0x321a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A14u;
        // 0x321a18: 0x3c050051  lui         $a1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a14) {
            ctx->pc = 0x321A28u;
            goto label_321a28;
        }
    }
    ctx->pc = 0x321A1Cu;
label_321a1c:
    // 0x321a1c: 0xc0c8668  jal         func_3219A0
label_321a20:
    if (ctx->pc == 0x321A20u) {
        ctx->pc = 0x321A24u;
        goto label_321a24;
    }
    ctx->pc = 0x321A1Cu;
    SET_GPR_U32(ctx, 31, 0x321A24u);
    ctx->pc = 0x3219A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3219A0u, 0x321A1Cu, 0x321A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321A24u;
label_321a24:
    // 0x321a24: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x321a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_321a28:
    // 0x321a28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x321a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_321a2c:
    // 0x321a2c: 0x8ca3b734  lw          $v1, -0x48CC($a1)
    ctx->pc = 0x321a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_321a30:
    // 0x321a30: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x321a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_321a34:
    // 0x321a34: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x321a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_321a38:
    // 0x321a38: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_321a3c:
    if (ctx->pc == 0x321A3Cu) {
        ctx->pc = 0x321A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A38u;
        // 0x321a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A40u;
        goto label_321a40;
    }
    ctx->pc = 0x321A38u;
    {
        const bool branch_taken_0x321a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A38u;
        // 0x321a3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a38) {
            ctx->pc = 0x321A5Cu;
            goto label_321a5c;
        }
    }
    ctx->pc = 0x321A40u;
label_321a40:
    // 0x321a40: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x321a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_321a44:
    // 0x321a44: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x321a44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_321a48:
    // 0x321a48: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x321a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_321a4c:
    // 0x321a4c: 0x40f809  jalr        $v0
label_321a50:
    if (ctx->pc == 0x321A50u) {
        ctx->pc = 0x321A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A4Cu;
        // 0x321a50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A54u;
        goto label_321a54;
    }
    ctx->pc = 0x321A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x321A54u);
        ctx->pc = 0x321A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A4Cu;
        // 0x321a50: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A4Cu, 0x321A54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x321A54u;
label_321a54:
    // 0x321a54: 0x10000002  b           . + 4 + (0x2 << 2)
label_321a58:
    if (ctx->pc == 0x321A58u) {
        ctx->pc = 0x321A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A54u;
        // 0x321a58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A5Cu;
        goto label_321a5c;
    }
    ctx->pc = 0x321A54u;
    {
        const bool branch_taken_0x321a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A54u;
        // 0x321a58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321a54) {
            ctx->pc = 0x321A60u;
            goto label_321a60;
        }
    }
    ctx->pc = 0x321A5Cu;
label_321a5c:
    // 0x321a5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x321a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_321a60:
    // 0x321a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x321a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_321a64:
    // 0x321a64: 0x3e00008  jr          $ra
label_321a68:
    if (ctx->pc == 0x321A68u) {
        ctx->pc = 0x321A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A64u;
        // 0x321a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321A6Cu;
        goto label_321a6c;
    }
    ctx->pc = 0x321A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321A64u;
        // 0x321a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321A6Cu;
label_321a6c:
    // 0x321a6c: 0x0  nop
    ctx->pc = 0x321a6cu;
    // NOP
    ctx->pc = 0x321a70u;
}
