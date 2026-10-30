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

// Function: sub_004317A0
// Address: 0x4317a0 - 0x431818
void sub_004317A0_0x4317a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004317A0_0x4317a0");
#endif

    switch (ctx->pc) {
        case 0x4317c8u: goto label_4317c8;
        case 0x4317f0u: goto label_4317f0;
        default: break;
    }

    ctx->pc = 0x4317a0u;

    // 0x4317a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4317a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4317a4: 0x24020058  addiu       $v0, $zero, 0x58
    ctx->pc = 0x4317a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x4317a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4317a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4317ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4317acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4317b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4317b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317b4: 0x2229018  mult        $s2, $s1, $v0
    ctx->pc = 0x4317b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x4317b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4317b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4317bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4317bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4317c0: 0xc10e314  jal         func_438C50
    ctx->pc = 0x4317C0u;
    SET_GPR_U32(ctx, 31, 0x4317C8u);
    ctx->pc = 0x4317C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4317C0u;
    // 0x4317c4: 0x2645000c  addiu       $a1, $s2, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x438C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x438C50u, 0x4317C0u, 0x4317C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4317C8u;
label_4317c8:
    // 0x4317c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4317c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317cc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x4317CCu;
    {
        const bool branch_taken_0x4317cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4317D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4317CCu;
        // 0x4317d0: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4317cc) {
            ctx->pc = 0x4317F8u;
            goto label_4317f8;
        }
    }
    ctx->pc = 0x4317D4u;
    // 0x4317d4: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x4317d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x4317d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4317d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4317dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4317dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4317e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4317e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x4317e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x4317e8: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4317E8u;
    SET_GPR_U32(ctx, 31, 0x4317F0u);
    ctx->pc = 0x4317ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4317E8u;
    // 0x4317ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4317E8u, 0x4317F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4317F0u;
label_4317f0:
    // 0x4317f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4317F0u;
    {
        const bool branch_taken_0x4317f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4317F0u;
        // 0x4317f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4317f0) {
            ctx->pc = 0x4317FCu;
            goto label_4317fc;
        }
    }
    ctx->pc = 0x4317F8u;
label_4317f8:
    // 0x4317f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4317f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4317fc:
    // 0x4317fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4317fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x431800: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x431800u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x431804: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x431804u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x431808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x431808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43180c: 0x3e00008  jr          $ra
    ctx->pc = 0x43180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x431810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43180Cu;
        // 0x431810: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x43180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x431814u;
    // 0x431814: 0x0  nop
    ctx->pc = 0x431814u;
    // NOP
    ctx->pc = 0x431818u;
}
