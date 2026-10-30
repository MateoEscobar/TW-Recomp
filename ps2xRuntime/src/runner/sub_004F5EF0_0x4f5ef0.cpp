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

// Function: sub_004F5EF0
// Address: 0x4f5ef0 - 0x4f5f60
void sub_004F5EF0_0x4f5ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5EF0_0x4f5ef0");
#endif

    switch (ctx->pc) {
        case 0x4f5ef0u: goto label_4f5ef0;
        case 0x4f5ef4u: goto label_4f5ef4;
        case 0x4f5ef8u: goto label_4f5ef8;
        case 0x4f5efcu: goto label_4f5efc;
        case 0x4f5f00u: goto label_4f5f00;
        case 0x4f5f04u: goto label_4f5f04;
        case 0x4f5f08u: goto label_4f5f08;
        case 0x4f5f0cu: goto label_4f5f0c;
        case 0x4f5f10u: goto label_4f5f10;
        case 0x4f5f14u: goto label_4f5f14;
        case 0x4f5f18u: goto label_4f5f18;
        case 0x4f5f1cu: goto label_4f5f1c;
        case 0x4f5f20u: goto label_4f5f20;
        case 0x4f5f24u: goto label_4f5f24;
        case 0x4f5f28u: goto label_4f5f28;
        case 0x4f5f2cu: goto label_4f5f2c;
        case 0x4f5f30u: goto label_4f5f30;
        case 0x4f5f34u: goto label_4f5f34;
        case 0x4f5f38u: goto label_4f5f38;
        case 0x4f5f3cu: goto label_4f5f3c;
        case 0x4f5f40u: goto label_4f5f40;
        case 0x4f5f44u: goto label_4f5f44;
        case 0x4f5f48u: goto label_4f5f48;
        case 0x4f5f4cu: goto label_4f5f4c;
        case 0x4f5f50u: goto label_4f5f50;
        case 0x4f5f54u: goto label_4f5f54;
        case 0x4f5f58u: goto label_4f5f58;
        case 0x4f5f5cu: goto label_4f5f5c;
        default: break;
    }

    ctx->pc = 0x4f5ef0u;

label_4f5ef0:
    // 0x4f5ef0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f5ef4:
    // 0x4f5ef4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f5ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f5ef8:
    // 0x4f5ef8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5efc:
    // 0x4f5efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5f00:
    // 0x4f5f00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f5f04:
    // 0x4f5f04: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f5f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f5f08:
    // 0x4f5f08: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f5f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f5f0c:
    // 0x4f5f0c: 0x40f809  jalr        $v0
label_4f5f10:
    if (ctx->pc == 0x4F5F10u) {
        ctx->pc = 0x4F5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F0Cu;
        // 0x4f5f10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F14u;
        goto label_4f5f14;
    }
    ctx->pc = 0x4F5F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F5F14u);
        ctx->pc = 0x4F5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F0Cu;
        // 0x4f5f10: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5F0Cu, 0x4F5F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5F14u;
label_4f5f14:
    // 0x4f5f14: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
label_4f5f18:
    if (ctx->pc == 0x4F5F18u) {
        ctx->pc = 0x4F5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F14u;
        // 0x4f5f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F1Cu;
        goto label_4f5f1c;
    }
    ctx->pc = 0x4F5F14u;
    {
        const bool branch_taken_0x4f5f14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F5F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F14u;
        // 0x4f5f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f14) {
            ctx->pc = 0x4F5F50u;
            goto label_4f5f50;
        }
    }
    ctx->pc = 0x4F5F1Cu;
label_4f5f1c:
    // 0x4f5f1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4f5f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f5f20:
    // 0x4f5f20: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f5f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f5f24:
    // 0x4f5f24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4f5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4f5f28:
    // 0x4f5f28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4f5f2c:
    // 0x4f5f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4f5f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4f5f30:
    // 0x4f5f30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4f5f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f5f34:
    // 0x4f5f34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f5f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5f38:
    // 0x4f5f38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4f5f3c:
    if (ctx->pc == 0x4F5F3Cu) {
        ctx->pc = 0x4F5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F38u;
        // 0x4f5f3c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F40u;
        goto label_4f5f40;
    }
    ctx->pc = 0x4F5F38u;
    {
        const bool branch_taken_0x4f5f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F38u;
        // 0x4f5f3c: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f38) {
            ctx->pc = 0x4F5F50u;
            goto label_4f5f50;
        }
    }
    ctx->pc = 0x4F5F40u;
label_4f5f40:
    // 0x4f5f40: 0xc1053c2  jal         func_414F08
label_4f5f44:
    if (ctx->pc == 0x4F5F44u) {
        ctx->pc = 0x4F5F48u;
        goto label_4f5f48;
    }
    ctx->pc = 0x4F5F40u;
    SET_GPR_U32(ctx, 31, 0x4F5F48u);
    ctx->pc = 0x414F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414F08u, 0x4F5F40u, 0x4F5F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5F48u;
label_4f5f48:
    // 0x4f5f48: 0x10000002  b           . + 4 + (0x2 << 2)
label_4f5f4c:
    if (ctx->pc == 0x4F5F4Cu) {
        ctx->pc = 0x4F5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F48u;
        // 0x4f5f4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F50u;
        goto label_4f5f50;
    }
    ctx->pc = 0x4F5F48u;
    {
        const bool branch_taken_0x4f5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F48u;
        // 0x4f5f4c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f48) {
            ctx->pc = 0x4F5F54u;
            goto label_4f5f54;
        }
    }
    ctx->pc = 0x4F5F50u;
label_4f5f50:
    // 0x4f5f50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f5f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5f54:
    // 0x4f5f54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5f54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5f58:
    // 0x4f5f58: 0x3e00008  jr          $ra
label_4f5f5c:
    if (ctx->pc == 0x4F5F5Cu) {
        ctx->pc = 0x4F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F58u;
        // 0x4f5f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F60u;
        goto label_fallthrough_0x4f5f58;
    }
    ctx->pc = 0x4F5F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F58u;
        // 0x4f5f5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5F58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f5f58:
    ctx->pc = 0x4F5F60u;
}
