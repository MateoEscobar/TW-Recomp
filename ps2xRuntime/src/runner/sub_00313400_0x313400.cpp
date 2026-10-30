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

// Function: sub_00313400
// Address: 0x313400 - 0x313490
void sub_00313400_0x313400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313400_0x313400");
#endif

    switch (ctx->pc) {
        case 0x31342cu: goto label_31342c;
        case 0x313440u: goto label_313440;
        case 0x313464u: goto label_313464;
        case 0x313470u: goto label_313470;
        default: break;
    }

    ctx->pc = 0x313400u;

    // 0x313400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x313400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x313404: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x313404u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x313408: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x313408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31340c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x31340cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x313410: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x313410u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x313414: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x313414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x313418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31341c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x313420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x313420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x313424: 0xc05b0e2  jal         func_16C388
    ctx->pc = 0x313424u;
    SET_GPR_U32(ctx, 31, 0x31342Cu);
    ctx->pc = 0x313428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313424u;
    // 0x313428: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C388u, 0x313424u, 0x31342Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31342Cu;
label_31342c:
    // 0x31342c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31342cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313430: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313430u;
    {
        const bool branch_taken_0x313430 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x313434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313430u;
        // 0x313434: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313430) {
            ctx->pc = 0x313474u;
            goto label_313474;
        }
    }
    ctx->pc = 0x313438u;
    // 0x313438: 0xc0c1956  jal         func_306558
    ctx->pc = 0x313438u;
    SET_GPR_U32(ctx, 31, 0x313440u);
    ctx->pc = 0x306558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306558u, 0x313438u, 0x313440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313440u;
label_313440:
    // 0x313440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313444: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x313444u;
    {
        const bool branch_taken_0x313444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313444u;
        // 0x313448: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313444) {
            ctx->pc = 0x313464u;
            goto label_313464;
        }
    }
    ctx->pc = 0x31344Cu;
    // 0x31344c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x31344cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x313450: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x313450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x313454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313458: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x313458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31345c: 0xc0c4d24  jal         func_313490
    ctx->pc = 0x31345Cu;
    SET_GPR_U32(ctx, 31, 0x313464u);
    ctx->pc = 0x313460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31345Cu;
    // 0x313460: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x313490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313490u, 0x31345Cu, 0x313464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313464u;
label_313464:
    // 0x313464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x313464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313468: 0xc059590  jal         func_165640
    ctx->pc = 0x313468u;
    SET_GPR_U32(ctx, 31, 0x313470u);
    ctx->pc = 0x31346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313468u;
    // 0x31346c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165640u, 0x313468u, 0x313470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313470u;
label_313470:
    // 0x313470: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x313470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_313474:
    // 0x313474: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x313474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x313478: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x313478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31347c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31347cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313480: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x313480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x313484: 0x3e00008  jr          $ra
    ctx->pc = 0x313484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313484u;
        // 0x313488: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31348Cu;
    // 0x31348c: 0x0  nop
    ctx->pc = 0x31348cu;
    // NOP
    ctx->pc = 0x313490u;
}
