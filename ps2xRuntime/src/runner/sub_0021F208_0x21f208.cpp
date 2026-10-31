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

// Function: sub_0021F208
// Address: 0x21f208 - 0x21f290
void sub_0021F208_0x21f208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021F208_0x21f208");
#endif

    switch (ctx->pc) {
        case 0x21f234u: goto label_21f234;
        case 0x21f244u: goto label_21f244;
        case 0x21f254u: goto label_21f254;
        case 0x21f27cu: goto label_21f27c;
        default: break;
    }

    ctx->pc = 0x21f208u;

    // 0x21f208: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21f20c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21f210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21f210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21f214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21f214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f218: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x21f218u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x21f21c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21f21cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21f220: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21F220u;
    {
        const bool branch_taken_0x21f220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F220u;
        // 0x21f224: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f220) {
            ctx->pc = 0x21F27Cu;
            goto label_21f27c;
        }
    }
    ctx->pc = 0x21F228u;
    // 0x21f228: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x21f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
    // 0x21f22c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21F22Cu;
    SET_GPR_U32(ctx, 31, 0x21F234u);
    ctx->pc = 0x21F230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F22Cu;
    // 0x21f230: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21F22Cu, 0x21F234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F234u;
label_21f234:
    // 0x21f234: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x21F234u;
    {
        const bool branch_taken_0x21f234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F234u;
        // 0x21f238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f234) {
            ctx->pc = 0x21F27Cu;
            goto label_21f27c;
        }
    }
    ctx->pc = 0x21F23Cu;
    // 0x21f23c: 0xc087b0e  jal         func_21EC38
    ctx->pc = 0x21F23Cu;
    SET_GPR_U32(ctx, 31, 0x21F244u);
    ctx->pc = 0x21F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F23Cu;
    // 0x21f240: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EC38u, 0x21F23Cu, 0x21F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F244u;
label_21f244:
    // 0x21f244: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21f244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x21f248: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21f248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f24c: 0xc044096  jal         func_110258
    ctx->pc = 0x21F24Cu;
    SET_GPR_U32(ctx, 31, 0x21F254u);
    ctx->pc = 0x21F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F24Cu;
    // 0x21f250: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x21F24Cu, 0x21F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F254u;
label_21f254:
    // 0x21f254: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x21f254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f25c: 0xae020170  sw          $v0, 0x170($s0)
    ctx->pc = 0x21f25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 2));
    // 0x21f260: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x21f260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x21f264: 0xae030178  sw          $v1, 0x178($s0)
    ctx->pc = 0x21f264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 3));
    // 0x21f268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f26c: 0xa2000194  sb          $zero, 0x194($s0)
    ctx->pc = 0x21f26cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 0));
    // 0x21f270: 0x8ca28690  lw          $v0, -0x7970($a1)
    ctx->pc = 0x21f270u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x598690u));
    // 0x21f274: 0xc08c07c  jal         func_2301F0
    ctx->pc = 0x21F274u;
    SET_GPR_U32(ctx, 31, 0x21F27Cu);
    ctx->pc = 0x21F278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F274u;
    // 0x21f278: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2301F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2301F0u, 0x21F274u, 0x21F27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F27Cu;
label_21f27c:
    // 0x21f27c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21f27cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f280: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21f280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21f284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f288: 0x3e00008  jr          $ra
    ctx->pc = 0x21F288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F288u;
        // 0x21f28c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F290u;
}
