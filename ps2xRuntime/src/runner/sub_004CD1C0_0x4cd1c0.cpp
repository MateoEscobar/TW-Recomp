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

// Function: sub_004CD1C0
// Address: 0x4cd1c0 - 0x4cd270
void sub_004CD1C0_0x4cd1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD1C0_0x4cd1c0");
#endif

    switch (ctx->pc) {
        case 0x4cd1ecu: goto label_4cd1ec;
        case 0x4cd228u: goto label_4cd228;
        case 0x4cd240u: goto label_4cd240;
        default: break;
    }

    ctx->pc = 0x4cd1c0u;

    // 0x4cd1c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd1c4: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4cd1c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd1cc: 0x8c623960  lw          $v0, 0x3960($v1)
    ctx->pc = 0x4cd1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x533960u));
    // 0x4cd1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cd1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd1d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD1D4u;
    {
        const bool branch_taken_0x4cd1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD1D4u;
        // 0x4cd1d8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd1d4) {
            ctx->pc = 0x4CD1E4u;
            goto label_4cd1e4;
        }
    }
    ctx->pc = 0x4CD1DCu;
    // 0x4cd1dc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x4CD1DCu;
    {
        const bool branch_taken_0x4cd1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD1DCu;
        // 0x4cd1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd1dc) {
            ctx->pc = 0x4CD244u;
            goto label_4cd244;
        }
    }
    ctx->pc = 0x4CD1E4u;
label_4cd1e4:
    // 0x4cd1e4: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CD1E4u;
    SET_GPR_U32(ctx, 31, 0x4CD1ECu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CD1E4u, 0x4CD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD1ECu;
label_4cd1ec:
    // 0x4cd1ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cd1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cd1f0: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cd1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4cd1f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cd1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cd1f8: 0x248446f8  addiu       $a0, $a0, 0x46F8
    ctx->pc = 0x4cd1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18168));
    // 0x4cd1fc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4cd1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4cd200: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x4cd200u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x71471Cu));
    // 0x4cd204: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x4cd204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x4cd208: 0xac900024  sw          $s0, 0x24($a0)
    ctx->pc = 0x4cd208u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x71471Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x71471Cu, _value); } while (0);
    // 0x4cd20c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x4cd20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x4cd210: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x4cd210u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
    // 0x4cd214: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x4cd214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x4cd218: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CD218u;
    {
        const bool branch_taken_0x4cd218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD218u;
        // 0x4cd21c: 0x3c020053  lui         $v0, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd218) {
            ctx->pc = 0x4CD22Cu;
            goto label_4cd22c;
        }
    }
    ctx->pc = 0x4CD220u;
    // 0x4cd220: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CD220u;
    SET_GPR_U32(ctx, 31, 0x4CD228u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CD220u, 0x4CD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD228u;
label_4cd228:
    // 0x4cd228: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4cd228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4cd22c:
    // 0x4cd22c: 0x8c4339c8  lw          $v1, 0x39C8($v0)
    ctx->pc = 0x4cd22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14792)));
    // 0x4cd230: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4CD230u;
    {
        const bool branch_taken_0x4cd230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD230u;
        // 0x4cd234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd230) {
            ctx->pc = 0x4CD244u;
            goto label_4cd244;
        }
    }
    ctx->pc = 0x4CD238u;
    // 0x4cd238: 0xc132e56  jal         func_4CB958
    ctx->pc = 0x4CD238u;
    SET_GPR_U32(ctx, 31, 0x4CD240u);
    ctx->pc = 0x4CB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB958u, 0x4CD238u, 0x4CD240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD240u;
label_4cd240:
    // 0x4cd240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cd240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cd244:
    // 0x4cd244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd248: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cd248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd24c: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD24Cu;
        // 0x4cd250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD254u;
    // 0x4cd254: 0x0  nop
    ctx->pc = 0x4cd254u;
    // NOP
    // 0x4cd258: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x4cd258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4cd25c: 0x0  nop
    ctx->pc = 0x4cd25cu;
    // NOP
    // 0x4cd260: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4cd260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4cd264: 0x0  nop
    ctx->pc = 0x4cd264u;
    // NOP
    // 0x4cd268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4cd268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4cd26c: 0x0  nop
    ctx->pc = 0x4cd26cu;
    // NOP
    ctx->pc = 0x4cd270u;
}
