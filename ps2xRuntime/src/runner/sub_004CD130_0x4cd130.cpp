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

// Function: sub_004CD130
// Address: 0x4cd130 - 0x4cd1c0
void sub_004CD130_0x4cd130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CD130_0x4cd130");
#endif

    switch (ctx->pc) {
        case 0x4cd15cu: goto label_4cd15c;
        case 0x4cd1a0u: goto label_4cd1a0;
        case 0x4cd1a8u: goto label_4cd1a8;
        default: break;
    }

    ctx->pc = 0x4cd130u;

    // 0x4cd130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cd130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cd134: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4cd134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4cd138: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cd138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cd13c: 0x8c623960  lw          $v0, 0x3960($v1)
    ctx->pc = 0x4cd13cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x533960u));
    // 0x4cd140: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cd140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cd144: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD144u;
    {
        const bool branch_taken_0x4cd144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD144u;
        // 0x4cd148: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd144) {
            ctx->pc = 0x4CD154u;
            goto label_4cd154;
        }
    }
    ctx->pc = 0x4CD14Cu;
    // 0x4cd14c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4CD14Cu;
    {
        const bool branch_taken_0x4cd14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD14Cu;
        // 0x4cd150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cd14c) {
            ctx->pc = 0x4CD1ACu;
            goto label_4cd1ac;
        }
    }
    ctx->pc = 0x4CD154u;
label_4cd154:
    // 0x4cd154: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x4CD154u;
    SET_GPR_U32(ctx, 31, 0x4CD15Cu);
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x4CD154u, 0x4CD15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD15Cu;
label_4cd15c:
    // 0x4cd15c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cd15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cd160: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x4cd160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x4cd164: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cd164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cd168: 0x248446d8  addiu       $a0, $a0, 0x46D8
    ctx->pc = 0x4cd168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18136));
    // 0x4cd16c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4cd16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4cd170: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4cd170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4cd174: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x4cd174u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7146F0u));
    // 0x4cd178: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x4cd178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x4cd17c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4cd17cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x4cd180: 0xac900018  sw          $s0, 0x18($a0)
    ctx->pc = 0x4cd180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x7146F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7146F0u, _value); } while (0);
    // 0x4cd184: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x4cd184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4cd188: 0xac70001c  sw          $s0, 0x1C($v1)
    ctx->pc = 0x4cd188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 16));
    // 0x4cd18c: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x4cd18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
    // 0x4cd190: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4CD190u;
    {
        const bool branch_taken_0x4cd190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cd190) {
            ctx->pc = 0x4CD1A0u;
            goto label_4cd1a0;
        }
    }
    ctx->pc = 0x4CD198u;
    // 0x4cd198: 0xc110cc4  jal         func_443310
    ctx->pc = 0x4CD198u;
    SET_GPR_U32(ctx, 31, 0x4CD1A0u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x4CD198u, 0x4CD1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD1A0u;
label_4cd1a0:
    // 0x4cd1a0: 0xc132e56  jal         func_4CB958
    ctx->pc = 0x4CD1A0u;
    SET_GPR_U32(ctx, 31, 0x4CD1A8u);
    ctx->pc = 0x4CB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CB958u, 0x4CD1A0u, 0x4CD1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CD1A8u;
label_4cd1a8:
    // 0x4cd1a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4cd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cd1ac:
    // 0x4cd1ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cd1acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cd1b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cd1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cd1b4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CD1B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CD1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CD1B4u;
        // 0x4cd1b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CD1B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CD1BCu;
    // 0x4cd1bc: 0x0  nop
    ctx->pc = 0x4cd1bcu;
    // NOP
    ctx->pc = 0x4cd1c0u;
}
