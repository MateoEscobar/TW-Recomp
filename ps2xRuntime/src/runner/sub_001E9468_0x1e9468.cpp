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

// Function: sub_001E9468
// Address: 0x1e9468 - 0x1e9518
void sub_001E9468_0x1e9468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9468_0x1e9468");
#endif

    switch (ctx->pc) {
        case 0x1e94e8u: goto label_1e94e8;
        case 0x1e9500u: goto label_1e9500;
        default: break;
    }

    ctx->pc = 0x1e9468u;

    // 0x1e9468: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e946c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e9470: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e9470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e9474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e9474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e947c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1e947cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e9480: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E9480u;
    {
        const bool branch_taken_0x1e9480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9480u;
        // 0x1e9484: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9480) {
            ctx->pc = 0x1E9500u;
            goto label_1e9500;
        }
    }
    ctx->pc = 0x1E9488u;
    // 0x1e9488: 0x80640019  lb          $a0, 0x19($v1)
    ctx->pc = 0x1e9488u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1e948c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e9490: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E9490u;
    {
        const bool branch_taken_0x1e9490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9490u;
        // 0x1e9494: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9490) {
            ctx->pc = 0x1E94ACu;
            goto label_1e94ac;
        }
    }
    ctx->pc = 0x1E9498u;
    // 0x1e9498: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1e9498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1e949c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e949cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e94a0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1e94a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1e94a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E94A4u;
    {
        const bool branch_taken_0x1e94a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94A4u;
        // 0x1e94a8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94a4) {
            ctx->pc = 0x1E94B0u;
            goto label_1e94b0;
        }
    }
    ctx->pc = 0x1E94ACu;
label_1e94ac:
    // 0x1e94ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e94acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e94b0:
    // 0x1e94b0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E94B0u;
    {
        const bool branch_taken_0x1e94b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94B0u;
        // 0x1e94b4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94b0) {
            ctx->pc = 0x1E9500u;
            goto label_1e9500;
        }
    }
    ctx->pc = 0x1E94B8u;
    // 0x1e94b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1e94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e94bc: 0x80440019  lb          $a0, 0x19($v0)
    ctx->pc = 0x1e94bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 25)));
    // 0x1e94c0: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E94C0u;
    {
        const bool branch_taken_0x1e94c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94C0u;
        // 0x1e94c4: 0x24030050  addiu       $v1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94c0) {
            ctx->pc = 0x1E94DCu;
            goto label_1e94dc;
        }
    }
    ctx->pc = 0x1E94C8u;
    // 0x1e94c8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1e94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1e94cc: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1e94ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e94d0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1e94d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1e94d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E94D4u;
    {
        const bool branch_taken_0x1e94d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E94D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E94D4u;
        // 0x1e94d8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e94d4) {
            ctx->pc = 0x1E94E0u;
            goto label_1e94e0;
        }
    }
    ctx->pc = 0x1E94DCu;
label_1e94dc:
    // 0x1e94dc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e94dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e94e0:
    // 0x1e94e0: 0xc05128c  jal         func_144A30
    ctx->pc = 0x1E94E0u;
    SET_GPR_U32(ctx, 31, 0x1E94E8u);
    ctx->pc = 0x1E94E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94E0u;
    // 0x1e94e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144A30u, 0x1E94E0u, 0x1E94E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E94E8u;
label_1e94e8:
    // 0x1e94e8: 0x512824  and         $a1, $v0, $s1
    ctx->pc = 0x1e94e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1e94ec: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E94ECu;
    {
        const bool branch_taken_0x1e94ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e94ec) {
            ctx->pc = 0x1E94F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E94ECu;
            // 0x1e94f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9504u;
            goto label_1e9504;
        }
    }
    ctx->pc = 0x1E94F4u;
    // 0x1e94f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e94f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e94f8: 0xc07a570  jal         func_1E95C0
    ctx->pc = 0x1E94F8u;
    SET_GPR_U32(ctx, 31, 0x1E9500u);
    ctx->pc = 0x1E94FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E94F8u;
    // 0x1e94fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E95C0u, 0x1E94F8u, 0x1E9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9500u;
label_1e9500:
    // 0x1e9500: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e9500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e9504:
    // 0x1e9504: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e9504u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e950c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E950Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E950Cu;
        // 0x1e9510: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E950Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9514u;
    // 0x1e9514: 0x0  nop
    ctx->pc = 0x1e9514u;
    // NOP
    ctx->pc = 0x1e9518u;
}
