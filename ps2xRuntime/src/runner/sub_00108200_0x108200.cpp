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

// Function: sub_00108200
// Address: 0x108200 - 0x108290
void sub_00108200_0x108200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108200_0x108200");
#endif

    switch (ctx->pc) {
        case 0x108220u: goto label_108220;
        case 0x108230u: goto label_108230;
        case 0x108240u: goto label_108240;
        case 0x108250u: goto label_108250;
        case 0x108258u: goto label_108258;
        case 0x108260u: goto label_108260;
        case 0x108268u: goto label_108268;
        case 0x108270u: goto label_108270;
        default: break;
    }

    ctx->pc = 0x108200u;

    // 0x108200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108204: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x108204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x108208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10820c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10820cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108210: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x108210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x108214: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108218: 0xc05d448  jal         func_175120
    ctx->pc = 0x108218u;
    SET_GPR_U32(ctx, 31, 0x108220u);
    ctx->pc = 0x10821Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108218u;
    // 0x10821c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x108218u, 0x108220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108220u;
label_108220:
    // 0x108220: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x108220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x108224: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108228: 0xc05d448  jal         func_175120
    ctx->pc = 0x108228u;
    SET_GPR_U32(ctx, 31, 0x108230u);
    ctx->pc = 0x10822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108228u;
    // 0x10822c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x108228u, 0x108230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108230u;
label_108230:
    // 0x108230: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x108230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x108234: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108238: 0xc05d448  jal         func_175120
    ctx->pc = 0x108238u;
    SET_GPR_U32(ctx, 31, 0x108240u);
    ctx->pc = 0x10823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108238u;
    // 0x10823c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x108238u, 0x108240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108240u;
label_108240:
    // 0x108240: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x108240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x108244: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x108244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108248: 0xc05d448  jal         func_175120
    ctx->pc = 0x108248u;
    SET_GPR_U32(ctx, 31, 0x108250u);
    ctx->pc = 0x10824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108248u;
    // 0x10824c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175120u, 0x108248u, 0x108250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108250u;
label_108250:
    // 0x108250: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x108250u;
    SET_GPR_U32(ctx, 31, 0x108258u);
    ctx->pc = 0x108254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108250u;
    // 0x108254: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x108250u, 0x108258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108258u;
label_108258:
    // 0x108258: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x108258u;
    SET_GPR_U32(ctx, 31, 0x108260u);
    ctx->pc = 0x10825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108258u;
    // 0x10825c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x108258u, 0x108260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108260u;
label_108260:
    // 0x108260: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x108260u;
    SET_GPR_U32(ctx, 31, 0x108268u);
    ctx->pc = 0x108264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108260u;
    // 0x108264: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x108260u, 0x108268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108268u;
label_108268:
    // 0x108268: 0xc042ef4  jal         func_10BBD0
    ctx->pc = 0x108268u;
    SET_GPR_U32(ctx, 31, 0x108270u);
    ctx->pc = 0x10826Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108268u;
    // 0x10826c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BBD0u, 0x108268u, 0x108270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108270u;
label_108270:
    // 0x108270: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x108270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x108274: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x108274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x108278: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x108278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x10827c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x10827cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x108280: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x108280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108288: 0x3e00008  jr          $ra
    ctx->pc = 0x108288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108288u;
        // 0x10828c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108290u;
}
