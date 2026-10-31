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

// Function: sub_0015D648
// Address: 0x15d648 - 0x15d700
void sub_0015D648_0x15d648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D648_0x15d648");
#endif

    switch (ctx->pc) {
        case 0x15d69cu: goto label_15d69c;
        case 0x15d6b0u: goto label_15d6b0;
        case 0x15d6c4u: goto label_15d6c4;
        case 0x15d6d4u: goto label_15d6d4;
        case 0x15d6e8u: goto label_15d6e8;
        default: break;
    }

    ctx->pc = 0x15d648u;

    // 0x15d648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15d648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15d64c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x15d64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d650: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15d650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15d654: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d658: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15d658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15d65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15d65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d660: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15d660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15d664: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x15d664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x15d668: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x15d668u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x15d66c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x15d66cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x15d670: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15d674: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15d674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d678: 0xac40c75c  sw          $zero, -0x38A4($v0)
    ctx->pc = 0x15d678u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C75Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C75Cu, _value); } while (0);
    // 0x15d67c: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x15d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50AA84u));
    // 0x15d680: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15d680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15d684: 0xac60c760  sw          $zero, -0x38A0($v1)
    ctx->pc = 0x15d684u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C760u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C760u, _value); } while (0);
    // 0x15d688: 0xacc0c764  sw          $zero, -0x389C($a2)
    ctx->pc = 0x15d688u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C764u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C764u, _value); } while (0);
    // 0x15d68c: 0xace8c768  sw          $t0, -0x3898($a3)
    ctx->pc = 0x15d68cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x50C768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C768u, _value); } while (0);
    // 0x15d690: 0xae0006d0  sw          $zero, 0x6D0($s0)
    ctx->pc = 0x15d690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1744), GPR_U32(ctx, 0));
    // 0x15d694: 0xc04456a  jal         func_1115A8
    ctx->pc = 0x15D694u;
    SET_GPR_U32(ctx, 31, 0x15D69Cu);
    ctx->pc = 0x15D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D694u;
    // 0x15d698: 0xae0806d4  sw          $t0, 0x6D4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1748), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x15D694u, 0x15D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D69Cu;
label_15d69c:
    // 0x15d69c: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15d69cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15d6a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15d6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6a4: 0x2451f680  addiu       $s1, $v0, -0x980
    ctx->pc = 0x15d6a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964864));
    // 0x15d6a8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x15D6A8u;
    SET_GPR_U32(ctx, 31, 0x15D6B0u);
    ctx->pc = 0x15D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6A8u;
    // 0x15d6ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x15D6A8u, 0x15D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6B0u;
label_15d6b0:
    // 0x15d6b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D6B0u;
    {
        const bool branch_taken_0x15d6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6B0u;
        // 0x15d6b4: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d6b0) {
            ctx->pc = 0x15D6C4u;
            goto label_15d6c4;
        }
    }
    ctx->pc = 0x15D6B8u;
    // 0x15d6b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d6b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6bc: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x15D6BCu;
    SET_GPR_U32(ctx, 31, 0x15D6C4u);
    ctx->pc = 0x15D6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6BCu;
    // 0x15d6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15D6BCu, 0x15D6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6C4u;
label_15d6c4:
    // 0x15d6c4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15d6c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15d6c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d6cc: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15D6CCu;
    SET_GPR_U32(ctx, 31, 0x15D6D4u);
    ctx->pc = 0x15D6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6CCu;
    // 0x15d6d0: 0x8c442c7c  lw          $a0, 0x2C7C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15D6CCu, 0x15D6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6D4u;
label_15d6d4:
    // 0x15d6d4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15d6d8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x15d6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x15d6dc: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x15d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x15d6e0: 0xc06f376  jal         func_1BCDD8
    ctx->pc = 0x15D6E0u;
    SET_GPR_U32(ctx, 31, 0x15D6E8u);
    ctx->pc = 0x15D6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D6E0u;
    // 0x15d6e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCDD8u, 0x15D6E0u, 0x15D6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D6E8u;
label_15d6e8:
    // 0x15d6e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15d6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d6ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15d6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d6f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15d6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15d6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D6F8u;
        // 0x15d6fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15D700u;
}
