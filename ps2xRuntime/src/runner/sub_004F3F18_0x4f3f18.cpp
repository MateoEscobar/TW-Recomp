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

// Function: sub_004F3F18
// Address: 0x4f3f18 - 0x4f3f78
void sub_004F3F18_0x4f3f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F3F18_0x4f3f18");
#endif

    switch (ctx->pc) {
        case 0x4f3f18u: goto label_4f3f18;
        case 0x4f3f1cu: goto label_4f3f1c;
        case 0x4f3f20u: goto label_4f3f20;
        case 0x4f3f24u: goto label_4f3f24;
        case 0x4f3f28u: goto label_4f3f28;
        case 0x4f3f2cu: goto label_4f3f2c;
        case 0x4f3f30u: goto label_4f3f30;
        case 0x4f3f34u: goto label_4f3f34;
        case 0x4f3f38u: goto label_4f3f38;
        case 0x4f3f3cu: goto label_4f3f3c;
        case 0x4f3f40u: goto label_4f3f40;
        case 0x4f3f44u: goto label_4f3f44;
        case 0x4f3f48u: goto label_4f3f48;
        case 0x4f3f4cu: goto label_4f3f4c;
        case 0x4f3f50u: goto label_4f3f50;
        case 0x4f3f54u: goto label_4f3f54;
        case 0x4f3f58u: goto label_4f3f58;
        case 0x4f3f5cu: goto label_4f3f5c;
        case 0x4f3f60u: goto label_4f3f60;
        case 0x4f3f64u: goto label_4f3f64;
        case 0x4f3f68u: goto label_4f3f68;
        case 0x4f3f6cu: goto label_4f3f6c;
        case 0x4f3f70u: goto label_4f3f70;
        case 0x4f3f74u: goto label_4f3f74;
        default: break;
    }

    ctx->pc = 0x4f3f18u;

label_4f3f18:
    // 0x4f3f18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f3f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f3f1c:
    // 0x4f3f1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f3f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f3f20:
    // 0x4f3f20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f3f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f3f24:
    // 0x4f3f24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f3f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f3f28:
    // 0x4f3f28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f3f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f3f2c:
    // 0x4f3f2c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f3f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f3f30:
    // 0x4f3f30: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f3f34:
    // 0x4f3f34: 0x40f809  jalr        $v0
label_4f3f38:
    if (ctx->pc == 0x4F3F38u) {
        ctx->pc = 0x4F3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F34u;
        // 0x4f3f38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3F3Cu;
        goto label_4f3f3c;
    }
    ctx->pc = 0x4F3F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F3F3Cu);
        ctx->pc = 0x4F3F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F34u;
        // 0x4f3f38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3F34u, 0x4F3F3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F3F3Cu;
label_4f3f3c:
    // 0x4f3f3c: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f3f40:
    if (ctx->pc == 0x4F3F40u) {
        ctx->pc = 0x4F3F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F3Cu;
        // 0x4f3f40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3F44u;
        goto label_4f3f44;
    }
    ctx->pc = 0x4F3F3Cu;
    {
        const bool branch_taken_0x4f3f3c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f3f3c) {
            ctx->pc = 0x4F3F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F3F3Cu;
            // 0x4f3f40: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F3F4Cu;
            goto label_4f3f4c;
        }
    }
    ctx->pc = 0x4F3F44u;
label_4f3f44:
    // 0x4f3f44: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f3f48:
    if (ctx->pc == 0x4F3F48u) {
        ctx->pc = 0x4F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F44u;
        // 0x4f3f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3F4Cu;
        goto label_4f3f4c;
    }
    ctx->pc = 0x4F3F44u;
    {
        const bool branch_taken_0x4f3f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F3F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F44u;
        // 0x4f3f48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f3f44) {
            ctx->pc = 0x4F3F64u;
            goto label_4f3f64;
        }
    }
    ctx->pc = 0x4F3F4Cu;
label_4f3f4c:
    // 0x4f3f4c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f3f50:
    // 0x4f3f50: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f3f54:
    // 0x4f3f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f3f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f3f58:
    // 0x4f3f58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f3f5c:
    // 0x4f3f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f3f60:
    // 0x4f3f60: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f3f64:
    // 0x4f3f64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f3f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f3f68:
    // 0x4f3f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f3f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f3f6c:
    // 0x4f3f6c: 0x3e00008  jr          $ra
label_4f3f70:
    if (ctx->pc == 0x4F3F70u) {
        ctx->pc = 0x4F3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F6Cu;
        // 0x4f3f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F3F74u;
        goto label_4f3f74;
    }
    ctx->pc = 0x4F3F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F3F6Cu;
        // 0x4f3f70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F3F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F3F74u;
label_4f3f74:
    // 0x4f3f74: 0x0  nop
    ctx->pc = 0x4f3f74u;
    // NOP
    ctx->pc = 0x4f3f78u;
}
