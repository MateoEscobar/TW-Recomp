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

// Function: sub_001140D8
// Address: 0x1140d8 - 0x114178
void sub_001140D8_0x1140d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001140D8_0x1140d8");
#endif

    switch (ctx->pc) {
        case 0x114114u: goto label_114114;
        case 0x11411cu: goto label_11411c;
        case 0x114148u: goto label_114148;
        default: break;
    }

    ctx->pc = 0x1140d8u;

    // 0x1140d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1140d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1140dc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1140dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1140e0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1140e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1140e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1140e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1140e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1140ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1140ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1140f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1140f4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1140f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1140f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1140f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1140fc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1140fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114100: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x114100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x114104: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x114104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x114108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11410c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x11410Cu;
    SET_GPR_U32(ctx, 31, 0x114114u);
    ctx->pc = 0x114110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11410Cu;
    // 0x114110: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x11410Cu, 0x114114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114114u;
label_114114:
    // 0x114114: 0xc08a61a  jal         func_229868
    ctx->pc = 0x114114u;
    SET_GPR_U32(ctx, 31, 0x11411Cu);
    ctx->pc = 0x114118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114114u;
    // 0x114118: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x114114u, 0x11411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11411Cu;
label_11411c:
    // 0x11411c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11411Cu;
    {
        const bool branch_taken_0x11411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x114120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11411Cu;
        // 0x114120: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11411c) {
            ctx->pc = 0x114150u;
            goto label_114150;
        }
    }
    ctx->pc = 0x114124u;
    // 0x114124: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x114124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x114128: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x114128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11412c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11412cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114130: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x114130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114134: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x114134u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114138: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x114138u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11413c: 0x260502d  daddu       $t2, $s3, $zero
    ctx->pc = 0x11413cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114140: 0xc088178  jal         func_2205E0
    ctx->pc = 0x114140u;
    SET_GPR_U32(ctx, 31, 0x114148u);
    ctx->pc = 0x114144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114140u;
    // 0x114144: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x114140u, 0x114148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114148u;
label_114148:
    // 0x114148: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x114148u;
    {
        const bool branch_taken_0x114148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114148u;
        // 0x11414c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x114148) {
            ctx->pc = 0x11415Cu;
            goto label_11415c;
        }
    }
    ctx->pc = 0x114150u;
label_114150:
    // 0x114150: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x114150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x114154: 0x8c628690  lw          $v0, -0x7970($v1)
    ctx->pc = 0x114154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x598690u));
    // 0x114158: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x114158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11415c:
    // 0x11415c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11415cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x114160: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x114160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x114164: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x114164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x114168: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x114168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11416c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11416cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x114170: 0x3e00008  jr          $ra
    ctx->pc = 0x114170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114170u;
        // 0x114174: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114178u;
}
