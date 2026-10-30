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

// Function: sub_00442660
// Address: 0x442660 - 0x4426d8
void sub_00442660_0x442660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442660_0x442660");
#endif

    switch (ctx->pc) {
        case 0x4426bcu: goto label_4426bc;
        default: break;
    }

    ctx->pc = 0x442660u;

    // 0x442660: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x442660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x442664: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x442664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x442668: 0x8c628f04  lw          $v0, -0x70FC($v1)
    ctx->pc = 0x442668u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x518F04u));
    // 0x44266c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44266cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442670: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x442670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x442674: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x442674u;
    {
        const bool branch_taken_0x442674 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x442678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442674u;
        // 0x442678: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442674) {
            ctx->pc = 0x442684u;
            goto label_442684;
        }
    }
    ctx->pc = 0x44267Cu;
    // 0x44267c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x44267Cu;
    {
        const bool branch_taken_0x44267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44267Cu;
        // 0x442680: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44267c) {
            ctx->pc = 0x4426C8u;
            goto label_4426c8;
        }
    }
    ctx->pc = 0x442684u;
label_442684:
    // 0x442684: 0x3c070070  lui         $a3, 0x70
    ctx->pc = 0x442684u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)112 << 16));
    // 0x442688: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x442688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x44268c: 0xace53780  sw          $a1, 0x3780($a3)
    ctx->pc = 0x44268cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x703780u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x703780u, _value); } while (0);
    // 0x442690: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x442690u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x442694: 0x24843700  addiu       $a0, $a0, 0x3700
    ctx->pc = 0x442694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14080));
    // 0x442698: 0x24e73780  addiu       $a3, $a3, 0x3780
    ctx->pc = 0x442698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14208));
    // 0x44269c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x44269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x4426a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4426a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4426a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4426a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4426a8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4426a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4426ac: 0x26093740  addiu       $t1, $s0, 0x3740
    ctx->pc = 0x4426acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 14144));
    // 0x4426b0: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x4426b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4426b4: 0xc11024e  jal         func_440938
    ctx->pc = 0x4426B4u;
    SET_GPR_U32(ctx, 31, 0x4426BCu);
    ctx->pc = 0x4426B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4426B4u;
    // 0x4426b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440938u, 0x4426B4u, 0x4426BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4426BCu;
label_4426bc:
    // 0x4426bc: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4426BCu;
    {
        const bool branch_taken_0x4426bc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4426C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4426BCu;
        // 0x4426c0: 0x8e023740  lw          $v0, 0x3740($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4426bc) {
            ctx->pc = 0x4426C8u;
            goto label_4426c8;
        }
    }
    ctx->pc = 0x4426C4u;
    // 0x4426c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4426c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4426c8:
    // 0x4426c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4426c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4426cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4426ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4426d0: 0x3e00008  jr          $ra
    ctx->pc = 0x4426D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4426D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4426D0u;
        // 0x4426d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4426D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4426D8u;
}
