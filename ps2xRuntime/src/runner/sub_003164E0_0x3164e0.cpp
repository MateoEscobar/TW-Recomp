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

// Function: sub_003164E0
// Address: 0x3164e0 - 0x316590
void sub_003164E0_0x3164e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003164E0_0x3164e0");
#endif

    switch (ctx->pc) {
        case 0x31651cu: goto label_31651c;
        case 0x316530u: goto label_316530;
        case 0x316560u: goto label_316560;
        case 0x31656cu: goto label_31656c;
        default: break;
    }

    ctx->pc = 0x3164e0u;

    // 0x3164e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3164e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3164e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3164e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3164e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3164e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3164ec: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3164ecu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3164f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3164f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3164f4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3164f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3164f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3164f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3164fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3164fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316500: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x316500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x316504: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x316504u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316508: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x316508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x31650c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x31650cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x316510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x316510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x316514: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x316514u;
    SET_GPR_U32(ctx, 31, 0x31651Cu);
    ctx->pc = 0x316518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316514u;
    // 0x316518: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x316514u, 0x31651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31651Cu;
label_31651c:
    // 0x31651c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31651cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316520: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x316520u;
    {
        const bool branch_taken_0x316520 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x316524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316520u;
        // 0x316524: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316520) {
            ctx->pc = 0x316570u;
            goto label_316570;
        }
    }
    ctx->pc = 0x316528u;
    // 0x316528: 0xc0c1956  jal         func_306558
    ctx->pc = 0x316528u;
    SET_GPR_U32(ctx, 31, 0x316530u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x316528u, 0x316530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316530u;
label_316530:
    // 0x316530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316534: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x316534u;
    {
        const bool branch_taken_0x316534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x316538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316534u;
        // 0x316538: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316534) {
            ctx->pc = 0x316560u;
            goto label_316560;
        }
    }
    ctx->pc = 0x31653Cu;
    // 0x31653c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x31653cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x316540: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x316540u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316544: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x316544u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x316548: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x316548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31654c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316550: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x316550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316554: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x316554u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316558: 0xc0c78ee  jal         func_31E3B8
    ctx->pc = 0x316558u;
    SET_GPR_U32(ctx, 31, 0x316560u);
    ctx->pc = 0x31655Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316558u;
    // 0x31655c: 0x354affff  ori         $t2, $t2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E3B8u, 0x316558u, 0x316560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316560u;
label_316560:
    // 0x316560: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x316560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316564: 0xc059590  jal         func_165640
    ctx->pc = 0x316564u;
    SET_GPR_U32(ctx, 31, 0x31656Cu);
    ctx->pc = 0x316568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316564u;
    // 0x316568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x316564u, 0x31656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31656Cu;
label_31656c:
    // 0x31656c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x31656cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_316570:
    // 0x316570: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x316570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x316574: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x316574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x316578: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x316578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31657c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x31657cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316584: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x316584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x316588: 0x3e00008  jr          $ra
    ctx->pc = 0x316588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316588u;
        // 0x31658c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316590u;
}
